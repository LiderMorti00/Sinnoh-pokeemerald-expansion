OreburghCity_Flat2_F1_MapScripts::
	.byte 0

OreburghCity_Flat2_F1_EventScript_PtNpc1::
	msgbox OreburghCity_Flat2_F1_Text_PtNpc1, MSGBOX_NPC
	end

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
