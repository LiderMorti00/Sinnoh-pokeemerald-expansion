SolaceonTown_House1_MapScripts::
	.byte 0

SolaceonTown_House1_Text_PtNpc1:
	.string "I wanted to give you some Seals, but\n"
	.string "you don’t have a Seal Case!\p"
	.string "You should talk to my mom!$"

SolaceonTown_House1_EventScript_PtNpc1::
	msgbox SolaceonTown_House1_Text_PtNpc1, MSGBOX_NPC
	end

SolaceonTown_House1_Text_PtNpc2:
	.string "I’ll explain how the Seals work. You’ll\n"
	.string "need a POKéMON Center PC.\p"
	.string "First, select your PC, then check the\n"
	.string "heading “Ball Capsules” in the\p"
	.string "PC menu.\p"
	.string "Next, choose a Capsule and apply Seals\n"
	.string "to it as you wish.\p"
	.string "When you’re done, put the Capsule on a\n"
	.string "POKé BALL.\p"
	.string "You can see the results when you use\n"
	.string "that POKéMON in battle.$"

SolaceonTown_House1_EventScript_PtNpc2::
	msgbox SolaceonTown_House1_Text_PtNpc2, MSGBOX_NPC
	end
