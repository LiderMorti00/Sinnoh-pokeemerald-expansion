PokemonLeague_SouthPokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_SouthPokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PokemonLeague_SouthPokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_POKEMON_LEAGUE_SOUTH_POKEMON_CENTER_1F
	end

PokemonLeague_SouthPokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_POKEMON_LEAGUE_SOUTH_POKEMON_CENTER_1F_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PokemonLeague_SouthPokemonCenter_1F_Text_PtNpc1_0:
	.string "The objective is to reach the POKéMON\n"
	.string "League.\p"
	.string "Stay focused and never lose sight of\n"
	.string "that goal.\p"
	.string "It will sustain you as you fight\n"
	.string "through the long and arduous Victory\l"
	.string "Road.$"

PokemonLeague_SouthPokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox PokemonLeague_SouthPokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

PokemonLeague_SouthPokemonCenter_1F_Text_PtNpc2_0:
	.string "Victory Road confuses me. I should\n"
	.string "draw up a map.$"

PokemonLeague_SouthPokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox PokemonLeague_SouthPokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
