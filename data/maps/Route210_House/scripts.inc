Route210_House_MapScripts::
	.byte 0

Route210_House_Text_PtNpc1:
	.string "Ah, it is you again...\p"
	.string "Would you like me to teach the best\n"
	.string "Dragon-type move I know to one of\p"
	.string "your POKéMON?$"

Route210_House_EventScript_SNDracoMeteor::
	lock
	faceplayer
	msgbox Route210_House_EventScript_SNDracoMeteor_Hello, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route210_House_EventScript_SNDracoMeteor_Bye
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_lt VAR_RESULT, 6, Route210_House_EventScript_SNDracoMeteor_NotFriendly
	message Route210_House_EventScript_SNDracoMeteor_Which
	waitmessage
	dynmultipush Route210_House_EventScript_SNDracoMeteor_N0, 0
	dynmultipush Route210_House_EventScript_SNDracoMeteor_Cancel, 255
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	switch VAR_RESULT
	case 0, Route210_House_EventScript_SNDracoMeteor_M0
Route210_House_EventScript_SNDracoMeteor_Bye:
	msgbox Route210_House_EventScript_SNDracoMeteor_ByeT, MSGBOX_DEFAULT
	release
	end
Route210_House_EventScript_SNDracoMeteor_NotFriendly:
	msgbox Route210_House_EventScript_SNDracoMeteor_Friend, MSGBOX_DEFAULT
	release
	end
Route210_House_EventScript_SNDracoMeteor_M0:
	msgbox Route210_House_EventScript_SNDracoMeteor_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_DRACO_METEOR
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route210_House_EventScript_SNDracoMeteor_Bye
	msgbox Route210_House_EventScript_SNDracoMeteor_Done, MSGBOX_DEFAULT
	release
	end
Route210_House_EventScript_SNDracoMeteor_N0:
	.string "DRACO METEOR$"
Route210_House_EventScript_SNDracoMeteor_Cancel:
	.string "CANCEL$"
Route210_House_EventScript_SNDracoMeteor_Hello:
	.string "Ah, it is you... Would you like me to\n"
	.string "teach the best Dragon-type move I\l"
	.string "know to one of your POKéMON? It must\l"
	.string "be a Dragon type that trusts you\l"
	.string "completely.$"

Route210_House_EventScript_SNDracoMeteor_Which:
	.string "Which move shall I teach?$"

Route210_House_EventScript_SNDracoMeteor_WhichMon:
	.string "Which POKéMON should learn it?$"

Route210_House_EventScript_SNDracoMeteor_Done:
	.string "Splendid! Use that move well.$"

Route210_House_EventScript_SNDracoMeteor_Friend:
	.string "Hmm... The POKéMON at the head of your\n"
	.string "party doesn’t trust you completely\l"
	.string "yet. Come back when your bond is\l"
	.string "perfect.$"

Route210_House_EventScript_SNDracoMeteor_ByeT:
	.string "Come back anytime.$"
