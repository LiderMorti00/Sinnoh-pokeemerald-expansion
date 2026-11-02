CelesticTown_Ruins_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CelesticTown_Ruins_OnTransitionSN
	.byte 0

CelesticTown_Ruins_Text_PtNpc1_0:
	.string "That cave painting isn’t protected\n"
	.string "simply because it’s old.\p"
	.string "We’ve preserved it because we value\n"
	.string "the memories that it represents.\p"
	.string "It is a legacy of people and POKéMON\n"
	.string "beyond measure.\p"
	.string "A man who fails to understand that...\n"
	.string "What world could he dream of?$"

CelesticTown_Ruins_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CelesticTown_Ruins_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CelesticTown_Ruins_Text_PtNpc2:
	.string "Cyrus: Well? Am I wrong? If you feel\n"
	.string "that way, challenge me.$"

CelesticTown_Ruins_EventScript_PtNpc2::
	msgbox CelesticTown_Ruins_Text_PtNpc2, MSGBOX_NPC
	end

CelesticTown_Ruins_EventScript_PtSign1::
	msgbox CelesticTown_Ruins_Text_PtSign1, MSGBOX_SIGN
	end

CelesticTown_Ruins_Text_PtSign1:
	.string "{PLAYER} examined the ancient cave\n"
	.string "painting.\p"
	.string "Mysterious designs cover a whole\n"
	.string "section of the wall.\p"
	.string "There are three strange things forming\n"
	.string "a triangle.\p"
	.string "In the middle of them, a shining\n"
	.string "sphere?\p"
	.string "What is this all about?$"

CelesticTown_Ruins_EventScript_PtSign2::
	msgbox CelesticTown_Ruins_Text_PtSign2, MSGBOX_SIGN
	end

CelesticTown_Ruins_Text_PtSign2:
	.string "{PLAYER} examined the ancient cave\n"
	.string "painting.\p"
	.string "Mysterious designs cover a whole\n"
	.string "section of the wall.\p"
	.string "There are three strange things forming\n"
	.string "a triangle.\p"
	.string "In the middle of them, a shining\n"
	.string "sphere?\p"
	.string "What is this all about?$"

CelesticTown_Ruins_OnTransitionSN:
	call CelesticTown_Ruins_EventScript_SNVis_CEL_CYRUS
	end

CelesticTown_Ruins_EventScript_SNVis_CEL_CYRUS:
	setflag FLAG_SN_HIDE_CEL_CYRUS
	goto_if_not_defeated TRAINER_ELLIOT_1, CelesticTown_Ruins_EventScript_SNVis_CEL_CYRUS_End
	goto_if_defeated TRAINER_ELLIOT_2, CelesticTown_Ruins_EventScript_SNVis_CEL_CYRUS_End
	clearflag FLAG_SN_HIDE_CEL_CYRUS
CelesticTown_Ruins_EventScript_SNVis_CEL_CYRUS_End:
	return

CelesticTown_Ruins_EventScript_SNCyrus::
	trainerbattle_single TRAINER_ELLIOT_2, CelesticTown_Ruins_EventScript_SNCyrus_Intro, CelesticTown_Ruins_EventScript_SNCyrus_Defeat, CelesticTown_Ruins_EventScript_SNCyrus_Won
	end

CelesticTown_Ruins_EventScript_SNCyrus_Won:
	lock
	msgbox CelesticTown_Ruins_EventScript_SNCyrus_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_CEL_CYRUS
	fadescreen FADE_FROM_BLACK
	release
	end

CelesticTown_Ruins_EventScript_SNElder::
	call CelesticTown_Ruins_EventScript_SNCharm
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_HM_SURF, CelesticTown_Ruins_EventScript_SNElderDone
	goto_if_not_defeated TRAINER_ELLIOT_2, CelesticTown_Ruins_EventScript_SNElderDone
	msgbox CelesticTown_Ruins_Text_SNElder1, MSGBOX_DEFAULT
	giveitem ITEM_HM_SURF
	setflag FLAG_SN_RECEIVED_HM_SURF
	msgbox CelesticTown_Ruins_Text_SNElder2, MSGBOX_DEFAULT
	release
	end

CelesticTown_Ruins_EventScript_SNElderDone:
	msgbox CelesticTown_Ruins_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end
CelesticTown_Ruins_EventScript_SNCyrus_Intro:
	.string "Cyrus: ...I know you, Trainer. We’ve met\n"
	.string "at Mt. Coronet.\p"
	.string "Why would you want to protect this\n"
	.string "incomplete world?\p"
	.string "As the boss of Team Galactic, I will\n"
	.string "show you the error of your ways.$"

CelesticTown_Ruins_EventScript_SNCyrus_Defeat:
	.string "...Remarkable.$"

CelesticTown_Ruins_EventScript_SNCyrus_Post:
	.string "Cyrus: ...Remarkable.\p"
	.string "But, Elder, your attitude told me what\n"
	.string "I needed to know.\p"
	.string "If the beings of time and space are\n"
	.string "brought together, they can’t be\p"
	.string "stopped...$"

CelesticTown_Ruins_Text_SNElder1:
	.string "That cave painting isn’t protected\n"
	.string "simply because it’s old.\p"
	.string "We’ve preserved it because we value\n"
	.string "the memories that it represents.\p"
	.string "It is a legacy of people and POKéMON\n"
	.string "beyond measure.\p"
	.string "A man who fails to understand that...\n"
	.string "What world could he dream of?$"

CelesticTown_Ruins_Text_SNElder2:
	.string "If a POKéMON learns Surf, it can carry\n"
	.string "you across water and the sea.\p"
	.string "You’ve been a great help. That’s my\n"
	.string "thanks for it.$"

CelesticTown_Ruins_EventScript_SNCharm::
	checkitem ITEM_OLD_CHARM
	goto_if_eq VAR_RESULT, FALSE, CelesticTown_Ruins_EventScript_SNCharmEnd
	lock
	faceplayer
	msgbox CelesticTown_Ruins_Text_SNCharm, MSGBOX_DEFAULT
	removeitem ITEM_OLD_CHARM
	release
CelesticTown_Ruins_EventScript_SNCharmEnd:
	return
CelesticTown_Ruins_Text_SNCharm:
	.string "Elder: Oh! This is the Old Charm... My\n"
	.string "granddaughter Cynthia asked you to\l"
	.string "bring it to me? Thank you, dear.$"
