Route216_House_MapScripts::
	.byte 0

Route216_House_Text_PtNpc1:
	.string "Yahoo! This lodge’s seen better days,\n"
	.string "but relax, make yourself at home!$"

Route216_House_EventScript_PtNpc1::
	msgbox Route216_House_Text_PtNpc1, MSGBOX_NPC
	end

Route216_House_Text_PtNpc2_0:
	.string "I don’t have Thick Fat like some\n"
	.string "POKéMON.\p"
	.string "That’s why I’m bundled up in layers of\n"
	.string "thick clothes.\p"
	.string "Incidentally, do you know what the\n"
	.string "ability Thick Fat does?\p"
	.string "It halves the damage taken from Ice-\n"
	.string "and Fire-type moves.$"

Route216_House_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox Route216_House_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

Route216_House_EventScript_PtSign1::
	msgbox Route216_House_Text_PtSign1, MSGBOX_SIGN
	end

Route216_House_Text_PtSign1:
	.string "It’s a bed... Want to take a rest?$"

Route216_House_EventScript_PtSign2::
	msgbox Route216_House_Text_PtSign2, MSGBOX_SIGN
	end

Route216_House_Text_PtSign2:
	.string "It’s a bed... Want to take a rest?$"
