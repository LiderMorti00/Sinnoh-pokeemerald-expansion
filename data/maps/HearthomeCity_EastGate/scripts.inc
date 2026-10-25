HearthomeCity_EastGate_MapScripts::
	.byte 0

HearthomeCity_EastGate_Text_PtNpc1_0:
	.string "You can take a cute POKéMON out for a\n"
	.string "stroll in Amity Square.$"

HearthomeCity_EastGate_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_EastGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_EastGate_Text_PtNpc2_0:
	.string "I’m appalled! They refused entry to my\n"
	.string "POKéMON!\p"
	.string "Oh, my poor GYARADOS and STEELIX! This\n"
	.string "is discrimination!$"

HearthomeCity_EastGate_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_EastGate_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
