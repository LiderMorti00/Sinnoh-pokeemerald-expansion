Route228_House1_MapScripts::
	.byte 0

Route228_House1_Text_PtNpc1:
	.string "The ultimate moves! Shall I teach them\n"
	.string "to your POKéMON?$"

Route228_House1_EventScript_PtSign1::
	msgbox Route228_House1_Text_PtSign1, MSGBOX_SIGN
	end

Route228_House1_Text_PtSign1:
	.string "To the POKéMON listed here, the\n"
	.string "ultimate moves may be taught!\p"
	.string "The blazing fire POKéMON CHARIZARD\n"
	.string "TYPHLOSION\p"
	.string "BLAZIKEN INFERNAPE\p"
	.string "The restless water POKéMON BLASTOISE\n"
	.string "FERALIGATR\p"
	.string "SWAMPERT EMPOLEON\p"
	.string "The quiet grass POKéMON VENUSAUR\n"
	.string "MEGANIUM\p"
	.string "SCEPTILE TORTERRA$"

Route228_House1_EventScript_SNUltimate::
	lock
	faceplayer
	msgbox Route228_House1_EventScript_SNUltimate_Hello, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route228_House1_EventScript_SNUltimate_Bye
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
	goto_if_lt VAR_RESULT, 6, Route228_House1_EventScript_SNUltimate_NotFriendly
	message Route228_House1_EventScript_SNUltimate_Which
	waitmessage
	dynmultipush Route228_House1_EventScript_SNUltimate_N0, 0
	dynmultipush Route228_House1_EventScript_SNUltimate_N1, 1
	dynmultipush Route228_House1_EventScript_SNUltimate_N2, 2
	dynmultipush Route228_House1_EventScript_SNUltimate_Cancel, 255
	dynmultistack 0, 0, FALSE, 6, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	switch VAR_RESULT
	case 0, Route228_House1_EventScript_SNUltimate_M0
	case 1, Route228_House1_EventScript_SNUltimate_M1
	case 2, Route228_House1_EventScript_SNUltimate_M2
Route228_House1_EventScript_SNUltimate_Bye:
	msgbox Route228_House1_EventScript_SNUltimate_ByeT, MSGBOX_DEFAULT
	release
	end
Route228_House1_EventScript_SNUltimate_NotFriendly:
	msgbox Route228_House1_EventScript_SNUltimate_Friend, MSGBOX_DEFAULT
	release
	end
Route228_House1_EventScript_SNUltimate_M0:
	msgbox Route228_House1_EventScript_SNUltimate_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_FRENZY_PLANT
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route228_House1_EventScript_SNUltimate_Bye
	msgbox Route228_House1_EventScript_SNUltimate_Done, MSGBOX_DEFAULT
	release
	end
Route228_House1_EventScript_SNUltimate_N0:
	.string "FRENZY PLANT$"
Route228_House1_EventScript_SNUltimate_M1:
	msgbox Route228_House1_EventScript_SNUltimate_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_BLAST_BURN
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route228_House1_EventScript_SNUltimate_Bye
	msgbox Route228_House1_EventScript_SNUltimate_Done, MSGBOX_DEFAULT
	release
	end
Route228_House1_EventScript_SNUltimate_N1:
	.string "BLAST BURN$"
Route228_House1_EventScript_SNUltimate_M2:
	msgbox Route228_House1_EventScript_SNUltimate_WhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVE_HYDRO_CANNON
	call MoveTutor_EventScript_OpenBox
	goto_if_eq VAR_RESULT, FALSE, Route228_House1_EventScript_SNUltimate_Bye
	msgbox Route228_House1_EventScript_SNUltimate_Done, MSGBOX_DEFAULT
	release
	end
Route228_House1_EventScript_SNUltimate_N2:
	.string "HYDRO CANNON$"
Route228_House1_EventScript_SNUltimate_Cancel:
	.string "CANCEL$"
Route228_House1_EventScript_SNUltimate_Hello:
	.string "The ultimate moves! Shall I teach them\n"
	.string "to your POKéMON? Only a fully evolved\l"
	.string "starter POKéMON that trusts you\l"
	.string "completely can learn them.$"

Route228_House1_EventScript_SNUltimate_Which:
	.string "Which move shall I teach?$"

Route228_House1_EventScript_SNUltimate_WhichMon:
	.string "Which POKéMON should learn it?$"

Route228_House1_EventScript_SNUltimate_Done:
	.string "Splendid! Use that move well.$"

Route228_House1_EventScript_SNUltimate_Friend:
	.string "Hmm... The POKéMON at the head of your\n"
	.string "party doesn’t trust you completely\l"
	.string "yet. Come back when your bond is\l"
	.string "perfect.$"

Route228_House1_EventScript_SNUltimate_ByeT:
	.string "Come back anytime.$"
