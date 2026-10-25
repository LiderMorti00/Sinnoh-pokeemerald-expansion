SolaceonTown_Mart_MapScripts::
	.byte 0

SolaceonTown_Mart_Text_PtNpc1_0:
	.string "Someone gave me a Seal Case. Now, I’m\n"
	.string "off to a POKéMON Center.\p"
	.string "You see, you need to use a PC to put\n"
	.string "Seals on your POKé BALLS.$"

SolaceonTown_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SolaceonTown_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SolaceonTown_Mart_Text_PtNpc2_0:
	.string "If you’re not totally happy with Repel,\n"
	.string "consider moving up to a Super Repel.$"

SolaceonTown_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SolaceonTown_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
