SunyshoreCity_Mart_MapScripts::
	.byte 0

SunyshoreCity_Mart_Text_PtNpc1_0:
	.string "I’ve heard about Victory Road, which\n"
	.string "leads to the POKéMON League.\p"
	.string "The word is the road is harsh and\n"
	.string "harrowing.\p"
	.string "I’d better load up on as many items and\n"
	.string "as much medicine as I can carry...$"

SunyshoreCity_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SunyshoreCity_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Mart_Text_PtNpc2_0:
	.string "I shall buy Seals for decorating Poké\n"
	.string "Balls at the Sunyshore Market.\p"
	.string "Using those Seals in a cool way will be\n"
	.string "sure to impress my POKéMON!$"

SunyshoreCity_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SunyshoreCity_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
