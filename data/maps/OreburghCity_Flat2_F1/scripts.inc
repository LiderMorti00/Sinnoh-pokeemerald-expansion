OreburghCity_Flat2_F1_MapScripts::
	.byte 0

OreburghCity_Flat2_F1_Text_PtNpc1:
	.string "A POKéMON obtained in a trade grows\n"
	.string "quickly.\p"
	.string "But if a POKéMON grows too much, it\n"
	.string "may ignore the Trainer.\p"
	.string "Of course, it won't matter if you have\n"
	.string "lots of Gym Badges.$"

OreburghCity_Flat2_F1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox OreburghCity_Flat2_F1_Text_PtNpc2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OreburghCity_Flat2_F1_EventScript_PtNpc2_No
	msgbox OreburghCity_Flat2_F1_Text_PtNpc2_Yes, MSGBOX_DEFAULT
	release
	end

OreburghCity_Flat2_F1_EventScript_PtNpc2_No:
	msgbox OreburghCity_Flat2_F1_Text_PtNpc2_No, MSGBOX_DEFAULT
	release
	end

OreburghCity_Flat2_F1_Text_PtNpc2:
	.string "Listen, listen. Do you have a POKéMON\n"
	.string "called MACHOP?\p"
	.string "Would you be willing to trade your\n"
	.string "MACHOP for my ABRA?$"

OreburghCity_Flat2_F1_EventScript_PtNpc3::
	msgbox OreburghCity_Flat2_F1_Text_PtNpc3, MSGBOX_NPC
	end

OreburghCity_Flat2_F1_Text_PtNpc3:
	.string "When you trade a POKéMON, the item\n"
	.string "it's holding is traded as well.\p"
	.string "That's pretty cool, huh?\p"
	.string "It means you can send an item as a\n"
	.string "gift along with your POKéMON in a\l"
	.string "trade!$"

OreburghCity_Flat2_F1_Text_PtNpc2_Yes:
	.string "Be nice to my ABRA!\p"
	.string "I'll be sure to look after your MACHOP\n"
	.string "in return!$"

OreburghCity_Flat2_F1_Text_PtNpc2_No:
	.string "Oh, OK... Well, I can't make you trade\n"
	.string "me.\p"
	.string "But if you change your mind, I'll be\n"
	.string "right here waiting!$"

OreburghCity_Flat2_F1_EventScript_SNTradeKazza::
	lock
	faceplayer
	goto_if_set FLAG_SN_TRADE_KAZZA, OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Done
	ingame_trade INGAME_TRADE_KAZZA, OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Ask, OreburghCity_Flat2_F1_EventScript_SNTradeKazza_No, OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Wrong, OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Thanks
	setflag FLAG_SN_TRADE_KAZZA
	release
	end
OreburghCity_Flat2_F1_EventScript_SNTradeKazza_No:
	msgbox OreburghCity_Flat2_F1_EventScript_SNTradeKazza_NoT, MSGBOX_DEFAULT
	release
	end
OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Wrong:
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox OreburghCity_Flat2_F1_EventScript_SNTradeKazza_WrongT, MSGBOX_DEFAULT
	release
	end
OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Done:
	msgbox OreburghCity_Flat2_F1_EventScript_SNTradeKazza_DoneT, MSGBOX_DEFAULT
	release
	end

OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Ask:
	.string "Do you have a {STR_VAR_1}? Would you\n"
	.string "trade it for my {STR_VAR_2}?$"

OreburghCity_Flat2_F1_EventScript_SNTradeKazza_Thanks:
	.string "Thank you! Please take good care of my\n"
	.string "POKéMON!$"

OreburghCity_Flat2_F1_EventScript_SNTradeKazza_NoT:
	.string "Oh... That’s too bad.$"

OreburghCity_Flat2_F1_EventScript_SNTradeKazza_WrongT:
	.string "That’s not a {STR_VAR_1}...$"

OreburghCity_Flat2_F1_EventScript_SNTradeKazza_DoneT:
	.string "Our POKéMON are getting along great\n"
	.string "with their new Trainers, don’t you\l"
	.string "think?$"
