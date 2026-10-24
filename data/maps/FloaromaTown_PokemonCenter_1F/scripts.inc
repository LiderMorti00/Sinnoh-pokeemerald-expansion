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
	.string "There've been problems with the\n"
	.string "electric power lately.\p"
	.string "Is there some trouble at the VALLEY\n"
	.string "WINDWORKS?$"

FloaromaTown_PokemonCenter_1F_EventScript_PtNpc2::
	msgbox FloaromaTown_PokemonCenter_1F_Text_PtNpc2, MSGBOX_NPC
	end

FloaromaTown_PokemonCenter_1F_Text_PtNpc2:
	.string "I had a battle the other day, and my\n"
	.string "POKéMON's HP got low.\p"
	.string "I thought we were done for.\p"
	.string "And then, all of a sudden, my POKéMON\n"
	.string "ate the Berry it was holding! Whew!$"

FloaromaTown_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox FloaromaTown_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

FloaromaTown_PokemonCenter_1F_Text_PtNpc3:
	.string "If you've got POKéMON with you, it's\n"
	.string "safe for even a kid like you to go off\l"
	.string "traveling alone.$"
