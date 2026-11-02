HearthomeCity_WestGate_MapScripts::
	.byte 0

HearthomeCity_WestGate_Text_PtNpc1_0:
	.string "In Amity Square, you may go for a stroll\n"
	.string "with a cute POKéMON.$"

HearthomeCity_WestGate_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_WestGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_WestGate_Text_PtNpc2_0:
	.string "My PIKACHU seems delighted to be out\n"
	.string "of its POKé BALL for a walk outside.\p"
	.string "See? You can tell because its cheeks\n"
	.string "are twitching away!$"

HearthomeCity_WestGate_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_WestGate_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_WestGate_Text_PtNpc3_0:
	.string "PIKACHU: Pikappi!$"

HearthomeCity_WestGate_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox HearthomeCity_WestGate_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_WestGate_EventScript_SNAmityCheck::
	special SinnohLeadMonIsCute
	goto_if_eq VAR_RESULT, TRUE, HearthomeCity_WestGate_EventScript_SNAmityCheck_Ok
	lockall
	msgbox HearthomeCity_WestGate_EventScript_SNAmityCheck_No, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end
HearthomeCity_WestGate_EventScript_SNAmityCheck_Ok:
	setvar VAR_TEMP_F, 1
	end

HearthomeCity_WestGate_EventScript_SNAmityCheck_No:
	.string "Excuse me! Only cute POKéMON such as\n"
	.string "PIKACHU, CLEFAIRY, PSYDUCK,\l"
	.string "PACHIRISU, DRIFLOON, BUNEARY, HAPPINY\l"
	.string "or your first partner may enter Amity\l"
	.string "Square.\p"
	.string "Please put one of them at the head of\n"
	.string "your party.$"
