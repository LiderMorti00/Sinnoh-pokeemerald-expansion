SnowpointCity_House1_MapScripts::
	.byte 0

SnowpointCity_House1_Text_PtNpc1_0:
	.string "I love how my girl has so much vivacity\n"
	.string "and charm.$"

SnowpointCity_House1_Text_PtNpc1_1:
	.string "Thanks to you, my girl’s been in a really\n"
	.string "happy mood.$"

SnowpointCity_House1_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_TRADED_FOR_GASPAR_HAUNTER, SnowpointCity_House1_EventScript_PtNpc1_MyGirlsHappy
	msgbox SnowpointCity_House1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_House1_EventScript_PtNpc1_MyGirlsHappy:
	msgbox SnowpointCity_House1_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

SnowpointCity_House1_Text_PtNpc2:
	.string "Thanks to POKéMON, we got to be\n"
	.string "friends, didn’t we?$"

SnowpointCity_House1_EventScript_PtNpc2::
	msgbox SnowpointCity_House1_Text_PtNpc2, MSGBOX_NPC
	end
