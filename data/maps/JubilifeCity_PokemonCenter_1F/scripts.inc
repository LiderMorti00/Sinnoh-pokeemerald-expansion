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

JubilifeCity_PokemonCenter_1F_EventScript_PtNpc1::
	msgbox JubilifeCity_PokemonCenter_1F_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_PokemonCenter_1F_Text_PtNpc1:
	.string "Every Trainer passes through\n"
	.string "JUBILIFE sooner or later.$"

JubilifeCity_PokemonCenter_1F_EventScript_PtNpc2::
	msgbox JubilifeCity_PokemonCenter_1F_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_PokemonCenter_1F_Text_PtNpc2:
	.string "I just caught a new POKéMON! I'm\n"
	.string "going to show it to everyone!$"

JubilifeCity_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox JubilifeCity_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_PokemonCenter_1F_Text_PtNpc3:
	.string "My mom says I have to heal my\n"
	.string "POKéMON before I go home.$"
