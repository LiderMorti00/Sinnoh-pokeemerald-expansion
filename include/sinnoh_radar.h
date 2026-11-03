#ifndef GUARD_SINNOH_RADAR_H
#define GUARD_SINNOH_RADAR_H

struct WildPokemonInfo;

bool32 SinnohRadar_IsOnPatch(void);
u16 SinnohRadar_GetChain(void);
void SinnohRadar_OnStep(void);
bool32 SinnohRadar_IsCharged(void);
bool32 SinnohRadar_Activate(void);
void SinnohRadar_FieldUpdate(void);
bool32 SinnohRadar_TryEncounter(u16 headerId, const struct WildPokemonInfo *landInfo);
void SinnohRadar_OnWildBattleEnd(u32 outcome);

#endif // GUARD_SINNOH_RADAR_H
