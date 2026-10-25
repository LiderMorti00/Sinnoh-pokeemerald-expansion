CanalaveCity_Mart_MapScripts::
	.byte 0

CanalaveCity_Mart_Text_PtNpc1_0:
	.string "A POKé BALL that makes it easy to\n"
	.string "catch the same kinds of POKéMON...\p"
	.string "Well, that’s the Repeat Ball!$"

CanalaveCity_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CanalaveCity_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Mart_Text_PtNpc2_0:
	.string "I should take a Revive out to everyone\n"
	.string "training on Iron Island.\p"
	.string "I’m sure they’d appreciate it.\p"
	.string "It can be rough out there, especially\n"
	.string "since there’s no POKéMON Center.$"

CanalaveCity_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox CanalaveCity_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
