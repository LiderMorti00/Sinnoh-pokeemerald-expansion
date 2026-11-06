ValleyWindoworks_Indoor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ValleyWindoworks_Indoor_OnTransitionSN
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ValleyWindoworks_Indoor_OnFrameSN
	.byte 0

ValleyWindoworks_Indoor_OnFrameSN:
	map_script_2 VAR_TEMP_3, 1, ValleyWindoworks_Indoor_EventScript_SNDoorGrunt
	.2byte 0

ValleyWindoworks_Indoor_EventScript_SNDoorGrunt::
	lockall
	setvar VAR_TEMP_3, 0
	setflag FLAG_SN_WW_DOOR_GRUNT_DONE
	applymovement LOCALID_SN_WW_DOOR_GRUNT, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox ValleyWindoworks_Indoor_Text_SNDoorGrunt, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_WW_DOOR_GRUNT, 1, 12, SN_SPEED_FAST, 0, 0, 0
	sn_playerface LOCALID_SN_WW_DOOR_GRUNT, 1
	waitmovement LOCALID_SN_WW_DOOR_GRUNT
	removeobject LOCALID_SN_WW_DOOR_GRUNT
	setflag FLAG_SN_HIDE_WW_DOOR_GRUNT
	releaseall
	end

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
	msgbox ValleyWindoworks_Indoor_Text_SNPapa1, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_SN_HIDE_WW_GIRL
	addobject LOCALID_SN_WW_GIRL
	playse SE_PIN
	applymovement LOCALID_SN_WW_GIRL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_WINDWORKS_WORKER, Common_Movement_FaceRight
	waitmovement 0
	msgbox ValleyWindoworks_Indoor_Text_SNGirl1, MSGBOX_DEFAULT
	msgbox ValleyWindoworks_Indoor_Text_SNPapa2, MSGBOX_DEFAULT
	applymovement LOCALID_SN_WW_GIRL, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ValleyWindoworks_Indoor_Text_SNGirl2, MSGBOX_DEFAULT
	applymovement LOCALID_WINDWORKS_WORKER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ValleyWindoworks_Indoor_Text_SNPapa3, MSGBOX_DEFAULT
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
	.string "Mars: I’m one of Team Galactic’s three\n"
	.string "Commanders.\p"
	.string "...No, wait. That’s one of four\n"
	.string "Commanders.\p"
	.string "My name is Mars!\p"
	.string "We’ve been trying to create a new world\n"
	.string "that’s better than this one...\p"
	.string "But people have shown little\n"
	.string "understanding about what we do.\p"
	.string "You don’t understand either, do you?\n"
	.string "It’s a little saddening...\p"
	.string "So, let’s have a battle to decide what\n"
	.string "we should do next.\p"
	.string "If I win, you leave.\p"
	.string "If you win, we, Team Galactic, will\n"
	.string "leave!$"

ValleyWindoworks_Indoor_Text_MarsDefeat:
	.string "Hmph! You're better than I\n"
	.string "expected.$"

ValleyWindoworks_Indoor_Text_MarsAfter:
	.string "Mars: Oops! I messed that one up!\p"
	.string "That’s all right, though. I quite\n"
	.string "enjoyed our battle.$"

ValleyWindoworks_Indoor_Text_Charon:
	.string "Charon: My, my. Lose to a child, will\n"
	.string "you?\p"
	.string "But, no matter. We’ve collected plenty\n"
	.string "of electricity.\p"
	.string "With the power we obtained, we can do\n"
	.string "something quite spectacular.\p"
	.string "It seems quite obvious to me, Charon,\n"
	.string "the genius even the boss recognizes.\p"
	.string "Now, Mars, we should be going.\p"
	.string "Mars: Will you shut it!\p"
	.string "The boss is the only person in the\n"
	.string "world who’s allowed to order me around!\p"
	.string "You can keep quiet around me! You only\n"
	.string "joined us recently.\p"
	.string "Don’t think you’re important!\p"
	.string "Mars: I guess it’s time to say good-bye\n"
	.string "and leave for the time being!$"

ValleyWindoworks_Indoor_Text_WorkerThanks:
	.string "Papa: Team Galactic...\p"
	.string "They were saying they had to gather\n"
	.string "POKéMON and energy no matter what.\p"
	.string "It was for creating a new universe, or\n"
	.string "so they claimed.\p"
	.string "Nothing they said made any sort of\n"
	.string "sense to me.\p"
	.string "I can’t tell you how grateful I am for\n"
	.string "you saving me.\p"
	.string "I can finally see my little daughter\n"
	.string "again!$"

ValleyWindoworks_Indoor_Text_WorkerHelp:
	.string "Please... stop them!$"

ValleyWindoworks_Indoor_Text_WorkerAfter:
	.string "Papa: Oh, yes, a balloon POKéMON\n"
	.string "appears in front of the windworks.\p"
	.string "It’s always a certain day of the week,\n"
	.string "but I’m not sure which day.\p"
	.string "Could its appearance have something\n"
	.string "to do with this windworks using\p"
	.string "wind-generated energy?$"

ValleyWindoworks_Indoor_OnTransitionSN:
	call ValleyWindoworks_Indoor_EventScript_SNVis_WW_GIRL
	setflag FLAG_SN_HIDE_WW_DOOR_GRUNT
	setvar VAR_TEMP_3, 0
	goto_if_set FLAG_HIDE_WINDWORKS_TEAM, ValleyWindoworks_Indoor_OnTransitionSN_End
	goto_if_set FLAG_SN_WW_DOOR_GRUNT_DONE, ValleyWindoworks_Indoor_OnTransitionSN_End
	clearflag FLAG_SN_HIDE_WW_DOOR_GRUNT
	setvar VAR_TEMP_3, 1
ValleyWindoworks_Indoor_OnTransitionSN_End:
	end

ValleyWindoworks_Indoor_EventScript_SNVis_WW_GIRL:
	setflag FLAG_SN_HIDE_WW_GIRL
	goto_if_lt VAR_SINNOH_STORY, 22, ValleyWindoworks_Indoor_EventScript_SNVis_WW_GIRL_End
	clearflag FLAG_SN_HIDE_WW_GIRL
ValleyWindoworks_Indoor_EventScript_SNVis_WW_GIRL_End:
	return

ValleyWindoworks_Indoor_EventScript_SNGirl::
	lock
	faceplayer
	msgbox ValleyWindoworks_Indoor_Text_SNGirl2, MSGBOX_DEFAULT
	release
	end

ValleyWindoworks_Indoor_Text_SNPapa1:
	.string "Team Galactic...\p"
	.string "They were saying they had to gather\n"
	.string "POKéMON and energy no matter what.\p"
	.string "It was for creating a new universe, or\n"
	.string "so they claimed.\p"
	.string "Nothing they said made any sort of\n"
	.string "sense to me.\p"
	.string "I can’t tell you how grateful I am for\n"
	.string "you saving me.\p"
	.string "I can finally see my little daughter\n"
	.string "again!$"

ValleyWindoworks_Indoor_Text_SNGirl1:
	.string "Little girl: Papa!\p"
	.string "Yuck! Papa, you’re stinky! Go shower\n"
	.string "now, stinky!$"

ValleyWindoworks_Indoor_Text_SNPapa2:
	.string "Papa: Oh, sorry! Ahaha! They had me\n"
	.string "working nonstop!$"

ValleyWindoworks_Indoor_Text_SNGirl2:
	.string "Little girl: Thank you, Trainer! You\n"
	.string "made those bad people go away!\p"
	.string "I think the balloon POKéMON will come\n"
	.string "visiting again!$"

ValleyWindoworks_Indoor_Text_SNPapa3:
	.string "Papa: Oh, yes, a balloon POKéMON\n"
	.string "appears in front of the windworks.\p"
	.string "It’s always a certain day of the week,\n"
	.string "but I’m not sure which day.\p"
	.string "Could its appearance have something\n"
	.string "to do with this windworks using\p"
	.string "wind-generated energy?$"

ValleyWindoworks_Indoor_Text_SNDoorGrunt:
	.string "What?! No way! You have the key?\p"
	.string "Locking the door was meaningless! I am\n"
	.string "the loser in this after all!\p"
	.string "This is no time for self-pity! I’ve got\n"
	.string "to alert the Commander!$"
