ValorLakefront_House2_MapScripts::
	.byte 0

ValorLakefront_House2_Text_PtNpc1:
	.string "How did you meet all the POKéMON that\n"
	.string "filled your POKéDEX?\p"
	.string "Did you work long and hard to catch and\n"
	.string "raise them?\p"
	.string "Did you receive them as gifts from\n"
	.string "friends?\p"
	.string "Maybe you got some in trades from\n"
	.string "around the world?\p"
	.string "Though everyone’s POKéDEXes may look\n"
	.string "the same, the stories they\p"
	.string "contain are all unique.$"

ValorLakefront_House2_EventScript_PtNpc1::
	msgbox ValorLakefront_House2_Text_PtNpc1, MSGBOX_NPC
	end
