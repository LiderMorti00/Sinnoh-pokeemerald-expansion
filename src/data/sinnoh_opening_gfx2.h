// Generado automáticamente por gfxgen.py (Proyecto Sinnoh)
#ifndef GUARD_DATA_SINNOH_OPENING_GFX2_H
#define GUARD_DATA_SINNOH_OPENING_GFX2_H

#define sOp_Emblem_PW 64
#define sOp_Emblem_PH 96
static const u16 sOp_Emblem_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Emblem_0.png", ".gbapal");
static const u32 sOp_Emblem0_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/Emblem_0.png", ".4bpp");
static const struct Subsprite sOp_Emblem0_Subsprites[] = { {.x = -32, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0}, {.x = 0, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 16}, {.x = -32, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 32}, {.x = 0, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 48}, {.x = -32, .y = 16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 64}, {.x = 0, .y = 16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 80} };
static const struct SubspriteTable sOp_Emblem0_SubspriteTable[] = { {ARRAY_COUNT(sOp_Emblem0_Subsprites), sOp_Emblem0_Subsprites} };
#define sOp_Emblem0_SIZE (3072)
static const u32 sOp_GfText_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/GfText_tiles.png", ".4bpp");
static const u16 sOp_GfText_Pal[] = INCGFX_U16("graphics/sinnoh_opening/GfText.pal", ".gbapal");
static const u16 sOp_GfText_Map[] = INCBIN_U16("graphics/sinnoh_opening/GfText_map.bin");
#define sOp_GfText_NUM_PALS 1
#define sOp_GfText_NUM_TILES 48
#define sOp_GfText_W 24
#define sOp_GfText_H 4
#define sOp_Sparkle_PW 32
#define sOp_Sparkle_PH 32
static const u16 sOp_Sparkle_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Sparkle_0.png", ".gbapal");
static const u32 sOp_Sparkle0_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/Sparkle_0.png", ".4bpp");
static const struct Subsprite sOp_Sparkle0_Subsprites[] = { {.x = -16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0} };
static const struct SubspriteTable sOp_Sparkle0_SubspriteTable[] = { {ARRAY_COUNT(sOp_Sparkle0_Subsprites), sOp_Sparkle0_Subsprites} };
#define sOp_Sparkle0_SIZE (512)
static const u32 sOp_Sparkle1_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/Sparkle_1.png", ".4bpp");
static const struct Subsprite sOp_Sparkle1_Subsprites[] = { {.x = -16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0} };
static const struct SubspriteTable sOp_Sparkle1_SubspriteTable[] = { {ARRAY_COUNT(sOp_Sparkle1_Subsprites), sOp_Sparkle1_Subsprites} };
#define sOp_Sparkle1_SIZE (512)
#define sOp_Bubble_PW 32
#define sOp_Bubble_PH 32
static const u16 sOp_Bubble_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Bubble_0.png", ".gbapal");
static const u32 sOp_Bubble0_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/Bubble_0.png", ".4bpp");
static const struct Subsprite sOp_Bubble0_Subsprites[] = { {.x = -16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0} };
static const struct SubspriteTable sOp_Bubble0_SubspriteTable[] = { {ARRAY_COUNT(sOp_Bubble0_Subsprites), sOp_Bubble0_Subsprites} };
#define sOp_Bubble0_SIZE (512)
static const u32 sOp_Bubble1_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/Bubble_1.png", ".4bpp");
static const struct Subsprite sOp_Bubble1_Subsprites[] = { {.x = -16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0} };
static const struct SubspriteTable sOp_Bubble1_SubspriteTable[] = { {ARRAY_COUNT(sOp_Bubble1_Subsprites), sOp_Bubble1_Subsprites} };
#define sOp_Bubble1_SIZE (512)
static const u32 sOp_Rays_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/Rays_tiles.png", ".4bpp");
static const u16 sOp_Rays_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Rays.pal", ".gbapal");
static const u16 sOp_Rays_Map[] = INCBIN_U16("graphics/sinnoh_opening/Rays_map.bin");
#define sOp_Rays_NUM_PALS 1
#define sOp_Rays_NUM_TILES 256
#define sOp_Rays_W 30
#define sOp_Rays_H 20
static const u32 sOp_MapRoute_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/MapRoute_tiles.png", ".4bpp");
static const u16 sOp_MapRoute_Pal[] = INCGFX_U16("graphics/sinnoh_opening/MapRoute.pal", ".gbapal");
static const u16 sOp_MapRoute_Map[] = INCBIN_U16("graphics/sinnoh_opening/MapRoute_map.bin");
#define sOp_MapRoute_NUM_PALS 3
#define sOp_MapRoute_NUM_TILES 64
static const u32 sOp_MapForest_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/MapForest_tiles.png", ".4bpp");
static const u16 sOp_MapForest_Pal[] = INCGFX_U16("graphics/sinnoh_opening/MapForest.pal", ".gbapal");
static const u16 sOp_MapForest_Map[] = INCBIN_U16("graphics/sinnoh_opening/MapForest_map.bin");
#define sOp_MapForest_NUM_PALS 3
#define sOp_MapForest_NUM_TILES 96
static const u32 sOp_MapCity_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/MapCity_tiles.png", ".4bpp");
static const u16 sOp_MapCity_Pal[] = INCGFX_U16("graphics/sinnoh_opening/MapCity.pal", ".gbapal");
static const u16 sOp_MapCity_Map[] = INCBIN_U16("graphics/sinnoh_opening/MapCity_map.bin");
#define sOp_MapCity_NUM_PALS 6
#define sOp_MapCity_NUM_TILES 256
static const u32 sOp_Hole_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/Hole_tiles.png", ".4bpp");
static const u16 sOp_Hole_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Hole.pal", ".gbapal");
static const u16 sOp_Hole_Map[] = INCBIN_U16("graphics/sinnoh_opening/Hole_map.bin");
#define sOp_Hole_NUM_PALS 12
#define sOp_Hole_NUM_TILES 448
static const u32 sOp_HoleOrb_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/HoleOrb_tiles.png", ".4bpp");
static const u16 sOp_HoleOrb_Pal[] = INCGFX_U16("graphics/sinnoh_opening/HoleOrb.pal", ".gbapal");
static const u16 sOp_HoleOrb_Map[] = INCBIN_U16("graphics/sinnoh_opening/HoleOrb_map.bin");
#define sOp_HoleOrb_NUM_PALS 12
#define sOp_HoleOrb_NUM_TILES 512
static const u32 sOp_Vortex_Tiles[] = INCGFX_U32("graphics/sinnoh_opening/Vortex_tiles.png", ".4bpp");
static const u16 sOp_Vortex_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Vortex.pal", ".gbapal");
static const u16 sOp_Vortex_Map[] = INCBIN_U16("graphics/sinnoh_opening/Vortex_map.bin");
#define sOp_Vortex_NUM_PALS 12
#define sOp_Vortex_NUM_TILES 464
#define sOp_Eyes_PW 64
#define sOp_Eyes_PH 32
static const u16 sOp_Eyes_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Eyes_0.png", ".gbapal");
static const u32 sOp_Eyes0_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/Eyes_0.png", ".4bpp");
static const struct Subsprite sOp_Eyes0_Subsprites[] = { {.x = -32, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0}, {.x = 0, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 16} };
static const struct SubspriteTable sOp_Eyes0_SubspriteTable[] = { {ARRAY_COUNT(sOp_Eyes0_Subsprites), sOp_Eyes0_Subsprites} };
#define sOp_Eyes0_SIZE (1024)
#define sOp_Mouth_PW 64
#define sOp_Mouth_PH 32
static const u16 sOp_Mouth_Pal[] = INCGFX_U16("graphics/sinnoh_opening/Mouth_0.png", ".gbapal");
static const u32 sOp_Mouth0_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/Mouth_0.png", ".4bpp");
static const struct Subsprite sOp_Mouth0_Subsprites[] = { {.x = -32, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0}, {.x = 0, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 16} };
static const struct SubspriteTable sOp_Mouth0_SubspriteTable[] = { {ARRAY_COUNT(sOp_Mouth0_Subsprites), sOp_Mouth0_Subsprites} };
#define sOp_Mouth0_SIZE (1024)
#define sOp_InfernapeFull_PW 96
#define sOp_InfernapeFull_PH 96
static const u16 sOp_InfernapeFull_Pal[] = INCGFX_U16("graphics/sinnoh_opening/InfernapeFull_0.png", ".gbapal");
static const u32 sOp_InfernapeFull0_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/InfernapeFull_0.png", ".4bpp");
static const struct Subsprite sOp_InfernapeFull0_Subsprites[] = { {.x = -48, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0}, {.x = -16, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 16}, {.x = 16, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 32}, {.x = -48, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 48}, {.x = -16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 64}, {.x = 16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 80}, {.x = -48, .y = 16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 96}, {.x = -16, .y = 16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 112}, {.x = 16, .y = 16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 128} };
static const struct SubspriteTable sOp_InfernapeFull0_SubspriteTable[] = { {ARRAY_COUNT(sOp_InfernapeFull0_Subsprites), sOp_InfernapeFull0_Subsprites} };
#define sOp_InfernapeFull0_SIZE (4608)
#define sOp_EmpoleonFull_PW 96
#define sOp_EmpoleonFull_PH 96
static const u16 sOp_EmpoleonFull_Pal[] = INCGFX_U16("graphics/sinnoh_opening/EmpoleonFull_0.png", ".gbapal");
static const u32 sOp_EmpoleonFull0_Gfx[] = INCGFX_U32("graphics/sinnoh_opening/EmpoleonFull_0.png", ".4bpp");
static const struct Subsprite sOp_EmpoleonFull0_Subsprites[] = { {.x = -48, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 0}, {.x = -16, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 16}, {.x = 16, .y = -48, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 32}, {.x = -48, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 48}, {.x = -16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 64}, {.x = 16, .y = -16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 80}, {.x = -16, .y = 16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 96}, {.x = 16, .y = 16, .shape = SPRITE_SHAPE(32x32), .size = SPRITE_SIZE(32x32), .tileOffset = 112} };
static const struct SubspriteTable sOp_EmpoleonFull0_SubspriteTable[] = { {ARRAY_COUNT(sOp_EmpoleonFull0_Subsprites), sOp_EmpoleonFull0_Subsprites} };
#define sOp_EmpoleonFull0_SIZE (4096)

#endif // GUARD_DATA_SINNOH_OPENING_GFX2_H
