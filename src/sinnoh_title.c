// Proyecto Sinnoh: pantalla de título de Platino.
// Logo "Pokémon Platinum Version" (res/graphics/title_screen/logo de pokeplatinum),
// Giratina Origen saliendo del portal del Mundo Distorsión y la música SEQ_TITLE01.
// En Platino Giratina es un modelo 3D; aquí se usa su sprite de combate de Platino a 2x.
#include "global.h"
#include "bg.h"
#include "berry_fix_program.h"
#include "clear_save_data_menu.h"
#include "config/quickstart.h"
#include "event_data.h"
#include "gpu_regs.h"
#include "intro.h"
#include "m4a.h"
#include "main.h"
#include "main_menu.h"
#include "menu.h"
#include "palette.h"
#include "quickstart.h"
#include "reset_rtc_screen.h"
#include "scanline_effect.h"
#include "sinnoh_title.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "trig.h"
#include "window.h"
#include "constants/rgb.h"
#include "constants/songs.h"

#include "data/sinnoh_title_gfx.h"

#define CLEAR_SAVE_BUTTON_COMBO   (B_BUTTON | SELECT_BUTTON | DPAD_UP)
#define RESET_RTC_BUTTON_COMBO    (B_BUTTON | SELECT_BUTTON | DPAD_LEFT)
#define BERRY_UPDATE_BUTTON_COMBO (B_BUTTON | SELECT_BUTTON)

#define BG_TEXT     0
#define BG_LOGO     1
#define BG_GIRATINA 2
#define BG_PORTAL   3

#define PAL_PORTAL   0
#define PAL_GIRATINA 1
#define PAL_LOGO     2
#define PAL_TEXT     15

// Tiempo hasta volver a la película (como hace Platino)
#define TITLE_TIMEOUT (60 * 45)

enum { WIN_PRESS_START, WIN_COPYRIGHT };

static const struct BgTemplate sBgTemplates[] =
{
    {.bg = BG_TEXT,     .charBaseIndex = 3, .mapBaseIndex = 31, .priority = 0},
    {.bg = BG_LOGO,     .charBaseIndex = 2, .mapBaseIndex = 30, .priority = 1},
    {.bg = BG_GIRATINA, .charBaseIndex = 1, .mapBaseIndex = 29, .priority = 2},
    {.bg = BG_PORTAL,   .charBaseIndex = 0, .mapBaseIndex = 28, .priority = 3},
};

static const struct WindowTemplate sWindowTemplates[] =
{
    [WIN_PRESS_START] = {
        .bg = BG_TEXT,
        .tilemapLeft = 2,
        .tilemapTop = 14,
        .width = 10,
        .height = 2,
        .paletteNum = PAL_TEXT,
        .baseBlock = 1,
    },
    [WIN_COPYRIGHT] = {
        .bg = BG_TEXT,
        .tilemapLeft = 1,
        .tilemapTop = 18,
        .width = 28,
        .height = 2,
        .paletteNum = PAL_TEXT,
        .baseBlock = 21,
    },
    DUMMY_WIN_TEMPLATE
};

static const u16 sTextPal[] = {RGB_BLACK, RGB_WHITE, RGB(6, 4, 10), RGB(22, 20, 26)};
static const u8 sTextColors[] = {TEXT_COLOR_TRANSPARENT, 1, 2};
static const u8 sCopyColors[] = {TEXT_COLOR_TRANSPARENT, 3, 2};
static const u8 sText_PressStart[] = _("PRESS START");
static const u8 sText_Copyright[] = _("2009 POKéMON   1995-2009 GAME FREAK inc.");

#define tCounter data[0]
#define tPortalStep data[1]

static void Task_SinnohTitle(u8 taskId);

static void CB2_SinnohTitle(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    RunTextPrinters();
    UpdatePaletteFade();
}

static void VBlankCB_SinnohTitle(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void LoadLayer(u8 bg, const u32 *tiles, u32 numTiles, const u16 *map, const u16 *pal, u8 numPals, u8 palSlot)
{
    u32 i;
    u16 *dst = (u16 *)BG_SCREEN_ADDR(sBgTemplates[bg].mapBaseIndex);
    CpuCopy32(tiles, (void *)BG_CHAR_ADDR(sBgTemplates[bg].charBaseIndex), numTiles * TILE_SIZE_4BPP);
    for (i = 0; i < 32 * 32; i++)
        dst[i] = (map[i] & 0x0FFF) | (((map[i] >> 12) + palSlot) << 12);
    LoadPalette(pal, BG_PLTT_ID(palSlot), numPals * PLTT_SIZE_4BPP);
}

static void PrintPressStart(bool8 show)
{
    FillWindowPixelBuffer(WIN_PRESS_START, PIXEL_FILL(0));
    if (show)
        AddTextPrinterParameterized3(WIN_PRESS_START, FONT_NORMAL, 4, 1, sTextColors, TEXT_SKIP_DRAW, sText_PressStart);
    CopyWindowToVram(WIN_PRESS_START, COPYWIN_GFX);
}

void CB2_InitSinnohTitleScreen(void)
{
    u8 taskId;

    SetVBlankCallback(NULL);
    SetHBlankCallback(NULL);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetPaletteFade();
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    FreeAllSpritePalettes();
    FreeAllWindowBuffers();
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);

    LoadLayer(BG_PORTAL, sTi_Portal_Tiles, sTi_Portal_NUM_TILES, sTi_Portal_Map, sTi_Portal_Pal, 1, PAL_PORTAL);
    LoadLayer(BG_GIRATINA, sTi_Giratina_Tiles, sTi_Giratina_NUM_TILES, sTi_Giratina_Map, sTi_Giratina_Pal, sTi_Giratina_NUM_PALS, PAL_GIRATINA);
    LoadLayer(BG_LOGO, sTi_Logo_Tiles, sTi_Logo_NUM_TILES, sTi_Logo_Map, sTi_Logo_Pal, sTi_Logo_NUM_PALS, PAL_LOGO);
    // Giratina a la derecha, el logo arriba a la izquierda
    SetGpuReg(REG_OFFSET_BG2HOFS, (u16)-(DISPLAY_WIDTH - sTi_Giratina_W * 8));
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, (u16)-4);
    SetGpuReg(REG_OFFSET_BG1VOFS, (u16)-6);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    SetGpuReg(REG_OFFSET_BG3HOFS, 0);
    SetGpuReg(REG_OFFSET_BG3VOFS, 0);

    InitWindows(sWindowTemplates);
    LoadPalette(sTextPal, BG_PLTT_ID(PAL_TEXT), sizeof(sTextPal));
    FillWindowPixelBuffer(WIN_COPYRIGHT, PIXEL_FILL(0));
    AddTextPrinterParameterized3(WIN_COPYRIGHT, FONT_SMALL, (28 * 8 - GetStringWidth(FONT_SMALL, sText_Copyright, 0)) / 2, 2, sCopyColors, TEXT_SKIP_DRAW, sText_Copyright);
    PutWindowTilemap(WIN_COPYRIGHT);
    CopyWindowToVram(WIN_COPYRIGHT, COPYWIN_FULL);
    PutWindowTilemap(WIN_PRESS_START);
    PrintPressStart(TRUE);
    CopyBgTilemapBufferToVram(BG_TEXT);

    taskId = CreateTask(Task_SinnohTitle, 0);
    gTasks[taskId].tCounter = 0;
    BlendPalettes(PALETTES_ALL, 16, RGB_WHITE);
    BeginNormalPaletteFade(PALETTES_ALL, 1, 16, 0, RGB_WHITEALPHA);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0 | DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
    ShowBg(BG_TEXT);
    ShowBg(BG_LOGO);
    ShowBg(BG_GIRATINA);
    ShowBg(BG_PORTAL);
    EnableInterrupts(INTR_FLAG_VBLANK);
    SetVBlankCallback(VBlankCB_SinnohTitle);
    SetMainCallback2(CB2_SinnohTitle);
    PlayBGM(MUS_DPP_TITLE);
}

static void CB2_GoTo(MainCallback cb)
{
    if (!UpdatePaletteFade())
        SetMainCallback2(cb);
}
static void CB2_GoToMainMenu(void) { CB2_GoTo(CB2_InitMainMenu); }
static void CB2_GoToCopyright(void) { CB2_GoTo(CB2_InitCopyrightScreenAfterTitleScreen); }
static void CB2_GoToClearSave(void) { CB2_GoTo(CB2_InitClearSaveDataScreen); }
static void CB2_GoToResetRtc(void) { CB2_GoTo(CB2_InitResetRtcScreen); }
static void CB2_GoToBerryFix(void)
{
    if (!UpdatePaletteFade())
    {
        m4aMPlayAllStop();
        SetMainCallback2(CB2_InitBerryFixProgram);
    }
}

// El portal gira: los colores 3..8 de su paleta rotan
static void CyclePortal(void)
{
    u16 *pal = &gPlttBufferFaded[BG_PLTT_ID(PAL_PORTAL) + 3];
    u16 *unf = &gPlttBufferUnfaded[BG_PLTT_ID(PAL_PORTAL) + 3];
    u16 last = unf[5];
    s32 i;
    for (i = 5; i > 0; i--)
        unf[i] = unf[i - 1];
    unf[0] = last;
    if (!gPaletteFade.active)
        CpuCopy16(unf, pal, 6 * sizeof(u16));
}

static void Task_SinnohTitle(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (gPaletteFade.active)
        return;

    tCounter++;
    if ((tCounter % 6) == 0)
        CyclePortal();
    // Giratina flota
    SetGpuReg(REG_OFFSET_BG2VOFS, (u16)(Sin(tCounter & 0xFF, 3)));
    if ((tCounter % 32) == 0)
        PrintPressStart((tCounter / 32) & 1 ? FALSE : TRUE);

    if (QUICKSTART && JOY_NEW(SELECT_BUTTON))
        Quickstart();

    if (JOY_NEW(A_BUTTON) || JOY_NEW(START_BUTTON))
    {
        PlayCry_Normal(SPECIES_GIRATINA_ORIGIN, 0);
        FadeOutBGM(4);
        BeginNormalPaletteFade(PALETTES_ALL, 4, 0, 16, RGB_WHITEALPHA);
        SetMainCallback2(CB2_GoToMainMenu);
    }
    else if (JOY_HELD(CLEAR_SAVE_BUTTON_COMBO) == CLEAR_SAVE_BUTTON_COMBO)
    {
        SetMainCallback2(CB2_GoToClearSave);
    }
    else if (JOY_HELD(RESET_RTC_BUTTON_COMBO) == RESET_RTC_BUTTON_COMBO && CanResetRTC() == TRUE)
    {
        FadeOutBGM(4);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        SetMainCallback2(CB2_GoToResetRtc);
    }
    else if (JOY_HELD(BERRY_UPDATE_BUTTON_COMBO) == BERRY_UPDATE_BUTTON_COMBO)
    {
        FadeOutBGM(4);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        SetMainCallback2(CB2_GoToBerryFix);
    }
    else if (tCounter >= TITLE_TIMEOUT)
    {
        FadeOutBGM(4);
        BeginNormalPaletteFade(PALETTES_ALL, 2, 0, 16, RGB_WHITEALPHA);
        SetMainCallback2(CB2_GoToCopyright);
    }
}
