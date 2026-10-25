SurvivalArea_House1_MapScripts::
	.byte 0

SurvivalArea_House1_Text_PtNpc1:
	.string "If you’d share your Shards with me, I\n"
	.string "can teach some moves.\p"
	.string "Would you like me to teach a move?$"

SurvivalArea_House1_EventScript_PtNpc1::
	msgbox SurvivalArea_House1_Text_PtNpc1, MSGBOX_NPC
	end

SurvivalArea_House1_Text_PtNpc2_0:
	.string "I started living here where no one\n"
	.string "could reach me without using Rock\l"
	.string "Climb.\p"
	.string "I came because I got sick and tired of\n"
	.string "seeing people.\p"
	.string "But when I stopped seeing people, I\n"
	.string "began looking forward to visitors.\p"
	.string "Where one lives can change people and\n"
	.string "POKéMON, that’s what I’m saying.$"

SurvivalArea_House1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SurvivalArea_House1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
