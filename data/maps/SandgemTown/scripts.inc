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

SandgemTown_EventScript_Kid::
	msgbox SandgemTown_Text_Kid, MSGBOX_NPC
	end

SandgemTown_Text_Kid:
	.string "The beach south of town is great\n"
	.string "for finding shells!$"


SandgemTown_EventScript_BlockNorthMom::
	lockall
	msgbox SandgemTown_Text_TellMom, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

SandgemTown_Text_TellMom:
	.string "Before setting off on a journey, I\n"
	.string "should go home to TWINLEAF TOWN\l"
	.string "and tell Mom.$"

SandgemTown_EventScript_Sign1::
	msgbox SandgemTown_Text_Sign1, MSGBOX_SIGN
	end

SandgemTown_Text_Sign1:
	.string "SANDGEM TOWN\p"
	.string "The town of sand and sea.$"

SandgemTown_EventScript_Sign2::
	msgbox SandgemTown_Text_Sign2, MSGBOX_SIGN
	end

SandgemTown_Text_Sign2:
	.string "POKéMON RESEARCH LAB\p"
	.string "Professor Rowan$"

SandgemTown_EventScript_Sign3::
	msgbox SandgemTown_Text_Sign3, MSGBOX_SIGN
	end

SandgemTown_Text_Sign3:
	.string "Welcome! POKéMON CENTER and POKé\n"
	.string "MART are right here in SANDGEM!$"

SandgemTown_EventScript_Sign4::
	msgbox SandgemTown_Text_Sign4, MSGBOX_SIGN
	end

SandgemTown_Text_Sign4:
	.string "TRAINER TIPS\p"
	.string "Heal your POKéMON for free at any\n"
	.string "POKéMON CENTER.$"

SandgemTown_EventScript_Breeder::
	msgbox SandgemTown_Text_Breeder, MSGBOX_NPC
	end

SandgemTown_Text_Breeder:
	.string "The Professor studies how POKéMON\n"
	.string "evolve. He's very well known!$"

SandgemTown_EventScript_SignExtra1::
	msgbox SandgemTown_Text_SignExtra1, MSGBOX_SIGN
	end

SandgemTown_Text_SignExtra1:
	.string "TRAINER TIPS\p"
	.string "Talk to people you meet. They may\n"
	.string "give you useful hints or items!$"
