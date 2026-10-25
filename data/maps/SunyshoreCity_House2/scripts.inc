SunyshoreCity_House2_MapScripts::
	.byte 0

SunyshoreCity_House2_Text_PtNpc1:
	.string "Julia: Please tell me another story\n"
	.string "tomorrow.$"

SunyshoreCity_House2_EventScript_PtNpc1::
	msgbox SunyshoreCity_House2_Text_PtNpc1, MSGBOX_NPC
	end
