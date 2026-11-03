Route209_Access_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route209_Access_OnTransitionSN
	.byte 0

Route209_Access_EventScript_PtNpc1::
	msgbox Route209_Access_Text_PtNpc1, MSGBOX_NPC
	end

Route209_Access_Text_PtNpc1:
	.string "There's a wrecked stone pillar up\n"
	.string "ahead.\p"
	.string "I wonder what it is? It's got me very\n"
	.string "curious.$"

Route209_Access_OnTransitionSN:
	call Route209_Access_EventScript_SNVis_R209_BARRY
	end

Route209_Access_EventScript_SNVis_R209_BARRY:
	setflag FLAG_SN_HIDE_R209_BARRY
	goto_if_unset FLAG_BADGE03_GET, Route209_Access_EventScript_SNVis_R209_BARRY_End
	goto_if_defeated TRAINER_CELINA, Route209_Access_EventScript_SNVis_R209_BARRY_End
	goto_if_defeated TRAINER_BIANCA, Route209_Access_EventScript_SNVis_R209_BARRY_End
	goto_if_defeated TRAINER_HAYDEN, Route209_Access_EventScript_SNVis_R209_BARRY_End
	clearflag FLAG_SN_HIDE_R209_BARRY
Route209_Access_EventScript_SNVis_R209_BARRY_End:
	return

Route209_Access_EventScript_SNR209BARRY_T0::
	goto_if_set FLAG_SN_HIDE_R209_BARRY, Route209_Access_EventScript_SNR209BARRY_T0_End
	lockall
	sn_walktoplayer LOCALID_SN_R209_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_R209_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto Route209_Access_EventScript_SNBarry
Route209_Access_EventScript_SNR209BARRY_T0_End:
	end

Route209_Access_EventScript_SNR209BARRY_T0_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_left
	step_end

Route209_Access_EventScript_SNR209BARRY_T0_P:
	face_right
	step_end

Route209_Access_EventScript_SNR209BARRY_T1::
	goto_if_set FLAG_SN_HIDE_R209_BARRY, Route209_Access_EventScript_SNR209BARRY_T1_End
	lockall
	sn_walktoplayer LOCALID_SN_R209_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_R209_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto Route209_Access_EventScript_SNBarry
Route209_Access_EventScript_SNR209BARRY_T1_End:
	end

Route209_Access_EventScript_SNR209BARRY_T1_M:
	emote_exclamation_mark
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_left
	step_end

Route209_Access_EventScript_SNR209BARRY_T1_P:
	face_right
	step_end

Route209_Access_EventScript_SNR209BARRY_T2::
	goto_if_set FLAG_SN_HIDE_R209_BARRY, Route209_Access_EventScript_SNR209BARRY_T2_End
	lockall
	sn_walktoplayer LOCALID_SN_R209_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_R209_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto Route209_Access_EventScript_SNBarry
Route209_Access_EventScript_SNR209BARRY_T2_End:
	end

Route209_Access_EventScript_SNR209BARRY_T2_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_left
	step_end

Route209_Access_EventScript_SNR209BARRY_T2_P:
	face_right
	step_end

Route209_Access_EventScript_SNBarry::
	lockall
	playbgm MUS_RG_ENCOUNTER_RIVAL, FALSE
	msgbox Route209_Access_EventScript_SNBarry_Intro, MSGBOX_DEFAULT
	closemessage
	switch VAR_STARTER_MON
	case 0, Route209_Access_EventScript_SNBarry_B0
	case 1, Route209_Access_EventScript_SNBarry_B1
	case 2, Route209_Access_EventScript_SNBarry_B2
Route209_Access_EventScript_SNBarry_B0:
	trainerbattle_no_intro TRAINER_CELINA, Route209_Access_EventScript_SNBarry_Defeat
	goto Route209_Access_EventScript_SNBarry_After
Route209_Access_EventScript_SNBarry_B1:
	trainerbattle_no_intro TRAINER_BIANCA, Route209_Access_EventScript_SNBarry_Defeat
	goto Route209_Access_EventScript_SNBarry_After
Route209_Access_EventScript_SNBarry_B2:
	trainerbattle_no_intro TRAINER_HAYDEN, Route209_Access_EventScript_SNBarry_Defeat
	goto Route209_Access_EventScript_SNBarry_After
Route209_Access_EventScript_SNBarry_After:
	msgbox Route209_Access_EventScript_SNBarry_Post, MSGBOX_DEFAULT
	closemessage
	getplayerxy VAR_0x8004, VAR_0x8005
	switch VAR_0x8005
	case 4, Route209_Access_EventScript_SNBarry_L4
	case 6, Route209_Access_EventScript_SNBarry_L6
	applymovement LOCALID_SN_R209_BARRY, Route209_Access_EventScript_SNBarry_M5
	goto Route209_Access_EventScript_SNBarry_Gone
Route209_Access_EventScript_SNBarry_L4:
	applymovement LOCALID_SN_R209_BARRY, Route209_Access_EventScript_SNBarry_M4
	goto Route209_Access_EventScript_SNBarry_Gone
Route209_Access_EventScript_SNBarry_L6:
	applymovement LOCALID_SN_R209_BARRY, Route209_Access_EventScript_SNBarry_M6
Route209_Access_EventScript_SNBarry_Gone:
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SN_R209_BARRY
	setflag FLAG_SN_HIDE_R209_BARRY
	fadedefaultbgm
	releaseall
	end

Route209_Access_EventScript_SNBarry_M4:
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route209_Access_EventScript_SNBarry_M5:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route209_Access_EventScript_SNBarry_M6:
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

Route209_Access_EventScript_SNBarry_Intro:
	.string "BARRY: Ta-daah! Kept me waiting again,\n"
	.string "{PLAYER}!\p"
	.string "Let’s see how much tougher you and I\n"
	.string "have gotten, right here and now!\p"
	.string "Hey, you’re a Trainer now. You’re\n"
	.string "expected to be ready for a battle.\p"
	.string "No whining! No waiting! Let’s get the\n"
	.string "show started!$"

Route209_Access_EventScript_SNBarry_Defeat:
	.string "BARRY: Waaah! What the...?!$"

Route209_Access_EventScript_SNBarry_Post:
	.string "BARRY: Waaah!\p"
	.string "It goes to show my surefire winning\n"
	.string "strategy doesn’t work.\p"
	.string "Say, hey, {PLAYER}. Remember what I told\n"
	.string "you before?\p"
	.string "Make sure all your attacks hit! Avoid\n"
	.string "every enemy attack!\p"
	.string "I thought that was a wicked strategy,\n"
	.string "but it doesn’t work worth beans.\p"
	.string "I guess I have to grind it out and\n"
	.string "toughen up the team a bit at a time.\p"
	.string "Anyway! I’m off to Solaceon Town! See\n"
	.string "ya, {PLAYER}!\p"
	.string "You’ll be shocked by my growth the\n"
	.string "next time we meet!$"
