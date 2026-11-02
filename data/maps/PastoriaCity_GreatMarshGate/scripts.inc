PastoriaCity_GreatMarshGate_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PastoriaCity_GreatMarshGate_OnTransitionSN
	.byte 0

PastoriaCity_GreatMarshGate_Text_PtNpc1_0:
	.string "Howdy. You’re playing the Safari Game?\p"
	.string "How would you like to try my game out\n"
	.string "at the same time?\p"
	.string "The rule--yep, there’s only one--is\n"
	.string "real simple.\p"
	.string "All you have to do is capture five or\n"
	.string "more POKéMON in one Safari Game.\p"
	.string "If you can do that, I’ll give you the\n"
	.string "POKéNAV app Matchup Checker.$"

PastoriaCity_GreatMarshGate_Text_PtNpc1_1:
	.string "The Matchup Checker app figures out\n"
	.string "how POKéMON types match up.\p"
	.string "It won’t help tell us how we match up as\n"
	.string "friends, though.$"

PastoriaCity_GreatMarshGate_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_PASTORIA_CITY_OBSERVATORY_GATE_1F_MATCHUPCHECKER, PastoriaCity_GreatMarshGate_EventScript_PtNpc1_ExplainMatchupChecker
	msgbox PastoriaCity_GreatMarshGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	goto PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd
	release
	end

PastoriaCity_GreatMarshGate_EventScript_PtNpc1_ExplainMatchupChecker:
	msgbox PastoriaCity_GreatMarshGate_Text_PtNpc1_1, MSGBOX_DEFAULT
	goto PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd
	release
	end

PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd:
	release
	end

PastoriaCity_GreatMarshGate_OnTransitionSN:
	call PastoriaCity_GreatMarshGate_EventScript_SNReturn
	end

PastoriaCity_GreatMarshGate_EventScript_SNReturn:
	goto_if_unset FLAG_SYS_SAFARI_MODE, PastoriaCity_GreatMarshGate_EventScript_SNReturnEnd
	special ExitSafariMode
	setvar VAR_TEMP_F, 1
PastoriaCity_GreatMarshGate_EventScript_SNReturnEnd:
	return

PastoriaCity_GreatMarshGate_EventScript_SNAttendant::
	lock
	faceplayer
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNInfoT, MSGBOX_DEFAULT
	release
	end

PastoriaCity_GreatMarshGate_EventScript_SNCounter::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	showmoneybox 0, 0
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNAskT, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PastoriaCity_GreatMarshGate_EventScript_SNBack
	getpartysize
	goto_if_ne VAR_RESULT, PARTY_SIZE, PastoriaCity_GreatMarshGate_EventScript_SNRoom
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
	goto_if_eq VAR_RESULT, 1, PastoriaCity_GreatMarshGate_EventScript_SNRoom
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNFullT, MSGBOX_DEFAULT
	goto PastoriaCity_GreatMarshGate_EventScript_SNBack
PastoriaCity_GreatMarshGate_EventScript_SNRoom:
	checkmoney 500
	goto_if_eq VAR_RESULT, FALSE, PastoriaCity_GreatMarshGate_EventScript_SNNoMoney
	playse SE_SHOP
	removemoney 500
	updatemoneybox
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNPayT, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message PastoriaCity_GreatMarshGate_EventScript_SNBallsT
	waitfanfare
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNEnjoyT, MSGBOX_DEFAULT
	closemessage
	hidemoneybox
	special EnterSafariMode
	warp MAP_GREAT_MARSH, 37, 86
	waitstate
	end
PastoriaCity_GreatMarshGate_EventScript_SNNoMoney:
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNNoMoneyT, MSGBOX_DEFAULT
PastoriaCity_GreatMarshGate_EventScript_SNBack:
	closemessage
	hidemoneybox
	applymovement OBJ_EVENT_ID_PLAYER, PastoriaCity_GreatMarshGate_EventScript_SNMvBack
	waitmovement 0
	releaseall
	end

PastoriaCity_GreatMarshGate_EventScript_SNMvBack:
	walk_down
	step_end
PastoriaCity_GreatMarshGate_EventScript_SNInfoT:
	.string "Welcome to the GREAT MARSH!\p"
	.string "For ¥500, you can play the Safari Game.\p"
	.string "You get 30 SAFARI BALLS and 500 steps\n"
	.string "to catch as many POKéMON as you can!$"

PastoriaCity_GreatMarshGate_EventScript_SNAskT:
	.string "Would you like to play the Safari Game?\n"
	.string "It costs ¥500.$"

PastoriaCity_GreatMarshGate_EventScript_SNPayT:
	.string "That will be ¥500, please.\p"
	.string "Here are your SAFARI BALLS.$"

PastoriaCity_GreatMarshGate_EventScript_SNBallsT:
	.string "{PLAYER} received 30 SAFARI BALLS.$"

PastoriaCity_GreatMarshGate_EventScript_SNEnjoyT:
	.string "Please enjoy the GREAT MARSH!$"

PastoriaCity_GreatMarshGate_EventScript_SNFullT:
	.string "Your PC boxes are full. Please make\n"
	.string "room before playing.$"

PastoriaCity_GreatMarshGate_EventScript_SNNoMoneyT:
	.string "I’m sorry, you don’t have enough money.$"

PastoriaCity_GreatMarshGate_EventScript_SNBinoculars::
	lockall
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNBinoculars_T1, MSGBOX_DEFAULT
	special SinnohMarshBinoculars
	msgbox PastoriaCity_GreatMarshGate_EventScript_SNBinoculars_T2, MSGBOX_DEFAULT
	releaseall
	end

PastoriaCity_GreatMarshGate_EventScript_SNBinoculars_T1:
	.string "Use a pair of binoculars to look out\n"
	.string "over the Great Marsh.\p"
	.string "You can see what kinds of POKéMON can\n"
	.string "be caught, and where they are.$"

PastoriaCity_GreatMarshGate_EventScript_SNBinoculars_T2:
	.string "{PLAYER} looked through the\n"
	.string "binoculars... A wild {STR_VAR_1} can be\l"
	.string "seen in the Great Marsh today!$"
