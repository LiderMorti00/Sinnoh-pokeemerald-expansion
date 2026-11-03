Twinleaf_Town_RivalsHouse_F2_MapScripts::
	.byte 0

Twinleaf_Town_RivalsHouse_F2_EventScript_Barry::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 2, Twinleaf_Town_RivalsHouse_F2_EventScript_BarryTalk
	msgbox Twinleaf_Town_RivalsHouse_F2_Text_SNTakeBag, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_RIVAL_ROOM_BARRY, Twinleaf_Town_RivalsHouse_F2_Movement_SNNotice
	waitmovement 0
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	msgbox Twinleaf_Town_RivalsHouse_F2_Text_Barry, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Twinleaf_Town_RivalsHouse_F2_Movement_SNPlayerMoveAside
	waitmovement 0
	sn_walkto LOCALID_RIVAL_ROOM_BARRY, 1, 1, SN_SPEED_FAST
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_RIVAL_ROOM_BARRY
	setflag FLAG_HIDE_RIVAL_ROOM_BARRY
	clearflag FLAG_HIDE_ROUTE201_BARRY
	fadedefaultbgm
	setvar VAR_SINNOH_STORY, 3
	releaseall
	end

Twinleaf_Town_RivalsHouse_F2_EventScript_BarryTalk:
	applymovement LOCALID_RIVAL_ROOM_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Twinleaf_Town_RivalsHouse_F2_Text_Barry, MSGBOX_DEFAULT
	releaseall
	end

Twinleaf_Town_RivalsHouse_F2_Text_Barry:
	.string "{RIVAL}: Oh, hey, {PLAYER}!\p"
	.string "I’ll be waiting on the road! It’s a $10\n"
	.string "million fine if you’re late!$"

Twinleaf_Town_RivalsHouse_F2_Movement_SNNotice:
	face_player
	emote_exclamation_mark
	step_end

Twinleaf_Town_RivalsHouse_F2_Movement_SNPlayerMoveAside:
	delay_16
	walk_down
	walk_in_place_up
	step_end

Twinleaf_Town_RivalsHouse_F2_Text_SNTakeBag:
	.string "{RIVAL}: ...I’d better take my Bag and\n"
	.string "Journal, too...$"
