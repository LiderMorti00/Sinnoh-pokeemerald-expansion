MtCoronet_5F_MapScripts::
	.byte 0

MtCoronet_5F_EventScript_Grunt::
	trainerbattle_single TRAINER_VALERIE_5, MtCoronet_5F_Text_GruntIntro, MtCoronet_5F_Text_GruntDefeat
	msgbox MtCoronet_5F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

MtCoronet_5F_Text_GruntIntro:
	.string "...Our boss is going to do something\n"
	.string "huge at the summit.\p"
	.string "But here I am dealing with some pesky\n"
	.string "intruder.\p"
	.string "You’re spoiling the atmosphere. You\n"
	.string "can lose quickly, right?$"

MtCoronet_5F_Text_GruntDefeat:
	.string "You’re not supposed to work me over\n"
	.string "like that.$"

MtCoronet_5F_Text_GruntPost:
	.string "All my excitement’s gone now...\p"
	.string "This whole Mt. Coronet trip is too\n"
	.string "rough, long, and draining...$"

MtCoronet_5F_EventScript_Grunt2::
	trainerbattle_single TRAINER_CINDY_1, MtCoronet_5F_Text_Grunt2Intro, MtCoronet_5F_Text_Grunt2Defeat
	msgbox MtCoronet_5F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

MtCoronet_5F_Text_Grunt2Intro:
	.string "Team Galactic will take control of\n"
	.string "everything!\p"
	.string "You can try all you want, but you can’t\n"
	.string "do anything alone!$"

MtCoronet_5F_Text_Grunt2Defeat:
	.string "All you gave me was the taste of\n"
	.string "defeat...$"

MtCoronet_5F_Text_Grunt2Post:
	.string "...Is our boss about to ditch us and\n"
	.string "claim everything for himself?$"
