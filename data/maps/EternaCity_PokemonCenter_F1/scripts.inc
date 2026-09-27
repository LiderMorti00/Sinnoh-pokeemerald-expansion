EternaCity_PokemonCenter_F1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EternaCity_PokemonCenter_F1_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

EternaCity_PokemonCenter_F1_EventScript_PtNpc1::
	msgbox EternaCity_PokemonCenter_F1_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_PokemonCenter_F1_Text_PtNpc1:
	.string "ETERNA FOREST is full of BUG\n"
	.string "POKéMON. Great for training!$"

EternaCity_PokemonCenter_F1_EventScript_PtNpc2::
	msgbox EternaCity_PokemonCenter_F1_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_PokemonCenter_F1_Text_PtNpc2:
	.string "I heard GARDENIA's ROSERADE is\n"
	.string "super strong.$"

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
