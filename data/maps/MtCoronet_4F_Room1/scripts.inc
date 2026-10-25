MtCoronet_4F_Room1_MapScripts::
	.byte 0

MtCoronet_4F_Room1_EventScript_Grunt::
	trainerbattle_single TRAINER_VALERIE_3, MtCoronet_4F_Room1_Text_GruntIntro, MtCoronet_4F_Room1_Text_GruntDefeat
	msgbox MtCoronet_4F_Room1_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

MtCoronet_4F_Room1_Text_GruntIntro:
	.string "Team Galactic is all powerful!\p"
	.string "Only a fool would show defiance to the\n"
	.string "mighty might of Team Galactic!$"

MtCoronet_4F_Room1_Text_GruntDefeat:
	.string "Not standing up to the mighty is\n"
	.string "foolish, you say...$"

MtCoronet_4F_Room1_Text_GruntPost:
	.string "It doesn’t matter if you’re an adult or\n"
	.string "a kid if you have POKéMON...\p"
	.string "POKéMON are the equalizers. I should\n"
	.string "have realized sooner...$"

MtCoronet_4F_Room1_EventScript_Grunt2::
	trainerbattle_single TRAINER_VALERIE_4, MtCoronet_4F_Room1_Text_Grunt2Intro, MtCoronet_4F_Room1_Text_Grunt2Defeat
	msgbox MtCoronet_4F_Room1_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

MtCoronet_4F_Room1_Text_Grunt2Intro:
	.string "Our time is coming! A time for us alone!\p"
	.string "We’ll send you back in time. A time\n"
	.string "before you started training!$"

MtCoronet_4F_Room1_Text_Grunt2Defeat:
	.string "Gyah!$"

MtCoronet_4F_Room1_Text_Grunt2Post:
	.string "You can struggle all you want, but you\n"
	.string "can’t stop Team Galactic alone!\p"
	.string "It doesn’t matter how many POKéMON\n"
	.string "you try to use as your tools!$"
