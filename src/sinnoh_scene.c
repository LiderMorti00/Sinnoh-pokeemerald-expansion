// Proyecto Sinnoh: movimientos de escena calculados al vuelo.
// Platino tiene una copia de cada escena por cada casilla donde puede estar el jugador.
// Aquí el camino se calcula en el momento (búsqueda en anchura con la colisión real del mapa)
// y se escribe en uno de cuatro búferes que el script aplica con applymovement:
//
//     setvar VAR_0x8004, LOCALID_RIVAL      @ quién se mueve
//     setvar VAR_0x8005, 0                  @ búfer 0-3 -> gSinnohMoveBuf0..3
//     setvar VAR_0x8006, SN_SPEED_FAST      @ velocidad
//     setvar VAR_0x8007, SN_MOVE_EMOTE      @ opciones
//     special SinnohPathToPlayer            @ o SinnohPathTo con VAR_0x8008/0x8009 = x, y
//     applymovement LOCALID_RIVAL, gSinnohMoveBuf0
//     waitmovement 0
#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "field_player_avatar.h"
#include "sinnoh_scene.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"

#define BUF_LEN    64
#define GRID       48
#define GRID_HALF  (GRID / 2)

EWRAM_DATA u8 gSinnohMoveBuf0[BUF_LEN] = {0};
EWRAM_DATA u8 gSinnohMoveBuf1[BUF_LEN] = {0};
EWRAM_DATA u8 gSinnohMoveBuf2[BUF_LEN] = {0};
EWRAM_DATA u8 gSinnohMoveBuf3[BUF_LEN] = {0};
EWRAM_DATA static u8 sPrev[GRID * GRID] = {0};
EWRAM_DATA static u16 sQueue[GRID * GRID] = {0};

static u8 *const sBuffers[] = {gSinnohMoveBuf0, gSinnohMoveBuf1, gSinnohMoveBuf2, gSinnohMoveBuf3};

static const s8 sDirDelta[5][2] = {
    [DIR_NONE]  = { 0,  0},
    [DIR_SOUTH] = { 0,  1},
    [DIR_NORTH] = { 0, -1},
    [DIR_WEST]  = {-1,  0},
    [DIR_EAST]  = { 1,  0},
};

static u8 WalkAction(u32 speed, u32 dir)
{
    switch (speed)
    {
    case SN_SPEED_SLOW:   return MOVEMENT_ACTION_WALK_SLOW_DOWN + dir - 1;
    case SN_SPEED_FAST:   return MOVEMENT_ACTION_WALK_FAST_DOWN + dir - 1;
    case SN_SPEED_FASTER: return MOVEMENT_ACTION_WALK_FASTER_DOWN + dir - 1;
    case SN_SPEED_RUN:    return MOVEMENT_ACTION_PLAYER_RUN_DOWN + dir - 1;
    default:              return MOVEMENT_ACTION_WALK_NORMAL_DOWN + dir - 1;
    }
}

static struct ObjectEvent *GetMover(u16 localId)
{
    u8 id;
    if (localId == OBJ_EVENT_ID_PLAYER)
        return &gObjectEvents[gPlayerAvatar.objectEventId];
    if (TryGetObjectEventIdByLocalIdAndMap(localId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, &id))
        return NULL;
    return &gObjectEvents[id];
}

static bool32 IsBlocked(struct ObjectEvent *mover, s16 x, s16 y)
{
    u32 i;
    u8 elev;
    if (MapGridGetCollisionAt(x, y))
        return TRUE;
    elev = MapGridGetElevationAt(x, y);
    if (elev != 0 && elev != 15 && mover->currentElevation != 0 && mover->currentElevation != 15
     && elev != mover->currentElevation)
        return TRUE;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        struct ObjectEvent *o = &gObjectEvents[i];
        if (!o->active || o == mover || o->invisible)
            continue;
        if ((o->currentCoords.x == x && o->currentCoords.y == y)
         || (o->previousCoords.x == x && o->previousCoords.y == y && o->singleMovementActive))
            return TRUE;
    }
    return FALSE;
}

// Camino más corto desde mover hasta (tx, ty). Si adjacent, termina en una casilla junto al objetivo.
// Escribe el movimiento; devuelve el número de pasos o -1.
static s32 BuildPath(struct ObjectEvent *mover, s16 tx, s16 ty, bool32 adjacent, u32 speed, u32 flags, u32 finalDir, u8 *buf)
{
    s16 ox = mover->currentCoords.x - GRID_HALF, oy = mover->currentCoords.y - GRID_HALF;
    s32 head = 0, tail = 0, goal = -1, n = 0, len = 0, i;
    u8 steps[BUF_LEN];
    u32 start = GRID_HALF * GRID + GRID_HALF;

    if (tx - ox < 0 || tx - ox >= GRID || ty - oy < 0 || ty - oy >= GRID)
        return -1;
    memset(sPrev, 0, sizeof(sPrev));
    sPrev[start] = 0xFF;
    sQueue[tail++] = start;
    while (head < tail)
    {
        u32 cur = sQueue[head++];
        s16 cx = ox + cur % GRID, cy = oy + cur / GRID;
        u32 d;
        if ((!adjacent && cx == tx && cy == ty)
         || (adjacent && abs(cx - tx) + abs(cy - ty) == 1))
        {
            goal = cur;
            break;
        }
        for (d = DIR_SOUTH; d <= DIR_EAST; d++)
        {
            s16 nx = cx + sDirDelta[d][0], ny = cy + sDirDelta[d][1];
            u32 ni;
            if (nx - ox < 0 || nx - ox >= GRID || ny - oy < 0 || ny - oy >= GRID)
                continue;
            ni = (ny - oy) * GRID + (nx - ox);
            if (sPrev[ni])
                continue;
            if (!(nx == tx && ny == ty && !adjacent) && IsBlocked(mover, nx, ny))
                continue;
            sPrev[ni] = d;
            sQueue[tail++] = ni;
        }
    }
    if (goal < 0)
        return -1;
    // reconstruir hacia atrás
    for (i = goal; i != (s32)start && n < BUF_LEN - 8; )
    {
        u32 d = sPrev[i];
        steps[n++] = d;
        i -= sDirDelta[d][1] * GRID + sDirDelta[d][0];
    }
    if (flags & SN_MOVE_EMOTE)
        buf[len++] = MOVEMENT_ACTION_EMOTE_EXCLAMATION_MARK;
    for (i = n - 1; i >= 0; i--)
        buf[len++] = WalkAction(speed, steps[i]);
    if (adjacent)
    {
        s16 gx = ox + goal % GRID, gy = oy + goal / GRID;
        u32 face = (tx > gx) ? DIR_EAST : (tx < gx) ? DIR_WEST : (ty > gy) ? DIR_SOUTH : DIR_NORTH;
        buf[len++] = MOVEMENT_ACTION_FACE_DOWN + face - 1;
    }
    else if (finalDir >= DIR_SOUTH && finalDir <= DIR_EAST)
    {
        buf[len++] = MOVEMENT_ACTION_FACE_DOWN + finalDir - 1;
    }
    else if (finalDir == SN_FACE_PLAYER)
    {
        buf[len++] = MOVEMENT_ACTION_FACE_PLAYER;
    }
    buf[len] = MOVEMENT_ACTION_STEP_END;
    return n;
}

static void DoPath(bool32 toPlayer)
{
    struct ObjectEvent *mover = GetMover(gSpecialVar_0x8004);
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    u8 *buf = sBuffers[gSpecialVar_0x8005 & 3];
    s32 r = -1;

    buf[0] = MOVEMENT_ACTION_STEP_END;
    if (mover != NULL)
    {
        if (toPlayer)
            r = BuildPath(mover, player->currentCoords.x, player->currentCoords.y, TRUE, gSpecialVar_0x8006, gSpecialVar_0x8007, DIR_NONE, buf);
        else
            r = BuildPath(mover, gSpecialVar_0x8008 + MAP_OFFSET, gSpecialVar_0x8009 + MAP_OFFSET,
                          (gSpecialVar_0x8007 & SN_MOVE_ADJACENT) != 0, gSpecialVar_0x8006, gSpecialVar_0x8007, gSpecialVar_0x800A, buf);
    }
    if (r < 0 && (gSpecialVar_0x8007 & SN_MOVE_EMOTE))
    {
        buf[0] = MOVEMENT_ACTION_EMOTE_EXCLAMATION_MARK;
        buf[1] = MOVEMENT_ACTION_STEP_END;
    }
    gSpecialVar_Result = (r < 0) ? 0xFFFF : r;
}

void SinnohPathToPlayer(void)
{
    DoPath(TRUE);
}

void SinnohPathTo(void)
{
    DoPath(FALSE);
}

// El jugador mira hacia el objeto VAR_0x8004 (para responder cuando alguien le habla).
void SinnohPlayerFaceObject(void)
{
    struct ObjectEvent *o = GetMover(gSpecialVar_0x8004);
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    u8 *buf = sBuffers[gSpecialVar_0x8005 & 3];
    u32 face;
    buf[0] = MOVEMENT_ACTION_STEP_END;
    if (o == NULL)
        return;
    if (abs(o->currentCoords.x - player->currentCoords.x) > abs(o->currentCoords.y - player->currentCoords.y))
        face = (o->currentCoords.x > player->currentCoords.x) ? DIR_EAST : DIR_WEST;
    else
        face = (o->currentCoords.y > player->currentCoords.y) ? DIR_SOUTH : DIR_NORTH;
    buf[0] = MOVEMENT_ACTION_FACE_DOWN + face - 1;
    buf[1] = MOVEMENT_ACTION_STEP_END;
}

// Posición del objeto VAR_0x8004 en VAR_0x8008 / VAR_0x8009 (coordenadas del mapa).
void SinnohGetObjectPos(void)
{
    struct ObjectEvent *o = GetMover(gSpecialVar_0x8004);
    if (o == NULL)
        return;
    gSpecialVar_0x8008 = o->currentCoords.x - MAP_OFFSET;
    gSpecialVar_0x8009 = o->currentCoords.y - MAP_OFFSET;
}
