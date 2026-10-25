HearthomeCity_Flat2_F2_MapScripts::
	.byte 0

HearthomeCity_Flat2_F2_Text_PtNpc1_0:
	.string "I have something for your POKéMON to\n"
	.string "hold. Take this item.$"

HearthomeCity_Flat2_F2_Text_PtNpc1_1:
	.string "The item should be held by a POKéMON in\n"
	.string "battles.\p"
	.string "The holder regains HP a little every\n"
	.string "time it inflicts damage.\p"
	.string "That was given to me when I was on\n"
	.string "vacation, but I already had one.$"

HearthomeCity_Flat2_F2_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_HEARTHOME_CITY_SOUTHEAST_HOUSE_2F_SHELL_BELL, HearthomeCity_Flat2_F2_EventScript_PtNpc1_ExplainShellBell
	msgbox HearthomeCity_Flat2_F2_Text_PtNpc1_0, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_SN_HEARTHOME_CITY_SOUTHEAST_HOUSE_2F_SHELL_BELL
	giveitem ITEM_SHELL_BELL, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end

HearthomeCity_Flat2_F2_EventScript_PtNpc1_ExplainShellBell:
	msgbox HearthomeCity_Flat2_F2_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat2_F2_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end

HearthomeCity_Flat2_F2_Text_PtNpc2_0:
	.string "CLEFAIRY: Pippi!$"

HearthomeCity_Flat2_F2_EventScript_PtNpc2::
	lock
	faceplayer
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox HearthomeCity_Flat2_F2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
