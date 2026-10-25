PokemonLeague_FlintRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_FlintRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_FlintRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_FlintRoom_OnWarp
	.byte 0

PokemonLeague_FlintRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_FlintRoom_EventScript_PlayerTurnNorth
	.2byte 0

PokemonLeague_FlintRoom_EventScript_PlayerTurnNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_FlintRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 2, PokemonLeague_FlintRoom_EventScript_WalkInCloseDoor
	.2byte 0

PokemonLeague_FlintRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 3
	releaseall
	end

PokemonLeague_FlintRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_GLACIA, PokemonLeague_FlintRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 3, PokemonLeague_FlintRoom_EventScript_CloseDoor
	end

PokemonLeague_FlintRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

PokemonLeague_FlintRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

PokemonLeague_FlintRoom_EventScript_Glacia::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_GLACIA, PokemonLeague_FlintRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox PokemonLeague_FlintRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_GLACIA, PokemonLeague_FlintRoom_Text_Defeat
	goto PokemonLeague_FlintRoom_EventScript_Defeated
	end

PokemonLeague_FlintRoom_EventScript_PostBattleSpeech::
	msgbox PokemonLeague_FlintRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_FlintRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_GLACIA
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox PokemonLeague_FlintRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_FlintRoom_Text_IntroSpeech:
	.string "...$"

PokemonLeague_FlintRoom_Text_Defeat:
	.string "... ...\p"
	.string "... ...\p"
	.string "... ...\p"
	.string "...Whew... ...Burnt right down to\n"
	.string "cinders...$"

PokemonLeague_FlintRoom_Text_PostBattleSpeech:
	.string "... ...\p"
	.string "... ...\p"
	.string "... ...\p"
	.string "...Keep going...$"
