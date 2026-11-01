Route226_Access_MapScripts::
	.byte 0

Route226_Access_Text_PtNpc1_0:
	.string "I’ve been wondering about this, but no\n"
	.string "one can tell me.\p"
	.string "Why doesn’t anyone study the molting\n"
	.string "of POKéMON?\p"
	.string "I think there would be a lot you could\n"
	.string "tell from their molts.$"

Route226_Access_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox Route226_Access_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

Route226_Access_Text_PtNpc2_0:
	.string "A strong, but a solitary presence... Or\n"
	.string "the weak that mass together...\p"
	.string "Who can say which is better?$"

Route226_Access_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox Route226_Access_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
