Twinleaf_Town_RivalsHouse_F2_MapScripts::
	.byte 0

Twinleaf_Town_RivalsHouse_F2_EventScript_Barry::
	lockall
	applymovement LOCALID_RIVAL_ROOM_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Twinleaf_Town_RivalsHouse_F2_Text_Barry, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_RIVAL_ROOM_BARRY
	setflag FLAG_HIDE_RIVAL_ROOM_BARRY
	clearflag FLAG_HIDE_ROUTE201_BARRY
	fadescreen FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 3
	releaseall
	end

Twinleaf_Town_RivalsHouse_F2_Text_Barry:
	.string "BARRY: There you are, {PLAYER}! I\n"
	.string "was just about to head out.\p"
	.string "I'm going to the lake to find that\n"
	.string "legendary POKéMON! Meet me on\l"
	.string "ROUTE 201, okay? Don't be late!$"
