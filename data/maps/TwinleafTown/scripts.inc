TwinleafTown_MapScripts::
	.byte 0

TwinleafTown_EventScript_BlockNorth::
	lockall
	msgbox TwinleafTown_Text_FindBarry, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

TwinleafTown_Text_FindBarry:
	.string "{RIVAL} said to meet him... but I\n"
	.string "should check his house first. It's\l"
	.string "the one to the northwest.$"

TwinleafTown_EventScript_PtNpc1::
	msgbox TwinleafTown_Text_PtNpc1, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc1:
	.string "It's true that wild POKéMON do attack\n"
	.string "people sometimes...\p"
	.string "But, POKéMON also open their hearts\n"
	.string "to you, so you can become friends.$"

TwinleafTown_EventScript_PtNpc2::
	msgbox TwinleafTown_Text_PtNpc2, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc2:
	.string "Technology just blows me away!\p"
	.string "I mean, now you can play with people\n"
	.string "around the world...wirelessly!$"

TwinleafTown_EventScript_PtNpc3::
	msgbox TwinleafTown_Text_PtNpc3, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc3:
	.string "Hiya, {PLAYER}. {RIVAL} was looking for\n"
	.string "you.\p"
	.string "I think he's home now. Why don't you go\n"
	.string "check it out?$"

TwinleafTown_EventScript_Sign1::
	msgbox TwinleafTown_Text_Sign1, MSGBOX_SIGN
	end

TwinleafTown_Text_Sign1:
	.string "TWINLEAF TOWN\p"
	.string "Fresh and free!$"
