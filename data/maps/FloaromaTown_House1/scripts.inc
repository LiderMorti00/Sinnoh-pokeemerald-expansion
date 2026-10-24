FloaromaTown_House1_MapScripts::
	.byte 0

FloaromaTown_House1_EventScript_PtNpc1::
	msgbox FloaromaTown_House1_Text_PtNpc1, MSGBOX_NPC
	end

FloaromaTown_House1_Text_PtNpc1:
	.string "FLOAROMA TOWN was a barren, desolate\n"
	.string "hill long ago, avoided even by POKéMON.\p"
	.string "People started planting flowers on it\n"
	.string "because it was such a sad place.\p"
	.string "But nothing would grow... People didn't\n"
	.string "know what to do...\p"
	.string "And then one day, someone expressed\n"
	.string "thanks for the blessings of nature.\p"
	.string "Then, the whole hill burst into bloom.$"

FloaromaTown_House1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox FloaromaTown_House1_Text_PtNpc2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FloaromaTown_House1_EventScript_PtNpc2_No
	msgbox FloaromaTown_House1_Text_PtNpc2_Yes, MSGBOX_DEFAULT
	release
	end

FloaromaTown_House1_EventScript_PtNpc2_No:
	msgbox FloaromaTown_House1_Text_PtNpc2_No, MSGBOX_DEFAULT
	release
	end

FloaromaTown_House1_Text_PtNpc2:
	.string "Do you think it's cute how POKéMON\n"
	.string "pluck Berries?$"

FloaromaTown_House1_EventScript_PtNpc3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox FloaromaTown_House1_Text_PtNpc3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

FloaromaTown_House1_Text_PtNpc3:
	.string "CLEFAIRY: Rii?$"

FloaromaTown_House1_EventScript_TMGirl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_FLOAROMA_TM, FloaromaTown_House1_EventScript_TMGirlAfter
	msgbox FloaromaTown_House1_Text_TMGirl, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FloaromaTown_House1_EventScript_TMGirlNo
	msgbox FloaromaTown_House1_Text_TMGirlYes, MSGBOX_DEFAULT
	giveitem ITEM_TM_AERIAL_ACE
	setflag FLAG_RECEIVED_FLOAROMA_TM
	release
	end
FloaromaTown_House1_EventScript_TMGirlNo::
	msgbox FloaromaTown_House1_Text_TMGirlNo, MSGBOX_DEFAULT
	release
	end
FloaromaTown_House1_EventScript_TMGirlAfter::
	msgbox FloaromaTown_House1_Text_TMGirlAfter, MSGBOX_DEFAULT
	release
	end

FloaromaTown_House1_Text_TMGirl:
	.string "Do you like BERRIES? I love them!\n"
	.string "They're so sweet!$"

FloaromaTown_House1_Text_TMGirlYes:
	.string "Yay! Then you should have this!\n"
	.string "Flying POKéMON love pecking at\l"
	.string "BERRIES!$"

FloaromaTown_House1_Text_TMGirlNo:
	.string "Aww... BERRIES are the best,\n"
	.string "though!$"

FloaromaTown_House1_Text_TMGirlAfter:
	.string "Plant BERRIES and they'll grow\n"
	.string "into big BERRY trees!$"

FloaromaTown_House1_Text_PtNpc2_Yes:
	.string "Yes! You agreed! Here's the TM for the\n"
	.string "move Pluck!$"

FloaromaTown_House1_Text_PtNpc2_No:
	.string "Oh... I guess I just like weird things...$"
