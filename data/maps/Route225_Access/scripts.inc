Route225_Access_MapScripts::
	.byte 0

Route225_Access_Text_PtNpc1_0:
	.string "To the north is the Survival Area and\n"
	.string "then Stark Mountain.\p"
	.string "The road there is too tough for me to\n"
	.string "travel, though.$"

Route225_Access_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox Route225_Access_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

Route225_Access_Text_PtNpc2_0:
	.string "Are you stocked up on POKé BALLS?\p"
	.string "In the tall grass past here, you’ll find\n"
	.string "interesting POKéMON.\p"
	.string "Like, POKéMON you never see anywhere\n"
	.string "else in Sinnoh!$"

Route225_Access_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox Route225_Access_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
