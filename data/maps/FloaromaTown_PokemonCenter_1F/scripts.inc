FloaromaTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FloaromaTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FloaromaTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FLOAROMA_TOWN
	end

FloaromaTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_FLOAROMA_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FloaromaTown_PokemonCenter_1F_EventScript_PtNpc1::
	msgbox FloaromaTown_PokemonCenter_1F_Text_PtNpc1, MSGBOX_NPC
	end

FloaromaTown_PokemonCenter_1F_Text_PtNpc1:
	.string "The windmills at VALLEY WINDWORKS\n"
	.string "make electricity for all of\l"
	.string "Sinnoh.$"

FloaromaTown_PokemonCenter_1F_EventScript_PtNpc2::
	msgbox FloaromaTown_PokemonCenter_1F_Text_PtNpc2, MSGBOX_NPC
	end

FloaromaTown_PokemonCenter_1F_Text_PtNpc2:
	.string "I've been training in the flower\n"
	.string "fields all morning!$"

FloaromaTown_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox FloaromaTown_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

FloaromaTown_PokemonCenter_1F_Text_PtNpc3:
	.string "FLOAROMA HONEY is famous. Slather\n"
	.string "it on a tree and see what comes!$"
