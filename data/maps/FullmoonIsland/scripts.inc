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
	lock
	faceplayer
	msgbox FullmoonIsland_Text_SailBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FullmoonIsland_EventScript_SailNo
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_CANALAVE_CITY, 14, 47
	waitstate
	release
	end

FullmoonIsland_EventScript_SailNo:
	msgbox FullmoonIsland_Text_AllRightThen, MSGBOX_DEFAULT
	release
	end
FullmoonIsland_Text_SailBack:
	.string "Should we sail back to Canalave?$"

FullmoonIsland_Text_AllRightThen:
	.string "All right, then. Tell me if you’d like to\n"
	.string "return to Canalave.$"
