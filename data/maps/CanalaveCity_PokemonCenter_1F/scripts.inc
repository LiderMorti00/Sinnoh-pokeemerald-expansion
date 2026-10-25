CanalaveCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CanalaveCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

CanalaveCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CANALAVE_CITY
	end

CanalaveCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_CANALAVE_CITY_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

CanalaveCity_PokemonCenter_1F_Text_PtNpc1_0:
	.string "I was lucky enough to get a Strength\n"
	.string "HM from Iron Island.\p"
	.string "But I can’t use it for moving boulders\n"
	.string "until I beat Byron, the Gym Leader.\p"
	.string "I should make a note of that on the\n"
	.string "POKéTCH app Memo Pad.$"

CanalaveCity_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CanalaveCity_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_PokemonCenter_1F_Text_PtNpc2_0:
	.string "It’s easy to get to Iron Island. It’s\n"
	.string "one boat trip from here.$"

CanalaveCity_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox CanalaveCity_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_PokemonCenter_1F_Text_PtNpc3_0:
	.string "I heard this cool rumor.\p"
	.string "If you can get on Nintendo Wi-Fi\n"
	.string "Connection, you can go to the Wi-Fi\p"
	.string "Plaza.\p"
	.string "The access to the Wi-Fi Plaza is\n"
	.string "through the basement of any POKéMON\l"
	.string "Center.$"

CanalaveCity_PokemonCenter_1F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox CanalaveCity_PokemonCenter_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_PokemonCenter_1F_Text_PtNpc4_0:
	.string "It’s possible for one kind of POKéMON\n"
	.string "to have different abilities.\p"
	.string "That’s news to me!$"

CanalaveCity_PokemonCenter_1F_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox CanalaveCity_PokemonCenter_1F_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end
