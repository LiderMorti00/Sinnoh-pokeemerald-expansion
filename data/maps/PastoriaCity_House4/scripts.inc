PastoriaCity_House4_MapScripts::
	.byte 0

PastoriaCity_House4_Text_PtNpc1:
	.string "Everyone calls me the POKéMON Move\n"
	.string "Maniac. I prefer Move Tutor.\p"
	.string "I know every move that POKéMON learn\n"
	.string "while they’re leveling up, and I can\p"
	.string "teach POKéMON those moves.\p"
	.string "I can teach a move to a POKéMON of\n"
	.string "yours if you’d like.\p"
	.string "I’ll do it if you’ll trade me a Heart\n"
	.string "Scale.$"

PastoriaCity_House4_EventScript_PtNpc1::
	msgbox PastoriaCity_House4_Text_PtNpc1, MSGBOX_NPC
	end

PastoriaCity_House4_Text_PtNpc2_0:
	.string "I often go to Solaceon Town for my big\n"
	.string "brother.\p"
	.string "The newspaper there gives me Heart\n"
	.string "Scales for running errands.$"

PastoriaCity_House4_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox PastoriaCity_House4_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
