SolaceonRuins_Room3_MapScripts::
	.byte 0

SolaceonRuins_Room3_EventScript_Karl::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, SolaceonRuins_Room3_Text_KarlIntro, SolaceonRuins_Room3_Text_KarlDefeat
	msgbox SolaceonRuins_Room3_Text_KarlPost, MSGBOX_AUTOCLOSE
	end

SolaceonRuins_Room3_Text_KarlIntro:
	.string "Ancient ruins rife with the UNOWN...\n"
	.string "There has to be a meaning!\p"
	.string "But its significance eludes me, and\n"
	.string "that’s gotten me cranky!$"

SolaceonRuins_Room3_Text_KarlDefeat:
	.string "The search must continue!$"

SolaceonRuins_Room3_Text_KarlPost:
	.string "The significance of the ancient\n"
	.string "ruins...\p"
	.string "Only POKéMON that look like the\n"
	.string "letters of some strange language...\p"
	.string "Can they be trying to convey a message\n"
	.string "to us?$"
