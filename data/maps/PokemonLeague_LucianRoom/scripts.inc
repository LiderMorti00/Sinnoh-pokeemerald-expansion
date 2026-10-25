PokemonLeague_LucianRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LucianRoom_OnFrame
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LucianRoom_OnLoad
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_SidneysRoom_OnWarp
	.byte 0

@ Unused, Drake uses Sidneys identical OnWarp for some reason
PokemonLeague_LucianRoom_OnFrame:
	map_script_2 VAR_ELITE_4_STATE, 3, PokemonLeague_LucianRoom_EventScript_WalkInCloseDoor
	.2byte 0

PokemonLeague_LucianRoom_EventScript_WalkInCloseDoor::
	lockall
	call PokemonLeague_EliteFour_EventScript_WalkInCloseDoor
	setvar VAR_ELITE_4_STATE, 4
	releaseall
	end

PokemonLeague_LucianRoom_OnLoad:
	call_if_set FLAG_DEFEATED_ELITE_4_DRAKE, PokemonLeague_LucianRoom_EventScript_ResetAdvanceToNextRoom
	call_if_eq VAR_ELITE_4_STATE, 4, PokemonLeague_LucianRoom_EventScript_CloseDoor
	end

PokemonLeague_LucianRoom_EventScript_ResetAdvanceToNextRoom::
	call PokemonLeague_EliteFour_EventScript_ResetAdvanceToNextRoom
	return

PokemonLeague_LucianRoom_EventScript_CloseDoor::
	call PokemonLeague_EliteFour_EventScript_CloseDoor
	return

PokemonLeague_LucianRoom_EventScript_Drake::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_ELITE_4_DRAKE, PokemonLeague_LucianRoom_EventScript_PostBattleSpeech
	playbgm MUS_ENCOUNTER_ELITE_FOUR, FALSE
	msgbox PokemonLeague_LucianRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_DRAKE, PokemonLeague_LucianRoom_Text_Defeat
	goto PokemonLeague_LucianRoom_EventScript_Defeated
	end

PokemonLeague_LucianRoom_EventScript_PostBattleSpeech::
	msgbox PokemonLeague_LucianRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_LucianRoom_EventScript_Defeated::
	setvar VAR_0x8004, FANCOUNTER_DEFEATED_DRAKE
	special Script_TryGainNewFanFromCounter
	setflag FLAG_DEFEATED_ELITE_4_DRAKE
	call PokemonLeague_EliteFour_SetAdvanceToNextRoomMetatiles
	msgbox PokemonLeague_LucianRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	release
	end

PokemonLeague_LucianRoom_Text_IntroSpeech:
	.string "Ah, you timed your arrival well.\p"
	.string "I’ve just finished reading a book, you\n"
	.string "see.\p"
	.string "Allow me to introduce myself.\p"
	.string "I am Lucian. I am a user of the Psychic\n"
	.string "type.\p"
	.string "I must say, you’ve already proven\n"
	.string "yourself to be outstanding by coming\p"
	.string "this far.\p"
	.string "They say I am the toughest of the\n"
	.string "Elite Four.\p"
	.string "I’m afraid I will have to go all out\n"
	.string "against you to live up to that\p"
	.string "reputation.$"

PokemonLeague_LucianRoom_Text_Defeat:
	.string "Congratulations. You’ve now beaten\n"
	.string "the Elite Four.\p"
	.string "However, that doesn’t mean you’re done\n"
	.string "with the POKéMON League.\p"
	.string "There remains the Champion.\p"
	.string "I should warn you--the Champion is far\n"
	.string "stronger than the Elite Four.\p"
	.string "Now, go on. Step through the doorway\n"
	.string "to your final battle.$"

PokemonLeague_LucianRoom_Text_PostBattleSpeech:
	.string "I’ll be reading books until the next\n"
	.string "challenger arrives.\p"
	.string "That will calm my nerves, so that I may\n"
	.string "deal with all situations without\p"
	.string "panicking.$"
