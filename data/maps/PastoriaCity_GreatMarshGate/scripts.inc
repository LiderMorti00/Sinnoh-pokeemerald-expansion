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
	.string "If you can do that, I’ll give you\n"
	.string "something real rare!$"

PastoriaCity_GreatMarshGate_Text_PtNpc1_1:
	.string "Rare Candies make a POKéMON grow\n"
	.string "stronger in a snap.\p"
	.string "Use ’em well, and come back to the\n"
	.string "Great Marsh anytime, y’hear?$"

PastoriaCity_GreatMarshGate_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_MARSH_FIVE_PRIZE, PastoriaCity_GreatMarshGate_EventScript_PtNpc1_ExplainMatchupChecker
	goto_if_set FLAG_SN_MARSH_FIVE, PastoriaCity_GreatMarshGate_EventScript_SNCowgirlPrize
	msgbox PastoriaCity_GreatMarshGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	goto PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd

PastoriaCity_GreatMarshGate_EventScript_SNCowgirlPrize:
	msgbox PastoriaCity_GreatMarshGate_Text_SNCowgirlWin, MSGBOX_DEFAULT
	giveitem ITEM_RARE_CANDY, 3
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_SN_MARSH_FIVE_PRIZE
	goto PastoriaCity_GreatMarshGate_EventScript_PtNpc1_ExplainMatchupChecker

PastoriaCity_GreatMarshGate_EventScript_PtNpc1_ExplainMatchupChecker:
	msgbox PastoriaCity_GreatMarshGate_Text_PtNpc1_1, MSGBOX_DEFAULT
	goto PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd

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
	specialvar VAR_RESULT, SinnohCountAllMons
	subvar VAR_RESULT, VAR_SN_SAFARI_START
	goto_if_lt VAR_RESULT, 5, PastoriaCity_GreatMarshGate_EventScript_SNReturnEnd
	setflag FLAG_SN_MARSH_FIVE
PastoriaCity_GreatMarshGate_EventScript_SNReturnEnd:
	return

PastoriaCity_GreatMarshGate_EventScript_SNAttendant::
	lock
	faceplayer
	msgbox PastoriaCity_GreatMarshGate_Text_SNFirst, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PastoriaCity_GreatMarshGate_EventScript_SNNotFirst
	msgbox PastoriaCity_GreatMarshGate_Text_SNExplain, MSGBOX_DEFAULT
	release
	end

PastoriaCity_GreatMarshGate_EventScript_SNNotFirst:
	msgbox PastoriaCity_GreatMarshGate_Text_SNEnjoy, MSGBOX_DEFAULT
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
	specialvar VAR_RESULT, SinnohCountAllMons
	copyvar VAR_SN_SAFARI_START, VAR_RESULT
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

PastoriaCity_GreatMarshGate_Text_SNFirst:
	.string "Welcome to the Great Marsh! Is this\n"
	.string "your first Safari Game?$"

PastoriaCity_GreatMarshGate_Text_SNExplain:
	.string "When you enter the Great Marsh, you\n"
	.string "start with 30 Safari Balls.\p"
	.string "That’s the only kind of Ball you’re\n"
	.string "allowed to use in the Safari Game.\p"
	.string "The game is over when you run out of\n"
	.string "Safari Balls, or when you’ve walked\p"
	.string "500 steps.\p"
	.string "Please do enjoy the untamed nature of\n"
	.string "the Great Marsh!$"

PastoriaCity_GreatMarshGate_Text_SNEnjoy:
	.string "I see. Enjoy your Safari Game!$"

PastoriaCity_GreatMarshGate_Text_SNCowgirlWin:
	.string "So, how many POKéMON did you catch in\n"
	.string "your Safari Game? At least five?\p"
	.string "Ayup! You’ve done that all right! Isn’t\n"
	.string "that something!\p"
	.string "Well, here you are, then.$"
