EternaCity_PokemonCenter_F1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EternaCity_PokemonCenter_F1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EternaCity_PokemonCenter_F1_EventScript_PtNpc1::
	msgbox EternaCity_PokemonCenter_F1_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_PokemonCenter_F1_Text_PtNpc1:
	.string "TEAM GALACTIC took my POKéMON away.\n"
	.string "They took other people's, too.\p"
	.string "Something should be done, but TEAM\n"
	.string "GALACTIC creeps everyone out...\p"
	.string "What are they doing to my POKéMON?$"

EternaCity_PokemonCenter_F1_EventScript_PtNpc2::
	msgbox EternaCity_PokemonCenter_F1_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_PokemonCenter_F1_Text_PtNpc2:
	.string "When a POKéMON faints, it just means\n"
	.string "it doesn't have the power to battle.\p"
	.string "But it can still use hidden moves\n"
	.string "outside of battle!$"

EternaCity_PokemonCenter_F1_EventScript_PtNpc3::
	msgbox EternaCity_PokemonCenter_F1_Text_PtNpc3, MSGBOX_NPC
	end

EternaCity_PokemonCenter_F1_Text_PtNpc3:
	.string "A POKéMON's friendship grows when\n"
	.string "you walk together.$"

EternaCity_PokemonCenter_F1_OnTransition:
	setrespawn HEAL_LOCATION_ETERNA_CITY
	end

EternaCity_PokemonCenter_F1_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_ETERNA_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end
