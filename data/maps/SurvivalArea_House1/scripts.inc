SurvivalArea_House1_MapScripts::
	.byte 0

SurvivalArea_House1_Text_PtNpc1:
	.string "If you’d share your Shards with me, I\n"
	.string "can teach some moves.\p"
	.string "Would you like me to teach a move?$"

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

SurvivalArea_House1_EventScript_SNShardTutor::
	lock
	faceplayer
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Hello, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Bye
SurvivalArea_House1_EventScript_SNShardTutor_Menu:
	message SurvivalArea_House1_EventScript_SNShardTutor_Which
	waitmessage
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N0, 0
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N1, 1
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N2, 2
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N3, 3
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N4, 4
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N5, 5
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N6, 6
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N7, 7
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N8, 8
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N9, 9
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N10, 10
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N11, 11
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N12, 12
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N13, 13
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N14, 14
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N15, 15
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_N16, 16
	dynmultipush SurvivalArea_House1_EventScript_SNShardTutor_Cancel, 255
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	switch VAR_RESULT
	case 0, SurvivalArea_House1_EventScript_SNShardTutor_M0
	case 1, SurvivalArea_House1_EventScript_SNShardTutor_M1
	case 2, SurvivalArea_House1_EventScript_SNShardTutor_M2
	case 3, SurvivalArea_House1_EventScript_SNShardTutor_M3
	case 4, SurvivalArea_House1_EventScript_SNShardTutor_M4
	case 5, SurvivalArea_House1_EventScript_SNShardTutor_M5
	case 6, SurvivalArea_House1_EventScript_SNShardTutor_M6
	case 7, SurvivalArea_House1_EventScript_SNShardTutor_M7
	case 8, SurvivalArea_House1_EventScript_SNShardTutor_M8
	case 9, SurvivalArea_House1_EventScript_SNShardTutor_M9
	case 10, SurvivalArea_House1_EventScript_SNShardTutor_M10
	case 11, SurvivalArea_House1_EventScript_SNShardTutor_M11
	case 12, SurvivalArea_House1_EventScript_SNShardTutor_M12
	case 13, SurvivalArea_House1_EventScript_SNShardTutor_M13
	case 14, SurvivalArea_House1_EventScript_SNShardTutor_M14
	case 15, SurvivalArea_House1_EventScript_SNShardTutor_M15
	case 16, SurvivalArea_House1_EventScript_SNShardTutor_M16
SurvivalArea_House1_EventScript_SNShardTutor_Bye:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_ByeT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_M0:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MUD_SLAP
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_BLUE_SHARD, 4
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N0:
	.string "MUD SLAP$"
SurvivalArea_House1_EventScript_SNShardTutor_C0:
	.string "MUD SLAP costs 4 Red, 4 Blue Shards. Is\n"
	.string "that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M1:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ROLLOUT
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_BLUE_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N1:
	.string "ROLLOUT$"
SurvivalArea_House1_EventScript_SNShardTutor_C1:
	.string "ROLLOUT costs 4 Red, 2 Blue, 2 Green\n"
	.string "Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M2:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 8
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SUPERPOWER
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 8
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N2:
	.string "SUPERPOWER$"
SurvivalArea_House1_EventScript_SNShardTutor_C2:
	.string "SUPERPOWER costs 8 Red Shards. Is\n"
	.string "that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M3:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_IRON_HEAD
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 6
	removeitem ITEM_YELLOW_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N3:
	.string "IRON HEAD$"
SurvivalArea_House1_EventScript_SNShardTutor_C3:
	.string "IRON HEAD costs 6 Red, 2 Yellow Shards.\n"
	.string "Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M4:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_AQUA_TAIL
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 6
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N4:
	.string "AQUA TAIL$"
SurvivalArea_House1_EventScript_SNShardTutor_C4:
	.string "AQUA TAIL costs 6 Red, 2 Green Shards.\n"
	.string "Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M5:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_GASTRO_ACID
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_YELLOW_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N5:
	.string "GASTRO ACID$"
SurvivalArea_House1_EventScript_SNShardTutor_C5:
	.string "GASTRO ACID costs 4 Red, 2 Yellow, 2\n"
	.string "Green Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M6:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C6, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ENDEAVOR
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_YELLOW_SHARD, 4
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N6:
	.string "ENDEAVOR$"
SurvivalArea_House1_EventScript_SNShardTutor_C6:
	.string "ENDEAVOR costs 4 Red, 4 Yellow Shards.\n"
	.string "Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M7:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_OUTRAGE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 6
	removeitem ITEM_YELLOW_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N7:
	.string "OUTRAGE$"
SurvivalArea_House1_EventScript_SNShardTutor_C7:
	.string "OUTRAGE costs 6 Red, 2 Yellow Shards.\n"
	.string "Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M8:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C8, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ANCIENT_POWER
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 6
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N8:
	.string "ANCIENT POWER$"
SurvivalArea_House1_EventScript_SNShardTutor_C8:
	.string "ANCIENT POWER costs 6 Red, 2 Green\n"
	.string "Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M9:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C9, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SIGNAL_BEAM
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_BLUE_SHARD, 2
	removeitem ITEM_YELLOW_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N9:
	.string "SIGNAL BEAM$"
SurvivalArea_House1_EventScript_SNShardTutor_C9:
	.string "SIGNAL BEAM costs 2 Red, 2 Blue, 2\n"
	.string "Yellow, 2 Green Shards. Is that all\l"
	.string "right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M10:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C10, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_EARTH_POWER
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 6
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N10:
	.string "EARTH POWER$"
SurvivalArea_House1_EventScript_SNShardTutor_C10:
	.string "EARTH POWER costs 6 Red, 2 Green\n"
	.string "Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M11:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C11, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_GUNK_SHOT
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_BLUE_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N11:
	.string "GUNK SHOT$"
SurvivalArea_House1_EventScript_SNShardTutor_C11:
	.string "GUNK SHOT costs 4 Red, 2 Blue, 2 Green\n"
	.string "Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M12:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C12, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_TWISTER
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 6
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N12:
	.string "TWISTER$"
SurvivalArea_House1_EventScript_SNShardTutor_C12:
	.string "TWISTER costs 6 Red, 2 Green Shards.\n"
	.string "Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M13:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C13, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SEED_BOMB
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_GREEN_SHARD, 4
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N13:
	.string "SEED BOMB$"
SurvivalArea_House1_EventScript_SNShardTutor_C13:
	.string "SEED BOMB costs 4 Red, 4 Green Shards.\n"
	.string "Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M14:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C14, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_IRON_DEFENSE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_BLUE_SHARD, 2
	removeitem ITEM_YELLOW_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N14:
	.string "IRON DEFENSE$"
SurvivalArea_House1_EventScript_SNShardTutor_C14:
	.string "IRON DEFENSE costs 4 Red, 2 Blue, 2\n"
	.string "Yellow Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M15:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C15, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BOUNCE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_YELLOW_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N15:
	.string "BOUNCE$"
SurvivalArea_House1_EventScript_SNShardTutor_C15:
	.string "BOUNCE costs 4 Red, 2 Yellow, 2 Green\n"
	.string "Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_M16:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_C16, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Poor
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HEAT_WAVE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SurvivalArea_House1_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_BLUE_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SurvivalArea_House1_EventScript_SNShardTutor_N16:
	.string "HEAT WAVE$"
SurvivalArea_House1_EventScript_SNShardTutor_C16:
	.string "HEAT WAVE costs 4 Red, 2 Blue, 2 Green\n"
	.string "Shards. Is that all right?$"

SurvivalArea_House1_EventScript_SNShardTutor_Poor:
	msgbox SurvivalArea_House1_EventScript_SNShardTutor_PoorT, MSGBOX_DEFAULT
	goto SurvivalArea_House1_EventScript_SNShardTutor_Menu
SurvivalArea_House1_EventScript_SNShardTutor_Cancel:
	.string "CANCEL$"
SurvivalArea_House1_EventScript_SNShardTutor_Hello:
	.string "If you’d share your colored Shards\n"
	.string "with me, I can teach your POKéMON some\l"
	.string "moves. Would you like me to teach a\l"
	.string "move?$"

SurvivalArea_House1_EventScript_SNShardTutor_Which:
	.string "Which move should I teach?$"

SurvivalArea_House1_EventScript_SNShardTutor_WhichMon:
	.string "Which POKéMON should learn it?$"

SurvivalArea_House1_EventScript_SNShardTutor_Done:
	.string "There! Your POKéMON learned the move.\n"
	.string "Thank you for the Shards!$"

SurvivalArea_House1_EventScript_SNShardTutor_PoorT:
	.string "You don’t have enough Shards for that\n"
	.string "move.$"

SurvivalArea_House1_EventScript_SNShardTutor_ByeT:
	.string "Come back whenever you have Shards to\n"
	.string "share!$"
