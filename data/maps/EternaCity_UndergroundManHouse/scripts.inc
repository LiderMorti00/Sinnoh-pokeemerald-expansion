EternaCity_UndergroundManHouse_MapScripts::
	.byte 0

EternaCity_UndergroundManHouse_EventScript_PtNpc1::
	msgbox EternaCity_UndergroundManHouse_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_UndergroundManHouse_Text_PtNpc1:
	.string "The underground tunnels go\n"
	.string "everywhere!\p"
	.string "Grab your friends and let's play\n"
	.string "together using DS Wireless\l"
	.string "Communications!$"

EternaCity_UndergroundManHouse_EventScript_PtNpc2::
	msgbox EternaCity_UndergroundManHouse_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_UndergroundManHouse_Text_PtNpc2:
	.string "We study the fossils found\n"
	.string "underground.$"

EternaCity_UndergroundManHouse_EventScript_PtNpc3::
	msgbox EternaCity_UndergroundManHouse_Text_PtNpc3, MSGBOX_NPC
	end

EternaCity_UndergroundManHouse_Text_PtNpc3:
	.string "The UNDERGROUND is full of\n"
	.string "treasure, if you know where to\l"
	.string "dig.$"

EternaCity_UndergroundManHouse_EventScript_PtNpc4::
	msgbox EternaCity_UndergroundManHouse_Text_PtNpc4, MSGBOX_NPC
	end

EternaCity_UndergroundManHouse_Text_PtNpc4:
	.string "All I ever unearth are Armor Fossils.\n"
	.string "My buddy only digs up Skull Fossils.\p"
	.string "I wonder why that happens?\p"
	.string "It doesn't matter though. I can just\n"
	.string "swap them with my buddy.\p"
	.string "I simply let a POKéMON hold an Armor\n"
	.string "Fossil and trade it to him.$"

EternaCity_UndergroundManHouse_EventScript_UndergroundMan::
	goto EternaCity_UndergroundManHouse_EventScript_SNFossilGift
	msgbox EternaCity_UndergroundManHouse_Text_Man, MSGBOX_NPC
	end

EternaCity_UndergroundManHouse_Text_Man:
	.string "UNDERGROUND MAN: Hohoh! I've dug\n"
	.string "tunnels under all of Sinnoh!\p"
	.string "The UNDERGROUND is closed to\n"
	.string "visitors for now, but come back\l"
	.string "someday. There are treasures down\n"
	.string "there!$"

EternaCity_UndergroundManHouse_EventScript_SNFossilGift::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SECRET_POWER, EternaCity_UndergroundManHouse_EventScript_SNFossilGift_Fossil
	msgbox EternaCity_UndergroundManHouse_Text_SNSecretPower1, MSGBOX_DEFAULT
	giveitem ITEM_TM_SECRET_POWER
	goto_if_eq VAR_RESULT, FALSE, EternaCity_UndergroundManHouse_EventScript_SNFossilGift_End
	setflag FLAG_RECEIVED_SECRET_POWER
	msgbox EternaCity_UndergroundManHouse_Text_SNSecretPower2, MSGBOX_DEFAULT
EternaCity_UndergroundManHouse_EventScript_SNFossilGift_Fossil:
	goto_if_set FLAG_DAILY_SN_FOSSIL, EternaCity_UndergroundManHouse_EventScript_SNFossilGift_Done
	msgbox EternaCity_UndergroundManHouse_EventScript_SNFossilGift_T1, MSGBOX_DEFAULT
	setvar VAR_0x8004, 0
	goto_if_unset FLAG_SYS_GAME_CLEAR, EternaCity_UndergroundManHouse_EventScript_SNFossilGift_Pick
	setvar VAR_0x8004, 1
EternaCity_UndergroundManHouse_EventScript_SNFossilGift_Pick:
	special SinnohRandomFossil
	copyvar VAR_0x8006, VAR_RESULT
	giveitem VAR_0x8006
	goto_if_eq VAR_RESULT, FALSE, EternaCity_UndergroundManHouse_EventScript_SNFossilGift_End
	setflag FLAG_DAILY_SN_FOSSIL
	msgbox EternaCity_UndergroundManHouse_EventScript_SNFossilGift_T2, MSGBOX_DEFAULT
EternaCity_UndergroundManHouse_EventScript_SNFossilGift_End:
	release
	end
EternaCity_UndergroundManHouse_EventScript_SNFossilGift_Done:
	msgbox EternaCity_UndergroundManHouse_EventScript_SNFossilGift_T3, MSGBOX_DEFAULT
	release
	end

EternaCity_UndergroundManHouse_EventScript_SNFossilGift_T1:
	.string "Hey there! I dig underground every\n"
	.string "day. Look what I found today! Here, you\l"
	.string "can have it!$"

EternaCity_UndergroundManHouse_EventScript_SNFossilGift_T2:
	.string "The scientist at the Oreburgh Mining\n"
	.string "Museum can bring Fossils back to life!$"

EternaCity_UndergroundManHouse_EventScript_SNFossilGift_T3:
	.string "I already gave you today’s find. Come\n"
	.string "back tomorrow!$"

EternaCity_UndergroundManHouse_Text_SNSecretPower1:
	.string "UNDERGROUND MAN: Oh! A new face!\n"
	.string "I'm the UNDERGROUND MAN!\p"
	.string "I've dug tunnels under all of Sinnoh,\n"
	.string "and I've made secret hideouts too!\p"
	.string "You look like you'd enjoy having a\n"
	.string "secret hideout of your own.\p"
	.string "Take this! It's a TM for SECRET\n"
	.string "POWER. Use it on a hollow in a cliff,\l"
	.string "a big bush or a tree, and you can\l"
	.string "make your very own SECRET BASE!$"

EternaCity_UndergroundManHouse_Text_SNSecretPower2:
	.string "Decorate your SECRET BASE with the\n"
	.string "decorations you collect. Your friends\l"
	.string "will love visiting it!\p"
	.string "Come back and see me sometime. I find\n"
	.string "FOSSILS while digging every day!$"
