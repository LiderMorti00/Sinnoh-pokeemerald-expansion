PokemonLeague_BerthaRoom_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BerthaRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BerthaRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BerthaRoom_OnFrame
	.byte 0

PokemonLeague_BerthaRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BerthaRoom_EventScript_PlayerTurnNorth
	.2byte 0

PokemonLeague_BerthaRoom_EventScript_PlayerTurnNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_BerthaRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 1, PokemonLeague_BerthaRoom_EventScript_WalkInCloseDoor
	.2byte 0

PokemonLeague_BerthaRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 2
	releaseall
	end

PokemonLeague_BerthaRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, PokemonLeague_BerthaRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 2, PokemonLeague_BerthaRoom_EventScript_CloseDoor
	end

PokemonLeague_BerthaRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

PokemonLeague_BerthaRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

PokemonLeague_BerthaRoom_EventScript_Phoebe::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_PHOEBE, PokemonLeague_BerthaRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox PokemonLeague_BerthaRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PHOEBE, PokemonLeague_BerthaRoom_Text_Defeat
	goto PokemonLeague_BerthaRoom_EventScript_Defeated
	end

PokemonLeague_BerthaRoom_EventScript_PostBattleSpeech::
	msgbox PokemonLeague_BerthaRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_BerthaRoom_EventScript_Defeated::
	setflag FLAG_DEFEATED_ELITE_4_PHOEBE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox PokemonLeague_BerthaRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_BerthaRoom_Text_IntroSpeech:
	.string "Well, well.\p"
	.string "You’re quite the adorable Trainer, but\n"
	.string "you’ve also got a spine.\p"
	.string "Ahaha! I’m Bertha.\p"
	.string "I have a preference for Ground-type\n"
	.string "POKéMON.\p"
	.string "Well, would you show this old lady how\n"
	.string "much you’ve learned?$"

PokemonLeague_BerthaRoom_Text_Defeat:
	.string "You’re quite something, youngster.\p"
	.string "I like how you and your POKéMON earned\n"
	.string "the win by working as one.\p"
	.string "That’s what makes you so strong.\p"
	.string "Ahahaha! I think that you can go as\n"
	.string "far as you want.$"

PokemonLeague_BerthaRoom_Text_PostBattleSpeech:
	.string "The Trainer in the next room is a much\n"
	.string "more formidable opponent.\p"
	.string "You really must have your wits about\n"
	.string "you.\p"
	.string "However, I think you can go as far as\n"
	.string "you desire. Ahahaha!$"
