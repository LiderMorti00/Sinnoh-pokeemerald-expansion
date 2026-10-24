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
	.string "Oi! This is no fun and games! This is\n"
	.string "proper work, I tell you!$"

ValleyWindoworks_Indoor_Text_G1Defeat:
	.string "What...?! Some brat messed up my job...$"

ValleyWindoworks_Indoor_Text_G1Post:
	.string "TEAM GALACTIC needs electricity for\n"
	.string "doing something big!$"

ValleyWindoworks_Indoor_Text_G2Intro:
	.string "Collecting electricity from the\n"
	.string "VALLEY WINDWORKS... That's our\l"
	.string "mission.$"

ValleyWindoworks_Indoor_Text_G2Defeat:
	.string "I really don't like kids who also\n"
	.string "happen to be tough Trainers...$"

ValleyWindoworks_Indoor_Text_G2Post:
	.string "You don't have an inkling of what TEAM\n"
	.string "GALACTIC is trying to achieve!\p"
	.string "Of course, they don't tell a grunt like\n"
	.string "me anything, either... But still!$"

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
