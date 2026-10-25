HearthomeCity_Mart_MapScripts::
	.byte 0

HearthomeCity_Mart_Text_PtNpc1_0:
	.string "The item Revive is something I could\n"
	.string "use now.\p"
	.string "But I’ve only got two Gym Badges, so I\n"
	.string "can’t buy any yet...$"

HearthomeCity_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Mart_Text_PtNpc2_0:
	.string "Do you know Amity Square? It’s a happy\n"
	.string "and cheerful place.\p"
	.string "You can find Accessories there you\n"
	.string "can’t buy in POKé MARTs.$"

HearthomeCity_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
