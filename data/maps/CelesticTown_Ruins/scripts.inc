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
	lock
	faceplayer
	msgbox CelesticTown_Ruins_Text_SNCyrusTalk, MSGBOX_DEFAULT
CelesticTown_Ruins_EventScript_SNCyrus_Ask:
	msgbox CelesticTown_Ruins_Text_SNCyrusAsk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CelesticTown_Ruins_EventScript_SNCyrus_Coward
	msgbox CelesticTown_Ruins_EventScript_SNCyrus_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_ELLIOT_2, CelesticTown_Ruins_EventScript_SNCyrus_Defeat
	goto CelesticTown_Ruins_EventScript_SNCyrus_Won
CelesticTown_Ruins_EventScript_SNCyrus_Coward:
	msgbox CelesticTown_Ruins_Text_SNCyrusCoward, MSGBOX_DEFAULT
	release
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
	.string "Elder: That cave painting isn’t\n"
	.string "protected simply because it’s old.\p"
	.string "We’ve preserved it because we value\n"
	.string "the memories that it represents.\p"
	.string "It is a legacy of people and POKéMON\n"
	.string "beyond measure.\p"
	.string "A man who fails to understand that...\n"
	.string "What world could he dream of?\p"
	.string "Such a strange, strange man. Spouting\n"
	.string "such nonsense.\p"
	.string "The time and space of Sinnoh are filled\n"
	.string "with the memories and thoughts\p"
	.string "of countless people and POKéMON.\p"
	.string "This is a wonderful world. What need is\n"
	.string "there to change it?\p"
	.string "Oh, yes. I found something useful. You\n"
	.string "should take this.\p"
	.string "It belonged to my granddaughter, but\n"
	.string "she doesn’t use it anymore.$"

CelesticTown_Ruins_Text_SNElder2:
	.string "Elder: If a POKéMON learns Surf, it can\n"
	.string "carry you across water and the sea.\p"
	.string "You’ve been a great help. That’s my\n"
	.string "thanks for it.$"

CelesticTown_Ruins_EventScript_SNCharm::
	checkitem ITEM_OLD_CHARM
	goto_if_eq VAR_RESULT, FALSE, CelesticTown_Ruins_EventScript_SNCharmEnd
	lock
	faceplayer
	msgbox CelesticTown_Ruins_Text_SNCharm, MSGBOX_DEFAULT
	removeitem ITEM_OLD_CHARM
	playse SE_SUCCESS
	msgbox CelesticTown_Ruins_Text_SNCharm2, MSGBOX_DEFAULT
	msgbox CelesticTown_Ruins_Text_SNCharm3, MSGBOX_DEFAULT
	release
CelesticTown_Ruins_EventScript_SNCharmEnd:
	return
CelesticTown_Ruins_Text_SNCharm:
	.string "Oh, you were magnificent! Aren’t you\n"
	.string "quite the Trainer?\p"
	.string "As the elder of Celestic Town, I give\n"
	.string "you my thanks.\p"
	.string "Oh? That Old Charm... May I see that,\n"
	.string "dear?\p"
	.string "... What’s that?\p"
	.string "You say Cynthia entrusted you with it\n"
	.string "to deliver to me?\p"
	.string "That Cynthia... She’s my granddaughter.$"

CelesticTown_Ruins_Text_SNCharm2:
	.string "{PLAYER} handed over the Old Charm to\n"
	.string "the elder.$"

CelesticTown_Ruins_Text_SNCharm3:
	.string "This Old Charm is something made in\n"
	.string "Celestic Town long, long ago.\p"
	.string "It was made in honor of a mythical\n"
	.string "deity said to have created Sinnoh.\p"
	.string "These Old Charms are still discovered\n"
	.string "now and again.\p"
	.string "Since you’re in Celestic Town, why not\n"
	.string "look around inside the ruins?$"

CelesticTown_Ruins_Text_SNCyrusTalk:
	.string "???: I would like to know more about\n"
	.string "that legend, if you will.\p"
	.string "Elder: Who might you be...?\p"
	.string "Cyrus: My name is Cyrus.\p"
	.string "I want to put an end to pointless\n"
	.string "strife and hostility.\p"
	.string "I am seeking the power to create the\n"
	.string "ideal world.\p"
	.string "Thus, I want you to answer.\p"
	.string "The world today can’t change because\n"
	.string "the three POKéMON keep it in balance.\p"
	.string "Is that what you are saying?\p"
	.string "Elder: I wouldn’t know. I do know the\n"
	.string "world is in balance.\p"
	.string "I’m quite satisfied with the world the\n"
	.string "way it is.\p"
	.string "I’m not interested in your question.\p"
	.string "Cyrus: ...Plead ignorance, will you? What\n"
	.string "a pointless attitude.\p"
	.string "You fail to appreciate that the world\n"
	.string "is incomplete.\p"
	.string "I will change the world.\p"
	.string "As the first step, I will destroy this\n"
	.string "cave painting that you’ve protected\p"
	.string "all these years.\p"
	.string "A new legend of a new world should take\n"
	.string "its place.\p"
	.string "Am I wrong? If you feel that way,\n"
	.string "challenge me.$"

CelesticTown_Ruins_Text_SNCyrusAsk:
	.string "Cyrus: Well? Am I wrong? If you feel\n"
	.string "that way, challenge me.$"

CelesticTown_Ruins_Text_SNCyrusCoward:
	.string "Cyrus: ...You chose to be a coward. How\n"
	.string "sensible of you.\p"
	.string "Stand aside and watch as I change the\n"
	.string "world.$"

