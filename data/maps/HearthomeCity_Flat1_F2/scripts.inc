HearthomeCity_Flat1_F2_MapScripts::
	.byte 0

HearthomeCity_Flat1_F2_Text_PtNpc1_0:
	.string "Some act kindly in hopes of being\n"
	.string "treated kindly in turn.\p"
	.string "But, how could that be a bad thing?$"

HearthomeCity_Flat1_F2_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F2_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F2_Text_PtNpc2_0:
	.string "Hearthome is a kid-friendly city, they\n"
	.string "say, but I disagree.\p"
	.string "Hearthome is friendly to kids,\n"
	.string "grown-ups, and POKéMON too.$"

HearthomeCity_Flat1_F2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F2_Text_PtNpc3_0:
	.string "All my grandchildren are clamoring for\n"
	.string "POKéMON of their own.\p"
	.string "It may be tricky to manage it, but it\n"
	.string "will brighten up the mood more.$"

HearthomeCity_Flat1_F2_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F2_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F2_Text_PtNpc4_0:
	.string "Oh, no, there are no stairs in this\n"
	.string "house. It’s easier that way.\p"
	.string "The lack of stairs makes it easy for\n"
	.string "the little POKéMON to get about.$"

HearthomeCity_Flat1_F2_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F2_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end
