Route205_House_MapScripts::
	.byte 0

Route205_House_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox Route205_House_Text_PtNpc1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route205_House_EventScript_PtNpc1_No
	msgbox Route205_House_Text_PtNpc1_Yes, MSGBOX_DEFAULT
	release
	end

Route205_House_EventScript_PtNpc1_No:
	msgbox Route205_House_Text_PtNpc1_No, MSGBOX_DEFAULT
	release
	end

Route205_House_Text_PtNpc1:
	.string "You seem to be tired... Rest a while.$"

Route205_House_EventScript_PtNpc2::
	msgbox Route205_House_Text_PtNpc2, MSGBOX_NPC
	end

Route205_House_Text_PtNpc2:
	.string "Repels are useful, don't you think?\p"
	.string "When you use a Repel, weak POKéMON\n"
	.string "won't come out.\p"
	.string "...But that also means there won't be\n"
	.string "any POKéMON to capture.$"

Route205_House_Text_PtNpc1_Yes:
	.string "You and your POKéMON look completely\n"
	.string "refreshed!$"

Route205_House_Text_PtNpc1_No:
	.string "Just because you're young doesn't\n"
	.string "mean you should push yourself.$"
