LostTower_1F_MapScripts::
	.byte 0

LostTower_1F_Text_PtNpc1_0:
	.string "This is where spirits rest. Please be\n"
	.string "quiet and respectful.$"

LostTower_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox LostTower_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

LostTower_1F_Text_PtNpc2_0:
	.string "This is the Lost Tower.\p"
	.string "There is a persistent fog that\n"
	.string "thickens the higher you climb.\p"
	.string "If you can’t use the hidden move Defog\n"
	.string "and you have no business here, there\p"
	.string "is no need to go up.$"

LostTower_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox LostTower_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
