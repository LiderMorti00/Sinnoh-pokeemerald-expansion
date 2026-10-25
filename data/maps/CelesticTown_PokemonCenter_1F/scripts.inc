CelesticTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CelesticTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CelesticTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CELESTIC_TOWN
	end

CelesticTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_CELESTIC_TOWN_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

CelesticTown_PokemonCenter_1F_Text_PtNpc1_0:
	.string "What would compel a young person like\n"
	.string "you to come somewhere so rustic?\p"
	.string "Be sure to see the cave painting since\n"
	.string "you’re already here.$"

CelesticTown_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CelesticTown_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CelesticTown_PokemonCenter_1F_Text_PtNpc2_0:
	.string "They say this town has been here since\n"
	.string "Sinnoh was made.$"

CelesticTown_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox CelesticTown_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

CelesticTown_PokemonCenter_1F_Text_PtNpc3:
	.string "It’s about trust between the Trainer\n"
	.string "and the POKéMON.\p"
	.string "Developing trust in each other is the\n"
	.string "key to victory.$"

CelesticTown_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox CelesticTown_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end
