FloaromaTown_House1_MapScripts::
	.byte 0

FloaromaTown_House1_EventScript_PtNpc1::
	msgbox FloaromaTown_House1_Text_PtNpc1, MSGBOX_NPC
	end

FloaromaTown_House1_Text_PtNpc1:
	.string "My daughter loves flowers. She\n"
	.string "wants to open her own shop\l"
	.string "someday.$"

FloaromaTown_House1_EventScript_PtNpc2::
	msgbox FloaromaTown_House1_Text_PtNpc2, MSGBOX_NPC
	end

FloaromaTown_House1_Text_PtNpc2:
	.string "I'm going to plant a whole field\n"
	.string "of flowers when I grow up!$"

FloaromaTown_House1_EventScript_PtNpc3::
	msgbox FloaromaTown_House1_Text_PtNpc3, MSGBOX_NPC
	end

FloaromaTown_House1_Text_PtNpc3:
	.string "Clefairy! Fairy!$"

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
