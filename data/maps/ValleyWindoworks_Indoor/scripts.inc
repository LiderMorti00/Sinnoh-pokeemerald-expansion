ValleyWindoworks_Indoor_MapScripts::
	.byte 0

ValleyWindoworks_Indoor_EventScript_Grunt1::
	trainerbattle_single TRAINER_GEORGE, ValleyWindoworks_Indoor_Text_G1Intro, ValleyWindoworks_Indoor_Text_G1Defeat
	msgbox ValleyWindoworks_Indoor_Text_G1Post, MSGBOX_AUTOCLOSE
	end

ValleyWindoworks_Indoor_EventScript_Grunt2::
	trainerbattle_single TRAINER_BERKE, ValleyWindoworks_Indoor_Text_G2Intro, ValleyWindoworks_Indoor_Text_G2Defeat
	msgbox ValleyWindoworks_Indoor_Text_G2Post, MSGBOX_AUTOCLOSE
	end

ValleyWindoworks_Indoor_EventScript_Mars::
	lockall
	goto_if_ge VAR_SINNOH_STORY, 22, ValleyWindoworks_Indoor_EventScript_MarsEnd
	msgbox ValleyWindoworks_Indoor_Text_MarsIntro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_BRAXTON, ValleyWindoworks_Indoor_Text_MarsDefeat
	msgbox ValleyWindoworks_Indoor_Text_MarsAfter, MSGBOX_DEFAULT
	msgbox ValleyWindoworks_Indoor_Text_Charon, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_WINDWORKS_MARS
	removeobject LOCALID_WINDWORKS_CHARON
	setflag FLAG_HIDE_WINDWORKS_TEAM
	setflag FLAG_HIDE_ROUTE205_GRUNTS
	clearflag FLAG_HIDE_WINDWORKS_LOOKER
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement LOCALID_WINDWORKS_WORKER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ValleyWindoworks_Indoor_Text_WorkerThanks, MSGBOX_DEFAULT
	setvar VAR_SINNOH_STORY, 22
ValleyWindoworks_Indoor_EventScript_MarsEnd::
	releaseall
	end

ValleyWindoworks_Indoor_EventScript_Worker::
	lock
	faceplayer
	goto_if_ge VAR_SINNOH_STORY, 22, ValleyWindoworks_Indoor_EventScript_WorkerAfter
	msgbox ValleyWindoworks_Indoor_Text_WorkerHelp, MSGBOX_DEFAULT
	release
	end
ValleyWindoworks_Indoor_EventScript_WorkerAfter::
	msgbox ValleyWindoworks_Indoor_Text_WorkerAfter, MSGBOX_DEFAULT
	release
	end

ValleyWindoworks_Indoor_Text_G1Intro:
	.string "GRUNT: How did you get in here?!\n"
	.string "Nobody gets past me!$"

ValleyWindoworks_Indoor_Text_G1Defeat:
	.string "Ugh! Defeated!$"

ValleyWindoworks_Indoor_Text_G1Post:
	.string "Commander MARS will take care of\n"
	.string "you!$"

ValleyWindoworks_Indoor_Text_G2Intro:
	.string "GRUNT: We're collecting energy for\n"
	.string "TEAM GALACTIC! Don't interfere!$"

ValleyWindoworks_Indoor_Text_G2Defeat:
	.string "Huh? I lost?$"

ValleyWindoworks_Indoor_Text_G2Post:
	.string "We need this energy for the boss's\n"
	.string "big plan...$"

ValleyWindoworks_Indoor_Text_MarsIntro:
	.string "MARS: Oh? A kid made it all the\n"
	.string "way in here? How annoying.\p"
	.string "I'm MARS, one of TEAM GALACTIC's\n"
	.string "commanders. We need the energy\l"
	.string "from this place.\p"
	.string "If you want to stop me, you'll\n"
	.string "have to beat me first!$"

ValleyWindoworks_Indoor_Text_MarsDefeat:
	.string "Hmph! You're better than I\n"
	.string "expected.$"

ValleyWindoworks_Indoor_Text_MarsAfter:
	.string "MARS: Fine, we'll leave. We've\n"
	.string "gathered enough energy anyway.$"

ValleyWindoworks_Indoor_Text_Charon:
	.string "???: Mm-hmm... Such a strong\n"
	.string "child. I am CHARON, a scientist of\l"
	.string "TEAM GALACTIC.\p"
	.string "MARS, we are finished here. Let us\n"
	.string "go.$"

ValleyWindoworks_Indoor_Text_WorkerThanks:
	.string "Thank you! You saved me! Those\n"
	.string "people wanted to steal the\l"
	.string "WINDWORKS's power.\p"
	.string "Please tell my daughter I'm safe!\n"
	.string "And the bridge on ROUTE 205 should\l"
	.string "be clear now.$"

ValleyWindoworks_Indoor_Text_WorkerHelp:
	.string "Please... stop them!$"

ValleyWindoworks_Indoor_Text_WorkerAfter:
	.string "The windmills are turning again.\n"
	.string "Thanks to you, the WINDWORKS is\l"
	.string "safe!$"
