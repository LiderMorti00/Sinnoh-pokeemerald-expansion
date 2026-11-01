SurvivalArea_MapScripts::
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
	msgbox SurvivalArea_EventScript_SNBarry_DoneT, MSGBOX_DEFAULT
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
