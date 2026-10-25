Route210_House_MapScripts::
	.byte 0

Route210_House_Text_PtNpc1:
	.string "Ah, it is you again...\p"
	.string "Would you like me to teach the best\n"
	.string "Dragon-type move I know to one of\p"
	.string "your POKéMON?$"

Route210_House_EventScript_PtNpc1::
	msgbox Route210_House_Text_PtNpc1, MSGBOX_NPC
	end
