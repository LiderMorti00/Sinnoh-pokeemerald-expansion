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

Route208_House_EventScript_PtNpc1::
	msgbox Route208_House_Text_PtNpc1, MSGBOX_NPC
	end

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

Route208_House_EventScript_PtNpc3::
	msgbox Route208_House_Text_PtNpc3, MSGBOX_NPC
	end
