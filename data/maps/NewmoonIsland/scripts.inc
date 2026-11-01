NewmoonIsland_MapScripts::
	.byte 0

NewmoonIsland_Text_PtNpc1:
	.string "Should we sail back to Canalave?$"

NewmoonIsland_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox NewmoonIsland_Text_SailBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, NewmoonIsland_EventScript_SailNo
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_CANALAVE_CITY, 14, 47
	waitstate
	release
	end

NewmoonIsland_EventScript_SailNo:
	msgbox NewmoonIsland_Text_AllRightThen, MSGBOX_DEFAULT
	release
	end
NewmoonIsland_Text_SailBack:
	.string "Should we sail back to Canalave?$"

NewmoonIsland_Text_AllRightThen:
	.string "All right, then. Tell me if you’d like to\n"
	.string "return to Canalave.$"
