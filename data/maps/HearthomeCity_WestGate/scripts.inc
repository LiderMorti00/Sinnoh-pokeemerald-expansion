HearthomeCity_WestGate_MapScripts::
	.byte 0

HearthomeCity_WestGate_Text_PtNpc1_0:
	.string "In Amity Square, you may go for a stroll\n"
	.string "with a cute POKéMON.$"

HearthomeCity_WestGate_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_WestGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_WestGate_Text_PtNpc2_0:
	.string "My PIKACHU seems delighted to be out\n"
	.string "of its POKé BALL for a walk outside.\p"
	.string "See? You can tell because its cheeks\n"
	.string "are twitching away!$"

HearthomeCity_WestGate_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_WestGate_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_WestGate_Text_PtNpc3_0:
	.string "PIKACHU: Pikappi!$"

HearthomeCity_WestGate_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox HearthomeCity_WestGate_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
