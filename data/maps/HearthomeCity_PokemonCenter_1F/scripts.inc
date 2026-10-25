HearthomeCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HearthomeCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

HearthomeCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_HEARTHOME_CITY
	end

HearthomeCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_HEARTHOME_CITY_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

HearthomeCity_PokemonCenter_1F_Text_PtNpc1_0:
	.string "Have you checked out the Global\n"
	.string "Terminal in Jubilife City?\p"
	.string "It uses Nintendo Wi-Fi Connection! I\n"
	.string "can’t explain it, but it’s wicked!$"

HearthomeCity_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_PokemonCenter_1F_Text_PtNpc2_0:
	.string "Hello, do you have a Poffin Case?\p"
	.string "If you haven’t got one, you really must\n"
	.string "visit the POKéMON Fan Club.$"

HearthomeCity_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_PokemonCenter_1F_Text_PtNpc3_0:
	.string "Fantina, the Gym Leader, likes\n"
	.string "Contests, too.\p"
	.string "That lady has a huge appetite for\n"
	.string "experiencing everything in life!$"

HearthomeCity_PokemonCenter_1F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox HearthomeCity_PokemonCenter_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
