SunyshoreCity_Market_MapScripts::
	.byte 0

SunyshoreCity_Market_Text_PtNpc1:
	.string "Oh! That Effort Ribbon looks good on\n"
	.string "your POKéMON!$"

SunyshoreCity_Market_EventScript_PtNpc1::
	msgbox SunyshoreCity_Market_Text_PtNpc1, MSGBOX_NPC
	end

SunyshoreCity_Market_Text_PtNpc2:
	.string "See the Seal Merchant there?$"

SunyshoreCity_Market_EventScript_PtNpc2::
	msgbox SunyshoreCity_Market_Text_PtNpc2, MSGBOX_NPC
	end

SunyshoreCity_Market_Text_PtNpc3_0:
	.string "Sunyshore Market is best known for its\n"
	.string "big selection of Seals.$"

SunyshoreCity_Market_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SunyshoreCity_Market_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Market_Text_PtNpc4:
	.string "Ah, please, allow me a little of your\n"
	.string "time, if you will. You won’t regret it.\p"
	.string "...Oh, but, no, no, no! You have no Seal\n"
	.string "Case?\p"
	.string "You must return to the town with the\n"
	.string "ruins and obtain a Seal Case!$"

SunyshoreCity_Market_EventScript_PtNpc4::
	msgbox SunyshoreCity_Market_Text_PtNpc4, MSGBOX_NPC
	end

SunyshoreCity_Market_Text_PtNpc5_0:
	.string "I love Tap Toys! Plaza Games are great,\n"
	.string "too!\p"
	.string "I’m a huge fan of the Wi-Fi Plaza, so I’m\n"
	.string "promoting it on my own.$"

SunyshoreCity_Market_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox SunyshoreCity_Market_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end
