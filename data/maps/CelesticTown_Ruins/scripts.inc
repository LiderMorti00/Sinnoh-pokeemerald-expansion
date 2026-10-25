CelesticTown_Ruins_MapScripts::
	.byte 0

CelesticTown_Ruins_Text_PtNpc1_0:
	.string "That cave painting isn’t protected\n"
	.string "simply because it’s old.\p"
	.string "We’ve preserved it because we value\n"
	.string "the memories that it represents.\p"
	.string "It is a legacy of people and POKéMON\n"
	.string "beyond measure.\p"
	.string "A man who fails to understand that...\n"
	.string "What world could he dream of?$"

CelesticTown_Ruins_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CelesticTown_Ruins_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CelesticTown_Ruins_Text_PtNpc2:
	.string "Cyrus: Well? Am I wrong? If you feel\n"
	.string "that way, challenge me.$"

CelesticTown_Ruins_EventScript_PtNpc2::
	msgbox CelesticTown_Ruins_Text_PtNpc2, MSGBOX_NPC
	end

CelesticTown_Ruins_EventScript_PtSign1::
	msgbox CelesticTown_Ruins_Text_PtSign1, MSGBOX_SIGN
	end

CelesticTown_Ruins_Text_PtSign1:
	.string "{PLAYER} examined the ancient cave\n"
	.string "painting.\p"
	.string "Mysterious designs cover a whole\n"
	.string "section of the wall.\p"
	.string "There are three strange things forming\n"
	.string "a triangle.\p"
	.string "In the middle of them, a shining\n"
	.string "sphere?\p"
	.string "What is this all about?$"

CelesticTown_Ruins_EventScript_PtSign2::
	msgbox CelesticTown_Ruins_Text_PtSign2, MSGBOX_SIGN
	end

CelesticTown_Ruins_Text_PtSign2:
	.string "{PLAYER} examined the ancient cave\n"
	.string "painting.\p"
	.string "Mysterious designs cover a whole\n"
	.string "section of the wall.\p"
	.string "There are three strange things forming\n"
	.string "a triangle.\p"
	.string "In the middle of them, a shining\n"
	.string "sphere?\p"
	.string "What is this all about?$"
