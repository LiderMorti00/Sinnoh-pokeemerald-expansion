#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokedex.h"
#include "constants/pokedex.h"
#include "constants/vars.h"
#include "random.h"
#include "sinnoh_specials.h"
#include "constants/trainers.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/species.h"
#include "string_util.h"
#include "script_pokemon_util.h"
#include "constants/flags.h"
#include "constants/map_groups.h"
#include "pokemon_icon.h"
#include "pokemon_storage_system.h"

// Proyecto Sinnoh: specials propios para eventos de Platino.

static const u16 sRotomForms[] = {
    SPECIES_ROTOM, SPECIES_ROTOM_HEAT, SPECIES_ROTOM_WASH, SPECIES_ROTOM_FROST, SPECIES_ROTOM_FAN, SPECIES_ROTOM_MOW,
};
static const u16 sRotomMoves[] = {
    MOVE_THUNDER_SHOCK, MOVE_OVERHEAT, MOVE_HYDRO_PUMP, MOVE_BLIZZARD, MOVE_AIR_SLASH, MOVE_LEAF_STORM,
};

static s32 FindRotomForm(u16 species)
{
    for (u32 i = 0; i < ARRAY_COUNT(sRotomForms); i++)
        if (sRotomForms[i] == species)
            return i;
    return -1;
}

// VAR_RESULT: TRUE si hay un Rotom (de cualquier forma) en el equipo.
void SinnohPartyHasRotom(void)
{
    gSpecialVar_Result = FALSE;
    for (u32 i = 0; i < gPartiesCount[B_TRAINER_PLAYER]; i++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];
        if (!GetMonData(mon, MON_DATA_IS_EGG) && FindRotomForm(GetMonData(mon, MON_DATA_SPECIES)) >= 0)
            gSpecialVar_Result = TRUE;
    }
}

// VAR_0x8004 = forma (0 normal, 1 calor, 2 lavado, 3 frío, 4 ventilador, 5 corte).
// Cambia el primer Rotom del equipo; VAR_RESULT = 0 sin Rotom, 1 cambiado, 2 ya tenía esa forma.
void SinnohRotomAppliance(void)
{
    u32 target = gSpecialVar_0x8004;
    gSpecialVar_Result = 0;
    if (target >= ARRAY_COUNT(sRotomForms))
        return;
    for (u32 i = 0; i < gPartiesCount[B_TRAINER_PLAYER]; i++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];
        s32 form;
        if (GetMonData(mon, MON_DATA_IS_EGG))
            continue;
        form = FindRotomForm(GetMonData(mon, MON_DATA_SPECIES));
        if (form < 0)
            continue;
        if ((u32)form == target)
        {
            gSpecialVar_Result = 2;
            return;
        }
        u16 species = sRotomForms[target];
        SetMonData(mon, MON_DATA_SPECIES, &species);
        CalculateMonStats(mon);
        // cambia el movimiento propio de la forma anterior por el de la nueva
        u16 oldMove = sRotomMoves[form], newMove = sRotomMoves[target];
        u32 slot, empty = MAX_MON_MOVES;
        for (slot = 0; slot < MAX_MON_MOVES; slot++)
        {
            u16 move = GetMonData(mon, MON_DATA_MOVE1 + slot);
            if (move == oldMove && form != 0)
                break;
            if (move == MOVE_NONE && empty == MAX_MON_MOVES)
                empty = slot;
        }
        if (target == 0)
        {
            if (slot < MAX_MON_MOVES)
                SetMonMoveSlot(mon, newMove, slot);
        }
        else if (slot < MAX_MON_MOVES)
            SetMonMoveSlot(mon, newMove, slot);
        else if (empty < MAX_MON_MOVES)
            SetMonMoveSlot(mon, newMove, empty);
        else
            SetMonMoveSlot(mon, newMove, 0);
        gSpecialVar_0x8005 = i;
        gSpecialVar_Result = 1;
        return;
    }
}

// VAR_0x8004: 0 = solo fósiles de Sinnoh; 1 = todos. Devuelve el objeto en VAR_RESULT.
void SinnohRandomFossil(void)
{
    static const u16 sSinnoh[] = { ITEM_SKULL_FOSSIL, ITEM_ARMOR_FOSSIL };
    static const u16 sAll[] = { ITEM_SKULL_FOSSIL, ITEM_ARMOR_FOSSIL, ITEM_HELIX_FOSSIL, ITEM_DOME_FOSSIL, ITEM_OLD_AMBER, ITEM_ROOT_FOSSIL, ITEM_CLAW_FOSSIL };
    if (gSpecialVar_0x8004)
        gSpecialVar_Result = sAll[Random() % ARRAY_COUNT(sAll)];
    else
        gSpecialVar_Result = sSinnoh[Random() % ARRAY_COUNT(sSinnoh)];
}

// ---------------------------------------------------------------- Plaza Amistad
// VAR_RESULT = TRUE si el primer Pokémon del equipo (no huevo) puede entrar en la Plaza Amistad.
static const u16 sAmitySpecies[] = {
    SPECIES_PIKACHU, SPECIES_CLEFAIRY, SPECIES_PSYDUCK, SPECIES_TOGEPI, SPECIES_SHROOMISH, SPECIES_SKITTY,
    SPECIES_TORCHIC, SPECIES_PACHIRISU, SPECIES_DRIFLOON, SPECIES_BUNEARY, SPECIES_HAPPINY, SPECIES_JIGGLYPUFF,
    SPECIES_TURTWIG, SPECIES_GROTLE, SPECIES_TORTERRA, SPECIES_CHIMCHAR, SPECIES_MONFERNO, SPECIES_INFERNAPE,
    SPECIES_PIPLUP, SPECIES_PRINPLUP, SPECIES_EMPOLEON,
};
void SinnohLeadMonIsCute(void)
{
    gSpecialVar_Result = FALSE;
    for (u32 i = 0; i < gPartiesCount[B_TRAINER_PLAYER]; i++)
    {
        struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][i];
        if (GetMonData(mon, MON_DATA_IS_EGG) || GetMonData(mon, MON_DATA_HP) == 0)
            continue;
        u16 species = GetMonData(mon, MON_DATA_SPECIES);
        for (u32 j = 0; j < ARRAY_COUNT(sAmitySpecies); j++)
            if (sAmitySpecies[j] == species)
                gSpecialVar_Result = TRUE;
        return;
    }
}

// ---------------------------------------------------------------- Gaceta Pokémon de Sosiego
// Elige el Pokémon del día entre los de la Pokédex regional que el jugador ha visto (VAR_0x8004).
void SinnohNewsPressPick(void)
{
    u16 seen[HOENN_DEX_COUNT];
    u32 count = 0;
    for (u32 i = 1; i < HOENN_DEX_COUNT; i++)
    {
        u16 nat = HoennToNationalOrder(i);
        if (GetSetPokedexFlag(nat, FLAG_GET_SEEN))
            seen[count++] = NationalPokedexNumToSpecies(nat);
    }
    if (count == 0)
        gSpecialVar_0x8004 = SPECIES_BIDOOF;
    else
        gSpecialVar_0x8004 = seen[(VarGet(VAR_DAYS) * 7 + 3) % count];
}

// VAR_RESULT = TRUE si hay un VAR_0x8004 en el equipo.
void SinnohPartyHasSpecies(void)
{
    gSpecialVar_Result = FALSE;
    for (u32 i = 0; i < gPartiesCount[B_TRAINER_PLAYER]; i++)
        if (!GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_IS_EGG) && GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES) == gSpecialVar_0x8004)
            gSpecialVar_Result = TRUE;
}

// Jardín Trofeo: Pokémon del día (VAR_SN_TROPHY_SPECIES) y su nombre en STR_VAR_1.
static const u16 sTrophyGardenMons[] = {
    SPECIES_PIKACHU, SPECIES_CLEFAIRY, SPECIES_JIGGLYPUFF, SPECIES_MEOWTH, SPECIES_CHANSEY, SPECIES_DITTO,
    SPECIES_EEVEE, SPECIES_PORYGON, SPECIES_PICHU, SPECIES_CLEFFA, SPECIES_IGGLYBUFF, SPECIES_AZURILL,
    SPECIES_PLUSLE, SPECIES_MINUN, SPECIES_CASTFORM, SPECIES_WYNAUT,
};
void SinnohTrophyGardenPick(void)
{
    if (!FlagGet(FLAG_DAILY_SN_TROPHY) || VarGet(VAR_SN_TROPHY_SPECIES) == SPECIES_NONE)
    {
        VarSet(VAR_SN_TROPHY_SPECIES, sTrophyGardenMons[Random() % ARRAY_COUNT(sTrophyGardenMons)]);
        FlagSet(FLAG_DAILY_SN_TROPHY);
    }
    StringCopy(gStringVar1, GetSpeciesName(VarGet(VAR_SN_TROPHY_SPECIES)));
}

// Especie que aparece en el Jardín Trofeo en lugar de la normal (o SPECIES_NONE).
u16 SinnohTrophyGardenOverride(void)
{
    u16 sp = VarGet(VAR_SN_TROPHY_SPECIES);
    if (sp == SPECIES_NONE
     || gSaveBlock1Ptr->location.mapGroup != MAP_GROUP(MAP_TROPHY_GARDEN)
     || gSaveBlock1Ptr->location.mapNum != MAP_NUM(MAP_TROPHY_GARDEN))
        return SPECIES_NONE;
    if (Random() % 100 < 25)
        return sp;
    return SPECIES_NONE;
}

// Árbol de miel: VAR_0x8004 = especie que aparece (tabla de Platino), VAR_0x8005 = nivel.
static const u16 sHoneyMons[] = {
    SPECIES_WURMPLE, SPECIES_WURMPLE, SPECIES_SILCOON, SPECIES_CASCOON, SPECIES_BURMY, SPECIES_COMBEE,
    SPECIES_COMBEE, SPECIES_AIPOM, SPECIES_AIPOM, SPECIES_HERACROSS, SPECIES_BURMY, SPECIES_COMBEE,
};
void SinnohHoneyTreeMon(void)
{
    if (Random() % 100 == 0)
        gSpecialVar_0x8004 = SPECIES_MUNCHLAX;
    else
        gSpecialVar_0x8004 = sHoneyMons[Random() % ARRAY_COUNT(sHoneyMons)];
    gSpecialVar_0x8005 = 5 + Random() % 11;
    CreateScriptedWildMon(gSpecialVar_0x8004, gSpecialVar_0x8005, ITEM_NONE);
    StringCopy(gStringVar1, GetSpeciesName(gSpecialVar_0x8004));
}

void SinnohHoneyReady(void)
{
    gSpecialVar_Result = (VarGet(VAR_DAYS) != VarGet(VAR_SN_HONEY_DAY));
}

void SinnohHoneySlather(void)
{
    VarSet(VAR_SN_HONEY_DAY, VarGet(VAR_DAYS));
}

// Prismáticos del Gran Pantano: Pokémon que se ve hoy, en STR_VAR_1.
static const u16 sMarshMons[] = {
    SPECIES_BIBAREL, SPECIES_QUAGSIRE, SPECIES_WOOPER, SPECIES_SKORUPI, SPECIES_CARNIVINE, SPECIES_CROAGUNK,
    SPECIES_YANMA, SPECIES_TANGELA, SPECIES_GULPIN, SPECIES_KECLEON, SPECIES_SHROOMISH, SPECIES_ARBOK,
    SPECIES_EXEGGCUTE, SPECIES_TOXICROAK, SPECIES_DRAPION, SPECIES_STARAVIA, SPECIES_ROSELIA, SPECIES_MARILL,
};
void SinnohMarshBinoculars(void)
{
    StringCopy(gStringVar1, GetSpeciesName(sMarshMons[(VarGet(VAR_DAYS) * 5 + Random() % 3) % ARRAY_COUNT(sMarshMons)]));
}

// VAR_RESULT = día de la semana (0-6) según el contador de días.
void SinnohDayOfWeek(void)
{
    gSpecialVar_Result = VarGet(VAR_DAYS) % 7;
}

// VAR_RESULT = mayor número de cintas de un Pokémon del equipo.
void SinnohPartyMaxRibbons(void)
{
    u32 best = 0;
    for (u32 i = 0; i < gPartiesCount[B_TRAINER_PLAYER]; i++)
    {
        u32 n = GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_RIBBON_COUNT);
        if (!GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_IS_EGG) && n > best)
            best = n;
    }
    gSpecialVar_Result = best;
}

// Tratamiento del spa del Sindicato Cinta: amistad del primer Pokémon (+30), nombre en STR_VAR_1.
void SinnohSpaTreatment(void)
{
    struct Pokemon *mon = &gParties[B_TRAINER_PLAYER][0];
    u32 f = GetMonData(mon, MON_DATA_FRIENDSHIP) + 30;
    if (f > 255)
        f = 255;
    SetMonData(mon, MON_DATA_FRIENDSHIP, &f);
    GetMonData(mon, MON_DATA_NICKNAME, gStringVar1);
    StringGet_Nickname(gStringVar1);
}

// VAR_RESULT = número de formas distintas de Unown que tienes (equipo y cajas).
static u32 UnownLetterOf(u32 species, u32 personality)
{
    if (species == SPECIES_UNOWN)
        return GetUnownLetterByPersonality(personality);
    if (species >= SPECIES_UNOWN_B && species <= SPECIES_UNOWN_QUESTION)
        return species - SPECIES_UNOWN_B + 1;
    return 0xFF;
}

void SinnohUnownFormsCount(void)
{
    u32 seen = 0, i, box, pos, n = 0;
    for (i = 0; i < PARTY_SIZE; i++)
    {
        u32 sp = GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES);
        u32 l = UnownLetterOf(sp, GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_PERSONALITY));
        if (l < 32) seen |= 1u << l;
    }
    for (box = 0; box < TOTAL_BOXES_COUNT; box++)
    {
        for (pos = 0; pos < IN_BOX_COUNT; pos++)
        {
            u32 sp = GetBoxMonDataAt(box, pos, MON_DATA_SPECIES);
            if (sp == SPECIES_NONE)
                continue;
            {
                u32 l = UnownLetterOf(sp, GetBoxMonDataAt(box, pos, MON_DATA_PERSONALITY));
                if (l < 32) seen |= 1u << l;
            }
        }
    }
    for (i = 0; i < 32; i++)
        if (seen & (1u << i)) n++;
    gSpecialVar_Result = n;
}

// VAR_RESULT = Pokémon que tienes en total (equipo y cajas).
void SinnohCountAllMons(void)
{
    u32 i, box, pos, n = 0;
    for (i = 0; i < PARTY_SIZE; i++)
        if (GetMonData(&gParties[B_TRAINER_PLAYER][i], MON_DATA_SPECIES) != SPECIES_NONE)
            n++;
    for (box = 0; box < TOTAL_BOXES_COUNT; box++)
        for (pos = 0; pos < IN_BOX_COUNT; pos++)
            if (GetBoxMonDataAt(box, pos, MON_DATA_SPECIES) != SPECIES_NONE)
                n++;
    gSpecialVar_Result = n;
}

// Proyecto Sinnoh: demostración de captura de la Ruta 202 (Dawn o Lucas atrapan un Bidoof).
// Se usa la batalla de Wally de Esmeralda con el sprite de espaldas del acompañante.
enum TrainerPicID SinnohTutorialBackPic(void)
{
    return gSaveBlock2Ptr->playerGender == MALE ? TRAINER_PIC_SINNOH_DAWN : TRAINER_PIC_SINNOH_LUCAS;
}

void SinnohLoadCounterpartMon(void)
{
    // Barry se queda el inicial con ventaja; el acompañante, el que sobra.
    static const u16 sCounterpartStarter[] = {SPECIES_TURTWIG, SPECIES_CHIMCHAR, SPECIES_PIPLUP};
    u16 species = sCounterpartStarter[VarGet(VAR_STARTER_MON) % 3];
    u16 move = MOVE_TACKLE;
    if (species == SPECIES_CHIMCHAR)
        move = MOVE_SCRATCH;
    else if (species == SPECIES_PIPLUP)
        move = MOVE_POUND;
    CreateRandomMon(&gParties[B_TRAINER_PLAYER][0], species, 6);
    SetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_MOVE1, &move);
    move = MOVE_NONE;
    SetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_MOVE2, &move);
    SetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_MOVE3, &move);
    SetMonData(&gParties[B_TRAINER_PLAYER][0], MON_DATA_MOVE4, &move);
}

// Campo de Batalla: cada día salen hasta tres líderes y un entrenador más (como en Platino).
// Se llama después de las comprobaciones de visibilidad; oculta a los que no tocan hoy.
static const u16 sBattlegroundLeaderFlags[] = {
    FLAG_SN_HIDE_BG_ROARK, FLAG_SN_HIDE_BG_GARDENIA, FLAG_SN_HIDE_BG_WAKE, FLAG_SN_HIDE_BG_MAYLENE,
    FLAG_SN_HIDE_BG_FANTINA, FLAG_SN_HIDE_BG_CANDICE, FLAG_SN_HIDE_BG_BYRON, FLAG_SN_HIDE_BG_VOLKNER,
};
static const u16 sBattlegroundOtherFlags[] = {
    FLAG_SN_HIDE_BG_CHERYL, FLAG_SN_HIDE_BG_RILEY, FLAG_SN_HIDE_BG_MARLEY, FLAG_SN_HIDE_BG_BUCK, FLAG_SN_HIDE_BG_MIRA,
};

void SinnohBattlegroundSelect(void)
{
    u32 seed = (VarGet(VAR_DAYS) + 1) * 2654435761u;
    u32 i, n, picked = 0, eligible[ARRAY_COUNT(sBattlegroundOtherFlags)];

    // Requisitos de los entrenadores que no son líderes
    if (!FlagGet(FLAG_HIDE_FOREST_CHERYL))
        FlagSet(FLAG_SN_HIDE_BG_CHERYL);
    if (!FlagGet(FLAG_SN_RECEIVED_RIOLU_EGG))
        FlagSet(FLAG_SN_HIDE_BG_RILEY);
    if (!FlagGet(FLAG_SN_MARLEY_ESCORTED))
        FlagSet(FLAG_SN_HIDE_BG_MARLEY);
    if (!FlagGet(FLAG_SN_BG_BUCK_LEFT))
        FlagSet(FLAG_SN_HIDE_BG_BUCK);
    if (!FlagGet(FLAG_SN_MIRA_ESCORTED))
        FlagSet(FLAG_SN_HIDE_BG_MIRA);

    // Tres líderes distintos
    for (i = 0; i < 3; i++)
    {
        u32 k;
        seed = seed * 1103515245u + 12345u;
        k = (seed >> 16) % ARRAY_COUNT(sBattlegroundLeaderFlags);
        while (picked & (1u << k))
            k = (k + 1) % ARRAY_COUNT(sBattlegroundLeaderFlags);
        picked |= 1u << k;
    }
    for (i = 0; i < ARRAY_COUNT(sBattlegroundLeaderFlags); i++)
    {
        if (!(picked & (1u << i)))
            FlagSet(sBattlegroundLeaderFlags[i]);
    }

    // Un entrenador más entre los que se pueden ver
    for (i = 0, n = 0; i < ARRAY_COUNT(sBattlegroundOtherFlags); i++)
    {
        if (!FlagGet(sBattlegroundOtherFlags[i]))
            eligible[n++] = i;
    }
    if (n != 0)
    {
        seed = seed * 1103515245u + 12345u;
        picked = eligible[(seed >> 16) % n];
        for (i = 0; i < ARRAY_COUNT(sBattlegroundOtherFlags); i++)
        {
            if (i != picked)
                FlagSet(sBattlegroundOtherFlags[i]);
        }
    }
}
