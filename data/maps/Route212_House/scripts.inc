Route212_House_MapScripts::
	.byte 0

Route212_House_Text_PtNpc1_0:
	.string "My daddy likes Blue Shards.\p"
	.string "There are other people who like shards\n"
	.string "in Sinnoh.\p"
	.string "One person likes Red Shards. Another\n"
	.string "collects Yellow Shards.$"

Route212_House_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox Route212_House_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

Route212_House_Text_PtNpc2:
	.string "If you’d share your shards with me, I\n"
	.string "can teach your POKéMON some moves.\p"
	.string "Would you like me to teach a move?$"

Route212_House_Text_PtNpc3_0:
	.string "My daddy collects shards.\p"
	.string "If you find any, like in the\n"
	.string "Underground, please bring them to us.$"

Route212_House_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox Route212_House_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

Route212_House_EventScript_SNShardTutor::
	lock
	faceplayer
	msgbox Route212_House_EventScript_SNShardTutor_Hello, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Bye
Route212_House_EventScript_SNShardTutor_Menu:
	message Route212_House_EventScript_SNShardTutor_Which
	waitmessage
	dynmultipush Route212_House_EventScript_SNShardTutor_N0, 0
	dynmultipush Route212_House_EventScript_SNShardTutor_N1, 1
	dynmultipush Route212_House_EventScript_SNShardTutor_N2, 2
	dynmultipush Route212_House_EventScript_SNShardTutor_N3, 3
	dynmultipush Route212_House_EventScript_SNShardTutor_N4, 4
	dynmultipush Route212_House_EventScript_SNShardTutor_N5, 5
	dynmultipush Route212_House_EventScript_SNShardTutor_N6, 6
	dynmultipush Route212_House_EventScript_SNShardTutor_N7, 7
	dynmultipush Route212_House_EventScript_SNShardTutor_N8, 8
	dynmultipush Route212_House_EventScript_SNShardTutor_N9, 9
	dynmultipush Route212_House_EventScript_SNShardTutor_N10, 10
	dynmultipush Route212_House_EventScript_SNShardTutor_N11, 11
	dynmultipush Route212_House_EventScript_SNShardTutor_N12, 12
	dynmultipush Route212_House_EventScript_SNShardTutor_Cancel, 255
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	switch VAR_RESULT
	case 0, Route212_House_EventScript_SNShardTutor_M0
	case 1, Route212_House_EventScript_SNShardTutor_M1
	case 2, Route212_House_EventScript_SNShardTutor_M2
	case 3, Route212_House_EventScript_SNShardTutor_M3
	case 4, Route212_House_EventScript_SNShardTutor_M4
	case 5, Route212_House_EventScript_SNShardTutor_M5
	case 6, Route212_House_EventScript_SNShardTutor_M6
	case 7, Route212_House_EventScript_SNShardTutor_M7
	case 8, Route212_House_EventScript_SNShardTutor_M8
	case 9, Route212_House_EventScript_SNShardTutor_M9
	case 10, Route212_House_EventScript_SNShardTutor_M10
	case 11, Route212_House_EventScript_SNShardTutor_M11
	case 12, Route212_House_EventScript_SNShardTutor_M12
Route212_House_EventScript_SNShardTutor_Bye:
	msgbox Route212_House_EventScript_SNShardTutor_ByeT, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_M0:
	msgbox Route212_House_EventScript_SNShardTutor_C0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DIVE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_BLUE_SHARD, 4
	removeitem ITEM_YELLOW_SHARD, 2
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N0:
	.string "DIVE$"
Route212_House_EventScript_SNShardTutor_C0:
	.string "DIVE costs 2 Red, 4 Blue, 2 Yellow\n"
	.string "Shards. Is that all right?$"

Route212_House_EventScript_SNShardTutor_M1:
	msgbox Route212_House_EventScript_SNShardTutor_C1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 8
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FURY_CUTTER
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 8
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N1:
	.string "FURY CUTTER$"
Route212_House_EventScript_SNShardTutor_C1:
	.string "FURY CUTTER costs 8 Blue Shards. Is\n"
	.string "that all right?$"

Route212_House_EventScript_SNShardTutor_M2:
	msgbox Route212_House_EventScript_SNShardTutor_C2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ICY_WIND
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 6
	removeitem ITEM_GREEN_SHARD, 2
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N2:
	.string "ICY WIND$"
Route212_House_EventScript_SNShardTutor_C2:
	.string "ICY WIND costs 6 Blue, 2 Green Shards.\n"
	.string "Is that all right?$"

Route212_House_EventScript_SNShardTutor_M3:
	msgbox Route212_House_EventScript_SNShardTutor_C3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_THUNDER_PUNCH
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_BLUE_SHARD, 6
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N3:
	.string "THUNDER PUNCH$"
Route212_House_EventScript_SNShardTutor_C3:
	.string "THUNDER PUNCH costs 2 Red, 6 Blue\n"
	.string "Shards. Is that all right?$"

Route212_House_EventScript_SNShardTutor_M4:
	msgbox Route212_House_EventScript_SNShardTutor_C4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FIRE_PUNCH
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_BLUE_SHARD, 6
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N4:
	.string "FIRE PUNCH$"
Route212_House_EventScript_SNShardTutor_C4:
	.string "FIRE PUNCH costs 2 Red, 6 Blue Shards.\n"
	.string "Is that all right?$"

Route212_House_EventScript_SNShardTutor_M5:
	msgbox Route212_House_EventScript_SNShardTutor_C5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ICE_PUNCH
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_BLUE_SHARD, 6
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N5:
	.string "ICE PUNCH$"
Route212_House_EventScript_SNShardTutor_C5:
	.string "ICE PUNCH costs 2 Red, 6 Blue Shards.\n"
	.string "Is that all right?$"

Route212_House_EventScript_SNShardTutor_M6:
	msgbox Route212_House_EventScript_SNShardTutor_C6, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_OMINOUS_WIND
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 6
	removeitem ITEM_GREEN_SHARD, 2
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N6:
	.string "OMINOUS WIND$"
Route212_House_EventScript_SNShardTutor_C6:
	.string "OMINOUS WIND costs 6 Blue, 2 Green\n"
	.string "Shards. Is that all right?$"

Route212_House_EventScript_SNShardTutor_M7:
	msgbox Route212_House_EventScript_SNShardTutor_C7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_AIR_CUTTER
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_BLUE_SHARD, 4
	removeitem ITEM_GREEN_SHARD, 2
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N7:
	.string "AIR CUTTER$"
Route212_House_EventScript_SNShardTutor_C7:
	.string "AIR CUTTER costs 2 Red, 4 Blue, 2 Green\n"
	.string "Shards. Is that all right?$"

Route212_House_EventScript_SNShardTutor_M8:
	msgbox Route212_House_EventScript_SNShardTutor_C8, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_ZEN_HEADBUTT
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 4
	removeitem ITEM_YELLOW_SHARD, 4
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N8:
	.string "ZEN HEADBUTT$"
Route212_House_EventScript_SNShardTutor_C8:
	.string "ZEN HEADBUTT costs 4 Blue, 4 Yellow\n"
	.string "Shards. Is that all right?$"

Route212_House_EventScript_SNShardTutor_M9:
	msgbox Route212_House_EventScript_SNShardTutor_C9, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_VACUUM_WAVE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_BLUE_SHARD, 4
	removeitem ITEM_GREEN_SHARD, 2
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N9:
	.string "VACUUM WAVE$"
Route212_House_EventScript_SNShardTutor_C9:
	.string "VACUUM WAVE costs 2 Red, 4 Blue, 2\n"
	.string "Green Shards. Is that all right?$"

Route212_House_EventScript_SNShardTutor_M10:
	msgbox Route212_House_EventScript_SNShardTutor_C10, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_TRICK
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 4
	removeitem ITEM_YELLOW_SHARD, 4
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N10:
	.string "TRICK$"
Route212_House_EventScript_SNShardTutor_C10:
	.string "TRICK costs 4 Blue, 4 Yellow Shards. Is\n"
	.string "that all right?$"

Route212_House_EventScript_SNShardTutor_M11:
	msgbox Route212_House_EventScript_SNShardTutor_C11, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_BLUE_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_KNOCK_OFF
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 4
	removeitem ITEM_BLUE_SHARD, 4
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N11:
	.string "KNOCK OFF$"
Route212_House_EventScript_SNShardTutor_C11:
	.string "KNOCK OFF costs 4 Red, 4 Blue Shards.\n"
	.string "Is that all right?$"

Route212_House_EventScript_SNShardTutor_M12:
	msgbox Route212_House_EventScript_SNShardTutor_C12, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route212_House_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Poor
	msgbox Route212_House_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SUCKER_PUNCH
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route212_House_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 6
	removeitem ITEM_YELLOW_SHARD, 2
	msgbox Route212_House_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
Route212_House_EventScript_SNShardTutor_N12:
	.string "SUCKER PUNCH$"
Route212_House_EventScript_SNShardTutor_C12:
	.string "SUCKER PUNCH costs 6 Blue, 2 Yellow\n"
	.string "Shards. Is that all right?$"

Route212_House_EventScript_SNShardTutor_Poor:
	msgbox Route212_House_EventScript_SNShardTutor_PoorT, MSGBOX_DEFAULT
	goto Route212_House_EventScript_SNShardTutor_Menu
Route212_House_EventScript_SNShardTutor_Cancel:
	.string "CANCEL$"
Route212_House_EventScript_SNShardTutor_Hello:
	.string "If you’d share your colored Shards\n"
	.string "with me, I can teach your POKéMON some\l"
	.string "moves. Would you like me to teach a\l"
	.string "move?$"

Route212_House_EventScript_SNShardTutor_Which:
	.string "Which move should I teach?$"

Route212_House_EventScript_SNShardTutor_WhichMon:
	.string "Which POKéMON should learn it?$"

Route212_House_EventScript_SNShardTutor_Done:
	.string "There! Your POKéMON learned the move.\n"
	.string "Thank you for the Shards!$"

Route212_House_EventScript_SNShardTutor_PoorT:
	.string "You don’t have enough Shards for that\n"
	.string "move.$"

Route212_House_EventScript_SNShardTutor_ByeT:
	.string "Come back whenever you have Shards to\n"
	.string "share!$"
