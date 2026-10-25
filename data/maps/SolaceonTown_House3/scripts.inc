SolaceonTown_House3_MapScripts::
	.byte 0

SolaceonTown_House3_Text_PtNpc1_0:
	.string "Every so often, an Egg will be found at\n"
	.string "the POKéMON Day Care.\p"
	.string "And they’re found without anyone\n"
	.string "knowing how they got there.\p"
	.string "It’s an enduring mystery. Is someone\n"
	.string "leaving them there?$"

SolaceonTown_House3_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SolaceonTown_House3_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SolaceonTown_House3_Text_PtNpc2_0:
	.string "They say no one has ever seen a\n"
	.string "POKéMON actually lay an Egg.\p"
	.string "So, it hasn’t been proven that POKéMON\n"
	.string "actually lay Eggs.$"

SolaceonTown_House3_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SolaceonTown_House3_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
