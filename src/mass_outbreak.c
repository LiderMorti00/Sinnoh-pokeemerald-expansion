#include "global.h"
#include "event_data.h"
#include "main.h"
#include "mass_outbreak.h"
#include "overworld.h"
#include "random.h"
#include "region_map.h"
#include "script.h"
#include "wild_encounter.h"
#include "string_util.h"
#include "pokemon.h"
#include "constants/flags.h"

static const struct MassOutbreak sPokeOutbreakSpeciesList[OUTBREAK_COUNT] = {
    // Proyecto Sinnoh: enjambres de Platino (movimientos por defecto según el nivel)
    [OUTBREAK_ID_ROUTE201] = { .species = SPECIES_DODUO, .level = 4, .probability = 50, .duration = 1, .location = MAP_ROUTE201 },
    [OUTBREAK_ID_ROUTE202] = { .species = SPECIES_ZIGZAGOON, .level = 5, .probability = 50, .duration = 1, .location = MAP_ROUTE202 },
    [OUTBREAK_ID_ROUTE203] = { .species = SPECIES_CUBONE, .level = 6, .probability = 50, .duration = 1, .location = MAP_ROUTE203 },
    [OUTBREAK_ID_ROUTE206] = { .species = SPECIES_LARVITAR, .level = 18, .probability = 50, .duration = 1, .location = MAP_ROUTE206 },
    [OUTBREAK_ID_ROUTE207] = { .species = SPECIES_PHANPY, .level = 9, .probability = 50, .duration = 1, .location = MAP_ROUTE207 },
    [OUTBREAK_ID_ROUTE208] = { .species = SPECIES_DUNSPARCE, .level = 20, .probability = 50, .duration = 1, .location = MAP_ROUTE208 },
    [OUTBREAK_ID_ROUTE209] = { .species = SPECIES_SNUBBULL, .level = 21, .probability = 50, .duration = 1, .location = MAP_ROUTE209 },
    [OUTBREAK_ID_ROUTE214] = { .species = SPECIES_SPOINK, .level = 25, .probability = 50, .duration = 1, .location = MAP_ROUTE214 },
    [OUTBREAK_ID_ROUTE215] = { .species = SPECIES_DROWZEE, .level = 21, .probability = 50, .duration = 1, .location = MAP_ROUTE215 },
    [OUTBREAK_ID_ROUTE217] = { .species = SPECIES_DELIBIRD, .level = 34, .probability = 50, .duration = 1, .location = MAP_ROUTE217 },
    [OUTBREAK_ID_ROUTE218] = { .species = SPECIES_VOLTORB, .level = 30, .probability = 50, .duration = 1, .location = MAP_ROUTE218 },
    [OUTBREAK_ID_ROUTE221] = { .species = SPECIES_FARFETCHD, .level = 31, .probability = 50, .duration = 1, .location = MAP_ROUTE221 },
    [OUTBREAK_ID_ROUTE222] = { .species = SPECIES_SKITTY, .level = 41, .probability = 50, .duration = 1, .location = MAP_ROUTE222 },
    [OUTBREAK_ID_ROUTE224] = { .species = SPECIES_NATU, .level = 52, .probability = 50, .duration = 1, .location = MAP_ROUTE224 },
    [OUTBREAK_ID_ROUTE225] = { .species = SPECIES_MAKUHITA, .level = 50, .probability = 50, .duration = 1, .location = MAP_ROUTE225 },
    [OUTBREAK_ID_ROUTE226] = { .species = SPECIES_KRABBY, .level = 50, .probability = 50, .duration = 1, .location = MAP_ROUTE226 },
    [OUTBREAK_ID_ROUTE227] = { .species = SPECIES_SPINDA, .level = 55, .probability = 50, .duration = 1, .location = MAP_ROUTE227 },
    [OUTBREAK_ID_ROUTE228] = { .species = SPECIES_BELDUM, .level = 53, .probability = 50, .duration = 1, .location = MAP_ROUTE228 },
    [OUTBREAK_ID_ROUTE229] = { .species = SPECIES_PINSIR, .level = 50, .probability = 50, .duration = 1, .location = MAP_ROUTE229 },
    [OUTBREAK_ID_ROUTE230] = { .species = SPECIES_CORSOLA, .level = 50, .probability = 50, .duration = 1, .location = MAP_ROUTE230 },
    [OUTBREAK_ID_VALLEY_WINDWORKS] = { .species = SPECIES_ELECTRIKE, .level = 11, .probability = 50, .duration = 1, .location = MAP_VALLEY_WINDWORKS },
    [OUTBREAK_ID_ETERNA_FOREST] = { .species = SPECIES_SLAKOTH, .level = 13, .probability = 50, .duration = 1, .location = MAP_ETERNA_FOREST },
};

void ZeroMassOutbreak(void)
{
    gSaveBlock1Ptr->outbreakPokemonSpecies = 0;
    gSaveBlock1Ptr->outbreakPokemonSpecies = 0;
    gSaveBlock1Ptr->outbreakLocationMapNum = 0;
    gSaveBlock1Ptr->outbreakLocationMapGroup = 0;
    gSaveBlock1Ptr->outbreakPokemonLevel = 0;
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
        gSaveBlock1Ptr->outbreakPokemonMoves[i] = 0;
    gSaveBlock1Ptr->outbreakPokemonProbability = 0;
    gSaveBlock1Ptr->outbreakDaysLeft = 0;
}

struct MassOutbreak GetStaticOutbreak(enum MassOutbreakIndex outbreakIdx)
{
    return sPokeOutbreakSpeciesList[outbreakIdx];
}

enum Species GetStaticOutbreakSpecies(enum MassOutbreakIndex outbreakIdx)
{
    return sPokeOutbreakSpeciesList[outbreakIdx].species;
}

u8 *GetStaticOutbreakMapName(u8 *dest, enum MassOutbreakIndex outbreakIdx)
{
    u16 mapGroup = MAP_GROUP(sPokeOutbreakSpeciesList[outbreakIdx].location);
    u16 mapNum = MAP_NUM(sPokeOutbreakSpeciesList[outbreakIdx].location);
    return GetMapName(dest, Overworld_GetMapHeaderByGroupAndId(mapGroup, mapNum)->regionMapSectionId, 0);
}

void PrepareTvShowForRandomOutbreak(TVShow *show)
{
    u32 outbreakIdx = RandomUniform(RNG_NONE, 0, ARRAY_COUNT(sPokeOutbreakSpeciesList));
    show->massOutbreak.outbreakIndex = outbreakIdx + 1;
    show->massOutbreak.species = sPokeOutbreakSpeciesList[outbreakIdx].species;
    show->massOutbreak.locationMapNum = MAP_NUM(sPokeOutbreakSpeciesList[outbreakIdx].location);
    show->massOutbreak.locationMapGroup = MAP_GROUP(sPokeOutbreakSpeciesList[outbreakIdx].location);
}

void StartMassOutbreak(struct MassOutbreak outbreak)
{
    gSaveBlock1Ptr->outbreakPokemonSpecies = outbreak.species;
    gSaveBlock1Ptr->outbreakLocationMapNum = MAP_NUM(outbreak.location);
    gSaveBlock1Ptr->outbreakLocationMapGroup = MAP_GROUP(outbreak.location);
    gSaveBlock1Ptr->outbreakPokemonLevel = outbreak.level;
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        gSaveBlock1Ptr->outbreakPokemonMoves[i] = outbreak.moves[i];
    }
    gSaveBlock1Ptr->outbreakPokemonProbability = outbreak.probability;
    gSaveBlock1Ptr->outbreakDaysLeft = outbreak.duration;
}

void StartStaticMassOutbreak(enum MassOutbreakIndex outbreakIdx)
{
    StartMassOutbreak(sPokeOutbreakSpeciesList[outbreakIdx]);
}

void UpdateMassOutbreakDaysLeft(u16 days)
{
    if (gSaveBlock1Ptr->outbreakDaysLeft <= days)
        gSaveBlock1Ptr->outbreakDaysLeft = 0;
    else
        gSaveBlock1Ptr->outbreakDaysLeft -= days;
}

bool32 IsMassOutbreakActive(void)
{
    return (gSaveBlock1Ptr->outbreakDaysLeft > 0);
}

bool8 SetUpMassOutbreakEncounter(u8 flags)
{
    if (flags & WILD_CHECK_REPEL && !IsWildLevelAllowedByRepel(gSaveBlock1Ptr->outbreakPokemonLevel))
        return FALSE;

    CreateWildMon(gSaveBlock1Ptr->outbreakPokemonSpecies, gSaveBlock1Ptr->outbreakPokemonLevel);
    if (gSaveBlock1Ptr->outbreakPokemonMoves[0] != MOVE_NONE) // Proyecto Sinnoh: sin lista, movimientos por defecto
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
        SetMonMoveSlot(&gParties[B_TRAINER_OPPONENT_A][0], gSaveBlock1Ptr->outbreakPokemonMoves[i], i);

    return TRUE;
}

bool8 DoMassOutbreakEncounterTest(void)
{
    if (gSaveBlock1Ptr->outbreakDaysLeft == 0)
        return FALSE;

    if (gSaveBlock1Ptr->location.mapNum != gSaveBlock1Ptr->outbreakLocationMapNum || gSaveBlock1Ptr->location.mapGroup != gSaveBlock1Ptr->outbreakLocationMapGroup)
        return FALSE;

    return (RandomPercentage(RNG_NONE,  gSaveBlock1Ptr->outbreakPokemonProbability));
}

void ScrCmd_setstaticoutbreak(struct ScriptContext *ctx)
{
    enum MassOutbreakIndex outbreakIdx = VarGet(ScriptReadHalfword(ctx));
    bool32 noReplacement = ScriptReadByte(ctx);

    if (outbreakIdx == OUTBREAK_COUNT)
        return;

    assertf(!IsMassOutbreakActive() || noReplacement == FALSE, "Trying to start a new outbreak while one is already in progress")
    {
        return;
    }

    assertf(outbreakIdx < OUTBREAK_COUNT, "Trying to read undefined outbreak index %d", outbreakIdx)
    {
        return;
    }
    StartStaticMassOutbreak(outbreakIdx);
}

static u32 ReadMapFromContext(struct ScriptContext *ctx)
{
    u32 map = ScriptReadHalfword(ctx);
    if (map == MAP_UNDEFINED)
        return MAP_UNDEFINED;
    return VarGet(map);
}

void ScrCmd_setdynamicoutbreak(struct ScriptContext *ctx)
{
    enum Species species = VarGet(ScriptReadHalfword(ctx));
    u32 level = VarGet(ScriptReadHalfword(ctx));
    enum Move moves[MAX_MON_MOVES];
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
        moves[i] = VarGet(ScriptReadHalfword(ctx));
    u32 probability = VarGet(ScriptReadHalfword(ctx));
    u32 daysLeft = VarGet(ScriptReadHalfword(ctx));
    u32 map = ReadMapFromContext(ctx);
    bool32 noReplacement = ScriptReadByte(ctx);

    assertf(!IsMassOutbreakActive() || noReplacement == FALSE, "Trying to start a new outbreak while one is already in progress")
    {
        return;
    }

    assertf(IsSpeciesEnabled(species), "Trying to call setdynamicoutbreak with unknown species %d", species)
    {
        return;
    }
    assertf(level >= 1 && level <= MAX_LEVEL, "Trying to call setdynamicoutbreak with invalid level %d", level)
    {
        return;
    }
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        assertf(moves[i] < MOVES_COUNT, "Trying to call setdynamicoutbreak with invalid move %d", moves[i])
        {
            return;
        }
    }
    assertf(probability <= 100, "Trying to call setdynamicoutbreak with invalid percent chance %d", probability)
    {
        return;
    }

    gSaveBlock1Ptr->outbreakPokemonSpecies = species;
    gSaveBlock1Ptr->outbreakPokemonLevel = level;
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        gSaveBlock1Ptr->outbreakPokemonMoves[i] = moves[i];
    }
    gSaveBlock1Ptr->outbreakPokemonProbability = probability;
    gSaveBlock1Ptr->outbreakDaysLeft = daysLeft;
    gSaveBlock1Ptr->outbreakLocationMapNum = MAP_NUM(map);
    gSaveBlock1Ptr->outbreakLocationMapGroup = MAP_GROUP(map);
}

void ScrCmd_editoutbreak(struct ScriptContext *ctx)
{
    enum Species species = VarGet(ScriptReadHalfword(ctx));
    u32 level = VarGet(ScriptReadHalfword(ctx));
    enum Move moves[MAX_MON_MOVES];
    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        moves[i] = VarGet(ScriptReadHalfword(ctx));
    }
    u32 probability = VarGet(ScriptReadHalfword(ctx));
    u32 daysLeft = VarGet(ScriptReadHalfword(ctx));
    u32 map = ReadMapFromContext(ctx);

    assertf(IsMassOutbreakActive(), "Trying to edit outbreak but none is active")
    {
        return;
    }

    if (species != SPECIES_NONE)
    {
        if (IsSpeciesEnabled(species))
            gSaveBlock1Ptr->outbreakPokemonSpecies = species;
        else
            errorf("Trying to call editoutbreak with unknown species %d", species);
    }

    if (level != 0)
    {
        if (level <= MAX_LEVEL)
            gSaveBlock1Ptr->outbreakPokemonLevel = level;
        else
            errorf("Trying to call editoutbreak with invalid level %d", level);
    }

    for (u32 i = 0; i < MAX_MON_MOVES; i++)
    {
        if (moves[i] != MOVES_COUNT)
        {
            if (moves[i] < MOVES_COUNT)
                gSaveBlock1Ptr->outbreakPokemonMoves[i] = moves[i];
            else
                errorf("Trying to call editoutbreak with invalid move %d", moves[i]);
        }
    }

    if (probability != 0xFF)
    {
        if (probability <= 100)
            gSaveBlock1Ptr->outbreakPokemonProbability = probability;
        else
            errorf("Trying to call editoutbreak with invalid percent chance %d", probability);
    }

    if (daysLeft != 0x3FFF)
        gSaveBlock1Ptr->outbreakDaysLeft = daysLeft;

    if (map != MAP_UNDEFINED)
    {
        gSaveBlock1Ptr->outbreakLocationMapNum = MAP_NUM(map);
        gSaveBlock1Ptr->outbreakLocationMapGroup = MAP_GROUP(map);
    }
}

void ScrCmd_checkhasactiveoutbreak(struct ScriptContext *ctx)
{
    gSpecialVar_Result = IsMassOutbreakActive();
}

void ScrCmd_getmassoutbreakdata(struct ScriptContext *ctx)
{
    u32 varId = ScriptReadHalfword(ctx);
    enum MassOutbreakData dataField = ScriptReadByte(ctx);
    u32 value = 0;
    switch (dataField)
    {
    case OUTBREAK_DATA_SPECIES:
        value = gSaveBlock1Ptr->outbreakPokemonSpecies;
        break;
    case OUTBREAK_DATA_MOVE1:
        value = gSaveBlock1Ptr->outbreakPokemonMoves[0];
        break;
    case OUTBREAK_DATA_MOVE2:
        value = gSaveBlock1Ptr->outbreakPokemonMoves[1];
        break;
    case OUTBREAK_DATA_MOVE3:
        value = gSaveBlock1Ptr->outbreakPokemonMoves[2];
        break;
    case OUTBREAK_DATA_MOVE4:
        value = gSaveBlock1Ptr->outbreakPokemonMoves[3];
        break;
    case OUTBREAK_DATA_LEVEL:
        value = gSaveBlock1Ptr->outbreakPokemonLevel;
        break;
    case OUTBREAK_DATA_PROBABILITY:
        value = gSaveBlock1Ptr->outbreakPokemonProbability;
        break;
    case OUTBREAK_DATA_DAYS_LEFT:
        value = gSaveBlock1Ptr->outbreakDaysLeft;
        break;
    case OUTBREAK_DATA_MAP:
        value = gSaveBlock1Ptr->outbreakLocationMapNum | (gSaveBlock1Ptr->outbreakLocationMapGroup << 8);
        break;
    }
    VarSet(varId, value);
}


// Proyecto Sinnoh: la hermana de Dawn/Lucas anuncia el enjambre del día (STR_VAR_1 = especie, STR_VAR_2 = lugar).
void SinnohDailyOutbreak(void)
{
    if (!FlagGet(FLAG_DAILY_SN_SWARM) || !IsMassOutbreakActive())
    {
        StartStaticMassOutbreak(RandomUniform(RNG_NONE, 0, ARRAY_COUNT(sPokeOutbreakSpeciesList) - 1));
        FlagSet(FLAG_DAILY_SN_SWARM);
    }
    StringCopy(gStringVar1, GetSpeciesName(gSaveBlock1Ptr->outbreakPokemonSpecies));
    GetMapName(gStringVar2, Overworld_GetMapHeaderByGroupAndId(gSaveBlock1Ptr->outbreakLocationMapGroup, gSaveBlock1Ptr->outbreakLocationMapNum)->regionMapSectionId, 0);
}
