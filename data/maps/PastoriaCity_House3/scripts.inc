PastoriaCity_House3_MapScripts::
	.byte 0

PastoriaCity_House3_Text_PtNpc1_0:
	.string "The POKéMON COMBEE is quite\n"
	.string "interesting.\p"
	.string "Only the female evolves and grows\n"
	.string "strong. The male does not.\p"
	.string "Come to think of it, my wife was awfully\n"
	.string "strong, too.\p"
	.string "She evolved from my bride to the\n"
	.string "mother of our kids.$"

PastoriaCity_House3_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox PastoriaCity_House3_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_House3_Text_PtNpc2:
	.string "You’re good! You’d make an awesome Bug\n"
	.string "Maniac!$"

PastoriaCity_House3_EventScript_PtNpc2::
	msgbox PastoriaCity_House3_Text_PtNpc2, MSGBOX_NPC
	end
