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
	.string "You can still catch a POKéMON if you\n"
	.string "already have six traveling with you.\p"
	.string "It automatically gets sent to the PC\n"
	.string "network in POKéMON Centers.\p"
	.string "Knowing that, I can keep on catching\n"
	.string "more and more POKéMON!\p"
	.string "It'll make it more fun to check the PC\n"
	.string "in any POKéMON CENTER!$"

JubilifeCity_PokemonCenter_1F_EventScript_PtNpc2::
	msgbox JubilifeCity_PokemonCenter_1F_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_PokemonCenter_1F_Text_PtNpc2:
	.string "In the Union Room upstairs, you can\n"
	.string "chat and trade with other people.\p"
	.string "And that's not all you can do. Check it\n"
	.string "out!$"

JubilifeCity_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox JubilifeCity_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_PokemonCenter_1F_Text_PtNpc3:
	.string "You know how POKéMON have types like\n"
	.string "Water, Fire, and Grass?\p"
	.string "Well, all types have strengths and\n"
	.string "weaknesses against other types.$"
