// Proyecto Sinnoh: película de inicio (sustituye a la de Esmeralda).
// Hecha con los recursos de la hoja del usuario y la música del opening de Platino
// (SEQ_TITLE00). Las marcas de tiempo siguen las de pokeplatinum
// (src/game_opening/ov77_021D25B0.c, a 30 fps) multiplicadas por 2.
#include "global.h"
#include "bg.h"
#include "gpu_regs.h"
#include "intro.h"
#include "main.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sinnoh_opening.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "title_screen.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#include "data/sinnoh_opening_gfx.h"

// Momentos clave (frames a 60 fps)
#define T_GAMEFREAK        0
#define T_SKY            360
#define T_RUN_TOWN       640
#define T_RUN_CITY      1280
#define T_RUN_FLASH     1570
#define T_STARTERS_GRASS 1950
#define T_STARTERS_FIRE  2350
#define T_STARTERS_WATER 2750
#define T_PROFESSOR     3200
#define T_CYRUS         3720
#define T_THROW         4260
#define T_HANDS         4500
#define T_BALLS         4600
#define T_LOGO          4700
#define T_END           4860

#define BG_FRONT  0
#define BG_FOREST 1
#define BG_MIDDLE 2
#define BG_BACK   3

// Paletas de fondo por capa
#define PAL_BACK   0
#define PAL_MIDDLE 2
#define PAL_FOREST 4
#define PAL_FRONT  5

enum
{
    TAG_RUN_LUCAS0 = 0x5400,
    TAG_RUN_LUCAS1,
    TAG_RUN_DAWN0,
    TAG_RUN_DAWN1,
    TAG_SPR_A,
    TAG_SPR_B,
    TAG_SPR_C,
    TAG_SPR_D,
    TAG_BALL,
};

struct Image
{
    const u32 *tiles;
    u16 numTiles;
    const u16 *map;
    const u16 *pal;
    u8 numPals;
};

#define IMAGE(n) {sOp_##n##_Tiles, sOp_##n##_NUM_TILES, sOp_##n##_Map, sOp_##n##_Pal, sOp_##n##_NUM_PALS}
static const struct Image sImg_Clouds = IMAGE(Clouds);
static const struct Image sImg_Sky = IMAGE(Sky);
static const struct Image sImg_CloudBorder = IMAGE(CloudBorder);
static const struct Image sImg_WhiteRed = IMAGE(WhiteRed);
static const struct Image sImg_Dark = IMAGE(Dark);
static const struct Image sImg_Town = IMAGE(Town);
static const struct Image sImg_City = IMAGE(City);
static const struct Image sImg_Forest1 = IMAGE(Forest1);
static const struct Image sImg_Forest2 = IMAGE(Forest2);
static const struct Image sImg_Bars[4] = {IMAGE(Bar0), IMAGE(Bar1), IMAGE(Bar2), IMAGE(Bar3)};
static const struct Image sImg_Cyrus = IMAGE(Cyrus);
static const struct Image sImg_Logo = IMAGE(Logo);
static const struct Image sImg_GameFreak = IMAGE(GameFreak);
#undef IMAGE

struct BigSprite
{
    const u32 *gfx;
    u16 size;
    const struct SubspriteTable *table;
    const u16 *pal;
};

#define BIG(n, f) {sOp_##n##f##_Gfx, sOp_##n##f##_SIZE, sOp_##n##f##_SubspriteTable, sOp_##n##_Pal}
static const struct BigSprite sSpr_Torterra = BIG(Torterra, 0);
static const struct BigSprite sSpr_Infernape = BIG(Infernape, 0);
static const struct BigSprite sSpr_Grotle = BIG(Grotle, 0);
static const struct BigSprite sSpr_Chimchar = BIG(Chimchar, 0);
static const struct BigSprite sSpr_Prinplup = BIG(Prinplup, 0);
static const struct BigSprite sSpr_Piplup = BIG(Piplup, 0);
static const struct BigSprite sSpr_Rowan = BIG(Rowan, 0);
static const struct BigSprite sSpr_Looker = BIG(Looker, 0);
static const struct BigSprite sSpr_LucasBody = BIG(LucasBody, 0);
static const struct BigSprite sSpr_DawnBody = BIG(DawnBody, 0);
static const struct BigSprite sSpr_LucasHandBall = BIG(LucasHandBall, 0);
static const struct BigSprite sSpr_LucasHandOpen = BIG(LucasHandOpen, 0);
static const struct BigSprite sSpr_DawnHandBall = BIG(DawnHandBall, 0);
static const struct BigSprite sSpr_DawnHandOpen = BIG(DawnHandOpen, 0);
static const struct BigSprite sSpr_RunLucas[2] = {BIG(RunLucas, 0), BIG(RunLucas, 1)};
static const struct BigSprite sSpr_RunDawn[2] = {BIG(RunDawn, 0), BIG(RunDawn, 1)};
#undef BIG

static const struct OamData sOam_Big =
{
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1,
};

static const struct OamData sOam_Ball =
{
    .affineMode = ST_OAM_AFFINE_DOUBLE,
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 0,
};

struct Opening
{
    u16 frame;
    u16 scrollBack;
    u16 scrollMiddle;
    u16 scrollForest;
    u8 runSprites[2];
    u8 sprites[4];
    u8 balls[2];
    u8 scene;
    u8 blend;
};

static EWRAM_DATA struct Opening sOp = {0};

static void VBlankCB_SinnohOpening(void);
static void Task_SinnohOpening(u8 taskId);

static const struct BgTemplate sBgTemplates[] =
{
    {.bg = BG_FRONT,  .charBaseIndex = 3, .mapBaseIndex = 31, .priority = 0},
    {.bg = BG_FOREST, .charBaseIndex = 2, .mapBaseIndex = 30, .priority = 1},
    {.bg = BG_MIDDLE, .charBaseIndex = 1, .mapBaseIndex = 29, .priority = 2},
    {.bg = BG_BACK,   .charBaseIndex = 0, .mapBaseIndex = 28, .priority = 3},
};

// ---------------------------------------------------------------------------
// Utilidades
// ---------------------------------------------------------------------------

static const u8 sMapBase[4] = {31, 30, 29, 28};
static const u8 sCharBase[4] = {3, 2, 1, 0};

static void LoadImage(u8 bg, const struct Image *img, u8 palSlot)
{
    u32 i;
    u16 *dst = (u16 *)BG_SCREEN_ADDR(sMapBase[bg]);
    CpuCopy32(img->tiles, (void *)BG_CHAR_ADDR(sCharBase[bg]), img->numTiles * TILE_SIZE_4BPP);
    for (i = 0; i < 32 * 32; i++)
        dst[i] = (img->map[i] & 0x0FFF) | (((img->map[i] >> 12) + palSlot) << 12);
    LoadPalette(img->pal, BG_PLTT_ID(palSlot), img->numPals * PLTT_SIZE_4BPP);
}

static void ClearBg(u8 bg)
{
    CpuFill16(0, (void *)BG_SCREEN_ADDR(sMapBase[bg]), BG_SCREEN_SIZE);
}

static void SetBgPos(u8 bg, s16 x, s16 y)
{
    SetGpuReg(REG_OFFSET_BG0HOFS + bg * 4, x & 0x1FF);
    SetGpuReg(REG_OFFSET_BG0VOFS + bg * 4, y & 0x1FF);
}

static void ResetScene(void)
{
    u32 i;
    ResetSpriteData();
    FreeAllSpritePalettes();
    for (i = 0; i < 4; i++)
    {
        ClearBg(i);
        SetBgPos(i, 0, 0);
    }
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    sOp.scrollBack = sOp.scrollMiddle = sOp.scrollForest = 0;
}

static u8 CreateBig(const struct BigSprite *spr, u16 tag, s16 x, s16 y)
{
    struct SpriteSheet sheet = {spr->gfx, spr->size, tag};
    struct SpritePalette pal = {spr->pal, tag};
    struct SpriteTemplate template = {tag, tag, &sOam_Big, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy};
    u8 spriteId;

    LoadSpriteSheet(&sheet);
    LoadSpritePalette(&pal);
    spriteId = CreateSprite(&template, x, y, 0);
    SetSubspriteTables(&gSprites[spriteId], spr->table);
    gSprites[spriteId].subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
    return spriteId;
}

static void SwapBig(u8 spriteId, const struct BigSprite *spr, u16 tag)
{
    gSprites[spriteId].oam.tileNum = GetSpriteTileStartByTag(tag);
    SetSubspriteTables(&gSprites[spriteId], spr->table);
}

static void Flash(void)
{
    BlendPalettes(PALETTES_ALL, 16, RGB_WHITE);
    BeginNormalPaletteFade(PALETTES_ALL, 1, 16, 0, RGB_WHITEALPHA);
}

static void MoveToward(u8 spriteId, s16 x, s16 y, u8 speed)
{
    struct Sprite *s = &gSprites[spriteId];
    if (s->x < x) s->x += min(speed, x - s->x);
    else if (s->x > x) s->x -= min(speed, s->x - x);
    if (s->y < y) s->y += min(speed, y - s->y);
    else if (s->y > y) s->y -= min(speed, s->y - y);
}

// ---------------------------------------------------------------------------
// Escenas
// ---------------------------------------------------------------------------

static void Scene_GameFreak(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_FRONT, &sImg_GameFreak, PAL_FRONT);
        SetBgPos(BG_FRONT, -(DISPLAY_WIDTH - sOp_GameFreak_W * 8) / 2, -(DISPLAY_HEIGHT - sOp_GameFreak_H * 8) / 2);
        gPlttBufferUnfaded[0] = gPlttBufferFaded[0] = RGB_BLACK;
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
    }
    else if (t == 30)
        BeginNormalPaletteFade(PALETTES_ALL, 2, 16, 0, RGB_BLACK);
    else if (t == 280)
        BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_BLACK);
}

static void Scene_Sky(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, &sImg_Clouds, PAL_BACK);
        BlendPalettes(PALETTES_ALL, 16, RGB_WHITE);
        BeginNormalPaletteFade(PALETTES_ALL, 3, 16, 0, RGB_WHITEALPHA);
    }
    // Bajada lenta por el cielo
    SetBgPos(BG_BACK, t / 4, min(t / 6, 32));
}

static void RunnerCallback(struct Sprite *sprite)
{
    // sprite->data[0]: 0 Lucas, 1 Maya; data[1]: contador
    sprite->data[1]++;
    if ((sprite->data[1] % 8) == 0)
    {
        u8 frame = (sprite->data[1] / 8) & 1;
        if (sprite->data[0] == 0)
            SwapBig(sprite - gSprites, &sSpr_RunLucas[frame], TAG_RUN_LUCAS0 + frame);
        else
            SwapBig(sprite - gSprites, &sSpr_RunDawn[frame], TAG_RUN_DAWN0 + frame);
    }
    sprite->y2 = (sprite->data[1] & 8) ? -2 : 0;
}

static void CreateRunners(void)
{
    struct SpriteSheet sheet;
    u8 id;

    sheet = (struct SpriteSheet){sSpr_RunLucas[1].gfx, sSpr_RunLucas[1].size, TAG_RUN_LUCAS1};
    LoadSpriteSheet(&sheet);
    sheet = (struct SpriteSheet){sSpr_RunDawn[1].gfx, sSpr_RunDawn[1].size, TAG_RUN_DAWN1};
    LoadSpriteSheet(&sheet);
    id = CreateBig(&sSpr_RunLucas[0], TAG_RUN_LUCAS0, 84, 92);
    gSprites[id].data[0] = 0;
    gSprites[id].callback = RunnerCallback;
    sOp.runSprites[0] = id;
    id = CreateBig(&sSpr_RunDawn[0], TAG_RUN_DAWN0, 160, 96);
    gSprites[id].data[0] = 1;
    gSprites[id].data[1] = 4;
    gSprites[id].callback = RunnerCallback;
    sOp.runSprites[1] = id;
}

static void Scene_Run(u16 t, bool8 city)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, &sImg_Sky, PAL_BACK);
        LoadImage(BG_MIDDLE, city ? &sImg_City : &sImg_Town, PAL_MIDDLE);
        LoadImage(BG_FOREST, city ? &sImg_Forest2 : &sImg_Forest1, PAL_FOREST);
        CreateRunners();
        Flash();
    }
    sOp.scrollMiddle += 1;
    sOp.scrollForest += 3;
    SetBgPos(BG_BACK, t / 8, 0);
    SetBgPos(BG_MIDDLE, sOp.scrollMiddle, 0);
    SetBgPos(BG_FOREST, sOp.scrollForest, 0);
    // los dos entran desde abajo al principio
    if (t < 40)
    {
        gSprites[sOp.runSprites[0]].y = 92 + (40 - t);
        gSprites[sOp.runSprites[1]].y = 96 + (40 - t);
    }
}

struct StarterScene
{
    const struct Image *bar;
    const struct BigSprite *evolved;
    const struct BigSprite *base;
};

static const struct StarterScene sStarterScenes[] =
{
    {&sImg_Bars[2], &sSpr_Torterra, &sSpr_Grotle},
    {&sImg_Bars[3], &sSpr_Infernape, &sSpr_Chimchar},
    {&sImg_Bars[1], &sSpr_Prinplup, &sSpr_Piplup},
};

#define BAR_TOP_Y    4
#define BAR_BOTTOM_Y 84

static void Scene_Starters(u16 t, u8 which)
{
    const struct StarterScene *sc = &sStarterScenes[which];
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, sc->bar, PAL_BACK);
        LoadImage(BG_MIDDLE, sc->bar, PAL_MIDDLE);
        SetBgPos(BG_BACK, 0, -BAR_TOP_Y);
        SetBgPos(BG_MIDDLE, 0, -BAR_BOTTOM_Y);
        // el resto de la pantalla en negro
        gPlttBufferUnfaded[0] = gPlttBufferFaded[0] = RGB_BLACK;
        sOp.sprites[0] = CreateBig(sc->evolved, TAG_SPR_A, DISPLAY_WIDTH + 64, BAR_TOP_Y + 36);
        sOp.sprites[1] = CreateBig(sc->base, TAG_SPR_B, -64, BAR_BOTTOM_Y + 36);
        Flash();
    }
    // barras en sentidos contrarios
    sOp.scrollBack += 2;
    sOp.scrollMiddle -= 2;
    SetBgPos(BG_BACK, sOp.scrollBack, -BAR_TOP_Y);
    SetBgPos(BG_MIDDLE, sOp.scrollMiddle, -BAR_BOTTOM_Y);
    // el evolucionado entra despacio por la derecha y se queda; el pequeño cruza corriendo
    if (t < 120)
        MoveToward(sOp.sprites[0], 150, BAR_TOP_Y + 36, 3);
    else if (t > 300)
        gSprites[sOp.sprites[0]].x -= 3;
    if (t > 60)
    {
        gSprites[sOp.sprites[1]].x += 2;
        gSprites[sOp.sprites[1]].y2 = ((t / 6) & 1) ? -2 : 0;
    }
}

static void Scene_Professor(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, &sImg_CloudBorder, PAL_BACK);
        sOp.sprites[0] = CreateBig(&sSpr_Rowan, TAG_SPR_A, -40, 86);
        sOp.sprites[1] = CreateBig(&sSpr_Looker, TAG_SPR_B, DISPLAY_WIDTH + 40, 78);
        BlendPalettes(PALETTES_ALL, 16, RGB_WHITE);
        BeginNormalPaletteFade(PALETTES_ALL, 2, 16, 0, RGB_WHITEALPHA);
    }
    // Serbal camina hacia el centro; Handsome aparece después por la derecha
    if (t > 20)
    {
        MoveToward(sOp.sprites[0], 80, 86, 1);
        gSprites[sOp.sprites[0]].y2 = ((t / 10) & 1) && gSprites[sOp.sprites[0]].x != 80 ? -1 : 0;
    }
    if (t > 180)
        MoveToward(sOp.sprites[1], 170, 78, 2);
    SetBgPos(BG_BACK, t / 6, 0);
    if (t == 470)
        BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_BLACK);
}

static void Scene_Cyrus(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, &sImg_Dark, PAL_BACK);
        LoadImage(BG_MIDDLE, &sImg_Cyrus, PAL_MIDDLE);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 1, 16, 0, RGB_BLACK);
        // Cyrus aparece poco a poco sobre el fondo oscuro
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG2 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3);
        sOp.blend = 0;
    }
    if (t < 160 && (t % 10) == 0 && sOp.blend < 16)
        sOp.blend++;
    if (t >= 160)
        sOp.blend = 16;
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(sOp.blend, 16 - sOp.blend));
    SetBgPos(BG_MIDDLE, -(DISPLAY_WIDTH - sOp_Cyrus_W * 8) / 2, -16 + min(t / 8, 16));
    if (t == 470)
        BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_BLACK);
}

static void Scene_Throw(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, &sImg_WhiteRed, PAL_BACK);
        sOp.sprites[0] = CreateBig(&sSpr_LucasBody, TAG_SPR_A, DISPLAY_WIDTH + 70, 48);
        sOp.sprites[1] = CreateBig(&sSpr_DawnBody, TAG_SPR_B, -70, 112);
        Flash();
    }
    MoveToward(sOp.sprites[0], 150, 48, 4);
    MoveToward(sOp.sprites[1], 90, 112, 4);
}

static void BallCallback(struct Sprite *sprite)
{
    // data[0]: frame; data[1]: vx (8.8); data[2]: vy; data[3]: x8; data[4]: y8; data[5]: escala
    sprite->data[0]++;
    sprite->oam.tileNum = GetSpriteTileStartByTag(TAG_BALL) + ((sprite->data[0] / 3) & 3) * 16;
    sprite->data[3] += sprite->data[1];
    sprite->data[4] += sprite->data[2];
    sprite->x = sprite->data[3] >> 4;
    sprite->y = sprite->data[4] >> 4;
    if (sprite->data[5] > 128)
        sprite->data[5] -= 2;
    SetOamMatrix(sprite->oam.matrixNum, sprite->data[5], 0, 0, sprite->data[5]);
}

static void CreateBall(u8 slot, s16 x, s16 y, s16 tx, s16 ty)
{
    static const struct SpriteTemplate sTemplate = {TAG_BALL, TAG_BALL, &sOam_Ball, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, BallCallback};
    u8 id = CreateSprite(&sTemplate, x, y, 0);
    struct Sprite *s = &gSprites[id];
    s->data[3] = x << 4;
    s->data[4] = y << 4;
    s->data[1] = ((tx - x) << 4) / 60;
    s->data[2] = ((ty - y) << 4) / 60;
    s->data[5] = 256;
    s->oam.matrixNum = AllocOamMatrix();
    sOp.balls[slot] = id;
}

static void Scene_Hands(u16 t)
{
    if (t == 0)
    {
        struct SpriteSheet sheet;
        struct SpritePalette pal = {sOp_Ball_Pal, TAG_BALL};
        ResetScene();
        LoadImage(BG_BACK, &sImg_WhiteRed, PAL_BACK);
        sOp.sprites[0] = CreateBig(&sSpr_DawnHandBall, TAG_SPR_A, -40, 96);
        sOp.sprites[1] = CreateBig(&sSpr_LucasHandBall, TAG_SPR_B, DISPLAY_WIDTH + 40, 96);
        sheet = (struct SpriteSheet){sSpr_DawnHandOpen.gfx, sSpr_DawnHandOpen.size, TAG_SPR_C};
        LoadSpriteSheet(&sheet);
        pal = (struct SpritePalette){sSpr_DawnHandOpen.pal, TAG_SPR_C};
        LoadSpritePalette(&pal);
        sheet = (struct SpriteSheet){sSpr_LucasHandOpen.gfx, sSpr_LucasHandOpen.size, TAG_SPR_D};
        LoadSpriteSheet(&sheet);
        pal = (struct SpritePalette){sSpr_LucasHandOpen.pal, TAG_SPR_D};
        LoadSpritePalette(&pal);
        sheet = (struct SpriteSheet){sOp_Ball_Gfx, 4 * 16 * TILE_SIZE_4BPP, TAG_BALL};
        LoadSpriteSheet(&sheet);
        pal = (struct SpritePalette){sOp_Ball_Pal, TAG_BALL};
        LoadSpritePalette(&pal);
        Flash();
    }
    if (t < T_BALLS - T_HANDS)
    {
        MoveToward(sOp.sprites[0], 64, 96, 4);
        MoveToward(sOp.sprites[1], 176, 96, 4);
    }
    else if (t == T_BALLS - T_HANDS)
    {
        // ¡lanzan! las manos se abren y salen las Poké Balls
        SwapBig(sOp.sprites[0], &sSpr_DawnHandOpen, TAG_SPR_C);
        gSprites[sOp.sprites[0]].oam.paletteNum = IndexOfSpritePaletteTag(TAG_SPR_C);
        SwapBig(sOp.sprites[1], &sSpr_LucasHandOpen, TAG_SPR_D);
        gSprites[sOp.sprites[1]].oam.paletteNum = IndexOfSpritePaletteTag(TAG_SPR_D);
        CreateBall(0, 72, 84, 104, 40);
        CreateBall(1, 168, 84, 136, 40);
        PlaySE(SE_BALL_THROW);
    }
    else
    {
        gSprites[sOp.sprites[0]].x -= 2;
        gSprites[sOp.sprites[1]].x += 2;
    }
}

static void Scene_Logo(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        gPlttBufferUnfaded[0] = gPlttBufferFaded[0] = RGB_WHITE;
        LoadImage(BG_FRONT, &sImg_Logo, PAL_FRONT);
        SetBgPos(BG_FRONT, -(DISPLAY_WIDTH - sOp_Logo_W * 8) / 2, -(DISPLAY_HEIGHT - sOp_Logo_H * 8) / 2);
        BlendPalettes(PALETTES_ALL, 16, RGB_WHITE);
        BeginNormalPaletteFade(PALETTES_ALL, 3, 16, 0, RGB_WHITEALPHA);
    }
}

// ---------------------------------------------------------------------------
// Bucle
// ---------------------------------------------------------------------------

void StartSinnohOpening(u8 taskId)
{
    SetVBlankCallback(NULL);
    SetHBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    ResetPaletteFade();
    ScanlineEffect_Stop();
    ResetSpriteData();
    FreeAllSpritePalettes();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    memset(&sOp, 0, sizeof(sOp));
    BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
    ShowBg(3);
    SetVBlankCallback(VBlankCB_SinnohOpening);
    PlayBGM(MUS_DPP_OPENING);
    gTasks[taskId].func = Task_SinnohOpening;
}

static void VBlankCB_SinnohOpening(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_SinnohOpening(u8 taskId)
{
    u16 f = sOp.frame;

    if (f < T_SKY)
        Scene_GameFreak(f - T_GAMEFREAK);
    else if (f < T_RUN_TOWN)
        Scene_Sky(f - T_SKY);
    else if (f < T_RUN_CITY)
        Scene_Run(f - T_RUN_TOWN, FALSE);
    else if (f < T_STARTERS_GRASS)
    {
        Scene_Run(f - T_RUN_CITY, TRUE);
        if (f == T_RUN_FLASH)
            Flash();
    }
    else if (f < T_STARTERS_FIRE)
        Scene_Starters(f - T_STARTERS_GRASS, 0);
    else if (f < T_STARTERS_WATER)
        Scene_Starters(f - T_STARTERS_FIRE, 1);
    else if (f < T_PROFESSOR)
    {
        Scene_Starters(f - T_STARTERS_WATER, 2);
        if (f == T_PROFESSOR - 48)
            BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_WHITEALPHA);
    }
    else if (f < T_CYRUS)
        Scene_Professor(f - T_PROFESSOR);
    else if (f < T_THROW)
        Scene_Cyrus(f - T_CYRUS);
    else if (f < T_HANDS)
        Scene_Throw(f - T_THROW);
    else if (f < T_LOGO)
    {
        Scene_Hands(f - T_HANDS);
        if (f == T_LOGO - 30)
            BeginNormalPaletteFade(PALETTES_ALL, 1, 0, 16, RGB_WHITEALPHA);
    }
    else if (f < T_END)
        Scene_Logo(f - T_LOGO);
    else if (f == T_END)
        BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_BLACK);
    else if (!gPaletteFade.active)
    {
        DestroyTask(taskId);
        SetMainCallback2(CB2_InitTitleScreen);
        return;
    }
    sOp.frame++;
}
