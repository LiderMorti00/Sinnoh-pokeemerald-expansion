#include "global.h"
#include "event_data.h"
#include "pokemon.h"
#include "pokedex.h"
#include "constants/pokedex.h"
#include "constants/vars.h"
#include "random.h"
#include "sinnoh_specials.h"
#include "constants/items.h"
#include "constants/moves.h"
#include "constants/species.h"

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
    for (u32 i = 0; i < gPlayerPartyCount; i++)
    {
        struct Pokemon *mon = &gPlayerParty[i];
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
    for (u32 i = 0; i < gPlayerPartyCount; i++)
    {
        struct Pokemon *mon = &gPlayerParty[i];
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
    for (u32 i = 0; i < gPlayerPartyCount; i++)
    {
        struct Pokemon *mon = &gPlayerParty[i];
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
    for (u32 i = 0; i < gPlayerPartyCount; i++)
        if (!GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG) && GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) == gSpecialVar_0x8004)
            gSpecialVar_Result = TRUE;
}
