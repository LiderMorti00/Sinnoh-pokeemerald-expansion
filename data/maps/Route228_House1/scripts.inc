Route228_House1_MapScripts::
	.byte 0

Route228_House1_Text_PtNpc1:
	.string "The ultimate moves! Shall I teach them\n"
	.string "to your POKéMON?$"

Route228_House1_EventScript_PtNpc1::
	msgbox Route228_House1_Text_PtNpc1, MSGBOX_NPC
	end

Route228_House1_EventScript_PtSign1::
	msgbox Route228_House1_Text_PtSign1, MSGBOX_SIGN
	end

Route228_House1_Text_PtSign1:
	.string "To the POKéMON listed here, the\n"
	.string "ultimate moves may be taught!\p"
	.string "The blazing fire POKéMON CHARIZARD\n"
	.string "TYPHLOSION\p"
	.string "BLAZIKEN INFERNAPE\p"
	.string "The restless water POKéMON BLASTOISE\n"
	.string "FERALIGATR\p"
	.string "SWAMPERT EMPOLEON\p"
	.string "The quiet grass POKéMON VENUSAUR\n"
	.string "MEGANIUM\p"
	.string "SCEPTILE TORTERRA$"
