SandgemTown_MapScripts::
	.byte 0

SandgemTown_EventScript_BlockNorth::
	lockall
	msgbox SandgemTown_Text_ReturnBriefcase, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

SandgemTown_EventScript_Woman::
	msgbox SandgemTown_Text_Woman, MSGBOX_NPC
	end

SandgemTown_EventScript_Fisherman::
	msgbox SandgemTown_Text_Fisherman, MSGBOX_NPC
	end

SandgemTown_Text_ReturnBriefcase:
	.string "I should return the Professor's\n"
	.string "briefcase first. His lab is the big\l"
	.string "building to the west.$"

SandgemTown_Text_Woman:
	.string "PROFESSOR ROWAN'S lab is here in\n"
	.string "SANDGEM. Trainers from all over\l"
	.string "Sinnoh come to visit him.$"

SandgemTown_Text_Fisherman:
	.string "The sea breeze here is the best in\n"
	.string "all of Sinnoh. Smell that salt!$"
