Route213_Access_MapScripts::
	.byte 0

Route213_Access_EventScript_PtNpc1::
	msgbox Route213_Access_Text_PtNpc1, MSGBOX_NPC
	end

Route213_Access_Text_PtNpc1:
	.string "Footprints are left in the sand when\n"
	.string "you walk on a beach.\p"
	.string "POKéMON seem to enjoy leaving\n"
	.string "footprints as much as people.$"

Route213_Access_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox Route213_Access_Text_PtNpc2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route213_Access_EventScript_PtNpc2_No
	msgbox Route213_Access_Text_PtNpc2_Yes, MSGBOX_DEFAULT
	release
	end

Route213_Access_EventScript_PtNpc2_No:
	msgbox Route213_Access_Text_PtNpc2_No, MSGBOX_DEFAULT
	release
	end

Route213_Access_Text_PtNpc2:
	.string "Listen, do you know about the Battle\n"
	.string "Frontier?$"

Route213_Access_Text_PtNpc2_Yes:
	.string "I guess you're someone who's in the\n"
	.string "know.\p"
	.string "I hear it's a fun place with facilities\n"
	.string "for battling through under different\l"
	.string "sets of rules.$"

Route213_Access_Text_PtNpc2_No:
	.string "I guess you're someone who's kind of\n"
	.string "out of the loop.\p"
	.string "I hear it's a fun place with facilities\n"
	.string "for battling consecutively under\l"
	.string "different sets of rules.$"
