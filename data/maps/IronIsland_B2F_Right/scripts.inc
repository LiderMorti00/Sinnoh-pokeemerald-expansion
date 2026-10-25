IronIsland_B2F_Right_MapScripts::
	.byte 0

IronIsland_B2F_Right_EventScript_Noel::
	trainerbattle_single TRAINER_LOLA_3, IronIsland_B2F_Right_Text_NoelIntro, IronIsland_B2F_Right_Text_NoelDefeat
	msgbox IronIsland_B2F_Right_Text_NoelPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Right_Text_NoelIntro:
	.string "The working-class hero says hi!$"

IronIsland_B2F_Right_Text_NoelDefeat:
	.string "The working-class hero waves bye...$"

IronIsland_B2F_Right_Text_NoelPost:
	.string "I used to work here a long time ago,\n"
	.string "before it shut down.\p"
	.string "I worked at the ironworks near\n"
	.string "Floaroma Town, too.\p"
	.string "You might say I’m drawn by iron as if by\n"
	.string "magnet!$"

IronIsland_B2F_Right_EventScript_Braden::
	trainerbattle_single TRAINER_LOLA_4, IronIsland_B2F_Right_Text_BradenIntro, IronIsland_B2F_Right_Text_BradenDefeat
	msgbox IronIsland_B2F_Right_Text_BradenPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Right_Text_BradenIntro:
	.string "While I’m making sure the lifts are\n"
	.string "safe, I’ll focus on a battle with you!$"

IronIsland_B2F_Right_Text_BradenDefeat:
	.string "A-OK! Looks safe to me! Not a problem\n"
	.string "in sight!$"

IronIsland_B2F_Right_Text_BradenPost:
	.string "I routinely check the lifts here. You\n"
	.string "can be sure of their safety!$"
