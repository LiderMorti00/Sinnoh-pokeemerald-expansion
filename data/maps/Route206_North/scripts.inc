Route206_North_MapScripts::
	.byte 0

Route206_North_EventScript_SNDawnFather::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_EXP_SHARE, Route206_North_EventScript_SNDawnFather_After
	setvar VAR_0x8004, 0
	special ScriptGetPokedexInfo
	buffernumberstring STR_VAR_1, VAR_0x8005
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route206_North_EventScript_SNDawnFather_G_L
	msgbox Route206_North_EventScript_SNDawnFather_T1, MSGBOX_DEFAULT
	goto Route206_North_EventScript_SNDawnFather_G_N
Route206_North_EventScript_SNDawnFather_G_L:
	msgbox Route206_North_EventScript_SNDawnFather_T1L, MSGBOX_DEFAULT
Route206_North_EventScript_SNDawnFather_G_N:
	goto_if_lt VAR_0x8005, 35, Route206_North_EventScript_SNDawnFather_NotYet
	msgbox Route206_North_EventScript_SNDawnFather_T2, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Route206_North_EventScript_SNDawnFather_End
	setflag FLAG_SN_RECEIVED_EXP_SHARE
	msgbox Route206_North_EventScript_SNDawnFather_T3, MSGBOX_DEFAULT
Route206_North_EventScript_SNDawnFather_End:
	release
	end
Route206_North_EventScript_SNDawnFather_NotYet:
	msgbox Route206_North_EventScript_SNDawnFather_NotYetT, MSGBOX_DEFAULT
	release
	end
Route206_North_EventScript_SNDawnFather_After:
	msgbox Route206_North_EventScript_SNDawnFather_T3, MSGBOX_DEFAULT
	release
	end

Route206_North_EventScript_SNDawnFather_T1:
	.string "{PLAYER}, long time, no see!\p"
	.string "Oh? You look puzzled. You’re wondering\n"
	.string "who I am.\p"
	.string "I’m Professor Rowan’s assistant and\n"
	.string "DAWN’s father.\p"
	.string "I’ve come a long way to help you on\n"
	.string "your adventure at the professor’s\p"
	.string "behest.\p"
	.string "{PLAYER}, let me ask you, how many\n"
	.string "POKéMON have you met?$"

Route206_North_EventScript_SNDawnFather_NotYetT:
	.string "You’ve met only {STR_VAR_1} POKéMON?\p"
	.string "Hmm... You’ve got to find at least 35.\p"
	.string "If you can’t, it will be tough to\n"
	.string "complete the Sinnoh POKéDEX.$"

Route206_North_EventScript_SNDawnFather_T2:
	.string "Oh, my! You’ve met {STR_VAR_1} POKéMON!\p"
	.string "Wonderful! Yes, bravo! Professor Rowan\n"
	.string "should be delighted!\p"
	.string "Here is something for you!$"

Route206_North_EventScript_SNDawnFather_T3:
	.string "A POKéMON holding an Exp. Share will\n"
	.string "get some of the Exp. Points from\l"
	.string "battle.\p"
	.string "It will get Exp. Points even if it didn’t\n"
	.string "actually battle.\p"
	.string "Therefore, it should be held by a\n"
	.string "POKéMON you want to raise quickly.\p"
	.string "Also, a POKéMON you get in a trade may\n"
	.string "disobey you if it is too high in level.\p"
	.string "Don’t worry, though. It will obey if you\n"
	.string "have enough Gym Badges.$"

Route206_North_EventScript_SNDawnFather_T1L:
	.string "{PLAYER}, long time, no see!\p"
	.string "Oh? You look puzzled. You’re wondering\n"
	.string "who I am.\p"
	.string "I’m Professor Rowan’s assistant and\n"
	.string "LUCAS’s father.\p"
	.string "I’ve come a long way to help you on\n"
	.string "your adventure at the professor’s\p"
	.string "behest.\p"
	.string "{PLAYER}, let me ask you, how many\n"
	.string "POKéMON have you met?$"

Route206_North_EventScript_SNBikeOnly::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_ne VAR_RESULT, DIR_SOUTH, Route206_North_EventScript_SNBikeOnly_End
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_ne VAR_RESULT, 0, Route206_North_EventScript_SNBikeOnly_End
	lockall
	msgbox Route206_North_EventScript_SNBikeOnly_Text, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
Route206_North_EventScript_SNBikeOnly_End:
	end

Route206_North_EventScript_SNBikeOnly_Text:
	.string "Cycling Road is only for Bicycles!\p"
	.string "Please get on your Bicycle!$"
