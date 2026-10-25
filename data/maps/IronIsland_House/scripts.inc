IronIsland_House_MapScripts::
	.byte 0

IronIsland_House_Text_PtNpc1:
	.string "Byron: Hm? You’re in training, then?\p"
	.string "You know, my son trains as hard as you\n"
	.string "do.\p"
	.string "But I still treat him as if he were a\n"
	.string "child.\p"
	.string "It’s ridiculous, really. He is a proper\n"
	.string "Gym Leader and all.\p"
	.string "It’s always tricky between a father\n"
	.string "and son, it seems.\p"
	.string "Humph, I’ve wasted your time. Take this\n"
	.string "as my apology!$"

IronIsland_House_EventScript_PtNpc1::
	msgbox IronIsland_House_Text_PtNpc1, MSGBOX_NPC
	end
