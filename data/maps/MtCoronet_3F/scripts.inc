MtCoronet_3F_MapScripts::
	.byte 0

MtCoronet_3F_EventScript_Grunt::
	trainerbattle_single TRAINER_VALERIE_1, MtCoronet_3F_Text_GruntIntro, MtCoronet_3F_Text_GruntDefeat
	msgbox MtCoronet_3F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

MtCoronet_3F_Text_GruntIntro:
	.string "We Grunts have two jobs.\p"
	.string "One, ensure the success of our\n"
	.string "operation at the summit.\p"
	.string "Two, utterly destroy any intruders to\n"
	.string "stop their meddling!$"

MtCoronet_3F_Text_GruntDefeat:
	.string "I don’t accept this! I will not accept\n"
	.string "this!$"

MtCoronet_3F_Text_GruntPost:
	.string "Join Team Galactic and then abide by\n"
	.string "our rules.\p"
	.string "That would solve all our problems!$"

MtCoronet_3F_EventScript_Grunt2::
	trainerbattle_single TRAINER_VALERIE_2, MtCoronet_3F_Text_Grunt2Intro, MtCoronet_3F_Text_Grunt2Defeat
	msgbox MtCoronet_3F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

MtCoronet_3F_Text_Grunt2Intro:
	.string "Our time has come! It’s Team Galactic’s\n"
	.string "time now!$"

MtCoronet_3F_Text_Grunt2Defeat:
	.string "When’s it gonna be my turn...$"

MtCoronet_3F_Text_Grunt2Post:
	.string "It’s too late!\p"
	.string "No amount of desperation from a kid\n"
	.string "like you will make a difference!$"
