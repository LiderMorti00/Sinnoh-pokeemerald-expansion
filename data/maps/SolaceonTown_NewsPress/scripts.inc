SolaceonTown_NewsPress_MapScripts::
	.byte 0

SolaceonTown_NewsPress_Text_PtNpc1:
	.string "Whoops! What’s all this? Your Bag is\n"
	.string "stuffed full.\p"
	.string "I’ll hold on to these until the next\n"
	.string "time.$"

SolaceonTown_NewsPress_EventScript_PtNpc1::
	msgbox SolaceonTown_NewsPress_Text_PtNpc1, MSGBOX_NPC
	end

SolaceonTown_NewsPress_Text_PtNpc2_0:
	.string "The Sinnoh region’s newspaper is tiny,\n"
	.string "but it has many fans.\p"
	.string "That newspaper is printed right here!$"

SolaceonTown_NewsPress_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SolaceonTown_NewsPress_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
