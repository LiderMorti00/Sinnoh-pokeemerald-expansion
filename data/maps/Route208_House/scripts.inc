Route208_House_MapScripts::
	.byte 0

Route208_House_Text_PtNpc1:
	.string "Berries are gifts of nature.\p"
	.string "I encourage you to feed Berries to\n"
	.string "POKéMON.\p"
	.string "That will make POKéMON happy.\p"
	.string "Seeing that, people will be motivated\n"
	.string "to plant more Berries.\p"
	.string "And that will make Sinnoh a greener,\n"
	.string "more natural place.$"

Route208_House_Text_PtNpc2:
	.string "The that shows you where there are\n"
	.string "ripe Berries\p"
	.string "that are ready to be picked.$"

Route208_House_EventScript_PtNpc2::
	msgbox Route208_House_Text_PtNpc2, MSGBOX_NPC
	end

Route208_House_Text_PtNpc3:
	.string "Um... Would you like some Mulch?\p"
	.string "If you’re going to grow Berries, Mulch\n"
	.string "is a good fertilizer.$"

Route208_House_EventScript_SNMulch::
	lock
	faceplayer
	msgbox Route208_House_Text_SNMulch, MSGBOX_DEFAULT
	pokemart Route208_House_Mart_SNMulch
	msgbox Route208_House_Text_SNMulchBye, MSGBOX_DEFAULT
	release
	end

	.align 2
Route208_House_Mart_SNMulch:
	.2byte ITEM_GROWTH_MULCH
	.2byte ITEM_DAMP_MULCH
	.2byte ITEM_STABLE_MULCH
	.2byte ITEM_GOOEY_MULCH
	pokemartlistend

Route208_House_Text_SNMulch:
	.string "Um... Would you like some Mulch? If\n"
	.string "you’re going to grow Berries, Mulch is a\l"
	.string "good fertilizer.$"

Route208_House_Text_SNMulchBye:
	.string "Grow lots of Berries!$"
