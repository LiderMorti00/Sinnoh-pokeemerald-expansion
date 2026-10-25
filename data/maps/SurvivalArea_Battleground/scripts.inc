SurvivalArea_Battleground_MapScripts::
	.byte 0

SurvivalArea_Battleground_Text_PtNpc1_0:
	.string "What should we talk about today? ...Ah,\n"
	.string "I know.\p"
	.string "Let me tell you about the volcano\n"
	.string "named Stark Mountain.\p"
	.string "That volcano dates to when Sinnoh was\n"
	.string "made by the melding of time and space.\p"
	.string "Fiery lava spilled out and pooled, and\n"
	.string "then it became a POKéMON.\p"
	.string "It’s said the Magma Stone was used to\n"
	.string "keep the POKéMON pinned down.\p"
	.string "It kept the POKéMON from rampaging\n"
	.string "and the volcano from erupting.$"

SurvivalArea_Battleground_Text_PtNpc1_1:
	.string "Welcome to the Battleground! Make\n"
	.string "yourself at home like always.$"

SurvivalArea_Battleground_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_BATTLED_STARK_MOUNTAIN_ROOM_3_HEATRAN, SurvivalArea_Battleground_EventScript_PtNpc1_MakeYourselfAtHome
	msgbox SurvivalArea_Battleground_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_PtNpc1_MakeYourselfAtHome:
	msgbox SurvivalArea_Battleground_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end
