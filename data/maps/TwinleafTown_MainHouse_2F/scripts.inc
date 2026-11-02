TwinleafTown_MainHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_MainHouse_2F_OnFrame
	.byte 0

TwinleafTown_MainHouse_2F_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 0, TwinleafTown_MainHouse_2F_EventScript_Barry
	.2byte 0

TwinleafTown_MainHouse_2F_EventScript_Barry::
	lockall
	applymovement LOCALID_PLAYER_ROOM_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox TwinleafTown_MainHouse_2F_Text_Barry1, MSGBOX_DEFAULT
	msgbox TwinleafTown_MainHouse_2F_Text_Barry2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER_ROOM_BARRY, TwinleafTown_MainHouse_2F_Movement_BarryLeaves
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_PLAYER_ROOM_BARRY
	setflag FLAG_HIDE_PLAYER_ROOM_BARRY
	setvar VAR_SINNOH_STORY, 1
	releaseall
	end

TwinleafTown_MainHouse_2F_Movement_BarryLeaves:
	walk_fast_left
	walk_fast_up
	step_end

TwinleafTown_MainHouse_2F_Text_Barry1:
	.string "That concludes our special program,\n"
	.string "“Let’s Ask Prof. Rowan!”\p"
	.string "Brought to you by Jubilife TV on\n"
	.string "Nationwide Net!\p"
	.string "{RIVAL}: There you are!\p"
	.string "Hey, {PLAYER}! Did you just see the TV?\n"
	.string "Sure you did!\p"
	.string "Prof. Rowan’s that really important guy\n"
	.string "who studies POKéMON, right?\p"
	.string "That means he must have lots and lots\n"
	.string "of POKéMON.\p"
	.string "So, if we ask him, I bet he’d give us\n"
	.string "some POKéMON!$"

TwinleafTown_MainHouse_2F_Text_Barry2:
	.string "Oh, hey! Is this a new PC?!\p"
	.string "{RIVAL}: Uh... Where was I?\p"
	.string "Oh, right, right! We’re going to go see\n"
	.string "Prof. Rowan and get some POKéMON.\p"
	.string "I’ll be waiting outside.\p"
	.string "OK, {PLAYER}? If you’re late, I’m fining\n"
	.string "you $10 million!$"
