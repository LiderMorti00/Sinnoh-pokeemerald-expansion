JubilifeCity_MapScripts::
	.byte 0

JubilifeCity_EventScript_Sign1::
	msgbox JubilifeCity_Text_Sign1, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign1:
	.string "JUBILIFE CITY\p"
	.string "The most modern city in Sinnoh.$"

JubilifeCity_EventScript_Sign2::
	msgbox JubilifeCity_Text_Sign2, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign2:
	.string "TRAINERS' SCHOOL\p"
	.string "Learn the basics of POKéMON\n"
	.string "battling!$"

JubilifeCity_EventScript_Sign3::
	msgbox JubilifeCity_Text_Sign3, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign3:
	.string "POKéTCH COMPANY\p"
	.string "Making life easier for Trainers\n"
	.string "everywhere.$"

JubilifeCity_EventScript_Sign4::
	msgbox JubilifeCity_Text_Sign4, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign4:
	.string "JUBILIFE TV\p"
	.string "Broadcasting across all of Sinnoh.$"

JubilifeCity_EventScript_PtNpc1::
	msgbox JubilifeCity_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc1:
	.string "JUBILIFE is the biggest city in\n"
	.string "Sinnoh. Everything is here!$"

JubilifeCity_EventScript_PtNpc2::
	msgbox JubilifeCity_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc2:
	.string "I'm heading to OREBURGH to\n"
	.string "challenge the GYM. Wish me luck!$"

JubilifeCity_EventScript_PtNpc3::
	msgbox JubilifeCity_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc3:
	.string "The TRAINERS' SCHOOL is where I\n"
	.string "learned everything I know!$"

JubilifeCity_EventScript_PtNpc4::
	msgbox JubilifeCity_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc4:
	.string "Look at all these buildings! I get\n"
	.string "lost every time I come here.$"

JubilifeCity_EventScript_PtNpc5::
	msgbox JubilifeCity_Text_PtNpc5, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc5:
	.string "The POKéTCH COMPANY makes watches\n"
	.string "for Trainers. They're really\l"
	.string "useful!$"

JubilifeCity_EventScript_PtNpc6::
	msgbox JubilifeCity_Text_PtNpc6, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc6:
	.string "Did you see the TV station?\n"
	.string "JUBILIFE TV broadcasts all over\l"
	.string "Sinnoh.$"

JubilifeCity_EventScript_PtNpc7::
	msgbox JubilifeCity_Text_PtNpc7, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc7:
	.string "Some people in strange spacesuits\n"
	.string "were wandering around town. Who\l"
	.string "are they?$"

JubilifeCity_EventScript_PtNpc8::
	msgbox JubilifeCity_Text_PtNpc8, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc8:
	.string "Want to battle? Just kidding! I'm\n"
	.string "waiting for a friend.$"

JubilifeCity_EventScript_PtNpc9::
	msgbox JubilifeCity_Text_PtNpc9, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc9:
	.string "The road east leads to ROUTE 203\n"
	.string "and OREBURGH CITY.$"

JubilifeCity_EventScript_PtNpc10::
	msgbox JubilifeCity_Text_PtNpc10, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc10:
	.string "I'm playing a game! Don't bother\n"
	.string "me, I'm about to win!$"

JubilifeCity_EventScript_PtNpc11::
	msgbox JubilifeCity_Text_PtNpc11, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc11:
	.string "Beep boop! I'm trading POKéMON\n"
	.string "with my friend over here!$"

JubilifeCity_EventScript_Dawn::
JubilifeCity_EventScript_DawnScene::
	lockall
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_JUBILIFE_DAWN, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox JubilifeCity_Text_DawnWelcome, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_JUBILIFE_DAWN, JubilifeCity_Movement_DawnToSchool
	waitmovement 0
	removeobject LOCALID_JUBILIFE_DAWN
	setflag FLAG_HIDE_JUBILIFE_DAWN
	clearflag FLAG_HIDE_SCHOOL_BARRY
	setvar VAR_SINNOH_STORY, 9
	releaseall
	end

JubilifeCity_EventScript_BlockEast::
	lockall
	goto_if_eq VAR_SINNOH_STORY, 11, JubilifeCity_EventScript_BlockEastPoketch
	msgbox JubilifeCity_Text_BlockEastSchool, MSGBOX_DEFAULT
	goto JubilifeCity_EventScript_BlockEastEnd
JubilifeCity_EventScript_BlockEastPoketch::
	msgbox JubilifeCity_Text_BlockEastNorth, MSGBOX_DEFAULT
JubilifeCity_EventScript_BlockEastEnd::
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
	end

JubilifeCity_EventScript_Clown1::
	lock
	faceplayer
	goto_if_set FLAG_POKETCH_COUPON_1, JubilifeCity_EventScript_ClownDone
	msgbox JubilifeCity_Text_ClownQuiz1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_EventScript_ClownWrong
	setflag FLAG_POKETCH_COUPON_1
	goto JubilifeCity_EventScript_ClownRight

JubilifeCity_EventScript_Clown2::
	lock
	faceplayer
	goto_if_set FLAG_POKETCH_COUPON_2, JubilifeCity_EventScript_ClownDone
	msgbox JubilifeCity_Text_ClownQuiz2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_EventScript_ClownWrong
	setflag FLAG_POKETCH_COUPON_2
	goto JubilifeCity_EventScript_ClownRight

JubilifeCity_EventScript_Clown3::
	lock
	faceplayer
	goto_if_set FLAG_POKETCH_COUPON_3, JubilifeCity_EventScript_ClownDone
	msgbox JubilifeCity_Text_ClownQuiz3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, JubilifeCity_EventScript_ClownWrong
	setflag FLAG_POKETCH_COUPON_3
	goto JubilifeCity_EventScript_ClownRight

JubilifeCity_EventScript_ClownRight::
	playfanfare MUS_OBTAIN_ITEM
	message JubilifeCity_Text_ClownRight
	waitfanfare
	waitmessage
	msgbox JubilifeCity_Text_ClownRight2, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_ClownWrong::
	msgbox JubilifeCity_Text_ClownWrong, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_ClownDone::
	msgbox JubilifeCity_Text_ClownDone, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_Rowan::
JubilifeCity_EventScript_GalacticScene::
	lockall
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_JUBILIFE_GRUNT_1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox JubilifeCity_Text_GruntsThreaten, MSGBOX_DEFAULT
	msgbox JubilifeCity_Text_GruntsYouToo, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GALACTIC_JUBILIFE_1, JubilifeCity_Text_Grunt1Defeat
	msgbox JubilifeCity_Text_GruntNext, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GALACTIC_JUBILIFE_2, JubilifeCity_Text_Grunt2Defeat
	msgbox JubilifeCity_Text_GruntsFlee, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_JUBILIFE_GRUNT_1
	removeobject LOCALID_JUBILIFE_GRUNT_2
	fadescreen FADE_FROM_BLACK
	msgbox JubilifeCity_Text_RowanThanks, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_JUBILIFE_ROWAN
	setflag FLAG_HIDE_JUBILIFE_GRUNTS
	clearflag FLAG_HIDE_JUBILIFE_LOOKER
	addobject LOCALID_JUBILIFE_LOOKER
	fadescreen FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 12
	releaseall
	end

JubilifeCity_EventScript_Looker::
	lock
	faceplayer
	msgbox JubilifeCity_Text_Looker, MSGBOX_DEFAULT
	release
	end

JubilifeCity_Movement_DawnToSchool:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

JubilifeCity_Text_DawnWelcome:
	.string "{STR_VAR_1}: Welcome to JUBILIFE\n"
	.string "CITY! Oh, and Barry was looking\l"
	.string "for you!\p"
	.string "He went to the TRAINERS' SCHOOL,\n"
	.string "the building near the POKéMON\l"
	.string "CENTER. Come on, let's go!$"

JubilifeCity_Text_BlockEastSchool:
	.string "Barry is waiting at the TRAINERS'\n"
	.string "SCHOOL. I should go there first.$"

JubilifeCity_Text_BlockEastNorth:
	.string "Something seems to be going on at\n"
	.string "the north end of town. Maybe I\l"
	.string "should check it out.$"

JubilifeCity_Text_ClownQuiz1:
	.string "Hello! I'm with the POKéTCH\n"
	.string "campaign! Answer my quiz to win a\l"
	.string "COUPON!\p"
	.string "Question! The POKéTCH is a handy\n"
	.string "watch made for POKéMON Trainers.\l"
	.string "True?$"

JubilifeCity_Text_ClownQuiz2:
	.string "POKéTCH campaign quiz time! Get it\n"
	.string "right for a COUPON!\p"
	.string "Question! JUBILIFE CITY is home to\n"
	.string "the TRAINERS' SCHOOL. True?$"

JubilifeCity_Text_ClownQuiz3:
	.string "Last quiz of the POKéTCH campaign!\n"
	.string "Ready?\p"
	.string "Question! A Trainer can carry\n"
	.string "seven POKéMON in their party at\l"
	.string "once. True?$"

JubilifeCity_Text_ClownRight:
	.string "Correct! {PLAYER} received a\n"
	.string "COUPON!$"

JubilifeCity_Text_ClownRight2:
	.string "Collect all three COUPONS and\n"
	.string "trade them at the POKéTCH COMPANY\l"
	.string "for your very own POKéTCH!$"

JubilifeCity_Text_ClownWrong:
	.string "Ooh, so close! Think it over and\n"
	.string "try again!$"

JubilifeCity_Text_ClownDone:
	.string "You already have my COUPON! Go\n"
	.string "find the others!$"

JubilifeCity_Text_GruntsThreaten:
	.string "GRUNT: Professor, hand over your\n"
	.string "research on evolution! It belongs\l"
	.string "to TEAM GALACTIC now!\p"
	.string "ROWAN: Nonsense. My research is\n"
	.string "not for the likes of you.$"

JubilifeCity_Text_GruntsYouToo:
	.string "GRUNT: Huh? Some kid wants to\n"
	.string "interfere? You'll regret that!$"

JubilifeCity_Text_Grunt1Defeat:
	.string "How did a kid beat me?!$"

JubilifeCity_Text_GruntNext:
	.string "GRUNT: Out of my way! I'll teach\n"
	.string "you a lesson myself!$"

JubilifeCity_Text_Grunt2Defeat:
	.string "No way... This isn't over!$"

JubilifeCity_Text_GruntsFlee:
	.string "GRUNT: TEAM GALACTIC will build a\n"
	.string "whole new world! Remember that!\l"
	.string "Retreat!$"

JubilifeCity_Text_RowanThanks:
	.string "ROWAN: Hmph. TEAM GALACTIC... I\n"
	.string "have a bad feeling about them. You\l"
	.string "have my thanks.\p"
	.string "The GYM in OREBURGH CITY is east\n"
	.string "of here, past ROUTE 203. Go and\l"
	.string "grow stronger.$"

JubilifeCity_Text_Looker:
	.string "I am a member of the International\n"
	.string "Police. Code name: LOOKER.\p"
	.string "I am investigating the group known\n"
	.string "as TEAM GALACTIC. If you see\l"
	.string "anything suspicious, you will tell\n"
	.string "me, yes?$"
