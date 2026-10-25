SolaceonTown_House2_MapScripts::
	.byte 0

SolaceonTown_House2_Text_PtNpc1:
	.string "Your POKéMON has a that nature?\p"
	.string "Did you know that a POKéMON’s nature\n"
	.string "determines how it will grow?$"

SolaceonTown_House2_EventScript_PtNpc1::
	msgbox SolaceonTown_House2_Text_PtNpc1, MSGBOX_NPC
	end

SolaceonTown_House2_Text_PtNpc2_0:
	.string "This area had many POKéMON from the\n"
	.string "olden days.\p"
	.string "They say there were big POKéMON\n"
	.string "ranches ’round these parts.$"

SolaceonTown_House2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SolaceonTown_House2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
