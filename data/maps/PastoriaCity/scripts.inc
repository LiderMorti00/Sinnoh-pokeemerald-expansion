PastoriaCity_MapScripts::
	.byte 0

PastoriaCity_EventScript_PtNpc1::
	msgbox PastoriaCity_Text_PtNpc1, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc1:
	.string "Some Trainers deliberately prevent\n"
	.string "their POKéMON from evolving.\p"
	.string "They wait until the POKéMON levels up\n"
	.string "and learns certain moves.$"

PastoriaCity_EventScript_PtNpc2::
	msgbox PastoriaCity_Text_PtNpc2, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc2:
	.string "PASTORIA's Gym Leader is awesome with\n"
	.string "his water attacks.\p"
	.string "You'll know what I mean when you\n"
	.string "challenge him.$"

PastoriaCity_EventScript_PtNpc3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox PastoriaCity_Text_PtNpc3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PastoriaCity_Text_PtNpc3:
	.string "CLEFAIRY: Fiiih?!$"

PastoriaCity_EventScript_PtNpc4::
	msgbox PastoriaCity_Text_PtNpc4, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc4:
	.string "Here where I am standing, I'm\n"
	.string "smack-dab in the middle of town.$"

PastoriaCity_EventScript_PtNpc5::
	msgbox PastoriaCity_Text_PtNpc5, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc5:
	.string "I'm visiting here to see the Great\n"
	.string "Marsh.\p"
	.string "I'm staying at the lakeside hotel.$"

PastoriaCity_EventScript_PtNpc6::
	msgbox PastoriaCity_Text_PtNpc6, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc6:
	.string "I can't use the hidden move Surf until\n"
	.string "I beat the local Gym Leader.$"

PastoriaCity_EventScript_PtNpc7::
	msgbox PastoriaCity_Text_PtNpc7, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc7:
	.string "Have you been to the POKéMON\n"
	.string "Mansion? It's on Route 212.\p"
	.string "The owner, Mr. Backlot, likes to brag\n"
	.string "about his herd of rare POKéMON.$"

PastoriaCity_EventScript_PtSign1::
	msgbox PastoriaCity_Text_PtSign1, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign1:
	.string "PASTORIA CITY The Marsh City$"

PastoriaCity_EventScript_PtSign2::
	msgbox PastoriaCity_Text_PtSign2, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign2:
	.string "PASTORIA CITY POKéMON Gym Leader:\n"
	.string "CRASHER WAKE The Torrential Masked\l"
	.string "Master!$"

PastoriaCity_EventScript_PtSign3::
	msgbox PastoriaCity_Text_PtSign3, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign3:
	.string "PASTORIA Great Marsh Observatory\n"
	.string "Gate$"

PastoriaCity_EventScript_PtSign4::
	msgbox PastoriaCity_Text_PtSign4, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign4:
	.string "Try the Safari Game in PASTORIA's\n"
	.string "Great Marsh!$"
