Route213_House3_MapScripts::
	.byte 0

Route213_House3_Text_PtNpc1_0:
	.string "We’re a traveling troupe of street\n"
	.string "performers.\p"
	.string "In place of a formal introduction,\n"
	.string "please take this!$"

Route213_House3_Text_PtNpc1_1:
	.string "Trick Room is a doozy of a weird\n"
	.string "time-twister move.\p"
	.string "Use it, and for a while afterward, the\n"
	.string "slowest POKéMON move first!\p"
	.string "Before the faster can move, the\n"
	.string "slowest gets to attack!\p"
	.string "How you use the move is up to you,\n"
	.string "Trainer...$"

Route213_House3_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_GRAND_LAKE_ROUTE_213_NORTHWEST_HOUSE_TM92, Route213_House3_EventScript_PtNpc1_ExplainTrickRoom
	msgbox Route213_House3_Text_PtNpc1_0, MSGBOX_DEFAULT
	giveitem ITEM_TM92, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_GRAND_LAKE_ROUTE_213_NORTHWEST_HOUSE_TM92
	goto Route213_House3_EventScript_PtNpc1_ExplainTrickRoom

Route213_House3_EventScript_PtNpc1_ExplainTrickRoom:
	msgbox Route213_House3_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

Route213_House3_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end

Route213_House3_Text_PtNpc2:
	.string "Many are the eyes that I have gazed\n"
	.string "into over the years, be they human\p"
	.string "or POKéMON...\p"
	.string "But your eyes swirl with compassion,\n"
	.string "strength, joy, sorrow, and more...\p"
	.string "The ever-shifting colors in your eyes\n"
	.string "make you difficult to read...$"

Route213_House3_EventScript_PtNpc2::
	msgbox Route213_House3_Text_PtNpc2, MSGBOX_NPC
	end

Route213_House3_Text_PtNpc3_0:
	.string "Me, I’m just a simple guy. I let my\n"
	.string "guitar do all my talking.\p"
	.string "All I need is music and POKéMON.\p"
	.string "I can shine wherever I go if I have\n"
	.string "those things in my life.\p"
	.string "I hear there are guys like me who go\n"
	.string "around POKéMON Centers.$"

Route213_House3_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox Route213_House3_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
