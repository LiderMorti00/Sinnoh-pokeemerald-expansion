Route201_MapScripts::
	.byte 0

Route201_EventScript_BarryWaiting::
	lock
	faceplayer
	msgbox Route201_Text_BarryHurry, MSGBOX_DEFAULT
	release
	end

Route201_EventScript_BarryScene::
	lockall
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route201_Text_BarryToTheLake, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE201_BARRY, Route201_Movement_BarryToLake
	waitmovement 0
	removeobject LOCALID_ROUTE201_BARRY
	setflag FLAG_HIDE_ROUTE201_BARRY
	setvar VAR_SINNOH_STORY, 3
	releaseall
	end

Route201_EventScript_BlockSandgem::
	lockall
	msgbox Route201_Text_LakeIsTheOtherWay, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
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

Route201_Text_BarryHurry:
	.string "BARRY: Come on, come on!\n"
	.string "LAKE VERITY is just to the west!$"

Route201_Text_BarryToTheLake:
	.string "BARRY: There you are!\p"
	.string "LAKE VERITY is to the west of this\n"
	.string "route. Professor Rowan must be there!\p"
	.string "Last one there owes me a fine!$"

Route201_Text_LakeIsTheOtherWay:
	.string "Barry is waiting at LAKE VERITY.\n"
	.string "The lake is back to the west.$"

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

Route201_EventScript_Breeder::
	msgbox Route201_Text_Breeder, MSGBOX_NPC
	end

Route201_EventScript_SchoolKid::
	msgbox Route201_Text_SchoolKid, MSGBOX_NPC
	end

Route201_EventScript_Lass::
	msgbox Route201_Text_Lass, MSGBOX_NPC
	end

Route201_Text_Breeder:
	.string "I love watching STARLY and BIDOOF\n"
	.string "play in the grass. Aren't they\l"
	.string "adorable?$"

Route201_Text_SchoolKid:
	.string "If your POKéMON gets hurt, go to a\n"
	.string "POKéMON CENTER. SANDGEM has one!$"

Route201_Text_Lass:
	.string "LAKE VERITY is a mysterious place.\n"
	.string "Some say a POKéMON lives at the\l"
	.string "bottom of it.$"
