PokemonLeague_HallOfFameRoom_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFameRoom_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFameRoom_OnWarp
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_HallOfFameRoom_OnTransition
	.byte 0

PokemonLeague_HallOfFameRoom_OnTransition:
	setflag FLAG_SN_HIDE_HOF_ROWAN
	end

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
	msgbox PokemonLeague_HallOfFameRoom_Text_SNRoomAhead, MSGBOX_DEFAULT
	closemessage
	setobjectxy LOCALID_SN_HOF_ROWAN, 8, 16
	clearflag FLAG_SN_HIDE_HOF_ROWAN
	addobject LOCALID_SN_HOF_ROWAN
	sn_walkto LOCALID_SN_HOF_ROWAN, 8, 10, SN_SPEED_NORMAL, DIR_WEST, 0, 0
	waitmovement LOCALID_SN_HOF_ROWAN
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PokemonLeague_HallOfFameRoom_Text_SNSplendid, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PokemonLeague_HallOfFameRoom_Text_SNHelloRowan, MSGBOX_DEFAULT
	msgbox PokemonLeague_HallOfFameRoom_Text_SNRealChampion, MSGBOX_DEFAULT
	msgbox PokemonLeague_HallOfFameRoom_Text_SNEnthusiasm, MSGBOX_DEFAULT
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox PokemonLeague_HallOfFameRoom_Text_SNStepThisWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame2
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame2
	applymovement LOCALID_SN_HOF_ROWAN, PokemonLeague_HallOfFameRoom_Movement_WalkIntoHallOfFame2
	waitmovement 0
	delay 20
	applymovement LOCALID_SN_HOF_ROWAN, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_HallOfFameRoom_EventScript_SNRepeat
	msgbox PokemonLeague_HallOfFameRoom_Text_SNLongWhile, MSGBOX_DEFAULT
	msgbox PokemonLeague_HallOfFameRoom_Text_SNLongTimeAgo, MSGBOX_DEFAULT
	goto PokemonLeague_HallOfFameRoom_EventScript_SNWelcome
PokemonLeague_HallOfFameRoom_EventScript_SNRepeat:
	msgbox PokemonLeague_HallOfFameRoom_Text_SNStraighter, MSGBOX_DEFAULT
	msgbox PokemonLeague_HallOfFameRoom_Text_SNLegacy, MSGBOX_DEFAULT
PokemonLeague_HallOfFameRoom_EventScript_SNWelcome:
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterRight
	applymovement LOCALID_SN_HOF_ROWAN, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 15
	msgbox PokemonLeague_HallOfFameRoom_Text_HereWeHonorLeagueChampions, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_HALL_OF_FAME_ROOM_HALL_OF_FAME_WALLACE, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_SN_HOF_ROWAN, Common_Movement_WalkInPlaceFasterUp
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox PokemonLeague_HallOfFameRoom_Text_LetsRecordYouAndYourPartnersNames, MSGBOX_DEFAULT
	closemessage
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

PokemonLeague_HallOfFameRoom_Text_SNRoomAhead:
	.string "Cynthia: The room ahead is the Hall\n"
	.string "of Fame...$"

PokemonLeague_HallOfFameRoom_Text_SNSplendid:
	.string "Rowan: {PLAYER}!\n"
	.string "Your last battle was splendid!$"

PokemonLeague_HallOfFameRoom_Text_SNHelloRowan:
	.string "Cynthia: Oh, hello, Professor Rowan.$"

PokemonLeague_HallOfFameRoom_Text_SNRealChampion:
	.string "Rowan: Hm!\p"
	.string "A child I enlisted for my POKéDEX\n"
	.string "project has come this far...\p"
	.string "It’s only natural that I come and\n"
	.string "witness the child’s crowning glory.\p"
	.string "{PLAYER}!\n"
	.string "I shouldn’t call you a child anymore.\p"
	.string "You’ve grown into a real Champion!$"

PokemonLeague_HallOfFameRoom_Text_SNEnthusiasm:
	.string "Cynthia: Professor, you still enjoy\n"
	.string "the enthusiasm kids bring to your\l"
	.string "research, don’t you?$"

PokemonLeague_HallOfFameRoom_Text_SNStepThisWay:
	.string "{PLAYER}, step this way,\n"
	.string "please.\p"
	.string "Professor Rowan, please join us.$"

PokemonLeague_HallOfFameRoom_Text_SNLongWhile:
	.string "Rowan: It’s been a long while since\n"
	.string "I last entered this room...$"

PokemonLeague_HallOfFameRoom_Text_SNLongTimeAgo:
	.string "Cynthia: If your last time here was\n"
	.string "when I became Champion, then yes,\l"
	.string "that would be quite a long time ago.$"

PokemonLeague_HallOfFameRoom_Text_SNStraighter:
	.string "Rowan: No matter how many times\n"
	.string "I come here, I always find myself\l"
	.string "standing up straighter than usual.$"

PokemonLeague_HallOfFameRoom_Text_SNLegacy:
	.string "Cynthia: It’s a natural reaction,\n"
	.string "Professor.\p"
	.string "This room is a legacy to the hopes,\n"
	.string "dreams, and struggles of POKéMON\l"
	.string "and their Trainers to excel.$"
