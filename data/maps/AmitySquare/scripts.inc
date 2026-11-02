AmitySquare_MapScripts::
	.byte 0

AmitySquare_Text_PtNpc1:
	.string "Your POKéMON looks quite pleased\n"
	.string "following you around.\p"
	.string "It really is adorable!$"

AmitySquare_EventScript_PtNpc1::
	msgbox AmitySquare_Text_PtNpc1, MSGBOX_NPC
	end

AmitySquare_Text_PtNpc2:
	.string "Your POKéMON looks quite pleased\n"
	.string "following you around.\p"
	.string "It really is adorable!$"

AmitySquare_EventScript_PtNpc2::
	msgbox AmitySquare_Text_PtNpc2, MSGBOX_NPC
	end

AmitySquare_Text_PtNpc3_0:
	.string "These ruins are from a long, long time\n"
	.string "ago.$"

AmitySquare_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox AmitySquare_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc4_0:
	.string "DRIFLOON: Foon!$"

AmitySquare_EventScript_PtNpc4::
	lock
	faceplayer
	playmoncry SPECIES_DRIFLOON, CRY_MODE_NORMAL
	msgbox AmitySquare_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc5_0:
	.string "HAPPINY appears to be drowsy.$"

AmitySquare_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox AmitySquare_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc6_0:
	.string "I come here with my HAPPINY every\n"
	.string "single day!\p"
	.string "I can let it run free without any\n"
	.string "worries at all.$"

AmitySquare_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox AmitySquare_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc7_0:
	.string "Ooh, I just can’t believe it! I’m so\n"
	.string "overjoyed with my PIKACHU!\p"
	.string "Wherever I go, my PIKACHU follows me\n"
	.string "without hesitation!\p"
	.string "Ahaha! It’s just the two of us! Woohoo!$"

AmitySquare_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox AmitySquare_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc8_0:
	.string "PIKACHU: Pikka pika!$"

AmitySquare_EventScript_PtNpc8::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox AmitySquare_Text_PtNpc8_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc9_0:
	.string "You should talk to your POKéMON. It\n"
	.string "can occasionally find things.$"

AmitySquare_EventScript_PtNpc9::
	lock
	faceplayer
	msgbox AmitySquare_Text_PtNpc9_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc10_0:
	.string "There is something shiny in CLEFAIRY’s\n"
	.string "hands...$"

AmitySquare_EventScript_PtNpc10::
	lock
	faceplayer
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox AmitySquare_Text_PtNpc10_0, MSGBOX_DEFAULT
	release
	end

AmitySquare_Text_PtNpc11:
	.string "Hahahah! Perhaps I’ll see you again\n"
	.string "tomorrow!$"

AmitySquare_EventScript_SNDailyGift::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_AMITY, AmitySquare_EventScript_SNDailyGift_Done
	msgbox AmitySquare_EventScript_SNDailyGift_Hello, MSGBOX_DEFAULT
	random 5
	switch VAR_RESULT
	case 0, AmitySquare_EventScript_SNDailyGift_B0
	case 1, AmitySquare_EventScript_SNDailyGift_B1
	case 2, AmitySquare_EventScript_SNDailyGift_B2
	case 3, AmitySquare_EventScript_SNDailyGift_B3
	giveitem ITEM_LUM_BERRY
	goto AmitySquare_EventScript_SNDailyGift_Set
AmitySquare_EventScript_SNDailyGift_B0:
	giveitem ITEM_ORAN_BERRY, 5
	goto AmitySquare_EventScript_SNDailyGift_Set
AmitySquare_EventScript_SNDailyGift_B1:
	giveitem ITEM_SITRUS_BERRY
	goto AmitySquare_EventScript_SNDailyGift_Set
AmitySquare_EventScript_SNDailyGift_B2:
	giveitem ITEM_PECHA_BERRY, 5
	goto AmitySquare_EventScript_SNDailyGift_Set
AmitySquare_EventScript_SNDailyGift_B3:
	giveitem ITEM_LEPPA_BERRY, 2
AmitySquare_EventScript_SNDailyGift_Set:
	setflag FLAG_DAILY_SN_AMITY
	release
	end
AmitySquare_EventScript_SNDailyGift_Done:
	msgbox AmitySquare_EventScript_SNDailyGift_DoneT, MSGBOX_DEFAULT
	release
	end

AmitySquare_EventScript_SNDailyGift_Hello:
	.string "My POKéMON keeps finding things on our\n"
	.string "walks! Here, you can have today’s find!$"

AmitySquare_EventScript_SNDailyGift_DoneT:
	.string "Come back tomorrow! My POKéMON might\n"
	.string "find something else!$"
