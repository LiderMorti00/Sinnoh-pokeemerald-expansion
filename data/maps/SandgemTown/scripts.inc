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

SandgemTown_Text_ReturnBriefcase:
	.string "I should return the Professor's\n"
	.string "briefcase first. His lab is the big\l"
	.string "building to the west.$"

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

SandgemTown_EventScript_SignExtra1::
	msgbox SandgemTown_Text_SignExtra1, MSGBOX_SIGN
	end

SandgemTown_Text_SignExtra1:
	.string "TRAINER TIPS\p"
	.string "Talk to people you meet. They may\n"
	.string "give you useful hints or items!$"

SandgemTown_EventScript_PtNpc1::
	msgbox SandgemTown_Text_PtNpc1, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc1:
	.string "The beach is right next to town. I\n"
	.string "love the smell of the sea!$"

SandgemTown_EventScript_PtNpc2::
	msgbox SandgemTown_Text_PtNpc2, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc2:
	.string "PROFESSOR ROWAN is back from\n"
	.string "KANTO. The whole town is talking\l"
	.string "about it.$"

SandgemTown_EventScript_PtNpc3::
	msgbox SandgemTown_Text_PtNpc3, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc3:
	.string "I raise POKéMON with my husband.\n"
	.string "Healthy POKéMON are happy POKéMON!$"
