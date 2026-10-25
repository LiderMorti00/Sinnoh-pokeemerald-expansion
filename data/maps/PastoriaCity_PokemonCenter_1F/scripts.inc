PastoriaCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PastoriaCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PastoriaCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_PASTORIA_CITY
	end

PastoriaCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_PASTORIA_CITY_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PastoriaCity_PokemonCenter_1F_Text_PtNpc1_0:
	.string "The Great Marsh is vast! How vast is it,\n"
	.string "you ask?\p"
	.string "Take a look from the Observatory and\n"
	.string "you can see for yourself!$"

PastoriaCity_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox PastoriaCity_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_PokemonCenter_1F_Text_PtNpc2_0:
	.string "Pastoria’s Great Marsh was once a part\n"
	.string "of the sea.\p"
	.string "The seawater drained slowly away over\n"
	.string "time, leaving the huge marshland.\p"
	.string "That’s why they say there are rare\n"
	.string "POKéMON that you can only see here.$"

PastoriaCity_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox PastoriaCity_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
