FightArea_Mart_MapScripts::
	.byte 0

FightArea_Mart_Text_PtNpc1_0:
	.string "An item that guarantees you won’t ever\n"
	.string "lose a battle...\p"
	.string "They don’t sell anything like that.$"

FightArea_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox FightArea_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

FightArea_Mart_Text_PtNpc2_0:
	.string "What items should POKéMON hold? It’s\n"
	.string "an important question.\p"
	.string "Here’s something else to think about.$"

FightArea_Mart_Text_PtNpc2_1:
	.string "Should one enhance a POKéMON’s strong\n"
	.string "point?\p"
	.string "Or cover for a weakness instead?\p"
	.string "It’s a dilemma that comes up every time\n"
	.string "I let a POKéMON hold an item.$"

FightArea_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_FIGHT_AREA_MART_SCOPE_LENS, FightArea_Mart_EventScript_PtNpc2_DilemmaEveryTime
	msgbox FightArea_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	giveitem ITEM_SCOPE_LENS, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_FIGHT_AREA_MART_SCOPE_LENS
	goto FightArea_Mart_EventScript_PtNpc2_DilemmaEveryTime
	release
	end

FightArea_Mart_EventScript_PtNpc2_DilemmaEveryTime:
	msgbox FightArea_Mart_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

FightArea_Mart_EventScript_PtNpc2_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end
