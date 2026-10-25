ResortArea_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ResortArea_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

ResortArea_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_RESORT_AREA
	end

ResortArea_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_RESORT_AREA_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

ResortArea_PokemonCenter_1F_Text_PtNpc1_0:
	.string "Do you know there’s a sure way to\n"
	.string "change the world?\p"
	.string "Do a headstand, and the world turns\n"
	.string "upside down!$"

ResortArea_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox ResortArea_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

ResortArea_PokemonCenter_1F_Text_PtNpc2_0:
	.string "Wherever you are in the world!\p"
	.string "Whoever it is in the world!\p"
	.string "Everyone knows POKéMON! That’s\n"
	.string "fabulously fantastic!$"

ResortArea_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox ResortArea_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
