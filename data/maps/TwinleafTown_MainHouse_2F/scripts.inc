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
	.string "BARRY: {PLAYER}! Did you see that\n"
	.string "TV show just now? The one about\l"
	.string "the red GYARADOS at some lake?!$"

TwinleafTown_MainHouse_2F_Text_Barry2:
	.string "That gives me an idea! We should\n"
	.string "look for a POKéMON like that at\l"
	.string "the lake nearby!\p"
	.string "Meet me outside, okay? If you're\n"
	.string "late, I'm fining you ten million!$"
