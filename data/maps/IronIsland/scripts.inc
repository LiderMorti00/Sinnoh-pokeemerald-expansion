IronIsland_MapScripts::
	.byte 0

IronIsland_Text_PtNpc1:
	.string "Do you want to sail somewhere?$"

IronIsland_EventScript_PtNpc1::
	msgbox IronIsland_Text_PtNpc1, MSGBOX_NPC
	end

IronIsland_EventScript_SailorBack::
	lock
	faceplayer
	msgbox IronIsland_Text_SailorBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, IronIsland_EventScript_SailorBackNo
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_CANALAVE_CITY, 15, 47
	waitstate
	release
	end

IronIsland_EventScript_SailorBackNo::
	release
	end

IronIsland_Text_SailorBack:
	.string "Shall we head back to\n"
	.string "CANALAVE CITY?$"
