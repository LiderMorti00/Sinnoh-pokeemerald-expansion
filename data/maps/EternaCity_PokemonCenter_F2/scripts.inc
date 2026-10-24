EternaCity_PokemonCenter_F2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0

EternaCity_PokemonCenter_F2_EventScript_PtNpc1::
	msgbox EternaCity_PokemonCenter_F2_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_PokemonCenter_F2_Text_PtNpc1:
	.string "Multi Battles are the ultimate in\n"
	.string "pulse-pounding action!\p"
	.string "You won't know how exciting they are\n"
	.string "until you've actually experienced one!$"
