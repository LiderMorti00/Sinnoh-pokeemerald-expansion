LakeAcuity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeAcuity_OnTransitionSN
	.byte 0

LakeAcuity_OnTransitionSN:
	call LakeAcuity_EventScript_SNVis_ACUITY_JUPITER
	call LakeAcuity_EventScript_SNVis_ACUITY_BARRY
	end

LakeAcuity_EventScript_SNVis_ACUITY_BARRY:
	setflag FLAG_SN_HIDE_ACUITY_BARRY
	goto_if_lt VAR_SINNOH_STORY, 31, LakeAcuity_EventScript_SNVis_ACUITY_BARRY_End
	goto_if_set FLAG_SN_RECEIVED_GALACTIC_KEY, LakeAcuity_EventScript_SNVis_ACUITY_BARRY_End
	clearflag FLAG_SN_HIDE_ACUITY_BARRY
LakeAcuity_EventScript_SNVis_ACUITY_BARRY_End:
	return

LakeAcuity_EventScript_SNBarry::
	msgbox LakeAcuity_EventScript_SNBarry_T2, MSGBOX_NPC
	end
LakeAcuity_EventScript_SNBarry_T1:
	.string "{RIVAL}: ... ...\p"
	.string "Yeah, that’s right!\p"
	.string "I couldn’t do anything against Team\n"
	.string "Galactic!$"

LakeAcuity_EventScript_SNBarry_T2:
	.string "That POKéMON called UXIE... It was\n"
	.string "suffering...$"

LakeAcuity_EventScript_SNVis_ACUITY_JUPITER:
	setflag FLAG_SN_HIDE_ACUITY_JUPITER
	goto_if_lt VAR_SINNOH_STORY, 31, LakeAcuity_EventScript_SNVis_ACUITY_JUPITER_End
	goto_if_set FLAG_SN_RECEIVED_GALACTIC_KEY, LakeAcuity_EventScript_SNVis_ACUITY_JUPITER_End
	clearflag FLAG_SN_HIDE_ACUITY_JUPITER
LakeAcuity_EventScript_SNVis_ACUITY_JUPITER_End:
	return

LakeAcuity_EventScript_SNScene::
	goto_if_set FLAG_SN_HIDE_ACUITY_JUPITER, LakeAcuity_EventScript_SNSceneEnd
	lockall
	delay 15
	applymovement LOCALID_SN_ACUITY_BARRY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox LakeAcuity_Text_SNNotGettingAway, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_ACUITY_JUPITER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox LakeAcuity_Text_SNJupiter, MSGBOX_DEFAULT
	closemessage
	sn_walktoplayer LOCALID_SN_ACUITY_JUPITER, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_SN_ACUITY_JUPITER
	sn_playerface LOCALID_SN_ACUITY_JUPITER, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox LakeAcuity_Text_SNDontWaste, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_ACUITY_JUPITER, 7, 49, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_ACUITY_JUPITER
	playse SE_EXIT
	removeobject LOCALID_SN_ACUITY_JUPITER
	setflag FLAG_SN_HIDE_ACUITY_JUPITER
	sn_walkto OBJ_EVENT_ID_PLAYER, 7, 44, SN_SPEED_NORMAL, 0, SN_MOVE_ADJACENT, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement LOCALID_SN_ACUITY_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LakeAcuity_EventScript_SNBarry_T1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_ACUITY_BARRY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox LakeAcuity_EventScript_SNBarry_T2, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement LOCALID_SN_ACUITY_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox LakeAcuity_Text_SNStronger, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_ACUITY_BARRY, 7, 49, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_ACUITY_BARRY
	playse SE_EXIT
	removeobject LOCALID_SN_ACUITY_BARRY
	setflag FLAG_SN_HIDE_ACUITY_BARRY
	setflag FLAG_SN_RECEIVED_GALACTIC_KEY
	releaseall
	end
LakeAcuity_EventScript_SNSceneEnd:
	end

LakeAcuity_Text_SNNotGettingAway:
	.string "{RIVAL}: !\p"
	.string "You’re not getting away with this, Team\n"
	.string "Galactic!$"

LakeAcuity_Text_SNDontWaste:
	.string "Oh? Don’t I know you? We met in Eterna\n"
	.string "City.\p"
	.string "Listen. Team Galactic is going to do\n"
	.string "something huge for everyone’s sake.\p"
	.string "That’s why you should keep out of Team\n"
	.string "Galactic’s way.\p"
	.string "Don’t come whining about poor POKéMON\n"
	.string "and other trivial junk like that.\p"
	.string "Don’t waste your time coming to our HQ\n"
	.string "in Veilstone.\p"
	.string "Now, if you’ll excuse me.$"

LakeAcuity_Text_SNStronger:
	.string "I’m going to get tougher...\p"
	.string "It’s not about winning or losing...\n"
	.string "That’s not good enough...\p"
	.string "I have to be stronger...\p"
	.string "It’s not enough to just want to be the\n"
	.string "most powerful Trainer ever...\p"
	.string "It takes honest effort... And a\n"
	.string "determined heart.$"

LakeAcuity_Text_SNJupiter:
	.string "Jupiter: Oh? Are you finished already?\p"
	.string "Your POKéMON aren’t bad, but you’re\n"
	.string "laughably weak.\p"
	.string "You honestly thought you could save\n"
	.string "the POKéMON of the lake?\p"
	.string "And become the POKéMON Champion?\n"
	.string "Dream on, little kid.\p"
	.string "But, eww, it’s so cold here. Let’s go\n"
	.string "back to the Veilstone HQ.$"
