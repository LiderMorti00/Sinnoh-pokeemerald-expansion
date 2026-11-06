AcuityLakefront_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AcuityLakefront_OnTransition
	.byte 0

AcuityLakefront_OnTransition:
	setflag FLAG_SN_HIDE_ACUITYFRONT_BARRY
	goto_if_lt VAR_SINNOH_STORY, 31, AcuityLakefront_OnTransition_End
	goto_if_set FLAG_BADGE07_GET, AcuityLakefront_OnTransition_End
	goto_if_set FLAG_SN_ACUITYFRONT_BARRY_DONE, AcuityLakefront_OnTransition_End
	clearflag FLAG_SN_HIDE_ACUITYFRONT_BARRY
AcuityLakefront_OnTransition_End:
	end

AcuityLakefront_EventScript_SNBarryScene::
	goto_if_set FLAG_SN_HIDE_ACUITYFRONT_BARRY, AcuityLakefront_EventScript_SNBarryScene_End
	lockall
	applymovement LOCALID_SN_ACUITYFRONT_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_SN_ACUITYFRONT_BARRY, SN_SPEED_FAST, 0, 0
	waitmovement LOCALID_SN_ACUITYFRONT_BARRY
	sn_playerface LOCALID_SN_ACUITYFRONT_BARRY, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox AcuityLakefront_Text_SNBarry, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_ACUITYFRONT_BARRY_DONE
	sn_walkto LOCALID_SN_ACUITYFRONT_BARRY, 21, 40, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_ACUITYFRONT_BARRY
	removeobject LOCALID_SN_ACUITYFRONT_BARRY
	setflag FLAG_SN_HIDE_ACUITYFRONT_BARRY
	releaseall
AcuityLakefront_EventScript_SNBarryScene_End:
	end

AcuityLakefront_EventScript_SNBarry::
	lock
	faceplayer
	msgbox AcuityLakefront_Text_SNBarry, MSGBOX_DEFAULT
	release
	end

AcuityLakefront_Text_SNBarry:
	.string "{RIVAL}: Hey, {PLAYER}!\n"
	.string "What, you finally come along now?\p"
	.string "Slooow! Way too slow!\p"
	.string "Listen, {PLAYER}.\n"
	.string "See how the rocks are all lumpy here?\p"
	.string "You can’t climb those rocks until you\n"
	.string "get the Snowpoint Gym Badge.\p"
	.string "Anyway, I’m off.\n"
	.string "Team Galactic! I’m coming for you!$"

AcuityLakefront_EventScript_PtSign1::
	msgbox AcuityLakefront_Text_PtSign1, MSGBOX_SIGN
	end

AcuityLakefront_Text_PtSign1:
	.string "LAKE ACUITY ahead$"
