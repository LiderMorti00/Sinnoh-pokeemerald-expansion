GalacticHQ_ControlRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GalacticHQ_ControlRoom_OnTransitionSN
	.byte 0

GalacticHQ_ControlRoom_Text_PtNpc1:
	.string "Our boss crafted a Red Chain from\n"
	.string "crystals he took from the three\p"
	.string "POKéMON.\p"
	.string "That Red Chain is what he needed to\n"
	.string "shackle something on Mt. Coronet.\p"
	.string "It’s also apparently needed for\n"
	.string "creating something.\p"
	.string "But that’s all I know. Who knows what\n"
	.string "he’s planning to do up there.$"

GalacticHQ_ControlRoom_EventScript_PtNpc1::
	msgbox GalacticHQ_ControlRoom_Text_PtNpc1, MSGBOX_NPC
	end

GalacticHQ_ControlRoom_Text_PtNpc2:
	.string "Charon: Humph. Saturn and even Cyrus\n"
	.string "fall to a mere child...\p"
	.string "Team Galactic’s state of affairs is\n"
	.string "worrying...\p"
	.string "That plan of Cyrus’s atop Mt. Coronet,\n"
	.string "too... Who knows if it will work.\p"
	.string "...Hmm. Perhaps another option needs to\n"
	.string "be considered.\p"
	.string "One befitting the genius of Charon!$"

GalacticHQ_ControlRoom_EventScript_PtNpc2::
	msgbox GalacticHQ_ControlRoom_Text_PtNpc2, MSGBOX_NPC
	end

GalacticHQ_ControlRoom_EventScript_PtSign1::
	msgbox GalacticHQ_ControlRoom_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign1:
	.string "It’s Team Galactic’s sinister machine.\n"
	.string "UXIE had been sealed inside it.$"

GalacticHQ_ControlRoom_EventScript_PtSign2::
	msgbox GalacticHQ_ControlRoom_Text_PtSign2, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign2:
	.string "It’s Team Galactic’s sinister machine.\n"
	.string "MESPRIT had been sealed inside it.$"

GalacticHQ_ControlRoom_EventScript_PtSign3::
	msgbox GalacticHQ_ControlRoom_Text_PtSign3, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign3:
	.string "It’s Team Galactic’s sinister machine.\n"
	.string "AZELF had been sealed inside it.$"

GalacticHQ_ControlRoom_EventScript_PtSign4::
	msgbox GalacticHQ_ControlRoom_Text_PtSign4, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign4:
	.string "The button has been pressed already.\n"
	.string "You have to leave.$"

GalacticHQ_ControlRoom_OnTransitionSN:
	call GalacticHQ_ControlRoom_EventScript_SNVis_HQ_SATURN
	end

GalacticHQ_ControlRoom_EventScript_SNVis_HQ_SATURN:
	setflag FLAG_SN_HIDE_HQ_SATURN
	goto_if_lt VAR_SINNOH_STORY, 31, GalacticHQ_ControlRoom_EventScript_SNVis_HQ_SATURN_End
	goto_if_defeated TRAINER_ABIGAIL_4, GalacticHQ_ControlRoom_EventScript_SNVis_HQ_SATURN_End
	clearflag FLAG_SN_HIDE_HQ_SATURN
GalacticHQ_ControlRoom_EventScript_SNVis_HQ_SATURN_End:
	return

GalacticHQ_ControlRoom_EventScript_SNSaturn::
	trainerbattle_single TRAINER_ABIGAIL_4, GalacticHQ_ControlRoom_EventScript_SNSaturn_Intro, GalacticHQ_ControlRoom_EventScript_SNSaturn_Defeat, GalacticHQ_ControlRoom_EventScript_SNSaturn_Won
	end

GalacticHQ_ControlRoom_EventScript_SNSaturn_Won:
	lock
	msgbox GalacticHQ_ControlRoom_Text_SNRedChain, MSGBOX_DEFAULT
	msgbox GalacticHQ_ControlRoom_Text_SNCharon1, MSGBOX_DEFAULT
	msgbox GalacticHQ_ControlRoom_Text_SNCharon2, MSGBOX_DEFAULT
	msgbox GalacticHQ_ControlRoom_EventScript_SNSaturn_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_HQ_SATURN
	fadescreen FADE_FROM_BLACK
	release
	end
GalacticHQ_ControlRoom_EventScript_SNSaturn_Intro:
	.string "Saturn: You... You came all the way here\n"
	.string "just to save some POKéMON?\p"
	.string "...Though it’s nothing new, I can’t say I\n"
	.string "understand our boss...\p"
	.string "Why would he let a kid like you come and\n"
	.string "go freely...?\p"
	.string "We, Team Galactic, take all that we\n"
	.string "need, and eliminate what we do not.\p"
	.string "But anyway. You’ve taken the trouble\n"
	.string "to come. Let me welcome you!\p"
	.string "Consider it payback for your insulting\n"
	.string "me at the lake.$"

GalacticHQ_ControlRoom_EventScript_SNSaturn_Defeat:
	.string "Saturn: ...I see. So that is your power.$"

GalacticHQ_ControlRoom_EventScript_SNSaturn_Post:
	.string "Our boss crafted a Red Chain from\n"
	.string "crystals he took from the three\p"
	.string "POKéMON.\p"
	.string "That Red Chain is what he needed to\n"
	.string "shackle something on Mt. Coronet.\p"
	.string "It’s also apparently needed for\n"
	.string "creating something.\p"
	.string "But that’s all I know. Who knows what\n"
	.string "he’s planning to do up there.$"

GalacticHQ_ControlRoom_Text_SNRedChain:
	.string "Saturn: ...Gah! What makes you so\n"
	.string "tough?\p"
	.string "Fine... Do whatever you want with those\n"
	.string "three POKéMON.\p"
	.string "Press the button on that machine to\n"
	.string "set them free.\p"
	.string "Saturn: Our boss crafted a Red Chain\n"
	.string "from crystals he took from the three\p"
	.string "POKéMON.\p"
	.string "That Red Chain is what he needed to\n"
	.string "shackle something on Mt. Coronet.\p"
	.string "It’s also apparently needed for\n"
	.string "creating something.\p"
	.string "But that’s all I know. Who knows what\n"
	.string "he’s planning to do up there.$"

GalacticHQ_ControlRoom_Text_SNCharon1:
	.string "Charon: Fuhyahya!\p"
	.string "Those POKéMON of the lakes, where do\n"
	.string "you suppose they would go?\p"
	.string "Saturn: What are you trying to say?$"

GalacticHQ_ControlRoom_Text_SNCharon2:
	.string "Charon: Nothing. Pay it no heed.\p"
	.string "A new world isn’t overly interesting.\n"
	.string "What of it?\p"
	.string "If Cyrus is right, then Team Galactic\n"
	.string "will rule that new world.\p"
	.string "That’s when it will be interesting. A\n"
	.string "chance to enjoy its sweets.\p"
	.string "I surely hope that our visionary Cyrus\n"
	.string "realizes his dream.\p"
	.string "I look forward to whatever our beloved\n"
	.string "leader has planned atop Mt. Coronet.\p"
	.string "Saturn: Gramps.\p"
	.string "Our boss can do without your kind of\n"
	.string "moral support.$"

