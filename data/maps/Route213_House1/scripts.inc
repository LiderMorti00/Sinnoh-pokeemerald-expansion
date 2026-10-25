Route213_House1_MapScripts::
	.byte 0

Route213_House1_Text_PtNpc1:
	.string "Is that right? You’re a traveler? Yes,\n"
	.string "it’s good to see other places!$"

Route213_House1_EventScript_PtNpc1::
	msgbox Route213_House1_Text_PtNpc1, MSGBOX_NPC
	end
