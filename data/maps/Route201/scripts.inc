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
