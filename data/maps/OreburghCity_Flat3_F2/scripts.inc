OreburghCity_Flat3_F2_MapScripts::
	.byte 0

OreburghCity_Flat3_F2_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OREBURGHCITY_FLAT3_F2_GREAT_BALL, OreburghCity_Flat3_F2_EventScript_PtNpc1_Received
	msgbox OreburghCity_Flat3_F2_Text_PtNpc1, MSGBOX_DEFAULT
	giveitem ITEM_GREAT_BALL, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OREBURGHCITY_FLAT3_F2_GREAT_BALL
	msgbox OreburghCity_Flat3_F2_Text_PtNpc1_After, MSGBOX_DEFAULT
	release
	end

OreburghCity_Flat3_F2_EventScript_PtNpc1_Received:
	msgbox OreburghCity_Flat3_F2_Text_PtNpc1_Received, MSGBOX_DEFAULT
	release
	end

OreburghCity_Flat3_F2_Text_PtNpc1:
	.string "Wow... Your POKéMON's eyes are\n"
	.string "twinkling brightly!\p"
	.string "Seeing that makes me happy! Here, I\n"
	.string "want you to have this!$"

OreburghCity_Flat3_F2_EventScript_PtNpc2::
	msgbox OreburghCity_Flat3_F2_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_Flat3_F2_Text_PtNpc2:
	.string "The OREBURGH MINE is operated with\n"
	.string "the utmost care.\p"
	.string "We avoid causing any damage to the\n"
	.string "natural habitats of POKéMON.$"

OreburghCity_Flat3_F2_EventScript_PtNpc3::
	msgbox OreburghCity_Flat3_F2_Text_PtNpc3, MSGBOX_NPC
	end

OreburghCity_Flat3_F2_Text_PtNpc3:
	.string "I study fossils. Some can be\n"
	.string "brought back to life as POKéMON!$"

OreburghCity_Flat3_F2_Text_PtNpc1_Received:
	.string "You know how POKéMON stay inside\n"
	.string "their POKé BALLS?\p"
	.string "I try to think about what would be the\n"
	.string "best POKé BALLS for them.$"

OreburghCity_Flat3_F2_Text_PtNpc1_After:
	.string "You know how POKéMON stay inside\n"
	.string "their POKé BALLS?\p"
	.string "I try to think about what would be the\n"
	.string "best POKé BALLS for them.$"
