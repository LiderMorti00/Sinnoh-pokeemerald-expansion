SurvivalArea_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SurvivalArea_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SurvivalArea_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SURVIVAL_AREA
	end

SurvivalArea_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SURVIVAL_AREA_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SurvivalArea_PokemonCenter_1F_Text_PtNpc1_0:
	.string "The building next door?\p"
	.string "I see Gym Leaders go in and out every\n"
	.string "so often.$"

SurvivalArea_PokemonCenter_1F_Text_PtNpc1_1:
	.string "The Battle Factory lets you make\n"
	.string "challenges without your own POKéMON.\p"
	.string "Maybe I should try...$"

SurvivalArea_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_VISITED_BATTLEGROUND, SurvivalArea_PokemonCenter_1F_EventScript_PtNpc1_ChallengeWithoutOwnPokemon
	msgbox SurvivalArea_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SurvivalArea_PokemonCenter_1F_EventScript_PtNpc1_ChallengeWithoutOwnPokemon:
	msgbox SurvivalArea_PokemonCenter_1F_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

SurvivalArea_PokemonCenter_1F_Text_PtNpc2_0:
	.string "In a Multi Battle, coordination with\n"
	.string "your partner is vital.\p"
	.string "By working together, one plus one\n"
	.string "could become not just two, but even\p"
	.string "three or four.\p"
	.string "But one times one is always one. Do you\n"
	.string "understand that?$"

SurvivalArea_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SurvivalArea_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SurvivalArea_PokemonCenter_1F_Text_PtNpc3_0:
	.string "Some say the universe was shaped by\n"
	.string "something born from an Egg...\p"
	.string "A man I met long ago told me that.$"

SurvivalArea_PokemonCenter_1F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SurvivalArea_PokemonCenter_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
