OreburghCity_Flat1_F2_MapScripts::
	.byte 0

OreburghCity_Flat1_F2_EventScript_PtNpc1::
	msgbox OreburghCity_Flat1_F2_Text_PtNpc1, MSGBOX_NPC
	end

OreburghCity_Flat1_F2_Text_PtNpc1:
	.string "Giving nicknames to POKéMON is the\n"
	.string "way to go.\p"
	.string "It makes you feel as if they're your\n"
	.string "very own.$"

OreburghCity_Flat1_F2_EventScript_PtNpc2::
	msgbox OreburghCity_Flat1_F2_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_Flat1_F2_Text_PtNpc2:
	.string "But he named our PSYDUCK “Yellow”\n"
	.string "just because of its color...\p"
	.string "I don't understand the logic behind\n"
	.string "that at all.$"

OreburghCity_Flat1_F2_EventScript_PtNpc3::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OREBURGHCITY_FLAT1_F2_DUSK_BALL, OreburghCity_Flat1_F2_EventScript_PtNpc3_Received
	msgbox OreburghCity_Flat1_F2_Text_PtNpc3, MSGBOX_DEFAULT
	giveitem ITEM_DUSK_BALL, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OREBURGHCITY_FLAT1_F2_DUSK_BALL
	release
	end

OreburghCity_Flat1_F2_EventScript_PtNpc3_Received:
	msgbox OreburghCity_Flat1_F2_Text_PtNpc3_Received, MSGBOX_DEFAULT
	release
	end

OreburghCity_Flat1_F2_Text_PtNpc3:
	.string "Are you catching POKéMON? Here, take\n"
	.string "this if you'd like.$"

OreburghCity_Flat1_F2_EventScript_PtNpc4::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox OreburghCity_Flat1_F2_Text_PtNpc4, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_Flat1_F2_Text_PtNpc4:
	.string "Yellow: Duuuck?$"

OreburghCity_Flat1_F2_Text_PtNpc3_Received:
	.string "The Dusk Ball is a POKé BALL designed\n"
	.string "for use in darkness.\p"
	.string "It works better if you use it at night\n"
	.string "or in a cave.$"
