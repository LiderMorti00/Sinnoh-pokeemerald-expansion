TwinleafTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, TwinleafTown_OnTransitionSN
	.byte 0

TwinleafTown_EventScript_BlockNorth::
	lockall
	applymovement LOCALID_TWINLEAF_GUITARIST, TwinleafTown_Movement_SNGuitaristNotice
	waitmovement 0
	getplayerxy VAR_0x8008, VAR_0x8009
	subvar VAR_0x8009, 1
	sn_walkto_vars LOCALID_TWINLEAF_GUITARIST, SN_SPEED_FAST, DIR_SOUTH
	waitmovement 0
	applymovement LOCALID_PLAYER, TwinleafTown_Movement_SNPlayerPushedBack
	applymovement LOCALID_TWINLEAF_GUITARIST, Common_Movement_WalkDown
	waitmovement 0
	msgbox TwinleafTown_Text_PtNpc3, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_TWINLEAF_GUITARIST, 8, 4, SN_SPEED_NORMAL, DIR_SOUTH
	waitmovement 0
	releaseall
	end


TwinleafTown_EventScript_PtNpc1::
	msgbox TwinleafTown_Text_PtNpc1, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc1:
	.string "It's true that wild POKéMON do attack\n"
	.string "people sometimes...\p"
	.string "But, POKéMON also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PtNpc2::
	msgbox TwinleafTown_Text_PtNpc2, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc2:
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinleafTown_EventScript_PtNpc3::
	msgbox TwinleafTown_Text_PtNpc3, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc3:
	.string "Hiya, {PLAYER}. {RIVAL} was looking for\n"
	.string "you.\p"
	.string "I think he's home now. Why don't you go\n"
	.string "check it out?$"

TwinleafTown_EventScript_Sign1::
	msgbox TwinleafTown_Text_Sign1, MSGBOX_SIGN
	end

TwinleafTown_Text_Sign1:
	.string "TWINLEAF TOWN\p"
	.string "Fresh and free!$"

TwinleafTown_EventScript_SNMailboxPlayer::
	msgbox TwinleafTown_Text_SNMailboxPlayer, MSGBOX_SIGN
	end

TwinleafTown_EventScript_SNMailboxRival::
	msgbox TwinleafTown_Text_SNMailboxRival, MSGBOX_SIGN
	end

TwinleafTown_Text_SNMailboxPlayer:
	.string "{PLAYER}’s House$"

TwinleafTown_Text_SNMailboxRival:
	.string "{RIVAL}’s House$"

TwinleafTown_OnTransitionSN:
	call TwinleafTown_EventScript_SNVis_TWINLEAF_BARRY
	end

TwinleafTown_EventScript_SNVis_TWINLEAF_BARRY:
	setflag FLAG_SN_HIDE_TWINLEAF_BARRY
	goto TwinleafTown_EventScript_SNVis_TWINLEAF_BARRY_End
	clearflag FLAG_SN_HIDE_TWINLEAF_BARRY
TwinleafTown_EventScript_SNVis_TWINLEAF_BARRY_End:
	return

TwinleafTown_EventScript_SNThud::
	goto_if_set FLAG_SN_TWINLEAF_THUD, TwinleafTown_EventScript_SNThud_End
	lockall
	clearflag FLAG_SN_HIDE_TWINLEAF_BARRY
	addobject LOCALID_TWINLEAF_BARRY
	applymovement LOCALID_TWINLEAF_BARRY, TwinleafTown_Movement_SNRivalExitHouse
	applymovement LOCALID_PLAYER, TwinleafTown_Movement_SNPlayerPushedByRival
	waitmovement 0
	playse SE_WALL_HIT
	msgbox TwinleafTown_Text_SNThud, MSGBOX_DEFAULT
	closemessage
	delay 30
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	applymovement LOCALID_TWINLEAF_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox TwinleafTown_Text_SNGoingToSeeProfRowan, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, TwinleafTown_Movement_SNPlayerWatchRival
	applymovement LOCALID_TWINLEAF_BARRY, TwinleafTown_Movement_SNRivalWalkAwayAndBack
	waitmovement 0
	delay 15
	msgbox TwinleafTown_Text_SNForgotSomething, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWINLEAF_BARRY, TwinleafTown_Movement_SNRivalEnterHouse
	waitmovement 0
	removeobject LOCALID_TWINLEAF_BARRY
	setflag FLAG_SN_HIDE_TWINLEAF_BARRY
	fadedefaultbgm
	setflag FLAG_SN_TWINLEAF_THUD
	releaseall
TwinleafTown_EventScript_SNThud_End:
	end

TwinleafTown_Movement_SNRivalExitHouse:
	walk_fast_down
	walk_in_place_fast_up
	step_end

TwinleafTown_Movement_SNPlayerPushedByRival:
	face_up
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

TwinleafTown_Movement_SNPlayerWatchRival:
	delay_8
	delay_4
	walk_in_place_right
	delay_8
	delay_8
	delay_8
	delay_8
	delay_8
	walk_in_place_up
	step_end

TwinleafTown_Movement_SNRivalWalkAwayAndBack:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	emote_exclamation_mark
	delay_8
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_in_place_fast_down
	step_end

TwinleafTown_Movement_SNRivalEnterHouse:
	walk_up
	set_invisible
	step_end

TwinleafTown_Movement_SNGuitaristNotice:
	walk_in_place_fast_up
	emote_exclamation_mark
	delay_8
	delay_4
	step_end

TwinleafTown_Movement_SNPlayerPushedBack:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	walk_in_place_fast_up
	step_end

TwinleafTown_Text_SNThud:
	.string "Thud!!$"
TwinleafTown_Text_SNGoingToSeeProfRowan:
	.string "{RIVAL}: What was that about?!\p"
	.string "Oh, hey, {PLAYER}!\p"
	.string "Hey! I’m going to see Prof. Rowan! You\n"
	.string "should come, too! And quickly!$"
TwinleafTown_Text_SNForgotSomething:
	.string "{RIVAL}: Oh, jeez! Forgot something!$"
