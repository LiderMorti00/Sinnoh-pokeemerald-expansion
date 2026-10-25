Route217_House1_MapScripts::
	.byte 0

Route217_House1_Text_PtNpc1:
	.string "...The Spell Tag... It intensifies\n"
	.string "Ghost-type moves...\p"
	.string "May it serve you well...$"

Route217_House1_EventScript_PtNpc1::
	msgbox Route217_House1_Text_PtNpc1, MSGBOX_NPC
	end
