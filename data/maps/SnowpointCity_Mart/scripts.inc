SnowpointCity_Mart_MapScripts::
	.byte 0

SnowpointCity_Mart_Text_PtNpc1_0:
	.string "I’m using Technical Machines to teach\n"
	.string "moves to my POKéMON.\p"
	.string "I’m trying for different mixes of moves\n"
	.string "in different types.\p"
	.string "It’s for when I go up against the Elite\n"
	.string "Four of the POKéMON League.\p"
	.string "They say the Elite Four are tougher\n"
	.string "than any Gym Leader by far.$"

SnowpointCity_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SnowpointCity_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Mart_Text_PtNpc2_0:
	.string "If your POKéMON gets frozen, it will\n"
	.string "thaw out after a while.\p"
	.string "But if I were you, I’d keep some Ice\n"
	.string "Heals around.$"

SnowpointCity_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SnowpointCity_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
