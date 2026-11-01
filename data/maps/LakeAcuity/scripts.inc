LakeAcuity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeAcuity_OnTransitionSN
	.byte 0

LakeAcuity_OnTransitionSN:
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
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_ACUITY_BARRY
	fadescreen FADE_FROM_BLACK
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
