Route213_House2_MapScripts::
	.byte 0

Route213_House2_Text_PtNpc1:
	.string "I’ve always relied on the old Coin Toss\n"
	.string "to make any decision.\p"
	.string "It gives me courage because I’m not\n"
	.string "accountable for my decisions.$"

Route213_House2_EventScript_PtNpc1::
	msgbox Route213_House2_Text_PtNpc1, MSGBOX_NPC
	end

Route213_House2_Text_PtNpc2:
	.string "We wanted to be together alone so we\n"
	.string "could talk without being disturbed.\p"
	.string "We really need this time together, just\n"
	.string "the two of us.$"

Route213_House2_EventScript_PtNpc2::
	msgbox Route213_House2_Text_PtNpc2, MSGBOX_NPC
	end
