Route201_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_OnTransition
	.byte 0

Route201_OnTransition:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route201_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	end

Route201_EventScript_SetDawnGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	end

Route201_EventScript_Barry::
	lockall
	goto_if_eq VAR_SINNOH_STORY, 5, Route201_EventScript_BarryLake
	goto_if_ne VAR_SINNOH_STORY, 3, Route201_EventScript_BarryEnd
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route201_Text_BarryPlan, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_WalkUp
	waitmovement 0
	playse SE_PIN
	msgbox Route201_Text_Wait, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_ROUTE201_ROWAN
	addobject LOCALID_ROUTE201_ROWAN
	addobject LOCALID_ROUTE201_DAWN
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_WalkDown
	waitmovement 0
	msgbox Route201_Text_Rowan1, MSGBOX_DEFAULT
	msgbox Route201_Text_Dawn1, MSGBOX_DEFAULT
	msgbox Route201_Text_Rowan2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	special ChooseStarter
	setvar VAR_SINNOH_HAS_POKEMON, 1
	msgbox Route201_Text_BarryPicks, MSGBOX_DEFAULT
	msgbox Route201_Text_Rowan3, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_ROUTE201_ROWAN
	removeobject LOCALID_ROUTE201_DAWN
	setflag FLAG_HIDE_ROUTE201_ROWAN
	fadescreen FADE_FROM_BLACK
	msgbox Route201_Text_BarryBattle, MSGBOX_DEFAULT
	closemessage
	setflag B_FLAG_NO_WHITEOUT
	switch VAR_STARTER_MON
	case 0, Route201_EventScript_BattleChimchar
	case 1, Route201_EventScript_BattlePiplup
	case 2, Route201_EventScript_BattleTurtwig
	end

Route201_EventScript_BattleChimchar::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_CHIMCHAR, Route201_Text_BarryDefeat
	goto Route201_EventScript_AfterBattle
Route201_EventScript_BattlePiplup::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_PIPLUP, Route201_Text_BarryDefeat
	goto Route201_EventScript_AfterBattle
Route201_EventScript_BattleTurtwig::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_TURTWIG, Route201_Text_BarryDefeat
	goto Route201_EventScript_AfterBattle

Route201_EventScript_AfterBattle::
	clearflag B_FLAG_NO_WHITEOUT
	special HealPlayerParty
	msgbox Route201_Text_BarryAfter, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SINNOH_STORY, 4
	warp MAP_TWINLEAF_TOWN_MAIN_HOUSE_1F, 2, 7
	waitstate
	releaseall
	end

Route201_EventScript_BarryLake::
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route201_Text_BarryLake, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE201_BARRY, Route201_Movement_BarryToLake
	waitmovement 0
	removeobject LOCALID_ROUTE201_BARRY
	setflag FLAG_HIDE_ROUTE201_BARRY
	setvar VAR_SINNOH_STORY, 6
Route201_EventScript_BarryEnd::
	releaseall
	end

Route201_EventScript_BlockSandgem::
	lockall
	msgbox Route201_Text_LakeFirst, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
	end

Route201_EventScript_Clerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ROUTE201_POTION, Route201_EventScript_ClerkAfter
	msgbox Route201_Text_Clerk, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	setflag FLAG_RECEIVED_ROUTE201_POTION
	release
	end
Route201_EventScript_ClerkAfter::
	msgbox Route201_Text_ClerkAfter, MSGBOX_DEFAULT
	release
	end

Route201_Movement_BarryToLake:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route201_Text_BarryPlan:
	.string "BARRY: {PLAYER}! Took you long\n"
	.string "enough!\p"
	.string "Listen, we need POKéMON to find\n"
	.string "that legendary one at the lake. So\l"
	.string "let's get some from PROFESSOR\n"
	.string "ROWAN in SANDGEM!\p"
	.string "We just have to run through the\n"
	.string "tall grass super fast. Wild\l"
	.string "POKéMON won't even have time to\n"
	.string "jump out!$"

Route201_Text_Wait:
	.string "???: Wait! Stop right there!$"

Route201_Text_Rowan1:
	.string "ROWAN: Going into tall grass\n"
	.string "without POKéMON? Are you trying to\l"
	.string "get yourselves hurt?\p"
	.string "...Hmm. You two seem to care a\n"
	.string "great deal about POKéMON. Tell me,\l"
	.string "do you truly love them?$"

Route201_Text_Dawn1:
	.string "{STR_VAR_1}: Professor! You forgot\n"
	.string "your briefcase! Oh... who are\l"
	.string "these two?$"

Route201_Text_Rowan2:
	.string "ROWAN: ...Very well. I will\n"
	.string "entrust you each with a POKéMON.\l"
	.string "Choose one from my briefcase.$"

Route201_Text_BarryPicks:
	.string "BARRY: Then I'll take this one!\n"
	.string "It's got the advantage over yours!$"

Route201_Text_Rowan3:
	.string "ROWAN: Those POKéMON have never\n"
	.string "seen the outside world. Help them\l"
	.string "grow.\p"
	.string "Come, {STR_VAR_1}. We are\n"
	.string "returning to SANDGEM.$"

Route201_Text_BarryBattle:
	.string "BARRY: Hey, {PLAYER}! Let's have\n"
	.string "our very first POKéMON battle!\l"
	.string "Right now!$"

Route201_Text_BarryDefeat:
	.string "What?! I'm fining you for being so\n"
	.string "strong!$"

Route201_Text_BarryAfter:
	.string "BARRY: Our POKéMON are tired.\n"
	.string "Let's go home and heal them up!$"

Route201_Text_BarryLake:
	.string "BARRY: {PLAYER}! Before we thank\n"
	.string "the Professor, let's go to LAKE\l"
	.string "VERITY!\p"
	.string "Maybe that legendary POKéMON is\n"
	.string "there. Come on, it's just to the\l"
	.string "west!$"

Route201_Text_LakeFirst:
	.string "Barry went west, toward LAKE\n"
	.string "VERITY. I should follow him first.$"

Route201_Text_Clerk:
	.string "Hello! I work at the POKé MART in\n"
	.string "SANDGEM. Here's a free sample for\l"
	.string "you!$"

Route201_Text_ClerkAfter:
	.string "Visit the POKé MART in SANDGEM for\n"
	.string "all your Trainer needs!$"

Route201_EventScript_NoPokemonGrass::
	lockall
	msgbox Sinnoh_Text_NoPokemonGrass, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, Route201_EventScript_GrassBackDown
	goto_if_eq VAR_RESULT, DIR_SOUTH, Route201_EventScript_GrassBackUp
	goto_if_eq VAR_RESULT, DIR_WEST, Route201_EventScript_GrassBackRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Route201_EventScript_GrassBackEnd

Route201_EventScript_GrassBackDown::
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto Route201_EventScript_GrassBackEnd

Route201_EventScript_GrassBackUp::
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route201_EventScript_GrassBackEnd

Route201_EventScript_GrassBackRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight

Route201_EventScript_GrassBackEnd::
	waitmovement 0
	releaseall
	end

Sinnoh_Text_NoPokemonGrass:
	.string "Wild POKéMON live in tall grass.\n"
	.string "It's too dangerous to go in\l"
	.string "without a POKéMON of your own!$"

Route201_EventScript_Sign1::
	msgbox Route201_Text_Sign1, MSGBOX_SIGN
	end

Route201_Text_Sign1:
	.string "ROUTE 201\p"
	.string "West: LAKE VERITY South: TWINLEAF\n"
	.string "TOWN East: SANDGEM TOWN$"

Route201_EventScript_Sign2::
	msgbox Route201_Text_Sign2, MSGBOX_SIGN
	end

Route201_Text_Sign2:
	.string "TRAINER TIPS\p"
	.string "Press START to open the menu. You\n"
	.string "can check your POKéMON and your\l"
	.string "BAG there.$"

Route201_EventScript_Sign3::
	msgbox Route201_Text_Sign3, MSGBOX_SIGN
	end

Route201_Text_Sign3:
	.string "Beware of tall grass! Wild POKéMON\n"
	.string "may jump out at any time.$"

Route201_EventScript_PtNpc1::
	msgbox Route201_Text_PtNpc1, MSGBOX_NPC
	end

Route201_Text_PtNpc1:
	.string "Wild POKéMON appear in tall grass.\n"
	.string "Walk around it if your POKéMON are\l"
	.string "tired.$"

Route201_EventScript_PtNpc2::
	msgbox Route201_Text_PtNpc2, MSGBOX_NPC
	end

Route201_Text_PtNpc2:
	.string "Have you been to SANDGEM? The\n"
	.string "Professor's lab is there!$"

Route201_EventScript_PtNpc3::
	msgbox Route201_Text_PtNpc3, MSGBOX_NPC
	end

Route201_Text_PtNpc3:
	.string "If you look carefully, you can\n"
	.string "spot items lying around on the\l"
	.string "routes.$"
