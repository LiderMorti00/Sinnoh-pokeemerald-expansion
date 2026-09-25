TwinleafTown_MapScripts::
	.byte 0

TwinleafTown_EventScript_Barry::
	lock
	faceplayer
	msgbox TwinleafTown_Text_BarryLetsGo, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWINLEAF_BARRY, TwinleafTown_Movement_BarryRunsOff
	waitmovement 0
	removeobject LOCALID_TWINLEAF_BARRY
	setflag FLAG_HIDE_TWINLEAF_BARRY
	clearflag FLAG_HIDE_ROUTE201_BARRY
	setvar VAR_SINNOH_STORY, 2
	release
	end

TwinleafTown_EventScript_BlockNorth::
	lockall
	msgbox TwinleafTown_Text_FindBarryFirst, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

TwinleafTown_EventScript_Girl::
	msgbox TwinleafTown_Text_Girl, MSGBOX_NPC
	end

TwinleafTown_EventScript_Man::
	msgbox TwinleafTown_Text_Man, MSGBOX_NPC
	end

TwinleafTown_Movement_BarryRunsOff:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

TwinleafTown_Text_BarryLetsGo:
	.string "BARRY: {PLAYER}! What took you so long?\n"
	.string "I'm fining you ten million!\p"
	.string "Listen, listen! Professor Rowan came\n"
	.string "back to Sinnoh, and they say he's at\l"
	.string "LAKE VERITY right now!\p"
	.string "A professor who studies POKéMON\n"
	.string "is bound to have some with him!\p"
	.string "Let's go and ask him for one!\n"
	.string "I'll wait for you on ROUTE 201!$"

TwinleafTown_Text_FindBarryFirst:
	.string "Mom said Barry was looking for me.\n"
	.string "I should find him first.$"

TwinleafTown_Text_Girl:
	.string "Barry ran past me so fast my hat\n"
	.string "nearly flew off!$"

TwinleafTown_Text_Man:
	.string "TWINLEAF TOWN is quiet, but the\n"
	.string "wind always smells of fresh leaves.$"
