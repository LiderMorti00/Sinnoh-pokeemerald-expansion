// Proyecto Sinnoh: película de inicio (sustituye a la de Esmeralda).
// Sigue el opening de Pokémon Platino escena por escena (vídeo de referencia del
// usuario) con la música SEQ_TITLE00. Los recursos salen de la hoja del usuario,
// de pokeplatinum (res/prebuilt/demo/title/op_demo.narc) y, para el mapa en 3D,
// de los propios mapas del hack vistos desde arriba. El agujero del final con los
// ojos de Giratina está sacado de fotogramas del vídeo de referencia.
// La pantalla de título (sinnoh_title.c) hace de escena final con Giratina.
#include "global.h"
#include "bg.h"
#include "gpu_regs.h"
#include "intro.h"
#include "main.h"
#include "palette.h"
#include "random.h"
#include "scanline_effect.h"
#include "sinnoh_opening.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "title_screen.h"
#include "trig.h"
#include "util.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#include "data/sinnoh_opening_gfx.h"
#include "data/sinnoh_opening_gfx2.h"

// Momentos clave en frames (60 fps). t = segundo del vídeo de referencia - 6.
#define T_GAMEFREAK      0
#define T_BLACK1       690
#define T_LOGO         900
#define T_MAP_ROUTE   1620
#define T_MAP_FOREST  2010
#define T_MAP_CITY    2400
#define T_FLASH1      2810
#define T_RUN_LUCAS   2830
#define T_RUN_DAWN    3060
#define T_THROW       3290
#define T_BALLS       3360
#define T_GRAYFADE    3480
#define T_STARTERS    3560
#define T_FIRE        3640
#define T_FIRE_END    3780
#define T_WATER       3840
#define T_WATER_END   3960
#define T_DARK        4020
#define T_PURPLE      4090
#define T_GRAYFLASH   4170
#define T_CYRUS       4200
#define T_HOLE        4500
#define T_EYES        4620
#define T_MOUTH       4740
#define T_ORB         4980
#define T_VORTEX      5100
#define T_END_FLASH   5220
#define T_END         5300

#define BG_FRONT  0
#define BG_FOREST 1
#define BG_MIDDLE 2
#define BG_BACK   3

#define PAL_BACK   0
#define PAL_MIDDLE 2
#define PAL_FOREST 4
#define PAL_FRONT  5

enum
{
    TAG_RUN0 = 0x5400,
    TAG_RUN1,
    TAG_SPR_A,
    TAG_SPR_B,
    TAG_SPR_C,
    TAG_SPR_D,
    TAG_SPR_E,
    TAG_SPR_F,
    TAG_SPR_G,
    TAG_SPR_H,
    TAG_BALL,
    TAG_SPARKLE0,
    TAG_SPARKLE1,
    TAG_BUBBLE0,
    TAG_BUBBLE1,
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
static const struct Image sImg_Dark = IMAGE(Dark);
static const struct Image sImg_Town = IMAGE(Town);
static const struct Image sImg_City = IMAGE(City);
static const struct Image sImg_Forest1 = IMAGE(Forest1);
static const struct Image sImg_Forest2 = IMAGE(Forest2);
static const struct Image sImg_Bars[4] = {IMAGE(Bar0), IMAGE(Bar1), IMAGE(Bar2), IMAGE(Bar3)};
static const struct Image sImg_Cyrus = IMAGE(Cyrus);
static const struct Image sImg_Logo = IMAGE(Logo);
static const struct Image sImg_GfText = IMAGE(GfText);
static const struct Image sImg_Rays = IMAGE(Rays);
static const struct Image sImg_MapRoute = IMAGE(MapRoute);
static const struct Image sImg_MapForest = IMAGE(MapForest);
static const struct Image sImg_MapCity = IMAGE(MapCity);
static const struct Image sImg_Hole = IMAGE(Hole);
static const struct Image sImg_HoleOrb = IMAGE(HoleOrb);
static const struct Image sImg_Vortex = IMAGE(Vortex);
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
static const struct BigSprite sSpr_Emblem = BIG(Emblem, 0);
static const struct BigSprite sSpr_Sparkle[2] = {BIG(Sparkle, 0), BIG(Sparkle, 1)};
static const struct BigSprite sSpr_Bubble[2] = {BIG(Bubble, 0), BIG(Bubble, 1)};
static const struct BigSprite sSpr_Eyes = BIG(Eyes, 0);
static const struct BigSprite sSpr_Mouth = BIG(Mouth, 0);
#undef BIG

static const struct OamData sOam_Big =
{
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1,
};

static const struct OamData sOam_Ball =
{
    .shape = SPRITE_SHAPE(32x32),
    .size = SPRITE_SIZE(32x32),
    .priority = 1,
};

#define NUM_GROUP 6
#define NUM_FX    12

struct Opening
{
    u16 frame;
    u16 scrollBack;
    u16 scrollMiddle;
    u16 scrollForest;
    u8 sprites[4];
    u8 group[NUM_GROUP];
    u8 fx[NUM_FX];
    u8 numFx;
    u8 blend;
};

static EWRAM_DATA struct Opening sOp = {0};
EWRAM_DATA bool8 gSinnohOpeningFinished = FALSE;

static void VBlankCB_SinnohOpening(void);
static void Task_SinnohOpening(u8 taskId);

static const struct BgTemplate sBgTemplates[] =
{
    {.bg = BG_FRONT,  .charBaseIndex = 3, .mapBaseIndex = 31, .priority = 0},
    {.bg = BG_FOREST, .charBaseIndex = 2, .mapBaseIndex = 30, .priority = 1},
    {.bg = BG_MIDDLE, .charBaseIndex = 1, .mapBaseIndex = 29, .priority = 2},
    {.bg = BG_BACK,   .charBaseIndex = 0, .mapBaseIndex = 28, .priority = 3},
};

static const u8 sMapBase[4] = {31, 30, 29, 28};
static const u8 sCharBase[4] = {3, 2, 1, 0};

// ---------------------------------------------------------------------------
// Utilidades
// ---------------------------------------------------------------------------

static void LoadImageEx(u8 bg, const struct Image *img, u8 palSlot, u32 mapSize)
{
    u32 i;
    u16 *dst = (u16 *)BG_SCREEN_ADDR(sMapBase[bg]);
    CpuCopy32(img->tiles, (void *)BG_CHAR_ADDR(sCharBase[bg]), img->numTiles * TILE_SIZE_4BPP);
    for (i = 0; i < mapSize; i++)
        dst[i] = (img->map[i] & 0x0FFF) | (((img->map[i] >> 12) + palSlot) << 12);
    LoadPalette(img->pal, BG_PLTT_ID(palSlot), img->numPals * PLTT_SIZE_4BPP);
}

static void LoadImage(u8 bg, const struct Image *img, u8 palSlot)
{
    LoadImageEx(bg, img, palSlot, 32 * 32);
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

// Fondo trasero de 512x256 (mapas vistos desde arriba)
static void SetBackWide(bool8 wide)
{
    SetGpuReg(REG_OFFSET_BG3CNT, BGCNT_PRIORITY(3) | BGCNT_CHARBASE(0) | BGCNT_SCREENBASE(28) | BGCNT_16COLOR
                                 | (wide ? BGCNT_TXT512x256 : BGCNT_TXT256x256));
}

static EWRAM_DATA bool8 sBarWindows = FALSE;

static void SetLayers(u16 bgMask)
{
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | (bgMask << 8)
                                  | (sBarWindows ? (DISPCNT_WIN0_ON | DISPCNT_WIN1_ON) : 0));
}

// Los sprites solo se ven dentro de las barras (como en Platino, recortados por ellas)
static void SetBarWindows(bool8 on, u8 topY, u8 bottomY)
{
    sBarWindows = on;
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(0, DISPLAY_WIDTH));
    SetGpuReg(REG_OFFSET_WIN1H, WIN_RANGE(0, DISPLAY_WIDTH));
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(topY, topY + 72));
    SetGpuReg(REG_OFFSET_WIN1V, WIN_RANGE(bottomY, bottomY + 72));
    SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_ALL | WININ_WIN1_ALL);
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG_ALL | WINOUT_WIN01_CLR);
}

static void ResetScene(void)
{
    u32 i;
    ResetSpriteData();
    FreeAllSpritePalettes();
    SetBackWide(FALSE);
    sBarWindows = FALSE;
    for (i = 0; i < 4; i++)
    {
        ClearBg(i);
        SetBgPos(i, 0, 0);
    }
    SetLayers(0xF);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    sOp.scrollBack = sOp.scrollMiddle = sOp.scrollForest = 0;
    sOp.numFx = 0;
    gPlttBufferUnfaded[0] = gPlttBufferFaded[0] = RGB_BLACK;
}

static void LoadBigSheet(const struct BigSprite *spr, u16 tag)
{
    struct SpriteSheet sheet = {spr->gfx, spr->size, tag};
    struct SpritePalette pal = {spr->pal, tag};
    if (GetSpriteTileStartByTag(tag) == 0xFFFF)
        LoadSpriteSheet(&sheet);
    if (IndexOfSpritePaletteTag(tag) == 0xFF)
        LoadSpritePalette(&pal);
}

static u8 CreateBigEx(const struct BigSprite *spr, u16 tag, s16 x, s16 y, u8 subpriority)
{
    struct SpriteTemplate template = {tag, tag, &sOam_Big, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy};
    u8 spriteId;

    LoadBigSheet(spr, tag);
    spriteId = CreateSprite(&template, x, y, subpriority);
    SetSubspriteTables(&gSprites[spriteId], spr->table);
    gSprites[spriteId].subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
    return spriteId;
}

static u8 CreateBig(const struct BigSprite *spr, u16 tag, s16 x, s16 y)
{
    return CreateBigEx(spr, tag, x, y, 0);
}

static void SwapBig(u8 spriteId, const struct BigSprite *spr, u16 tag)
{
    LoadBigSheet(spr, tag);
    gSprites[spriteId].oam.tileNum = GetSpriteTileStartByTag(tag);
    gSprites[spriteId].oam.paletteNum = IndexOfSpritePaletteTag(tag);
    SetSubspriteTables(&gSprites[spriteId], spr->table);
}

static void StartFade(u8 delay, u8 from, u8 to, u16 color)
{
    if (gPaletteFade.active)
        ResetPaletteFade();
    BeginNormalPaletteFade(PALETTES_ALL, delay, from, to, color);
}

static void Flash(u16 color)
{
    if (gPaletteFade.active)
        ResetPaletteFade();
    BlendPalettes(PALETTES_ALL, 16, color);
    BeginNormalPaletteFade(PALETTES_ALL, 1, 16, 0, color);
}

static void MoveToward(u8 spriteId, s16 x, s16 y, u8 speed)
{
    struct Sprite *s = &gSprites[spriteId];
    if (s->x < x) s->x += min(speed, x - s->x);
    else if (s->x > x) s->x -= min(speed, s->x - x);
    if (s->y < y) s->y += min(speed, y - s->y);
    else if (s->y > y) s->y -= min(speed, s->y - y);
}

static void SetSpritePalBlack(u8 spriteId, bool8 black)
{
    u8 pal = gSprites[spriteId].oam.paletteNum;
    if (black)
        BlendPalette(OBJ_PLTT_ID(pal), 16, 16, RGB(1, 0, 2));
    else
        CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(pal)], &gPlttBufferFaded[OBJ_PLTT_ID(pal)], PLTT_SIZE_4BPP);
}

// ---------------------------------------------------------------------------
// Destellos y burbujas
// ---------------------------------------------------------------------------

#define sVX     data[0]
#define sVY     data[1]
#define sX16    data[2]
#define sY16    data[3]
#define sLife   data[4]
#define sTimer  data[5]

static void SparkleCallback(struct Sprite *sprite)
{
    sprite->sX16 += sprite->sVX;
    sprite->sY16 += sprite->sVY;
    sprite->x = sprite->sX16 >> 4;
    sprite->y = sprite->sY16 >> 4;
    sprite->sTimer++;
    if ((sprite->sTimer & 7) == 0)
    {
        u8 f = (sprite->sTimer >> 3) & 1;
        sprite->oam.tileNum = GetSpriteTileStartByTag(TAG_SPARKLE0 + f);
        SetSubspriteTables(sprite, sSpr_Sparkle[f].table);
    }
    if (sprite->sLife && --sprite->sLife == 0)
        DestroySprite(sprite);
}

static void SpawnSparkle(s16 x, s16 y, s16 vx, s16 vy, u16 life)
{
    u8 id;
    LoadBigSheet(&sSpr_Sparkle[1], TAG_SPARKLE1);
    id = CreateBig(&sSpr_Sparkle[0], TAG_SPARKLE0, x, y);
    gSprites[id].oam.priority = 0;
    gSprites[id].sX16 = x << 4;
    gSprites[id].sY16 = y << 4;
    gSprites[id].sVX = vx;
    gSprites[id].sVY = vy;
    gSprites[id].sLife = life;
    gSprites[id].sTimer = Random() & 7;
    gSprites[id].callback = SparkleCallback;
}

static void BubbleCallback(struct Sprite *sprite)
{
    sprite->sY16 += sprite->sVY;
    sprite->sTimer++;
    sprite->y = sprite->sY16 >> 4;
    sprite->x2 = Sin((sprite->sTimer * 6) & 0xFF, 4);
    if (sprite->sLife && --sprite->sLife == 0)
        DestroySprite(sprite);
}

static void SpawnBubble(s16 x, s16 y, bool8 small, u16 life)
{
    u8 id = CreateBig(&sSpr_Bubble[small], TAG_BUBBLE0 + small, x, y);
    gSprites[id].oam.priority = 0;
    gSprites[id].sY16 = y << 4;
    gSprites[id].sVY = -(16 + (Random() % 24));
    gSprites[id].sTimer = Random() & 0xFF;
    gSprites[id].sLife = life;
    gSprites[id].callback = BubbleCallback;
}

// ---------------------------------------------------------------------------
// Escenas
// ---------------------------------------------------------------------------

// GAME FREAK presents: caen destellos y aparecen el emblema y el texto
static void Scene_GameFreak(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, &sImg_Dark, PAL_BACK);
        LoadImage(BG_FRONT, &sImg_GfText, PAL_FRONT);
        SetBgPos(BG_FRONT, -(DISPLAY_WIDTH - sOp_GfText_W * 8) / 2, -112);
        SetLayers((1 << BG_BACK));
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        StartFade(2, 16, 0, RGB_BLACK);
    }
    if (t < 200 && (t % 20) == 0)
        SpawnSparkle(40 + (Random() % 160), -8, (Random() % 9) - 4, 12 + (Random() % 8), 200);
    if (t == 180)
    {
        sOp.sprites[0] = CreateBig(&sSpr_Emblem, TAG_SPR_A, DISPLAY_WIDTH / 2, 56);
        gSprites[sOp.sprites[0]].oam.objMode = ST_OAM_OBJ_BLEND;
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_ALL);
        sOp.blend = 0;
    }
    if (t > 180 && t < 260 && (t % 5) == 0 && sOp.blend < 16)
        sOp.blend++;
    if (t >= 180 && t < 270)
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(sOp.blend, 16 - sOp.blend));
    if (t == 270)
    {
        gSprites[sOp.sprites[0]].oam.objMode = ST_OAM_OBJ_NORMAL;
        // los destellos bajan hacia donde sale el texto
        SpawnSparkle(70, 70, 2, 10, 90);
        SpawnSparkle(120, 80, 0, 9, 90);
        SpawnSparkle(165, 70, -2, 10, 90);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_BG3);
        sOp.blend = 0;
        SetLayers((1 << BG_BACK) | (1 << BG_FRONT));
    }
    if (t > 340 && t < 420 && (t % 5) == 0 && sOp.blend < 16)
        sOp.blend++;
    if (t >= 270 && t < 430)
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(sOp.blend, 16 - sOp.blend));
    if (t == 430)
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
    if (t == 620)
        StartFade(3, 0, 16, RGB_BLACK);
}

// Logo POKéMON con el brillo blanco
static void Scene_Logo(u16 t)
{
    s32 y;
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_FRONT, &sImg_Logo, PAL_FRONT);
        SetBgPos(BG_FRONT, -(DISPLAY_WIDTH - sOp_Logo_W * 8) / 2, -(DISPLAY_HEIGHT - sOp_Logo_H * 8) / 2);
        SetLayers(1 << BG_FRONT);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        StartFade(1, 16, 0, RGB_BLACK);
    }
    // brillo: sube hasta el segundo 27 del vídeo y vuelve a bajar
    if (t >= 120 && t < 540)
    {
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_LIGHTEN);
        y = (t < 300) ? (t - 120) / 12 : 15 - (t - 300) / 16;
        SetGpuReg(REG_OFFSET_BLDY, max(0, min(12, y)));
        if ((t % 6) == 0)
        {
            s16 a = Random() & 0xFF;
            SpawnSparkle(DISPLAY_WIDTH / 2 + Cos(a, 40), DISPLAY_HEIGHT / 2 + Sin(a, 20), Cos(a, 20), Sin(a, 12), 70);
        }
    }
    else if (t == 540)
    {
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
    }
}

// El mapa de Sinnoh visto desde arriba (en Platino es 3D)
static void Scene_Map(u16 t, const struct Image *img, s16 startX, s16 startY, s16 dx, s16 dy)
{
    if (t == 0)
    {
        ResetScene();
        SetBackWide(TRUE);
        LoadImageEx(BG_BACK, img, PAL_BACK, 64 * 32);
        SetLayers(1 << BG_BACK);
        if (img == &sImg_MapForest)
        {
            // Bosque Vetusta más oscuro, como en Platino
            BlendPalettes(0x3F, 6, RGB(0, 4, 2));
            CpuCopy16(gPlttBufferFaded, gPlttBufferUnfaded, 6 * PLTT_SIZE_4BPP);
        }
        Flash(RGB_BLACK);
    }
    SetBgPos(BG_BACK, startX + (t * dx) / 16, startY + (t * dy) / 16);
}

static void Scene_MapCity(u16 t)
{
    Scene_Map(t, &sImg_MapCity, 0, 40, 6, 1);
    if (t == 0)
    {
        sOp.sprites[0] = CreateBig(&sSpr_Looker, TAG_SPR_A, DISPLAY_WIDTH + 40, 92);
        sOp.sprites[1] = CreateBig(&sSpr_Rowan, TAG_SPR_B, -40, 100);
    }
    // Handsome entra caminando; luego llega Serbal por la izquierda
    MoveToward(sOp.sprites[0], 160, 92, (t & 1));
    gSprites[sOp.sprites[0]].y2 = (gSprites[sOp.sprites[0]].x != 160 && (t / 10) & 1) ? -1 : 0;
    if (t > 240)
    {
        MoveToward(sOp.sprites[1], 90, 100, (t & 1));
        gSprites[sOp.sprites[1]].y2 = (gSprites[sOp.sprites[1]].x != 90 && (t / 10) & 1) ? -1 : 0;
    }
}

static void RunnerCallback(struct Sprite *sprite)
{
    sprite->data[1]++;
    if ((sprite->data[1] % 8) == 0)
    {
        u8 frame = (sprite->data[1] / 8) & 1;
        SwapBig(sprite - gSprites, sprite->data[0] ? &sSpr_RunDawn[frame] : &sSpr_RunLucas[frame], TAG_RUN0 + frame);
    }
    sprite->y2 = (sprite->data[1] & 8) ? -2 : 0;
}

// Lucas (cielo y ciudad) y luego Maya (nubes y pueblo) corriendo
static void Scene_Run(u16 t, bool8 dawn)
{
    if (t == 0)
    {
        u8 id;
        ResetScene();
        LoadImage(BG_BACK, dawn ? &sImg_Clouds : &sImg_Sky, PAL_BACK);
        LoadImage(BG_MIDDLE, dawn ? &sImg_Town : &sImg_City, PAL_MIDDLE);
        LoadImage(BG_FOREST, dawn ? &sImg_Forest1 : &sImg_Forest2, PAL_FOREST);
        SetLayers((1 << BG_BACK) | (1 << BG_MIDDLE) | (1 << BG_FOREST));
        LoadBigSheet(dawn ? &sSpr_RunDawn[1] : &sSpr_RunLucas[1], TAG_RUN1);
        id = CreateBig(dawn ? &sSpr_RunDawn[0] : &sSpr_RunLucas[0], TAG_RUN0, dawn ? 168 : 72, 96);
        gSprites[id].data[0] = dawn;
        gSprites[id].callback = RunnerCallback;
        sOp.sprites[0] = id;
        if (!dawn)
            Flash(RGB_WHITE);
    }
    sOp.scrollMiddle += 1;
    sOp.scrollForest += 3;
    SetBgPos(BG_BACK, t / 8, dawn ? 24 : 0);
    SetBgPos(BG_MIDDLE, sOp.scrollMiddle, 0);
    SetBgPos(BG_FOREST, sOp.scrollForest, 0);
}

#define BAR_TOP_Y    4
#define BAR_BOTTOM_Y 84
#define BAR_TOP_CY    (BAR_TOP_Y + 36)
#define BAR_BOTTOM_CY (BAR_BOTTOM_Y + 36)

static void LoadBars(u8 top, u8 bottom)
{
    SetBarWindows(TRUE, BAR_TOP_Y, BAR_BOTTOM_Y);
    LoadImage(BG_BACK, &sImg_Bars[top], PAL_BACK);
    LoadImage(BG_MIDDLE, &sImg_Bars[bottom], PAL_MIDDLE);
    SetLayers((1 << BG_BACK) | (1 << BG_MIDDLE));
}

static void ScrollBars(u8 speed)
{
    sOp.scrollBack += speed;
    sOp.scrollMiddle -= speed;
    SetBgPos(BG_BACK, sOp.scrollBack, -BAR_TOP_Y);
    SetBgPos(BG_MIDDLE, sOp.scrollMiddle, -BAR_BOTTOM_Y);
}

static void BallCallback(struct Sprite *sprite)
{
    sprite->data[0]++;
    sprite->oam.tileNum = GetSpriteTileStartByTag(TAG_BALL) + ((sprite->data[0] / 3) & 3) * 16;
    if (sprite->x != sprite->data[1])
        sprite->x += (sprite->x < sprite->data[1]) ? 3 : -3;
    if (abs(sprite->x - sprite->data[1]) < 3)
        sprite->x = sprite->data[1];
}

static void CreateBall(s16 x, s16 y, s16 tx)
{
    static const struct SpriteTemplate sTemplate = {TAG_BALL, TAG_BALL, &sOam_Ball, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, BallCallback};
    u8 id = CreateSprite(&sTemplate, x, y, 0);
    gSprites[id].data[1] = tx;
}

// Barras azul y rosa: Lucas y Maya lanzan sus Poké Balls
static void Scene_Throw(u16 t)
{
    if (t == 0)
    {
        struct SpriteSheet sheet = {sOp_Ball_Gfx, 4 * 16 * TILE_SIZE_4BPP, TAG_BALL};
        struct SpritePalette pal = {sOp_Ball_Pal, TAG_BALL};
        ResetScene();
        LoadBars(1, 0);
        LoadSpriteSheet(&sheet);
        LoadSpritePalette(&pal);
        sOp.sprites[0] = CreateBig(&sSpr_LucasBody, TAG_SPR_A, DISPLAY_WIDTH + 70, BAR_TOP_CY);
        sOp.sprites[1] = CreateBig(&sSpr_DawnBody, TAG_SPR_B, -70, BAR_BOTTOM_CY);
        Flash(RGB_WHITE);
    }
    ScrollBars(3);
    if (t < T_BALLS - T_THROW)
    {
        MoveToward(sOp.sprites[0], 172, BAR_TOP_CY, 6);
        MoveToward(sOp.sprites[1], 68, BAR_BOTTOM_CY, 6);
    }
    else if (t == T_BALLS - T_THROW)
    {
        // primer plano de la mano con la Poké Ball
        SwapBig(sOp.sprites[0], &sSpr_LucasHandBall, TAG_SPR_C);
        SwapBig(sOp.sprites[1], &sSpr_DawnHandBall, TAG_SPR_D);
        gSprites[sOp.sprites[0]].x = 150;
        gSprites[sOp.sprites[1]].x = 90;
    }
    else if (t == T_BALLS - T_THROW + 24)
    {
        SwapBig(sOp.sprites[0], &sSpr_LucasHandOpen, TAG_SPR_E);
        SwapBig(sOp.sprites[1], &sSpr_DawnHandOpen, TAG_SPR_F);
        CreateBall(130, BAR_TOP_CY, DISPLAY_WIDTH / 2);
        CreateBall(110, BAR_BOTTOM_CY, DISPLAY_WIDTH / 2);
        PlaySE(SE_BALL_THROW);
    }
    else if (t > T_BALLS - T_THROW + 24)
    {
        gSprites[sOp.sprites[0]].x += 4;
        gSprites[sOp.sprites[1]].x -= 4;
    }
    if (t == T_GRAYFADE - T_THROW - 40)
        StartFade(1, 0, 10, RGB(12, 12, 12));
}

// Los iniciales: arriba Prinplup, Chimchar y Torterra; abajo Infernape, Piplup y Grotle
static void Scene_Starters(u16 t)
{
    u32 i;
    if (t == 0)
    {
        ResetScene();
        LoadBars(2, 0);
        sOp.group[0] = CreateBigEx(&sSpr_Torterra, TAG_SPR_C, 200, BAR_TOP_CY, 3);
        sOp.group[1] = CreateBigEx(&sSpr_Chimchar, TAG_SPR_B, 132, BAR_TOP_CY + 2, 2);
        sOp.group[2] = CreateBigEx(&sSpr_Prinplup, TAG_SPR_A, 82, BAR_TOP_CY + 10, 1);
        sOp.group[3] = CreateBigEx(&sSpr_Grotle, TAG_SPR_F, 196, BAR_BOTTOM_CY + 4, 3);
        sOp.group[4] = CreateBigEx(&sSpr_Piplup, TAG_SPR_E, 128, BAR_BOTTOM_CY + 6, 1);
        sOp.group[5] = CreateBigEx(&sSpr_Infernape, TAG_SPR_D, 62, BAR_BOTTOM_CY, 2);
        for (i = 0; i < NUM_GROUP; i++)
            gSprites[sOp.group[i]].x += 40;
        BlendPalettes(PALETTES_ALL, 10, RGB(12, 12, 12));
        StartFade(1, 10, 0, RGB(12, 12, 12));
    }
    ScrollBars(4);
    // el grupo entra deslizándose
    if (t < 80 && (t & 1))
        for (i = 0; i < NUM_GROUP; i++)
            gSprites[sOp.group[i]].x--;

    // ¡Infernape! (fuego en la barra de arriba)
    if (t == T_FIRE - T_STARTERS)
    {
        LoadImage(BG_FOREST, &sImg_Rays, PAL_FOREST);
        SetLayers((1 << BG_BACK) | (1 << BG_MIDDLE) | (1 << BG_FOREST));
        for (i = 0; i < 3; i++)
            SetSpritePalBlack(sOp.group[i], TRUE);
        sOp.sprites[0] = CreateBigEx(&sSpr_Infernape, TAG_SPR_D, DISPLAY_WIDTH / 2, BAR_TOP_CY + 8, 0);
        gSprites[sOp.sprites[0]].oam.priority = 0;
        PlaySE(SE_M_FLAME_WHEEL);
    }
    if (t > T_FIRE - T_STARTERS && t < T_FIRE_END - T_STARTERS)
    {
        SetBgPos(BG_FOREST, (Random() % 5) - 2, (Random() % 5) - 2);
        gSprites[sOp.sprites[0]].x2 = (Random() % 3) - 1;
        if ((t % 8) == 0)
            SpawnSparkle(DISPLAY_WIDTH / 2 + (Random() % 80) - 40, BAR_TOP_CY + (Random() % 40) - 20, 0, -8, 30);
    }
    if (t == T_FIRE_END - T_STARTERS)
    {
        DestroySprite(&gSprites[sOp.sprites[0]]);
        ClearBg(BG_FOREST);
        for (i = 0; i < 3; i++)
            SetSpritePalBlack(sOp.group[i], FALSE);
        SetSpritePalBlack(sOp.group[5], FALSE);
    }

    // ¡Prinplup! (burbujas en la barra de abajo)
    if (t == T_WATER - T_STARTERS)
    {
        LoadBigSheet(&sSpr_Bubble[1], TAG_BUBBLE1);
        LoadBigSheet(&sSpr_Bubble[0], TAG_BUBBLE0);
        for (i = 3; i < NUM_GROUP; i++)
            SetSpritePalBlack(sOp.group[i], TRUE);
        sOp.sprites[1] = CreateBigEx(&sSpr_Prinplup, TAG_SPR_A, DISPLAY_WIDTH / 2, BAR_BOTTOM_CY, 0);
        gSprites[sOp.sprites[1]].oam.priority = 0;
        PlaySE(SE_M_BUBBLE);
    }
    if (t > T_WATER - T_STARTERS && t < T_WATER_END - T_STARTERS && (t % 6) == 0)
        SpawnBubble(60 + (Random() % 120), DISPLAY_HEIGHT + 8, Random() & 1, 120);
    if (t == T_WATER_END - T_STARTERS)
    {
        DestroySprite(&gSprites[sOp.sprites[1]]);
        for (i = 3; i < NUM_GROUP; i++)
            SetSpritePalBlack(sOp.group[i], FALSE);
        // Prinplup comparte paleta con el de arriba: la devolvemos también
        SetSpritePalBlack(sOp.group[2], FALSE);
    }

    if (t == T_DARK - T_STARTERS)
        StartFade(2, 0, 12, RGB_BLACK);
    if (t == T_PURPLE - T_STARTERS)
    {
        // barras moradas un instante
        ResetPaletteFade();
        CpuCopy16(gPlttBufferUnfaded, gPlttBufferFaded, PLTT_SIZE);
        BlendPalette(BG_PLTT_ID(PAL_BACK), 16, 10, RGB(10, 4, 26));
        BlendPalette(BG_PLTT_ID(PAL_MIDDLE), 16, 10, RGB(10, 4, 26));
    }
    if (t == T_GRAYFLASH - T_STARTERS)
        Flash(RGB(16, 16, 16));
}

// Helio aparece poco a poco
static void Scene_Cyrus(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_MIDDLE, &sImg_Cyrus, PAL_MIDDLE);
        SetLayers(1 << BG_MIDDLE);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        StartFade(3, 16, 0, RGB_BLACK);
    }
    SetBgPos(BG_MIDDLE, -(DISPLAY_WIDTH - sOp_Cyrus_W * 8) / 2, -8 + min(t / 12, 16));
    if (t == T_HOLE - T_CYRUS - 120)
        StartFade(1, 0, 16, RGB_BLACK);
}

// El agujero: ojos y sonrisa de Giratina, la esfera azul y el remolino
static void Scene_Hole(u16 t)
{
    if (t == 0)
    {
        ResetScene();
        LoadImage(BG_BACK, &sImg_Hole, PAL_BACK);
        SetLayers(1 << BG_BACK);
        BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        StartFade(3, 16, 0, RGB_BLACK);
    }
    if (t == T_EYES - T_HOLE)
        sOp.sprites[0] = CreateBig(&sSpr_Eyes, TAG_SPR_A, 121, 62);
    if (t > T_EYES - T_HOLE && t < T_ORB - T_HOLE)
        gSprites[sOp.sprites[0]].invisible = ((t % 90) > 80);  // parpadeo
    if (t == T_MOUTH - T_HOLE)
    {
        sOp.sprites[1] = CreateBig(&sSpr_Mouth, TAG_SPR_B, 120, 81);
        PlayCry_Normal(SPECIES_GIRATINA_ORIGIN, 0);
    }
    if (t > T_MOUTH - T_HOLE && t < T_ORB - T_HOLE)
        gSprites[sOp.sprites[1]].invisible = ((t / 20) & 1) && t > T_MOUTH - T_HOLE + 60;
    if (t == T_ORB - T_HOLE)
    {
        ResetSpriteData();
        FreeAllSpritePalettes();
        LoadImage(BG_BACK, &sImg_HoleOrb, PAL_BACK);
        Flash(RGB_BLACK);
    }
    if (t == T_VORTEX - T_HOLE)
    {
        LoadImage(BG_BACK, &sImg_Vortex, PAL_BACK);
        Flash(RGB_WHITE);
    }
    if (t == T_END_FLASH - T_HOLE)
        StartFade(0, 0, 16, RGB(14, 14, 14));
    if (t == T_END_FLASH - T_HOLE + 24)
    {
        // de gris a negro antes de Giratina
        CpuFill16(RGB(14, 14, 14), gPlttBufferUnfaded, PLTT_SIZE);
        StartFade(0, 0, 16, RGB_BLACK);
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
    gSinnohOpeningFinished = FALSE;
    BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
    ShowBg(3);
    SetLayers(0);
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

    if (f < T_BLACK1)
        Scene_GameFreak(f - T_GAMEFREAK);
    else if (f < T_LOGO)
    {
        if (f == T_BLACK1)
            ResetScene();
    }
    else if (f < T_MAP_ROUTE)
        Scene_Logo(f - T_LOGO);
    else if (f < T_MAP_FOREST)
        Scene_Map(f - T_MAP_ROUTE, &sImg_MapRoute, 0, 40, 10, 0);
    else if (f < T_MAP_CITY)
        Scene_Map(f - T_MAP_FOREST, &sImg_MapForest, 100, 96, 2, -4);
    else if (f < T_FLASH1)
        Scene_MapCity(f - T_MAP_CITY);
    else if (f < T_RUN_LUCAS)
    {
        if (f == T_FLASH1)
            StartFade(0, 0, 16, RGB_WHITEALPHA);
    }
    else if (f < T_RUN_DAWN)
        Scene_Run(f - T_RUN_LUCAS, FALSE);
    else if (f < T_THROW)
        Scene_Run(f - T_RUN_DAWN, TRUE);
    else if (f < T_STARTERS)
        Scene_Throw(f - T_THROW);
    else if (f < T_CYRUS)
        Scene_Starters(f - T_STARTERS);
    else if (f < T_HOLE)
        Scene_Cyrus(f - T_CYRUS);
    else if (f < T_END)
        Scene_Hole(f - T_HOLE);
    else if (!gPaletteFade.active)
    {
        // la pantalla de título (con Giratina) sigue con la música del opening
        gSinnohOpeningFinished = TRUE;
        DestroyTask(taskId);
        SetMainCallback2(CB2_InitTitleScreen);
        return;
    }
    sOp.frame++;
}
