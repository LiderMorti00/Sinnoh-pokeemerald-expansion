SolaceonRuins_Room2_MapScripts::
	.byte 0

SolaceonRuins_Room2_Text_PtNpc1:
	.string "I’ve finally got Defog, and it’s all\n"
	.string "thanks to you.\p"
	.string "I’ll get to climbing the Lost Tower now\n"
	.string "that I’ve got it.$"

SolaceonRuins_Room2_EventScript_PtNpc1::
	msgbox SolaceonRuins_Room2_Text_PtNpc1, MSGBOX_NPC
	end
