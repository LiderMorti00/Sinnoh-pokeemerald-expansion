Route227_House_MapScripts::
	.byte 0

Route227_House_Text_PtNpc1:
	.string "Oh, dear, are your POKéMON feeling\n"
	.string "tired?\p"
	.string "You should rest up. Yes, good idea!\n"
	.string "Rest up here!$"

Route227_House_EventScript_PtNpc1::
	msgbox Route227_House_Text_PtNpc1, MSGBOX_NPC
	end
