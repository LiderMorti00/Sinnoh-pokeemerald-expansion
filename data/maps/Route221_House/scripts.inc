Route221_House_MapScripts::
	.byte 0

Route221_House_Text_PtNpc1:
	.string "I’ll thank you for that visual treat\n"
	.string "with this item.$"

Route221_House_EventScript_PtNpc1::
	msgbox Route221_House_Text_PtNpc1, MSGBOX_NPC
	end

Route221_House_EventScript_PtSign1::
	msgbox Route221_House_Text_PtSign1, MSGBOX_SIGN
	end

Route221_House_Text_PtSign1:
	.string "Win Items from Me!\p"
	.string "Black Belt: Powers up Fighting-type\n"
	.string "moves.\p"
	.string "Expert Belt: Powers up moves if they\n"
	.string "are super effective.\p"
	.string "Focus Sash: The bearer avoids a\n"
	.string "one-hit KO if its HP is full.$"
