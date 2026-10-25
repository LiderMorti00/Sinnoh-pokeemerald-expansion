IronIsland_B1F_Right_MapScripts::
	.byte 0

IronIsland_B1F_Right_EventScript_Summer::
	trainerbattle_single TRAINER_ROSE_4, IronIsland_B1F_Right_Text_SummerIntro, IronIsland_B1F_Right_Text_SummerDefeat
	msgbox IronIsland_B1F_Right_Text_SummerPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B1F_Right_Text_SummerIntro:
	.string "May we have a battle, please?\p"
	.string "It will be something to lighten up this\n"
	.string "boring picnic with.$"

IronIsland_B1F_Right_Text_SummerDefeat:
	.string "We’re not going to win if we play around\n"
	.string "like that...$"

IronIsland_B1F_Right_Text_SummerPost:
	.string "I’m going home to play with my POKéMON!$"
