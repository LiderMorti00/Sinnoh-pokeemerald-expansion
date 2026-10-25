PokemonLeague_AaronRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AaronRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AaronRoom_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_AaronRoom_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AaronRoom_OnFrame
	.byte 0

PokemonLeague_AaronRoom_OnTransition:
	setflag FLAG_MET_SCOTT_IN_EVERGRANDE
	setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
	end

PokemonLeague_AaronRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, PokemonLeague_AaronRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 1, PokemonLeague_AaronRoom_EventScript_CloseDoor
	end

PokemonLeague_AaronRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

PokemonLeague_AaronRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

PokemonLeague_AaronRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AaronRoom_EventScript_PlayerTurnNorth
	.2byte 0

PokemonLeague_AaronRoom_EventScript_PlayerTurnNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_AaronRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 0, PokemonLeague_AaronRoom_EventScript_WalkInCloseDoor
	.2byte 0

PokemonLeague_AaronRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 1
	releaseall
	end

PokemonLeague_AaronRoom_EventScript_Sidney::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_SIDNEY, PokemonLeague_AaronRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox PokemonLeague_AaronRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_SIDNEY, PokemonLeague_AaronRoom_Text_Defeat
	goto PokemonLeague_AaronRoom_EventScript_Defeated
	end

PokemonLeague_AaronRoom_EventScript_PostBattleSpeech::
	msgbox PokemonLeague_AaronRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_AaronRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_SIDNEY
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox PokemonLeague_AaronRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_AaronRoom_Text_IntroSpeech:
	.string "Hello! Welcome to the POKéMON League!\p"
	.string "I’m Aaron of the Elite Four. It’s good\n"
	.string "to meet you.\p"
	.string "Oh, I should explain, I’m a huge fan of\n"
	.string "bug POKéMON.\p"
	.string "Bug POKéMON are nasty-mean, and yet\n"
	.string "they’re beautiful, too...\p"
	.string "Would you like to know why I take on\n"
	.string "challengers here?\p"
	.string "It’s because I want to become perfect,\n"
	.string "just like my bug POKéMON!\p"
	.string "OK! Let me take you on!$"

PokemonLeague_AaronRoom_Text_Defeat:
	.string "I lost with the most beautiful and\n"
	.string "toughest of the bug POKéMON...\p"
	.string "We lost because I wasn’t good enough...\p"
	.string "That’s it! Back to training camp! Let’s\n"
	.string "hear it for me!\p"
	.string "No... That was wrong... Anyway... Go on to\n"
	.string "the next room!\p"
	.string "Three Trainers are waiting for you.\n"
	.string "They’re all tougher than me.$"

PokemonLeague_AaronRoom_Text_PostBattleSpeech:
	.string "Go on, go to the next room.\p"
	.string "I’m going to become a top-level Trainer\n"
	.string "who can’t be outclassed with\p"
	.string "my beautiful and tough bug POKéMON!$"
