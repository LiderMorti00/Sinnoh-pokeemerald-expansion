Route213_FootstepHouse_MapScripts::
	.byte 0

Route213_FootstepHouse_Text_PtNpc1:
	.string "Dr. Footstep: Do you want to check the\n"
	.string "feelings of your POKéMON again?\p"
	.string "Then, let your POKéMON walk in front of\n"
	.string "me, right here.\p"
	.string "From its footprints, I will determine\n"
	.string "how it feels about you.$"

Route213_FootstepHouse_EventScript_PtNpc1::
	msgbox Route213_FootstepHouse_Text_PtNpc1, MSGBOX_NPC
	end
