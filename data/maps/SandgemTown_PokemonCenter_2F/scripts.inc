SandgemTown_PokemonCenter_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
	.byte 0

SandgemTown_PokemonCenter_2F_EventScript_PtNpc1::
	msgbox SandgemTown_PokemonCenter_2F_Text_PtNpc1, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_2F_Text_PtNpc1:
	.string "What kind of Trainer's sign will get\n"
	.string "people laughing?$"
