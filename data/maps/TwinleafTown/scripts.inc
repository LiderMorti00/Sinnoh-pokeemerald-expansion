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
	.string "Barry said to meet him... but I\n"
	.string "should check his house first. It's\l"
	.string "the one to the northwest.$"

TwinleafTown_EventScript_PtNpc1::
	msgbox TwinleafTown_Text_PtNpc1, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc1:
	.string "TWINLEAF is so peaceful. My\n"
	.string "POKéMON love napping in the sun\l"
	.string "here.$"

TwinleafTown_EventScript_PtNpc2::
	msgbox TwinleafTown_Text_PtNpc2, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc2:
	.string "I collect rare items from all over\n"
	.string "Sinnoh. This town doesn't have\l"
	.string "many, sadly!$"

TwinleafTown_EventScript_PtNpc3::
	msgbox TwinleafTown_Text_PtNpc3, MSGBOX_NPC
	end

TwinleafTown_Text_PtNpc3:
	.string "Ahh... the wind through the trees\n"
	.string "makes the best music. Want to hear\l"
	.string "a song?$"
