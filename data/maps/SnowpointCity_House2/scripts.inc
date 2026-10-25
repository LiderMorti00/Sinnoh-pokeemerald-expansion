SnowpointCity_House2_MapScripts::
	.byte 0

SnowpointCity_House2_Text_PtNpc1:
	.string "I hope you’ll use trendy sayings in a\n"
	.string "trendy way.$"

SnowpointCity_House2_EventScript_PtNpc1::
	msgbox SnowpointCity_House2_Text_PtNpc1, MSGBOX_NPC
	end

SnowpointCity_House2_Text_PtNpc2:
	.string "Share colored Shards with me, and I’ll\n"
	.string "teach your POKéMON some moves.\p"
	.string "Want me to teach a move?$"

SnowpointCity_House2_EventScript_PtNpc2::
	msgbox SnowpointCity_House2_Text_PtNpc2, MSGBOX_NPC
	end
