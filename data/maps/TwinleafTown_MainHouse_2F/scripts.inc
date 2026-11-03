TwinleafTown_MainHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_MainHouse_2F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_MainHouse_2F_OnFrame
	.byte 0

TwinleafTown_MainHouse_2F_OnTransition:
	call TwinleafTown_MainHouse_2F_EventScript_HideBarry
	end

TwinleafTown_MainHouse_2F_EventScript_HideBarry:
	setflag FLAG_HIDE_PLAYER_ROOM_BARRY
	return

TwinleafTown_MainHouse_2F_OnFrame:
	map_script_2 VAR_TEMP_1, 0, TwinleafTown_MainHouse_2F_EventScript_TV
	.2byte 0

TwinleafTown_MainHouse_2F_EventScript_TV::
	setvar VAR_TEMP_1, 1
	goto_if_ne VAR_SINNOH_STORY, 0, TwinleafTown_MainHouse_2F_EventScript_TV_End
	lockall
	msgbox TwinleafTown_MainHouse_2F_Text_ConcludesProgram, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message TwinleafTown_MainHouse_2F_Text_SeeYouNextWeek
	waitmessage
	waitfanfare
	waitbuttonpress
	closemessage
	releaseall
TwinleafTown_MainHouse_2F_EventScript_TV_End:
	end

TwinleafTown_MainHouse_2F_EventScript_Barry::
	lockall
	clearflag FLAG_HIDE_PLAYER_ROOM_BARRY
	addobject LOCALID_PLAYER_ROOM_BARRY
	applymovement LOCALID_PLAYER_ROOM_BARRY, TwinleafTown_MainHouse_2F_Movement_EnterRoom
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	msgbox TwinleafTown_MainHouse_2F_Text_ThereYouAre, MSGBOX_DEFAULT
	closemessage
	sn_playerface LOCALID_PLAYER_ROOM_BARRY
	sn_walktoplayer LOCALID_PLAYER_ROOM_BARRY, SN_SPEED_FAST
	waitmovement 0
	sn_playerface LOCALID_PLAYER_ROOM_BARRY
	waitmovement LOCALID_PLAYER
	msgbox TwinleafTown_MainHouse_2F_Text_ProfRowan, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER_ROOM_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walkto LOCALID_PLAYER_ROOM_BARRY, 1, 2, SN_SPEED_FAST, DIR_NORTH
	waitmovement 0
	sn_playerface LOCALID_PLAYER_ROOM_BARRY
	waitmovement LOCALID_PLAYER
	msgbox TwinleafTown_MainHouse_2F_Text_NewPC, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER_ROOM_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_2F_Text_WhereWasI, MSGBOX_DEFAULT
	closemessage
	sn_walktoplayer LOCALID_PLAYER_ROOM_BARRY, SN_SPEED_FAST
	waitmovement 0
	sn_playerface LOCALID_PLAYER_ROOM_BARRY
	waitmovement LOCALID_PLAYER
	msgbox TwinleafTown_MainHouse_2F_Text_SeeProfRowan, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_PLAYER_ROOM_BARRY, 7, 2, SN_SPEED_FAST, DIR_NORTH
	waitmovement 0
	applymovement LOCALID_PLAYER_ROOM_BARRY, TwinleafTown_MainHouse_2F_Movement_LeaveRoom
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_PLAYER_ROOM_BARRY
	setflag FLAG_HIDE_PLAYER_ROOM_BARRY
	fadedefaultbgm
	setvar VAR_SINNOH_STORY, 1
	releaseall
	end

TwinleafTown_MainHouse_2F_Movement_EnterRoom:
	walk_fast_down
	step_end

TwinleafTown_MainHouse_2F_Movement_LeaveRoom:
	walk_fast_up
	set_invisible
	step_end

TwinleafTown_MainHouse_2F_Text_ConcludesProgram:
	.string "That concludes our special program,\n"
	.string "“Let’s Ask Prof. Rowan!”\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!$"
TwinleafTown_MainHouse_2F_Text_SeeYouNextWeek:
	.string "See you next week, same time, same\n"
	.string "channel!$"
TwinleafTown_MainHouse_2F_Text_ThereYouAre:
	.string "{RIVAL}: There you are!$"
TwinleafTown_MainHouse_2F_Text_ProfRowan:
	.string "Hey, {PLAYER}! Did you just see the TV?\n"
	.string "Sure you did!\p"
	.string "Prof. Rowan’s that really important guy\n"
	.string "who studies POKéMON, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of POKéMON.\p"
	.string "So, if we ask him, I bet he’d give us\n"
	.string "some POKéMON!$"
TwinleafTown_MainHouse_2F_Text_NewPC:
	.string "Oh, hey! Is this a new PC?!$"
TwinleafTown_MainHouse_2F_Text_WhereWasI:
	.string "{RIVAL}: Uh... Where was I?$"
TwinleafTown_MainHouse_2F_Text_SeeProfRowan:
	.string "Oh, right, right! We’re going to go see\n"
	.string "Prof. Rowan and get some POKéMON.\p"
	.string "I’ll be waiting outside.\p"
	.string "OK, {PLAYER}? If you’re late, I’m fining\n"
	.string "you $10 million!$"

