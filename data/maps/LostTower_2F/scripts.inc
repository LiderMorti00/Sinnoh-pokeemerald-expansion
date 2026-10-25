LostTower_2F_MapScripts::
	.byte 0

LostTower_2F_EventScript_Oliver::
	trainerbattle_single TRAINER_TIMOTHY_1, LostTower_2F_Text_OliverIntro, LostTower_2F_Text_OliverDefeat
	msgbox LostTower_2F_Text_OliverPost, MSGBOX_AUTOCLOSE
	end

LostTower_2F_Text_OliverIntro:
	.string "Waah! Ghost! Get away! Eek! Help me,\n"
	.string "team!$"

LostTower_2F_Text_OliverDefeat:
	.string "Hey... You’re no ghost...$"

LostTower_2F_Text_OliverPost:
	.string "I had to come to the Lost Tower on a\n"
	.string "dare...\p"
	.string "I have to go to the top and use Defog\n"
	.string "there...$"
