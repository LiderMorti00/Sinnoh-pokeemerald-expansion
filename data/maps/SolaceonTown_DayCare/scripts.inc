SolaceonTown_DayCare_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SolaceonTown_DayCare_OnTransition
	.byte 0

SolaceonTown_DayCare_OnTransition:
	setflag FLAG_LANDMARK_POKEMON_DAYCARE
	end
