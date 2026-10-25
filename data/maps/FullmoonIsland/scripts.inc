FullmoonIsland_MapScripts::
	.byte 0

FullmoonIsland_Text_PtNpc1:
	.string "That POKéMON you met was the Lunar\n"
	.string "POKéMON...\p"
	.string "I’ve heard tales of it flying from place\n"
	.string "to place throughout Sinnoh.\p"
	.string "Oh! That sparkle... So, that’s the Lunar\n"
	.string "Wing...\p"
	.string "Thank you... That will wake my son from\n"
	.string "the nightmare...$"

FullmoonIsland_EventScript_PtNpc1::
	msgbox FullmoonIsland_Text_PtNpc1, MSGBOX_NPC
	end
