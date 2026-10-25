Route226_House_MapScripts::
	.byte 0

Route226_House_Text_PtNpc1:
	.string "Because there are POKéMON, I can make\n"
	.string "friends anywhere in the world.\p"
	.string "It so inspires me knowing that. It’s so\n"
	.string "wonderful in a wonderful way!$"

Route226_House_EventScript_PtNpc1::
	msgbox Route226_House_Text_PtNpc1, MSGBOX_NPC
	end

Route226_House_EventScript_PtSign1::
	msgbox Route226_House_Text_PtSign1, MSGBOX_SIGN
	end

Route226_House_Text_PtSign1:
	.string "There is something scribbled on this\n"
	.string "notice.\p"
	.string "“The world-traveling Meister has\n"
	.string "visited over 150 countries!\p"
	.string "“But the world remains as big as ever!”$"
