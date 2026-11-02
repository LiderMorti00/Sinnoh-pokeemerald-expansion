SurvivalArea_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SurvivalArea_OnTransitionSN
	.byte 0

SurvivalArea_EventScript_PtNpc1::
	msgbox SurvivalArea_Text_PtNpc1, MSGBOX_NPC
	end

SurvivalArea_Text_PtNpc1:
	.string "I'm taking the Frontier challenges to\n"
	.string "score some commemorative prints.$"

SurvivalArea_EventScript_PtNpc2::
	msgbox SurvivalArea_Text_PtNpc2, MSGBOX_NPC
	end

SurvivalArea_Text_PtNpc2:
	.string "Trainers who lose at the Battle\n"
	.string "Frontier come here to train.$"

SurvivalArea_EventScript_PtNpc3::
	msgbox SurvivalArea_Text_PtNpc3, MSGBOX_NPC
	end

SurvivalArea_Text_PtNpc3:
	.string "Hey, traveling Trainer. Is your big Bag\n"
	.string "full of items?\p"
	.string "Or is it full of dreams?$"

SurvivalArea_EventScript_PtNpc4::
	msgbox SurvivalArea_Text_PtNpc4, MSGBOX_NPC
	end

SurvivalArea_Text_PtNpc4:
	.string "I'm a Cameraman, obviously.\p"
	.string "Have you seen that TV program,\n"
	.string "“Search for the Red GYARADOS!”?\p"
	.string "Yeah, that outstanding documentary!\n"
	.string "I filmed that!$"

SurvivalArea_EventScript_PtSign1::
	msgbox SurvivalArea_Text_PtSign1, MSGBOX_SIGN
	end

SurvivalArea_Text_PtSign1:
	.string "Survival Area Staging Point$"

SurvivalArea_EventScript_SNBarry::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BARRY, SurvivalArea_EventScript_SNBarry_Done
	msgbox SurvivalArea_EventScript_SNBarry_Intro, MSGBOX_DEFAULT
	closemessage
	switch VAR_STARTER_MON
	case 0, SurvivalArea_EventScript_SNBarry_B0
	case 1, SurvivalArea_EventScript_SNBarry_B1
	case 2, SurvivalArea_EventScript_SNBarry_B2
SurvivalArea_EventScript_SNBarry_B0:
	trainerbattle_no_intro TRAINER_PABLO_1, SurvivalArea_EventScript_SNBarry_Defeat
	goto SurvivalArea_EventScript_SNBarry_After
SurvivalArea_EventScript_SNBarry_B1:
	trainerbattle_no_intro TRAINER_ISAIAH_2, SurvivalArea_EventScript_SNBarry_Defeat
	goto SurvivalArea_EventScript_SNBarry_After
SurvivalArea_EventScript_SNBarry_B2:
	trainerbattle_no_intro TRAINER_ISAIAH_3, SurvivalArea_EventScript_SNBarry_Defeat
	goto SurvivalArea_EventScript_SNBarry_After
SurvivalArea_EventScript_SNBarry_After:
	setflag FLAG_DAILY_SN_BARRY
	msgbox SurvivalArea_EventScript_SNBarry_Post, MSGBOX_DEFAULT
	release
	end

SurvivalArea_EventScript_SNBarry_Done:
	special SinnohDayOfWeek
	switch VAR_RESULT
	case 1, SurvivalArea_EventScript_SNBarry_Done1
	case 3, SurvivalArea_EventScript_SNBarry_Done1
	case 5, SurvivalArea_EventScript_SNBarry_Done1
	case 2, SurvivalArea_EventScript_SNBarry_Done2
	case 4, SurvivalArea_EventScript_SNBarry_Done2
	msgbox SurvivalArea_EventScript_SNBarry_DoneT, MSGBOX_DEFAULT
	release
	end

SurvivalArea_EventScript_SNBarry_Done1:
	msgbox SurvivalArea_Text_SNBarryTalk1, MSGBOX_DEFAULT
	release
	end

SurvivalArea_EventScript_SNBarry_Done2:
	msgbox SurvivalArea_Text_SNBarryTalk2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_EventScript_SNBarry_Intro:
	.string "BARRY: Hey, {PLAYER}! You aren’t the\n"
	.string "only one getting tougher!\p"
	.string "I’ll prove it to you! Let’s go!$"

SurvivalArea_EventScript_SNBarry_Defeat:
	.string "BARRY: ...!$"

SurvivalArea_EventScript_SNBarry_Post:
	.string "BARRY: ...!\p"
	.string "It’s all right, though. Keep getting\n"
	.string "tougher, {PLAYER}.\p"
	.string "The more you do, the tougher my\n"
	.string "POKéMON and I get, too.\p"
	.string "There’s no end to POKéMON. That’s what\n"
	.string "I’m saying, {PLAYER}!$"

SurvivalArea_EventScript_SNBarry_DoneT:
	.string "BARRY: Hey, {PLAYER}! How are you\n"
	.string "doing?\p"
	.string "Me? You even need to ask? Piling up the\n"
	.string "wins at the Battle Tower!\p"
	.string "Huh? My longest winning streak? What,\n"
	.string "you’re going to grill me now?$"

SurvivalArea_OnTransitionSN:
	call SurvivalArea_EventScript_SNVis_SURV_BUCK
	end

SurvivalArea_EventScript_SNVis_SURV_BUCK:
	setflag FLAG_SN_HIDE_SURV_BUCK
	goto_if_set FLAG_SN_SURVIVAL_BUCK, SurvivalArea_EventScript_SNVis_SURV_BUCK_End
	clearflag FLAG_SN_HIDE_SURV_BUCK
SurvivalArea_EventScript_SNVis_SURV_BUCK_End:
	return

SurvivalArea_EventScript_SNBuck::
	lock
	faceplayer
	msgbox SurvivalArea_Text_SNBuck, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_SURVIVAL_BUCK
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_SURV_BUCK
	setflag FLAG_SN_HIDE_SURV_BUCK
	fadescreen FADE_FROM_BLACK
	release
	end

SurvivalArea_Text_SNBuck:
	.string "Buck: Yo, if it isn’t {PLAYER}!\p"
	.string "This! It’s my place! Drop in, hey?$"

SurvivalArea_Text_SNBarryTalk1:
	.string "{RIVAL}: Oh, it’s you, {PLAYER}.\p"
	.string "Did you battle with everyone?\p"
	.string "Don’t you think it’s kind of cool,\n"
	.string "though?\p"
	.string "When people talk about POKéMON, they\n"
	.string "all start smiling!$"

SurvivalArea_Text_SNBarryTalk2:
	.string "{RIVAL}: ...! Oh, it’s you, {PLAYER}.\p"
	.string "You know, the best Trainers must really\n"
	.string "love POKéMON from their heart.\p"
	.string "I’m talking about people like the Gym\n"
	.string "Leaders, of course.\p"
	.string "People like the Tower Tycoon and the\n"
	.string "other Frontier Brains, too.\p"
	.string "You can tell they love POKéMON when\n"
	.string "you’re battling them.\p"
	.string "But I’m not conceding anything to\n"
	.string "them, or to you!\p"
	.string "Because I’m still going to be the\n"
	.string "greatest Trainer ever!$"
