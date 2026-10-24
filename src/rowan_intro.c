// Proyecto Sinnoh: introducción del Prof. Serbal (Rowan) al empezar partida nueva.
// Sigue el orden de pokeplatinum (src/applications/rowan_intro/rowan_intro_app.c y tv_app.c)
// pero en una sola pantalla, al estilo de RF/Esmeralda.
#include "global.h"
#include "bg.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "main.h"
#include "main_menu.h"
#include "menu.h"
#include "naming_screen.h"
#include "new_game.h"
#include "overworld.h"
#include "palette.h"
#include "random.h"
#include "rowan_intro.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "util.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#include "data/rowan_intro_gfx.h"

extern const u8 gText_RowanIntro_HelloThere[];
extern const u8 gText_RowanIntro_MyNameRowan[];
extern const u8 gText_RowanIntro_InfoAnythingElse[];
extern const u8 gText_RowanIntro_AdventureInfo0[];
extern const u8 gText_RowanIntro_AdventureInfo1[];
extern const u8 gText_RowanIntro_AdventureInfo2[];
extern const u8 gText_RowanIntro_AdventureInfo3[];
extern const u8 gText_RowanIntro_AdventureInfo4[];
extern const u8 gText_RowanIntro_AdventureInfo5[];
extern const u8 gText_RowanIntro_WidelyInhabited[];
extern const u8 gText_RowanIntro_LiveAlongsidePokemon[];
extern const u8 gText_RowanIntro_AboutYourself[];
extern const u8 gText_RowanIntro_GenderDialogue[];
extern const u8 gText_RowanIntro_ConfirmBoy[];
extern const u8 gText_RowanIntro_ConfirmGirl[];
extern const u8 gText_RowanIntro_NameDialogue[];
extern const u8 gText_RowanIntro_ConfirmNameMale[];
extern const u8 gText_RowanIntro_SoYoure[];
extern const u8 gText_RowanIntro_RivalNameDialogue[];
extern const u8 gText_RowanIntro_ConfirmRivalName[];
extern const u8 gText_RowanIntro_EndDialogue[];
extern const u8 gText_RowanIntro_ControlInfoUnderstood[];
extern const u8 gText_RowanIntro_HavePokeBall[];
extern const u8 gText_RowanIntro_PokeBallUseButton[];
extern const u8 gText_RowanIntro_ControlInfo0[];
extern const u8 gText_RowanIntro_ControlInfo1[];
extern const u8 gText_RowanIntro_ControlInfo2[];
extern const u8 gText_RowanIntro_ControlInfo3[];
extern const u8 gText_RowanIntro_ChoiceControlInfo[];
extern const u8 gText_RowanIntro_ChoiceAdventureInfo[];
extern const u8 gText_RowanIntro_ChoiceNoInfo[];
extern const u8 gText_RowanIntro_RivalChoiceNew[];
extern const u8 gText_RowanIntro_RivalChoiceBarry[];
extern const u8 gText_RowanIntro_RivalChoiceNolan[];
extern const u8 gText_RowanIntro_RivalChoiceRoy[];
extern const u8 gText_RowanIntro_RivalChoiceGavin[];
extern const u8 gText_RowanIntro_Tv[];

#define INTRO_MUSIC MUS_DPP_INTRO

// Fondos
#define BG_TEXT     0
#define BG_TVFRAME  1
#define BG_PICTURE  2
#define BG_GRADIENT 3

#define FRAME_TILE_NUM   0xF3 // marco de menús (paleta 2)
#define DIALOG_TILE_NUM  0xFC // marco del cuadro de texto (paleta 15)
#define WIN_TEXT 0

// Huecos de sprites grandes
enum { SLOT_A, SLOT_B, SLOT_C, NUM_SLOTS };
#define TAG_SLOT(i) (0x5300 + (i))
static const u16 sSlotTiles[NUM_SLOTS] = {128, 128, 160};

// Paletas de sprites
enum {
    PAL_ROWAN,
    PAL_BUNEARY,
    PAL_LUCAS,
    PAL_DAWN,
    PAL_BARRY,
    PAL_BALL,
    PAL_LUCAS_SIL,
    PAL_DAWN_SIL,
};

// Degradados de fondo (orden de la hoja: oscuro, banda clara, claro)
enum { GRAD_DARK, GRAD_BAND, GRAD_LIGHT };

#define POS_CENTER 120
#define POS_LEFT   72
#define POS_RIGHT  168
#define POS_Y      56

struct BigGfx
{
    const u32 *gfx;
    u16 size;
    const struct SubspriteTable *table;
    u8 pal;
};

#define BIG(name, pal) {name##_Gfx, name##_SIZE, name##_SubspriteTable, pal}
static const struct BigGfx sGfx_Rowan = BIG(sRI_Rowan0, PAL_ROWAN);
static const struct BigGfx sGfx_Buneary = BIG(sRI_Buneary0, PAL_BUNEARY);
static const struct BigGfx sGfx_Barry = BIG(sRI_Barry0, PAL_BARRY);
static const struct BigGfx sGfx_Lucas[4] = {BIG(sRI_Lucas0, PAL_LUCAS), BIG(sRI_Lucas1, PAL_LUCAS), BIG(sRI_Lucas2, PAL_LUCAS), BIG(sRI_Lucas3, PAL_LUCAS)};
static const struct BigGfx sGfx_Dawn[4] = {BIG(sRI_Dawn0, PAL_DAWN), BIG(sRI_Dawn1, PAL_DAWN), BIG(sRI_Dawn2, PAL_DAWN), BIG(sRI_Dawn3, PAL_DAWN)};
static const struct BigGfx sGfx_LucasSil[4] = {BIG(sRI_LucasSil0, PAL_LUCAS_SIL), BIG(sRI_LucasSil1, PAL_LUCAS_SIL), BIG(sRI_LucasSil2, PAL_LUCAS_SIL), BIG(sRI_LucasSil3, PAL_LUCAS_SIL)};
static const struct BigGfx sGfx_DawnSil[4] = {BIG(sRI_DawnSil0, PAL_DAWN_SIL), BIG(sRI_DawnSil1, PAL_DAWN_SIL), BIG(sRI_DawnSil2, PAL_DAWN_SIL), BIG(sRI_DawnSil3, PAL_DAWN_SIL)};
static const struct BigGfx sGfx_Ball[3] = {BIG(sRI_Ball0, PAL_BALL), BIG(sRI_Ball1, PAL_BALL), BIG(sRI_Ball2, PAL_BALL)};
#undef BIG

static const u32 sZeroTiles[160 * 8] = {0};

enum RowanIntroState
{
    RI_FADE_IN_BLACK,
    RI_WELCOME,
    RI_WELCOME_WAIT,
    RI_ROWAN_APPEAR,
    RI_ROWAN_INTRO,
    RI_ROWAN_INTRO_WAIT,
    RI_INFO_MOVE_ROWAN,
    RI_INFO_MENU,
    RI_INFO_MENU_INPUT,
    RI_CONTROL_INFO,
    RI_CONTROL_INFO_UNDERSTOOD,
    RI_CONTROL_INFO_YESNO,
    RI_ADVENTURE_INFO,
    RI_ANYTHING_ELSE,
    RI_INFO_MOVE_ROWAN_BACK,
    RI_WIDELY_INHABITED,
    RI_BALL_FADE_ROWAN,
    RI_BALL_APPEAR,
    RI_BALL_TEXT,
    RI_BALL_WAIT_INPUT,
    RI_BALL_WRONG_BUTTON,
    RI_BALL_PUSH,
    RI_BALL_FLASH,
    RI_BUNEARY_JUMP,
    RI_LIVE_ALONGSIDE,
    RI_PUT_AWAY_BUNEARY,
    RI_ABOUT_YOURSELF,
    RI_GENDER_FADE_OUT_ROWAN,
    RI_GENDER_FADE_IN_AVATARS,
    RI_GENDER_TEXT,
    RI_GENDER_CHOOSE,
    RI_GENDER_CONFIRM,
    RI_GENDER_CONFIRM_YESNO,
    RI_GENDER_CENTRE_AVATAR,
    RI_NAME_TEXT,
    RI_NAME_WAIT,
    RI_NAME_START_KEYBOARD,
    RI_NAME_RETURN,
    RI_NAME_CONFIRM_YESNO,
    RI_NAME_FADE_OUT_AVATAR,
    RI_SO_YOURE,
    RI_SO_YOURE_WAIT,
    RI_RIVAL_FADE_IN,
    RI_RIVAL_NAME_TEXT,
    RI_RIVAL_MOVE_RIGHT,
    RI_RIVAL_MENU,
    RI_RIVAL_MENU_INPUT,
    RI_RIVAL_MOVE_LEFT,
    RI_RIVAL_START_KEYBOARD,
    RI_RIVAL_RETURN,
    RI_RIVAL_CONFIRM_YESNO,
    RI_RIVAL_FADE_OUT,
    RI_END_DIALOGUE,
    RI_END_DIALOGUE_WAIT,
    RI_END_AVATAR_FADE_IN,
    RI_END_SHRINK,
    RI_END_FADE_WHITE,
    RI_TV_LOAD,
    RI_TV_SHOW_TEXT,
    RI_TV_WAIT,
    RI_TV_FADE_OUT,
    RI_EXIT,
};

struct RowanIntro
{
    u8 state;
    u8 subState;
    u16 timer;
    u8 spriteIds[NUM_SLOTS];
    const struct BigGfx *pendingGfx[NUM_SLOTS];
    u8 fadeSlots;
    u8 fadeIn;
    s8 fadeEva;
    u8 fadeSpeed;
    bool8 fading;
    u8 gender;
    u8 animFrame;
    u8 animTimer;
    u8 gradTarget;
    u8 gradCurrent;
    u8 gradTimer;
    u8 menuWindowId;
    u8 infoPage;
    u8 slideSlot;
    s16 slideTarget;
    s8 flashY;
    u8 jumpStep;
};

static EWRAM_DATA struct RowanIntro sRI = {0};

static void CB2_RowanIntro(void);
static void VBlankCB_RowanIntro(void);
static void Task_RowanIntro(u8 taskId);
static void SetupScene(bool8 tvScene);
static void CB2_ReturnFromPlayerNaming(void);
static void CB2_ReturnFromRivalNaming(void);

static const struct BgTemplate sBgTemplates[] =
{
    {.bg = BG_TEXT,     .charBaseIndex = 3, .mapBaseIndex = 30, .priority = 0},
    {.bg = BG_TVFRAME,  .charBaseIndex = 2, .mapBaseIndex = 10, .priority = 1},
    {.bg = BG_PICTURE,  .charBaseIndex = 0, .mapBaseIndex = 9,  .priority = 2},
    {.bg = BG_GRADIENT, .charBaseIndex = 2, .mapBaseIndex = 31, .priority = 3},
};

static const struct WindowTemplate sWindowTemplates[] =
{
    [WIN_TEXT] = {
        .bg = BG_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 27,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct WindowTemplate sInfoMenuWindowTemplate =
{
    .bg = BG_TEXT,
    .tilemapLeft = 2,
    .tilemapTop = 2,
    .width = 13,
    .height = 6,
    .paletteNum = 15,
    .baseBlock = 0x6D,
};

static const struct WindowTemplate sRivalMenuWindowTemplate =
{
    .bg = BG_TEXT,
    .tilemapLeft = 2,
    .tilemapTop = 1,
    .width = 8,
    .height = 10,
    .paletteNum = 15,
    .baseBlock = 0x6D,
};


static const struct WindowTemplate sTvWindowTemplates[] =
{
    {
        .bg = BG_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 26,
        .height = 14,
        .paletteNum = 15,
        .baseBlock = 1,
    },
    DUMMY_WIN_TEMPLATE
};

static const struct MenuAction sInfoMenuActions[] =
{
    {gText_RowanIntro_ChoiceControlInfo, {NULL}},
    {gText_RowanIntro_ChoiceAdventureInfo, {NULL}},
    {gText_RowanIntro_ChoiceNoInfo, {NULL}},
};

static const struct MenuAction sRivalMenuActions[] =
{
    {gText_RowanIntro_RivalChoiceNew, {NULL}},
    {gText_RowanIntro_RivalChoiceBarry, {NULL}},
    {gText_RowanIntro_RivalChoiceNolan, {NULL}},
    {gText_RowanIntro_RivalChoiceRoy, {NULL}},
    {gText_RowanIntro_RivalChoiceGavin, {NULL}},
};

static const u8 *const sControlInfoTexts[] =
{
    gText_RowanIntro_ControlInfo0,
    gText_RowanIntro_ControlInfo1,
    gText_RowanIntro_ControlInfo2,
    gText_RowanIntro_ControlInfo3,
};

static const u8 *const sAdventureInfoTexts[] =
{
    gText_RowanIntro_AdventureInfo0,
    gText_RowanIntro_AdventureInfo1,
    gText_RowanIntro_AdventureInfo2,
    gText_RowanIntro_AdventureInfo3,
    gText_RowanIntro_AdventureInfo4,
    gText_RowanIntro_AdventureInfo5,
};

static const struct OamData sOam_Big =
{
    .shape = SPRITE_SHAPE(64x64),
    .size = SPRITE_SIZE(64x64),
    .priority = 1,
};

static const struct SpriteTemplate sSpriteTemplates[NUM_SLOTS] =
{
    {TAG_SLOT(SLOT_A), TAG_NONE, &sOam_Big, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy},
    {TAG_SLOT(SLOT_B), TAG_NONE, &sOam_Big, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy},
    {TAG_SLOT(SLOT_C), TAG_NONE, &sOam_Big, gDummySpriteAnimTable, NULL, gDummySpriteAffineAnimTable, SpriteCallbackDummy},
};

// Salto de Buneary al salir de la Poké Ball (desplazamiento vertical por frame)
static const s8 sBunearyJump[] = {-4, -4, -3, -3, -2, -2, -1, -1, 0, 1, 1, 2, 2, 3, 3, 4, 4, -2, -1, 0, 1, 2, 0};

static const u8 sText_DefaultNameLucas[] = _("LUCAS");
static const u8 sText_DefaultNameDawn[] = _("DAWN");

static const u16 sTvTextPal[] = {RGB_BLACK, RGB_WHITE, RGB(8, 8, 8), RGB(16, 16, 16)};

// ---------------------------------------------------------------------------
// Entrada
// ---------------------------------------------------------------------------

void StartRowanIntro(void)
{
    gPlttBufferUnfaded[0] = RGB_BLACK;
    gPlttBufferFaded[0] = RGB_BLACK;
    memset(&sRI, 0, sizeof(sRI));
    sRI.state = RI_FADE_IN_BLACK;
    sRI.gradCurrent = sRI.gradTarget = GRAD_DARK;
    SetupScene(FALSE);
    PlayBGM(INTRO_MUSIC);
}

static void CB2_RowanIntro(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void VBlankCB_RowanIntro(void)
{
    u32 i;
    for (i = 0; i < NUM_SLOTS; i++)
    {
        if (sRI.pendingGfx[i] != NULL)
        {
            CpuCopy32(sRI.pendingGfx[i]->gfx, (void *)(OBJ_VRAM0 + GetSpriteTileStartByTag(TAG_SLOT(i)) * TILE_SIZE_4BPP), sRI.pendingGfx[i]->size);
            sRI.pendingGfx[i] = NULL;
        }
    }
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// ---------------------------------------------------------------------------
// Utilidades de gráficos
// ---------------------------------------------------------------------------

static void SetGradient(u8 grad)
{
    LoadBgTilemap(BG_GRADIENT, &sRI_Bg_Map[grad * 20 * 32], 20 * 32 * 2, 0);
    sRI.gradCurrent = grad;
}

static void AnimateGradientTo(u8 grad)
{
    sRI.gradTarget = grad;
    sRI.gradTimer = 0;
}

static void UpdateGradient(void)
{
    if (sRI.gradCurrent == sRI.gradTarget)
        return;
    if (++sRI.gradTimer < 6)
        return;
    sRI.gradTimer = 0;
    if (sRI.gradCurrent < sRI.gradTarget)
        SetGradient(sRI.gradCurrent + 1);
    else
        SetGradient(sRI.gradCurrent - 1);
}

static struct Sprite *SlotSprite(u8 slot)
{
    return &gSprites[sRI.spriteIds[slot]];
}

static void SetSlotGfx(u8 slot, const struct BigGfx *gfx)
{
    struct Sprite *sprite = SlotSprite(slot);
    sRI.pendingGfx[slot] = gfx;
    SetSubspriteTables(sprite, gfx->table);
    sprite->subspriteMode = SUBSPRITES_IGNORE_PRIORITY;
    sprite->oam.paletteNum = gfx->pal;
}

static void ShowSlot(u8 slot, const struct BigGfx *gfx, s16 x, s16 y)
{
    struct Sprite *sprite = SlotSprite(slot);
    SetSlotGfx(slot, gfx);
    sprite->x = x;
    sprite->y = y;
    sprite->x2 = 0;
    sprite->y2 = 0;
    sprite->invisible = FALSE;
    sprite->oam.objMode = ST_OAM_OBJ_NORMAL;
}

static void HideSlot(u8 slot)
{
    SlotSprite(slot)->invisible = TRUE;
}

// Fundido de sprites por transparencia (como Esmeralda)
static void StartSpriteFade(u8 slots, bool8 fadeIn, u8 speed)
{
    u32 i;
    for (i = 0; i < NUM_SLOTS; i++)
    {
        if (slots & (1 << i))
        {
            SlotSprite(i)->oam.objMode = ST_OAM_OBJ_BLEND;
            if (fadeIn)
                SlotSprite(i)->invisible = FALSE;
        }
    }
    sRI.fadeSlots = slots;
    sRI.fadeIn = fadeIn;
    sRI.fadeEva = fadeIn ? 0 : 16;
    sRI.fadeSpeed = speed;
    sRI.fading = TRUE;
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_BG_ALL | BLDCNT_TGT2_BD);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(sRI.fadeEva, 16 - sRI.fadeEva));
}

static void UpdateSpriteFade(void)
{
    u32 i;
    if (!sRI.fading)
        return;
    if (sRI.fadeIn)
        sRI.fadeEva += sRI.fadeSpeed;
    else
        sRI.fadeEva -= sRI.fadeSpeed;
    if (sRI.fadeEva >= 16 || sRI.fadeEva <= 0)
    {
        for (i = 0; i < NUM_SLOTS; i++)
        {
            if (sRI.fadeSlots & (1 << i))
            {
                SlotSprite(i)->oam.objMode = ST_OAM_OBJ_NORMAL;
                if (!sRI.fadeIn)
                    SlotSprite(i)->invisible = TRUE;
            }
        }
        sRI.fading = FALSE;
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDALPHA, 0);
        return;
    }
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(sRI.fadeEva, 16 - sRI.fadeEva));
}

static void StartSlide(u8 slot, s16 target)
{
    sRI.slideSlot = slot;
    sRI.slideTarget = target;
}

static bool8 UpdateSlide(void)
{
    struct Sprite *sprite = SlotSprite(sRI.slideSlot);
    if (sprite->x == sRI.slideTarget)
        return TRUE;
    if (sprite->x < sRI.slideTarget)
        sprite->x += min(4, sRI.slideTarget - sprite->x);
    else
        sprite->x -= min(4, sprite->x - sRI.slideTarget);
    return sprite->x == sRI.slideTarget;
}

static u8 PlayerSlot(void)
{
    return sRI.gender == MALE ? SLOT_A : SLOT_B;
}

static const struct BigGfx *PlayerGfx(u8 frame)
{
    return sRI.gender == MALE ? &sGfx_Lucas[frame] : &sGfx_Dawn[frame];
}

// Animación de correr en el sitio del personaje elegido (4 frames, como en Platino)
static void UpdateAvatarRunAnim(u8 gender)
{
    if (sRI.animTimer)
    {
        sRI.animTimer--;
        return;
    }
    sRI.animTimer = 5;
    sRI.animFrame = (sRI.animFrame + 1) & 3;
    if (gender == MALE)
        SetSlotGfx(SLOT_A, &sGfx_Lucas[sRI.animFrame]);
    else
        SetSlotGfx(SLOT_B, &sGfx_Dawn[sRI.animFrame]);
}

static void DimAvatar(u8 gender, bool8 dim)
{
    u8 pal = gender == MALE ? PAL_LUCAS : PAL_DAWN;
    if (dim)
        BlendPalette(OBJ_PLTT_ID(pal), 16, 7, RGB_BLACK);
    else
        CpuCopy16(&gPlttBufferUnfaded[OBJ_PLTT_ID(pal)], &gPlttBufferFaded[OBJ_PLTT_ID(pal)], PLTT_SIZE_4BPP);
}

static void ShowGenderChoice(u8 gender)
{
    sRI.gender = gender;
    sRI.animFrame = 0;
    sRI.animTimer = 0;
    SetSlotGfx(SLOT_A, &sGfx_Lucas[0]);
    SetSlotGfx(SLOT_B, &sGfx_Dawn[0]);
    DimAvatar(MALE, gender != MALE);
    DimAvatar(FEMALE, gender != FEMALE);
}

// ---------------------------------------------------------------------------
// Texto y menús
// ---------------------------------------------------------------------------

static void PrintMessage(const u8 *str)
{
    FillWindowPixelBuffer(WIN_TEXT, PIXEL_FILL(1));
    StringExpandPlaceholders(gStringVar4, str);
    AddTextPrinterForMessage(TRUE);
}

static bool8 IsMessageDone(void)
{
    return !RunTextPrintersAndIsPrinter0Active();
}

static void ShowYesNo(void)
{
    CreateYesNoMenuParameterized(2, 1, FRAME_TILE_NUM, 0xDF, 2, 15);
}

static void ShowListMenu(const struct WindowTemplate *template, const struct MenuAction *actions, u8 count)
{
    sRI.menuWindowId = AddWindow(template);
    DrawStdFrameWithCustomTileAndPalette(sRI.menuWindowId, FALSE, FRAME_TILE_NUM, 2);
    FillWindowPixelBuffer(sRI.menuWindowId, PIXEL_FILL(1));
    PrintMenuTable(sRI.menuWindowId, count, actions);
    InitMenuInUpperLeftCornerNormal(sRI.menuWindowId, count, 0);
    PutWindowTilemap(sRI.menuWindowId);
    CopyWindowToVram(sRI.menuWindowId, COPYWIN_FULL);
}

static void CloseListMenu(void)
{
    ClearStdWindowAndFrameToTransparent(sRI.menuWindowId, TRUE);
    RemoveWindow(sRI.menuWindowId);
}

static void SetRivalName(const u8 *name)
{
    StringCopy_PlayerName(gSaveBlock1Ptr->rivalName, name);
}

// ---------------------------------------------------------------------------
// Preparación de escena (inicio y vuelta de la pantalla de nombres)
// ---------------------------------------------------------------------------

static void LoadSpritePals(void)
{
    LoadPalette(sRI_Rowan_Pal, OBJ_PLTT_ID(PAL_ROWAN), PLTT_SIZE_4BPP);
    LoadPalette(sRI_Buneary_Pal, OBJ_PLTT_ID(PAL_BUNEARY), PLTT_SIZE_4BPP);
    LoadPalette(sRI_Lucas_Pal, OBJ_PLTT_ID(PAL_LUCAS), PLTT_SIZE_4BPP);
    LoadPalette(sRI_Dawn_Pal, OBJ_PLTT_ID(PAL_DAWN), PLTT_SIZE_4BPP);
    LoadPalette(sRI_Barry_Pal, OBJ_PLTT_ID(PAL_BARRY), PLTT_SIZE_4BPP);
    LoadPalette(sRI_Ball_Pal, OBJ_PLTT_ID(PAL_BALL), PLTT_SIZE_4BPP);
    LoadPalette(sRI_LucasSil_Pal, OBJ_PLTT_ID(PAL_LUCAS_SIL), PLTT_SIZE_4BPP);
    LoadPalette(sRI_DawnSil_Pal, OBJ_PLTT_ID(PAL_DAWN_SIL), PLTT_SIZE_4BPP);
}

static void SetupScene(bool8 tvScene)
{
    u32 i;

    SetVBlankCallback(NULL);
    SetHBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetPaletteFade();
    ScanlineEffect_Stop();
    ResetSpriteData();
    FreeAllSpritePalettes();
    ResetTasks();
    FreeAllWindowBuffers();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    for (i = 0; i < 4; i++)
    {
        ChangeBgX(i, 0, BG_COORD_SET);
        ChangeBgY(i, 0, BG_COORD_SET);
    }
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);

    // Fondo degradado
    LoadBgTiles(BG_GRADIENT, sRI_Bg_Tiles, 16 * TILE_SIZE_4BPP, 0);
    LoadPalette(sRI_Bg_Pal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    SetGradient(sRI.gradCurrent);

    // Texto
    if (!tvScene)
    {
        InitWindows(sWindowTemplates);
        LoadBgTiles(BG_TEXT, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, FRAME_TILE_NUM);
        LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, BG_PLTT_ID(2), PLTT_SIZE_4BPP);
        LoadMessageBoxGfx(WIN_TEXT, DIALOG_TILE_NUM, BG_PLTT_ID(15));
        FillWindowPixelBuffer(WIN_TEXT, PIXEL_FILL(1));
        PutWindowTilemap(WIN_TEXT);
        DrawDialogFrameWithCustomTile(WIN_TEXT, FALSE, DIALOG_TILE_NUM);
        CopyWindowToVram(WIN_TEXT, COPYWIN_FULL);
    }

    // Sprites grandes
    LoadSpritePals();
    for (i = 0; i < NUM_SLOTS; i++)
    {
        struct SpriteSheet sheet = {sZeroTiles, sSlotTiles[i] * TILE_SIZE_4BPP, TAG_SLOT(i)};
        LoadSpriteSheet(&sheet);
        sRI.spriteIds[i] = CreateSprite(&sSpriteTemplates[i], 0, 0, 0);
        gSprites[sRI.spriteIds[i]].invisible = TRUE;
        sRI.pendingGfx[i] = NULL;
    }
    sRI.fading = FALSE;

    CreateTask(Task_RowanIntro, 0);
    BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    ShowBg(BG_TEXT);
    ShowBg(BG_GRADIENT);
    HideBg(BG_TVFRAME);
    HideBg(BG_PICTURE);
    EnableInterrupts(INTR_FLAG_VBLANK);
    SetVBlankCallback(VBlankCB_RowanIntro);
    SetMainCallback2(CB2_RowanIntro);
}

static void LoadTvScene(void)
{
    u32 i;
    for (i = 0; i < NUM_SLOTS; i++)
        HideSlot(i);
    FreeAllWindowBuffers();
    UnsetBgTilemapBuffer(BG_TEXT);
    InitWindows(sTvWindowTemplates);
    FillBgTilemapBufferRect_Palette0(BG_TEXT, 0, 0, 0, 32, 32);
    CopyBgTilemapBufferToVram(BG_TEXT);
    LoadBgTiles(BG_TVFRAME, sRI_TvFrame_Tiles, sRI_TvFrame_NUM_TILES * TILE_SIZE_4BPP, 16);
    LoadBgTilemap(BG_TVFRAME, sRI_TvFrame_Map, 32 * 32 * 2, 0);
    LoadPalette(sRI_TvFrame_Pal, BG_PLTT_ID(11), PLTT_SIZE_4BPP);
    LoadBgTiles(BG_PICTURE, sRI_Sandgem_Tiles, sRI_Sandgem_NUM_TILES * TILE_SIZE_4BPP, 0);
    LoadBgTilemap(BG_PICTURE, sRI_Sandgem_Map, 32 * 32 * 2, 0);
    LoadPalette(sRI_Sandgem_Pal, BG_PLTT_ID(1), sRI_Sandgem_NUM_PALS * PLTT_SIZE_4BPP);
    LoadPalette(sTvTextPal, BG_PLTT_ID(15), sizeof(sTvTextPal));
    HideBg(BG_GRADIENT);
    ShowBg(BG_TVFRAME);
    ShowBg(BG_PICTURE);
    ShowBg(BG_TEXT);
}

static void PrintTvText(void)
{
    static const u8 sColors[] = {TEXT_COLOR_TRANSPARENT, 1, 2};
    u8 line[64];
    const u8 *src = gText_RowanIntro_Tv;
    u32 y = 4, n;

    FillWindowPixelBuffer(0, PIXEL_FILL(0));
    while (*src != EOS)
    {
        n = 0;
        while (*src != EOS && *src != CHAR_NEWLINE && n < ARRAY_COUNT(line) - 1)
            line[n++] = *src++;
        line[n] = EOS;
        if (*src == CHAR_NEWLINE)
            src++;
        if (n)
            AddTextPrinterParameterized3(0, FONT_NORMAL, (26 * 8 - GetStringWidth(FONT_NORMAL, line, 0)) / 2, y, sColors, TEXT_SKIP_DRAW, line);
        y += 14;
    }
    PutWindowTilemap(0);
    CopyWindowToVram(0, COPYWIN_FULL);
}

// ---------------------------------------------------------------------------
// Bucle principal
// ---------------------------------------------------------------------------

static void Task_RowanIntro(u8 taskId)
{
    s8 input;

    UpdateGradient();
    UpdateSpriteFade();

    switch (sRI.state)
    {
    case RI_FADE_IN_BLACK:
        if (!gPaletteFade.active)
        {
            sRI.timer = 30;
            sRI.state = RI_WELCOME;
        }
        break;
    case RI_WELCOME:
        if (--sRI.timer == 0)
        {
            PrintMessage(gText_RowanIntro_HelloThere);
            sRI.state = RI_WELCOME_WAIT;
        }
        break;
    case RI_WELCOME_WAIT:
        if (IsMessageDone())
        {
            ShowSlot(SLOT_A, &sGfx_Rowan, POS_CENTER, POS_Y);
            HideSlot(SLOT_A);
            StartSpriteFade(1 << SLOT_A, TRUE, 1);
            AnimateGradientTo(GRAD_LIGHT);
            sRI.state = RI_ROWAN_APPEAR;
        }
        break;
    case RI_ROWAN_APPEAR:
        if (!sRI.fading)
        {
            PrintMessage(gText_RowanIntro_MyNameRowan);
            sRI.state = RI_ROWAN_INTRO_WAIT;
        }
        break;
    case RI_ROWAN_INTRO_WAIT:
        if (IsMessageDone())
        {
            StartSlide(SLOT_A, POS_RIGHT);
            sRI.state = RI_INFO_MOVE_ROWAN;
        }
        break;
    case RI_INFO_MOVE_ROWAN:
        if (UpdateSlide())
            sRI.state = RI_INFO_MENU;
        break;
    case RI_INFO_MENU:
        ShowListMenu(&sInfoMenuWindowTemplate, sInfoMenuActions, ARRAY_COUNT(sInfoMenuActions));
        sRI.state = RI_INFO_MENU_INPUT;
        break;
    case RI_INFO_MENU_INPUT:
        input = Menu_ProcessInputNoWrap();
        if (input == MENU_NOTHING_CHOSEN)
            break;
        if (input == MENU_B_PRESSED)
            break;
        PlaySE(SE_SELECT);
        CloseListMenu();
        sRI.infoPage = 0;
        if (input == 0)
        {
            PrintMessage(sControlInfoTexts[0]);
            sRI.state = RI_CONTROL_INFO;
        }
        else if (input == 1)
        {
            PrintMessage(sAdventureInfoTexts[0]);
            sRI.state = RI_ADVENTURE_INFO;
        }
        else
        {
            StartSlide(SLOT_A, POS_CENTER);
            sRI.state = RI_INFO_MOVE_ROWAN_BACK;
        }
        break;
    case RI_CONTROL_INFO:
        if (IsMessageDone())
        {
            if (++sRI.infoPage < ARRAY_COUNT(sControlInfoTexts))
            {
                PrintMessage(sControlInfoTexts[sRI.infoPage]);
            }
            else
            {
                PrintMessage(gText_RowanIntro_ControlInfoUnderstood);
                sRI.state = RI_CONTROL_INFO_UNDERSTOOD;
            }
        }
        break;
    case RI_CONTROL_INFO_UNDERSTOOD:
        if (IsMessageDone())
        {
            ShowYesNo();
            sRI.state = RI_CONTROL_INFO_YESNO;
        }
        break;
    case RI_CONTROL_INFO_YESNO:
        switch (Menu_ProcessInputNoWrapClearOnChoose())
        {
        case 0:
            PlaySE(SE_SELECT);
            PrintMessage(gText_RowanIntro_InfoAnythingElse);
            sRI.state = RI_ANYTHING_ELSE;
            break;
        case 1:
        case MENU_B_PRESSED:
            PlaySE(SE_SELECT);
            sRI.infoPage = 0;
            PrintMessage(sControlInfoTexts[0]);
            sRI.state = RI_CONTROL_INFO;
            break;
        }
        break;
    case RI_ADVENTURE_INFO:
        if (IsMessageDone())
        {
            if (++sRI.infoPage < ARRAY_COUNT(sAdventureInfoTexts))
            {
                PrintMessage(sAdventureInfoTexts[sRI.infoPage]);
            }
            else
            {
                PrintMessage(gText_RowanIntro_InfoAnythingElse);
                sRI.state = RI_ANYTHING_ELSE;
            }
        }
        break;
    case RI_ANYTHING_ELSE:
        if (IsMessageDone())
            sRI.state = RI_INFO_MENU;
        break;
    case RI_INFO_MOVE_ROWAN_BACK:
        if (UpdateSlide())
        {
            PrintMessage(gText_RowanIntro_WidelyInhabited);
            sRI.state = RI_WIDELY_INHABITED;
        }
        break;
    case RI_WIDELY_INHABITED:
        if (IsMessageDone())
        {
            StartSpriteFade(1 << SLOT_A, FALSE, 1);
            AnimateGradientTo(GRAD_DARK);
            sRI.state = RI_BALL_FADE_ROWAN;
        }
        break;
    case RI_BALL_FADE_ROWAN:
        if (!sRI.fading && sRI.gradCurrent == sRI.gradTarget)
        {
            ShowSlot(SLOT_C, &sGfx_Ball[0], POS_CENTER, POS_Y);
            HideSlot(SLOT_C);
            StartSpriteFade(1 << SLOT_C, TRUE, 2);
            sRI.state = RI_BALL_APPEAR;
        }
        break;
    case RI_BALL_APPEAR:
        if (!sRI.fading)
        {
            PrintMessage(gText_RowanIntro_HavePokeBall);
            sRI.state = RI_BALL_TEXT;
        }
        break;
    case RI_BALL_TEXT:
        if (IsMessageDone())
            sRI.state = RI_BALL_WAIT_INPUT;
        break;
    case RI_BALL_WAIT_INPUT:
        if (JOY_NEW(A_BUTTON))
        {
            FillWindowPixelBuffer(WIN_TEXT, PIXEL_FILL(1));
            CopyWindowToVram(WIN_TEXT, COPYWIN_GFX);
            sRI.subState = 0;
            sRI.timer = 0;
            sRI.state = RI_BALL_PUSH;
        }
        else if (JOY_NEW(B_BUTTON | START_BUTTON | SELECT_BUTTON | DPAD_ANY | L_BUTTON | R_BUTTON))
        {
            PrintMessage(gText_RowanIntro_PokeBallUseButton);
            sRI.state = RI_BALL_WRONG_BUTTON;
        }
        break;
    case RI_BALL_WRONG_BUTTON:
        if (IsMessageDone())
        {
            PrintMessage(gText_RowanIntro_HavePokeBall);
            sRI.state = RI_BALL_TEXT;
        }
        break;
    case RI_BALL_PUSH:
        if (sRI.timer)
        {
            sRI.timer--;
            break;
        }
        if (sRI.subState < 2)
        {
            sRI.subState++;
            SetSlotGfx(SLOT_C, &sGfx_Ball[sRI.subState]);
            sRI.timer = 6;
        }
        else
        {
            PlaySE(SE_BALL_OPEN);
            sRI.subState = 0;
            sRI.flashY = 0;
            SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_ALL | BLDCNT_EFFECT_LIGHTEN);
            sRI.state = RI_BALL_FLASH;
        }
        break;
    case RI_BALL_FLASH:
        // dos destellos rápidos y uno lento, como en Platino
        switch (sRI.subState)
        {
        case 0:
        case 2:
            sRI.flashY += 4;
            if (sRI.flashY >= 16)
            {
                sRI.flashY = 16;
                sRI.subState++;
            }
            break;
        case 1:
            sRI.flashY -= 4;
            if (sRI.flashY <= 0)
            {
                sRI.flashY = 0;
                sRI.subState++;
            }
            break;
        case 3:
            HideSlot(SLOT_C);
            ShowSlot(SLOT_A, &sGfx_Rowan, POS_CENTER - 24, POS_Y);
            ShowSlot(SLOT_B, &sGfx_Buneary, POS_CENTER + 44, POS_Y + 16);
            SetGradient(GRAD_LIGHT);
            sRI.gradTarget = GRAD_LIGHT;
            sRI.jumpStep = 0;
            sRI.subState++;
            break;
        case 4:
            if (sRI.jumpStep < ARRAY_COUNT(sBunearyJump))
                SlotSprite(SLOT_B)->y2 += sBunearyJump[sRI.jumpStep++];
            sRI.flashY--;
            if (sRI.flashY <= 0)
            {
                sRI.flashY = 0;
                sRI.subState++;
            }
            break;
        case 5:
            if (sRI.jumpStep < ARRAY_COUNT(sBunearyJump))
            {
                SlotSprite(SLOT_B)->y2 += sBunearyJump[sRI.jumpStep++];
                break;
            }
            SlotSprite(SLOT_B)->y2 = 0;
            SetGpuReg(REG_OFFSET_BLDCNT, 0);
            PlayCry_Normal(SPECIES_BUNEARY, 0);
            sRI.timer = 40;
            sRI.state = RI_BUNEARY_JUMP;
            break;
        }
        SetGpuReg(REG_OFFSET_BLDY, sRI.flashY);
        break;
    case RI_BUNEARY_JUMP:
        if (--sRI.timer == 0)
        {
            PrintMessage(gText_RowanIntro_LiveAlongsidePokemon);
            sRI.state = RI_LIVE_ALONGSIDE;
        }
        break;
    case RI_LIVE_ALONGSIDE:
        if (IsMessageDone())
        {
            StartSpriteFade(1 << SLOT_B, FALSE, 1);
            sRI.state = RI_PUT_AWAY_BUNEARY;
        }
        break;
    case RI_PUT_AWAY_BUNEARY:
        if (!sRI.fading)
        {
            StartSlide(SLOT_A, POS_CENTER);
            if (UpdateSlide())
            {
                PrintMessage(gText_RowanIntro_AboutYourself);
                sRI.state = RI_ABOUT_YOURSELF;
            }
        }
        break;
    case RI_ABOUT_YOURSELF:
        if (IsMessageDone())
        {
            StartSpriteFade(1 << SLOT_A, FALSE, 1);
            sRI.state = RI_GENDER_FADE_OUT_ROWAN;
        }
        break;
    case RI_GENDER_FADE_OUT_ROWAN:
        if (!sRI.fading)
        {
            ShowSlot(SLOT_A, &sGfx_Lucas[0], POS_LEFT, POS_Y);
            ShowSlot(SLOT_B, &sGfx_Dawn[0], POS_RIGHT, POS_Y);
            HideSlot(SLOT_A);
            HideSlot(SLOT_B);
            ShowGenderChoice(MALE);
            StartSpriteFade((1 << SLOT_A) | (1 << SLOT_B), TRUE, 1);
            sRI.state = RI_GENDER_FADE_IN_AVATARS;
        }
        break;
    case RI_GENDER_FADE_IN_AVATARS:
        if (!sRI.fading)
        {
            PrintMessage(gText_RowanIntro_GenderDialogue);
            sRI.state = RI_GENDER_TEXT;
        }
        break;
    case RI_GENDER_TEXT:
        UpdateAvatarRunAnim(sRI.gender);
        if (JOY_NEW(DPAD_LEFT) && sRI.gender != MALE)
            ShowGenderChoice(MALE);
        else if (JOY_NEW(DPAD_RIGHT) && sRI.gender != FEMALE)
            ShowGenderChoice(FEMALE);
        if (IsMessageDone())
            sRI.state = RI_GENDER_CHOOSE;
        break;
    case RI_GENDER_CHOOSE:
        UpdateAvatarRunAnim(sRI.gender);
        if (JOY_NEW(DPAD_LEFT) && sRI.gender != MALE)
        {
            PlaySE(SE_SELECT);
            ShowGenderChoice(MALE);
        }
        else if (JOY_NEW(DPAD_RIGHT) && sRI.gender != FEMALE)
        {
            PlaySE(SE_SELECT);
            ShowGenderChoice(FEMALE);
        }
        else if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            PrintMessage(sRI.gender == MALE ? gText_RowanIntro_ConfirmBoy : gText_RowanIntro_ConfirmGirl);
            sRI.state = RI_GENDER_CONFIRM;
        }
        break;
    case RI_GENDER_CONFIRM:
        UpdateAvatarRunAnim(sRI.gender);
        if (IsMessageDone())
        {
            ShowYesNo();
            sRI.state = RI_GENDER_CONFIRM_YESNO;
        }
        break;
    case RI_GENDER_CONFIRM_YESNO:
        UpdateAvatarRunAnim(sRI.gender);
        switch (Menu_ProcessInputNoWrapClearOnChoose())
        {
        case 0:
            PlaySE(SE_SELECT);
            gSaveBlock2Ptr->playerGender = sRI.gender;
            SetSlotGfx(PlayerSlot(), PlayerGfx(0));
            StartSpriteFade(1 << (sRI.gender == MALE ? SLOT_B : SLOT_A), FALSE, 2);
            StartSlide(PlayerSlot(), POS_CENTER);
            sRI.state = RI_GENDER_CENTRE_AVATAR;
            break;
        case 1:
        case MENU_B_PRESSED:
            PlaySE(SE_SELECT);
            PrintMessage(gText_RowanIntro_GenderDialogue);
            sRI.state = RI_GENDER_TEXT;
            break;
        }
        break;
    case RI_GENDER_CENTRE_AVATAR:
        if (!sRI.fading && UpdateSlide())
        {
            PrintMessage(gText_RowanIntro_NameDialogue);
            sRI.state = RI_NAME_TEXT;
        }
        break;
    case RI_NAME_TEXT:
        if (IsMessageDone())
            sRI.state = RI_NAME_WAIT;
        break;
    case RI_NAME_WAIT:
        if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            sRI.state = RI_NAME_START_KEYBOARD;
        }
        break;
    case RI_NAME_START_KEYBOARD:
        if (!gPaletteFade.active)
        {
            StringCopy_PlayerName(gSaveBlock2Ptr->playerName, sRI.gender == MALE ? sText_DefaultNameLucas : sText_DefaultNameDawn);
            FreeAllWindowBuffers();
            DestroyTask(taskId);
            DoNamingScreen(NAMING_SCREEN_PLAYER, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_ReturnFromPlayerNaming);
        }
        break;
    case RI_NAME_RETURN:
        if (!gPaletteFade.active)
        {
            PrintMessage(gText_RowanIntro_ConfirmNameMale);
            sRI.state = RI_NAME_CONFIRM_YESNO;
            sRI.subState = 0;
        }
        break;
    case RI_NAME_CONFIRM_YESNO:
        if (sRI.subState == 0)
        {
            if (IsMessageDone())
            {
                ShowYesNo();
                sRI.subState = 1;
            }
            break;
        }
        switch (Menu_ProcessInputNoWrapClearOnChoose())
        {
        case 0:
            PlaySE(SE_SELECT);
            StartSpriteFade(1 << PlayerSlot(), FALSE, 1);
            sRI.state = RI_NAME_FADE_OUT_AVATAR;
            break;
        case 1:
        case MENU_B_PRESSED:
            PlaySE(SE_SELECT);
            PrintMessage(gText_RowanIntro_NameDialogue);
            sRI.state = RI_NAME_TEXT;
            break;
        }
        break;
    case RI_NAME_FADE_OUT_AVATAR:
        if (!sRI.fading)
        {
            ShowSlot(SLOT_A, &sGfx_Rowan, POS_CENTER, POS_Y);
            HideSlot(SLOT_A);
            StartSpriteFade(1 << SLOT_A, TRUE, 1);
            sRI.state = RI_SO_YOURE;
        }
        break;
    case RI_SO_YOURE:
        if (!sRI.fading)
        {
            PrintMessage(gText_RowanIntro_SoYoure);
            sRI.state = RI_SO_YOURE_WAIT;
        }
        break;
    case RI_SO_YOURE_WAIT:
        if (IsMessageDone())
        {
            StartSpriteFade(1 << SLOT_A, FALSE, 1);
            sRI.state = RI_RIVAL_FADE_IN;
            sRI.subState = 0;
        }
        break;
    case RI_RIVAL_FADE_IN:
        if (sRI.fading)
            break;
        if (sRI.subState == 0)
        {
            ShowSlot(SLOT_B, &sGfx_Barry, POS_CENTER, POS_Y);
            HideSlot(SLOT_B);
            StartSpriteFade(1 << SLOT_B, TRUE, 1);
            sRI.subState = 1;
        }
        else
        {
            PrintMessage(gText_RowanIntro_RivalNameDialogue);
            sRI.state = RI_RIVAL_NAME_TEXT;
        }
        break;
    case RI_RIVAL_NAME_TEXT:
        if (IsMessageDone())
        {
            StartSlide(SLOT_B, POS_RIGHT);
            sRI.state = RI_RIVAL_MOVE_RIGHT;
        }
        break;
    case RI_RIVAL_MOVE_RIGHT:
        if (UpdateSlide())
            sRI.state = RI_RIVAL_MENU;
        break;
    case RI_RIVAL_MENU:
        ShowListMenu(&sRivalMenuWindowTemplate, sRivalMenuActions, ARRAY_COUNT(sRivalMenuActions));
        sRI.state = RI_RIVAL_MENU_INPUT;
        break;
    case RI_RIVAL_MENU_INPUT:
        input = Menu_ProcessInputNoWrap();
        if (input == MENU_NOTHING_CHOSEN || input == MENU_B_PRESSED)
            break;
        PlaySE(SE_SELECT);
        CloseListMenu();
        if (input == 0)
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            sRI.state = RI_RIVAL_START_KEYBOARD;
        }
        else
        {
            SetRivalName(sRivalMenuActions[input].text);
            StartSlide(SLOT_B, POS_CENTER);
            sRI.state = RI_RIVAL_MOVE_LEFT;
        }
        break;
    case RI_RIVAL_MOVE_LEFT:
        if (UpdateSlide())
        {
            PrintMessage(gText_RowanIntro_ConfirmRivalName);
            sRI.state = RI_RIVAL_CONFIRM_YESNO;
            sRI.subState = 0;
        }
        break;
    case RI_RIVAL_START_KEYBOARD:
        if (!gPaletteFade.active)
        {
            SetRivalName(gText_RowanIntro_RivalChoiceBarry);
            FreeAllWindowBuffers();
            DestroyTask(taskId);
            DoNamingScreen(NAMING_SCREEN_RIVAL, gSaveBlock1Ptr->rivalName, 0, 0, 0, CB2_ReturnFromRivalNaming);
        }
        break;
    case RI_RIVAL_RETURN:
        if (!gPaletteFade.active)
        {
            if (gSaveBlock1Ptr->rivalName[0] == EOS)
                SetRivalName(gText_RowanIntro_RivalChoiceBarry);
            PrintMessage(gText_RowanIntro_ConfirmRivalName);
            sRI.state = RI_RIVAL_CONFIRM_YESNO;
            sRI.subState = 0;
        }
        break;
    case RI_RIVAL_CONFIRM_YESNO:
        if (sRI.subState == 0)
        {
            if (IsMessageDone())
            {
                ShowYesNo();
                sRI.subState = 1;
            }
            break;
        }
        switch (Menu_ProcessInputNoWrapClearOnChoose())
        {
        case 0:
            PlaySE(SE_SELECT);
            StartSpriteFade(1 << SLOT_B, FALSE, 1);
            sRI.state = RI_RIVAL_FADE_OUT;
            break;
        case 1:
        case MENU_B_PRESSED:
            PlaySE(SE_SELECT);
            PrintMessage(gText_RowanIntro_RivalNameDialogue);
            sRI.state = RI_RIVAL_NAME_TEXT;
            break;
        }
        break;
    case RI_RIVAL_FADE_OUT:
        if (!sRI.fading)
        {
            ShowSlot(SLOT_A, &sGfx_Rowan, POS_CENTER, POS_Y);
            HideSlot(SLOT_A);
            StartSpriteFade(1 << SLOT_A, TRUE, 1);
            sRI.state = RI_END_DIALOGUE;
        }
        break;
    case RI_END_DIALOGUE:
        if (!sRI.fading)
        {
            PrintMessage(gText_RowanIntro_EndDialogue);
            sRI.state = RI_END_DIALOGUE_WAIT;
        }
        break;
    case RI_END_DIALOGUE_WAIT:
        if (IsMessageDone())
        {
            ClearDialogWindowAndFrame(WIN_TEXT, TRUE);
            StartSpriteFade(1 << SLOT_A, FALSE, 1);
            AnimateGradientTo(GRAD_BAND);
            sRI.state = RI_END_AVATAR_FADE_IN;
            sRI.subState = 0;
        }
        break;
    case RI_END_AVATAR_FADE_IN:
        if (sRI.fading)
            break;
        if (sRI.subState == 0)
        {
            ShowSlot(PlayerSlot(), PlayerGfx(0), POS_CENTER, POS_Y);
            HideSlot(PlayerSlot());
            StartSpriteFade(1 << PlayerSlot(), TRUE, 1);
            sRI.subState = 1;
            sRI.timer = 40;
        }
        else if (--sRI.timer == 0)
        {
            sRI.subState = 0;
            sRI.timer = 0;
            FadeOutBGM(4);
            sRI.state = RI_END_SHRINK;
        }
        break;
    case RI_END_SHRINK:
        // el personaje se vuelve silueta y va encogiendo hasta desaparecer
        if (sRI.subState <= 16)
        {
            BlendPalette(OBJ_PLTT_ID(sRI.gender == MALE ? PAL_LUCAS : PAL_DAWN), 16, sRI.subState, RGB(29, 29, 31));
            sRI.subState++;
            if (sRI.subState > 16)
                sRI.timer = 0;
            break;
        }
        if (sRI.timer)
        {
            sRI.timer--;
            break;
        }
        if (sRI.subState < 17 + 4)
        {
            const struct BigGfx *sil = sRI.gender == MALE ? &sGfx_LucasSil[sRI.subState - 17] : &sGfx_DawnSil[sRI.subState - 17];
            HideSlot(PlayerSlot());
            ShowSlot(SLOT_C, sil, POS_CENTER, POS_Y);
            if (sRI.subState == 17)
                PlaySE(SE_M_TELEPORT);
            sRI.subState++;
            sRI.timer = 5;
        }
        else
        {
            HideSlot(SLOT_C);
            BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_WHITEALPHA);
            sRI.state = RI_END_FADE_WHITE;
        }
        break;
    case RI_END_FADE_WHITE:
        if (!gPaletteFade.active)
        {
            BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 16, RGB_BLACK);
            sRI.timer = 30;
            sRI.state = RI_TV_LOAD;
        }
        break;
    case RI_TV_LOAD:
        if (gPaletteFade.active)
            break;
        if (sRI.timer == 30)
        {
            PlayBGM(MUS_DPP_TV);
            LoadTvScene();
            BlendPalettes(PALETTES_ALL, 16, RGB_BLACK);
        }
        if (--sRI.timer == 0)
        {
            BeginNormalPaletteFade(PALETTES_ALL, 1, 16, 0, RGB_BLACK);
            sRI.timer = 60;
            sRI.state = RI_TV_SHOW_TEXT;
        }
        break;
    case RI_TV_SHOW_TEXT:
        if (gPaletteFade.active)
            break;
        if (--sRI.timer == 0)
        {
            // oscurecer la imagen para que se lea el texto
            BlendPalettes(0x7FE, 8, RGB_BLACK);
            CpuCopy16(&gPlttBufferFaded[BG_PLTT_ID(1)], &gPlttBufferUnfaded[BG_PLTT_ID(1)], 10 * PLTT_SIZE_4BPP);
            PrintTvText();
            sRI.timer = 240;
            sRI.state = RI_TV_WAIT;
        }
        break;
    case RI_TV_WAIT:
        if (sRI.timer)
            sRI.timer--;
        else if (JOY_NEW(A_BUTTON | B_BUTTON))
        {
            BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_BLACK);
            FadeOutBGM(4);
            sRI.state = RI_TV_FADE_OUT;
        }
        break;
    case RI_TV_FADE_OUT:
        if (!gPaletteFade.active)
            sRI.state = RI_EXIT;
        break;
    case RI_EXIT:
        FreeAllWindowBuffers();
        ResetSpriteData();
        FreeAllSpritePalettes();
        SetGpuReg(REG_OFFSET_BLDCNT, 0);
        SetGpuReg(REG_OFFSET_BLDY, 0);
        DestroyTask(taskId);
        SetMainCallback2(CB2_NewGame);
        break;
    }
}

// ---------------------------------------------------------------------------
// Vuelta de la pantalla de nombres
// ---------------------------------------------------------------------------

static void CB2_ReturnFromPlayerNaming(void)
{
    sRI.gradCurrent = sRI.gradTarget = GRAD_LIGHT;
    sRI.gender = gSaveBlock2Ptr->playerGender;
    SetupScene(FALSE);
    ShowSlot(PlayerSlot(), PlayerGfx(0), POS_CENTER, POS_Y);
    sRI.state = RI_NAME_RETURN;
}

static void CB2_ReturnFromRivalNaming(void)
{
    sRI.gradCurrent = sRI.gradTarget = GRAD_LIGHT;
    SetupScene(FALSE);
    ShowSlot(SLOT_B, &sGfx_Barry, POS_CENTER, POS_Y);
    sRI.state = RI_RIVAL_RETURN;
}
