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
	lock
	faceplayer
	msgbox LakeAcuity_EventScript_SNBarry_T1, MSGBOX_DEFAULT
	msgbox LakeAcuity_EventScript_SNBarry_T2, MSGBOX_DEFAULT
	msgbox LakeAcuity_EventScript_SNBarry_T3, MSGBOX_DEFAULT
	giveitem ITEM_GALACTIC_KEY
	setflag FLAG_SN_RECEIVED_GALACTIC_KEY
	closemessage
		sn_walkto VAR_LAST_TALKED, 6, 48, SN_SPEED_FAST, 0, 0, 0
	waitmovement VAR_LAST_TALKED
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_ACUITY_BARRY
	release
	end
LakeAcuity_EventScript_SNBarry_T1:
	.string "BARRY: ... ...\p"
	.string "Yeah, that’s right!\p"
	.string "I couldn’t do anything against Team\n"
	.string "Galactic!$"

LakeAcuity_EventScript_SNBarry_T2:
	.string "That POKéMON called UXIE... It was\n"
	.string "suffering...$"

LakeAcuity_EventScript_SNBarry_T3:
	.string "BARRY: That Jupiter dropped this key\n"
	.string "on her way out!\p"
	.string "It opens the Team Galactic HQ in\n"
	.string "Veilstone City!\p"
	.string "Go! I’ll catch up after I train some\n"
	.string "more!$"

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
	applymovement LOCALID_SN_ACUITY_JUPITER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox LakeAcuity_Text_SNJupiter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_ACUITY_JUPITER, LakeAcuity_Movement_SNJupiterLeaves
	waitmovement 0
	removeobject LOCALID_SN_ACUITY_JUPITER
	setflag FLAG_SN_HIDE_ACUITY_JUPITER
	applymovement LOCALID_SN_ACUITY_BARRY, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	goto LakeAcuity_EventScript_SNBarry
LakeAcuity_EventScript_SNSceneEnd:
	end

LakeAcuity_Movement_SNJupiterLeaves:
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

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
