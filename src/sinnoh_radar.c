// Proyecto Sinnoh: Radar Pokémon como en Platino.
// Al usarlo, 4 matas de hierba alta cercanas se agitan. Si entras en una, aparece un Pokémon salvaje.
// Si lo derrotas o lo capturas, vuelven a agitarse otras matas y la cadena sigue mientras sea la misma especie.
// La cadena aumenta la probabilidad de shiny (1/200 a partir de 40). Pisar hierba que no se agita,
// huir, perder o cambiar de mapa rompe la cadena. La batería se recarga andando 50 pasos.
#include "global.h"
#include "battle.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "pokemon.h"
#include "random.h"
#include "sound.h"
#include "wild_encounter.h"
#include "sinnoh_radar.h"
#include "constants/battle.h"
#include "constants/field_effects.h"
#include "constants/songs.h"

#define RADAR_PATCHES       4
#define RADAR_CHARGE_STEPS  50
#define RADAR_MIN_DIST      2
#define RADAR_MAX_DIST      4

struct SinnohRadar
{
    u8 active:1;
    u8 needShake:1;
    u8 pendingBattle:1;
    u8 usedOnce:1;
    u8 numPatches;
    u8 charge;
    u8 mapGroup;
    u8 mapNum;
    u16 species;
    u16 chain;
    s16 x[RADAR_PATCHES];
    s16 y[RADAR_PATCHES];
    u8 shiny[RADAR_PATCHES];
};

EWRAM_DATA static struct SinnohRadar sRadar = {0};

static void Radar_Reset(void)
{
    u8 charge = sRadar.charge, used = sRadar.usedOnce;
    memset(&sRadar, 0, sizeof(sRadar));
    sRadar.charge = charge;
    sRadar.usedOnce = used;
}

static bool32 Radar_SameMap(void)
{
    return sRadar.mapGroup == gSaveBlock1Ptr->location.mapGroup && sRadar.mapNum == gSaveBlock1Ptr->location.mapNum;
}

bool32 SinnohRadar_IsOnPatch(void)
{
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    u32 i;
    if (!sRadar.active || !Radar_SameMap())
        return FALSE;
    for (i = 0; i < sRadar.numPatches; i++)
        if (sRadar.x[i] == player->currentCoords.x && sRadar.y[i] == player->currentCoords.y)
            return TRUE;
    return FALSE;
}

u16 SinnohRadar_GetChain(void)
{
    return sRadar.active ? sRadar.chain : 0;
}

void SinnohRadar_OnStep(void)
{
    if (sRadar.charge < RADAR_CHARGE_STEPS)
        sRadar.charge++;
}

bool32 SinnohRadar_IsCharged(void)
{
    return !sRadar.usedOnce || sRadar.charge >= RADAR_CHARGE_STEPS;
}

static bool32 IsRadarGrass(s16 x, s16 y)
{
    u32 i;
    u32 behavior = MapGridGetMetatileBehaviorAt(x, y);
    if (!MetatileBehavior_IsTallGrass(behavior) && !MetatileBehavior_IsLongGrass(behavior))
        return FALSE;
    for (i = 0; i < OBJECT_EVENTS_COUNT; i++)
    {
        if (gObjectEvents[i].active && gObjectEvents[i].currentCoords.x == x && gObjectEvents[i].currentCoords.y == y)
            return FALSE;
    }
    return TRUE;
}

static u32 ShinyDenominator(void)
{
    if (sRadar.chain >= 40)
        return 200;
    return 8192 - sRadar.chain * 200;
}

// Elige hasta 4 matas, una por cuadrante, a 2-4 casillas del jugador.
static bool32 Radar_PickPatches(void)
{
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 px = player->currentCoords.x, py = player->currentCoords.y;
    s16 candX[RADAR_PATCHES][40], candY[RADAR_PATCHES][40];
    u8 count[RADAR_PATCHES] = {0};
    s16 dx, dy;
    u32 q;

    for (dy = -RADAR_MAX_DIST; dy <= RADAR_MAX_DIST; dy++)
    {
        for (dx = -RADAR_MAX_DIST; dx <= RADAR_MAX_DIST; dx++)
        {
            s16 d = max(abs(dx), abs(dy));
            if (d < RADAR_MIN_DIST)
                continue;
            if (!IsRadarGrass(px + dx, py + dy))
                continue;
            q = (dx >= 0 ? 1 : 0) + (dy >= 0 ? 2 : 0);
            if (count[q] < 40)
            {
                candX[q][count[q]] = px + dx;
                candY[q][count[q]] = py + dy;
                count[q]++;
            }
        }
    }

    sRadar.numPatches = 0;
    for (q = 0; q < RADAR_PATCHES; q++)
    {
        if (count[q] == 0)
            continue;
        {
            u32 r = Random() % count[q];
            u32 n = sRadar.numPatches++;
            sRadar.x[n] = candX[q][r];
            sRadar.y[n] = candY[q][r];
            sRadar.shiny[n] = (Random() % ShinyDenominator()) == 0;
        }
    }
    return sRadar.numPatches > 0;
}

static void Radar_ShakePatches(void)
{
    u32 i;
    PlaySE(SE_M_LEER);
    for (i = 0; i < sRadar.numPatches; i++)
    {
        gFieldEffectArguments[0] = sRadar.x[i];
        gFieldEffectArguments[1] = sRadar.y[i];
        gFieldEffectArguments[2] = 0xFF;
        gFieldEffectArguments[3] = 2;
        FieldEffectStart(FLDEFF_SHAKING_GRASS);
        if (sRadar.shiny[i])
        {
            gFieldEffectArguments[0] = sRadar.x[i];
            gFieldEffectArguments[1] = sRadar.y[i];
            gFieldEffectArguments[2] = 0xFF;
            gFieldEffectArguments[3] = 2;
            FieldEffectStart(FLDEFF_BERRY_TREE_GROWTH_SPARKLE);
        }
    }
}

// Devuelve FALSE si no hay hierba alta donde usarlo.
bool32 SinnohRadar_Activate(void)
{
    if (GetCurrentMapWildMonHeaderId() == HEADER_NONE)
        return FALSE;
    if (!sRadar.active || !Radar_SameMap())
    {
        Radar_Reset();
        sRadar.mapGroup = gSaveBlock1Ptr->location.mapGroup;
        sRadar.mapNum = gSaveBlock1Ptr->location.mapNum;
    }
    if (!Radar_PickPatches())
        return FALSE;
    sRadar.active = TRUE;
    sRadar.usedOnce = TRUE;
    sRadar.charge = 0;
    Radar_ShakePatches();
    return TRUE;
}

// Llamado cada frame en que el jugador puede moverse.
void SinnohRadar_FieldUpdate(void)
{
    if (!sRadar.active)
        return;
    if (!Radar_SameMap())
    {
        Radar_Reset();
        return;
    }
    if (sRadar.needShake)
    {
        sRadar.needShake = FALSE;
        if (Radar_PickPatches())
            Radar_ShakePatches();
        else
            Radar_Reset();
    }
}

static u8 LevelForSpecies(const struct WildPokemonInfo *info, u16 species)
{
    u32 i, idx = ChooseWildMonIndex_Land();
    for (i = 0; i < NUM_LAND_MONS_ENCOUNTER_SLOTS; i++)
    {
        if (info->wildPokemon[i].species == species)
        {
            idx = i;
            break;
        }
    }
    return ChooseWildMonLevel(info->wildPokemon, idx, WILD_AREA_LAND);
}

// Llamado al pisar hierba. TRUE si el Radar ha creado el Pokémon salvaje.
bool32 SinnohRadar_TryEncounter(u16 headerId, const struct WildPokemonInfo *landInfo)
{
    struct ObjectEvent *player = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = player->currentCoords.x, y = player->currentCoords.y;
    u32 i;
    u16 species;

    if (!sRadar.active || landInfo == NULL)
        return FALSE;
    if (!Radar_SameMap())
    {
        Radar_Reset();
        return FALSE;
    }
    for (i = 0; i < sRadar.numPatches; i++)
    {
        if (sRadar.x[i] == x && sRadar.y[i] == y)
            break;
    }
    if (i == sRadar.numPatches)
    {
        // Pisar hierba que no se agita rompe la cadena.
        Radar_Reset();
        return FALSE;
    }

    if (sRadar.chain > 0 && sRadar.species != SPECIES_NONE)
        species = sRadar.species;
    else
        species = landInfo->wildPokemon[ChooseWildMonIndex_Land()].species;

    CreateWildMon(species, LevelForSpecies(landInfo, species));
    if (sRadar.shiny[i])
    {
        bool8 shiny = TRUE;
        SetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_IS_SHINY, &shiny);
    }
    sRadar.numPatches = 0;
    sRadar.pendingBattle = TRUE;
    return TRUE;
}

void SinnohRadar_OnWildBattleEnd(u32 outcome)
{
    u16 species;
    if (!sRadar.pendingBattle)
        return;
    sRadar.pendingBattle = FALSE;
    species = GetMonData(&gParties[B_TRAINER_OPPONENT_A][0], MON_DATA_SPECIES);
    if ((outcome == B_OUTCOME_WON || outcome == B_OUTCOME_CAUGHT)
     && (sRadar.chain == 0 || species == sRadar.species))
    {
        sRadar.species = species;
        if (sRadar.chain < 999)
            sRadar.chain++;
        sRadar.needShake = TRUE;
    }
    else
    {
        Radar_Reset();
    }
}
