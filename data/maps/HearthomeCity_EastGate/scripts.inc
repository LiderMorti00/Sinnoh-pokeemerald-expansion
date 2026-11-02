HearthomeCity_EastGate_MapScripts::
	.byte 0

HearthomeCity_EastGate_Text_PtNpc1_0:
	.string "You can take a cute POKéMON out for a\n"
	.string "stroll in Amity Square.$"

HearthomeCity_EastGate_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_EastGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_EastGate_Text_PtNpc2_0:
	.string "I’m appalled! They refused entry to my\n"
	.string "POKéMON!\p"
	.string "Oh, my poor GYARADOS and STEELIX! This\n"
	.string "is discrimination!$"

HearthomeCity_EastGate_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_EastGate_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_EastGate_EventScript_SNAmityCheck::
	special SinnohLeadMonIsCute
	goto_if_eq VAR_RESULT, TRUE, HearthomeCity_EastGate_EventScript_SNAmityCheck_Ok
	lockall
	msgbox HearthomeCity_EastGate_EventScript_SNAmityCheck_No, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end
HearthomeCity_EastGate_EventScript_SNAmityCheck_Ok:
	setvar VAR_TEMP_F, 1
	end

HearthomeCity_EastGate_EventScript_SNAmityCheck_No:
	.string "Excuse me! Only cute POKéMON such as\n"
	.string "PIKACHU, CLEFAIRY, PSYDUCK,\l"
	.string "PACHIRISU, DRIFLOON, BUNEARY, HAPPINY\l"
	.string "or your first partner may enter Amity\l"
	.string "Square.\p"
	.string "Please put one of them at the head of\n"
	.string "your party.$"
