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

SnowpointCity_House2_EventScript_SNShardTutor::
	lock
	faceplayer
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Hello, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Bye
SnowpointCity_House2_EventScript_SNShardTutor_Menu:
	message SnowpointCity_House2_EventScript_SNShardTutor_Which
	waitmessage
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N0, 0
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N1, 1
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N2, 2
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N3, 3
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N4, 4
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N5, 5
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N6, 6
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_N7, 7
	dynmultipush SnowpointCity_House2_EventScript_SNShardTutor_Cancel, 255
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	switch VAR_RESULT
	case 0, SnowpointCity_House2_EventScript_SNShardTutor_M0
	case 1, SnowpointCity_House2_EventScript_SNShardTutor_M1
	case 2, SnowpointCity_House2_EventScript_SNShardTutor_M2
	case 3, SnowpointCity_House2_EventScript_SNShardTutor_M3
	case 4, SnowpointCity_House2_EventScript_SNShardTutor_M4
	case 5, SnowpointCity_House2_EventScript_SNShardTutor_M5
	case 6, SnowpointCity_House2_EventScript_SNShardTutor_M6
	case 7, SnowpointCity_House2_EventScript_SNShardTutor_M7
SnowpointCity_House2_EventScript_SNShardTutor_Bye:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_ByeT, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_M0:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SNORE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_YELLOW_SHARD, 4
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N0:
	.string "SNORE$"
SnowpointCity_House2_EventScript_SNShardTutor_C0:
	.string "SNORE costs 2 Red, 4 Yellow, 2 Green\n"
	.string "Shards. Is that all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_M1:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_YELLOW_SHARD, 8
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SPITE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_YELLOW_SHARD, 8
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N1:
	.string "SPITE$"
SnowpointCity_House2_EventScript_SNShardTutor_C1:
	.string "SPITE costs 8 Yellow Shards. Is that\n"
	.string "all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_M2:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_RED_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HELPING_HAND
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_RED_SHARD, 2
	removeitem ITEM_YELLOW_SHARD, 4
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N2:
	.string "HELPING HAND$"
SnowpointCity_House2_EventScript_SNShardTutor_C2:
	.string "HELPING HAND costs 2 Red, 4 Yellow, 2\n"
	.string "Green Shards. Is that all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_M3:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SYNTHESIS
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_YELLOW_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 6
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N3:
	.string "SYNTHESIS$"
SnowpointCity_House2_EventScript_SNShardTutor_C3:
	.string "SYNTHESIS costs 2 Yellow, 6 Green\n"
	.string "Shards. Is that all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_M4:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C4, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_MAGNET_RISE
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 2
	removeitem ITEM_YELLOW_SHARD, 4
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N4:
	.string "MAGNET RISE$"
SnowpointCity_House2_EventScript_SNShardTutor_C4:
	.string "MAGNET RISE costs 2 Blue, 4 Yellow, 2\n"
	.string "Green Shards. Is that all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_M5:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_GREEN_SHARD, 8
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_LAST_RESORT
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_GREEN_SHARD, 8
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N5:
	.string "LAST RESORT$"
SnowpointCity_House2_EventScript_SNShardTutor_C5:
	.string "LAST RESORT costs 8 Green Shards. Is\n"
	.string "that all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_M6:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C6, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_BLUE_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_YELLOW_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 4
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_SWIFT
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_BLUE_SHARD, 2
	removeitem ITEM_YELLOW_SHARD, 2
	removeitem ITEM_GREEN_SHARD, 4
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N6:
	.string "SWIFT$"
SnowpointCity_House2_EventScript_SNShardTutor_C6:
	.string "SWIFT costs 2 Blue, 2 Yellow, 4 Green\n"
	.string "Shards. Is that all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_M7:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_C7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	checkitem ITEM_YELLOW_SHARD, 6
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	checkitem ITEM_GREEN_SHARD, 2
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Poor
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_UPROAR
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, SnowpointCity_House2_EventScript_SNShardTutor_Menu
	removeitem ITEM_YELLOW_SHARD, 6
	removeitem ITEM_GREEN_SHARD, 2
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_Done, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House2_EventScript_SNShardTutor_N7:
	.string "UPROAR$"
SnowpointCity_House2_EventScript_SNShardTutor_C7:
	.string "UPROAR costs 6 Yellow, 2 Green Shards.\n"
	.string "Is that all right?$"

SnowpointCity_House2_EventScript_SNShardTutor_Poor:
	msgbox SnowpointCity_House2_EventScript_SNShardTutor_PoorT, MSGBOX_DEFAULT
	goto SnowpointCity_House2_EventScript_SNShardTutor_Menu
SnowpointCity_House2_EventScript_SNShardTutor_Cancel:
	.string "CANCEL$"
SnowpointCity_House2_EventScript_SNShardTutor_Hello:
	.string "If you’d share your colored Shards\n"
	.string "with me, I can teach your POKéMON some\l"
	.string "moves. Would you like me to teach a\l"
	.string "move?$"

SnowpointCity_House2_EventScript_SNShardTutor_Which:
	.string "Which move should I teach?$"

SnowpointCity_House2_EventScript_SNShardTutor_WhichMon:
	.string "Which POKéMON should learn it?$"

SnowpointCity_House2_EventScript_SNShardTutor_Done:
	.string "There! Your POKéMON learned the move.\n"
	.string "Thank you for the Shards!$"

SnowpointCity_House2_EventScript_SNShardTutor_PoorT:
	.string "You don’t have enough Shards for that\n"
	.string "move.$"

SnowpointCity_House2_EventScript_SNShardTutor_ByeT:
	.string "Come back whenever you have Shards to\n"
	.string "share!$"
