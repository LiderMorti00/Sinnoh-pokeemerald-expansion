SurvivalArea_Mart_MapScripts::
	.byte 0

SurvivalArea_Mart_Text_PtNpc1_0:
	.string "I was on a 54-win streak... If only I\n"
	.string "used that move when...$"

SurvivalArea_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SurvivalArea_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Mart_Text_PtNpc2_0:
	.string "A word of advice from a grizzled\n"
	.string "mountain man!\p"
	.string "Stark Mountain is a harsh, harsh place\n"
	.string "that’s rife with Fire-type POKéMON.\p"
	.string "Water-type POKéMON and moves should\n"
	.string "take the edge off.\p"
	.string "That’s my advice. You’d best heed it, no\n"
	.string "joke!$"

SurvivalArea_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SurvivalArea_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
