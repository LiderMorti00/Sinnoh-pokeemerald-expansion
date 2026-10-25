PokemonLeague_HallOfFameRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFameRoom_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFameRoom_OnWarp
	.byte 0

PokemonLeague_HallOfFameRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFameRoom_EventScript_TurnPlayerNorth
	.2byte 0

PokemonLeague_HallOfFameRoom_EventScript_TurnPlayerNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_HallOfFameRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFameRoom_EventScript_EnterHallOfFame
	.2byte 0

PokemonLeague_HallOfFameRoom_EventScript_EnterHallOfFame::
	lockall
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame1
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame1
	waitmovement 0
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PokemonLeague_HallOfFameRoom_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame2
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame2
	waitmovement 0
	delay 20
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PokemonLeague_HallOfFameRoom_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 20
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
	delay 40
	setvar VAR_TEMP_1, 1
	call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, PokemonLeague_HallOfFameRoom_EventScript_GameClearMale
	goto_if_eq VAR_RESULT, FEMALE, PokemonLeague_HallOfFameRoom_EventScript_GameClearFemale
	end

PokemonLeague_HallOfFameRoom_EventScript_GameClearMale::
	setrespawn HEAL_LOCATION_TWINLEAF_TOWN
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	releaseall
	end

PokemonLeague_HallOfFameRoom_EventScript_GameClearFemale::
	setrespawn HEAL_LOCATION_TWINLEAF_TOWN
	fadescreenspeed FADE_TO_BLACK, 24
	special GameClear
	releaseall
	end

PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame2:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PokemonLeague_HallOfFameRoom_Text_HereWeHonorLeagueChampions:
	.string "Cynthia: {PLAYER}, welcome to the Hall\n"
	.string "of Fame.$"

PokemonLeague_HallOfFameRoom_Text_LetsRecordYouAndYourPartnersNames:
	.string "Your names will be recorded for\n"
	.string "posterity here.\p"
	.string "What you are leaving are the memories\n"
	.string "of your adventure so far.\p"
	.string "It’s time to record your names. You and\n"
	.string "your POKéMON.\p"
	.string "Remember, your POKéMON are partners\n"
	.string "that grew with you through\p"
	.string "many challenging battles.\p"
	.string "This machine will make a permanent\n"
	.string "record of your achievement.$"
