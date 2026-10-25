PastoriaCity_PokemonCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0

PastoriaCity_PokemonCenter_2F_Text_PtNpc1_0:
	.string "I derive so much pleasure from working\n"
	.string "on drawings with others...\p"
	.string "It shows me that I’m not alone.$"

PastoriaCity_PokemonCenter_2F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox PastoriaCity_PokemonCenter_2F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end
