JubilifeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

JubilifeCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_JUBILIFE_CITY
	end

JubilifeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_JUBILIFE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

JubilifeCity_PokemonCenter_1F_EventScript_Youngster::
	msgbox JubilifeCity_PokemonCenter_1F_Text_Youngster, MSGBOX_NPC
	end

JubilifeCity_PokemonCenter_1F_EventScript_Woman::
	msgbox JubilifeCity_PokemonCenter_1F_Text_Woman, MSGBOX_NPC
	end

JubilifeCity_PokemonCenter_1F_Text_Youngster:
	.string "The POKéMON CENTER PC lets you\n"
	.string "store POKéMON you catch. Very\l"
	.string "handy!$"

JubilifeCity_PokemonCenter_1F_Text_Woman:
	.string "Upstairs you can trade and battle\n"
	.string "with friends.$"

