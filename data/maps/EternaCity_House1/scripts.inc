EternaCity_House1_MapScripts::
	.byte 0

EternaCity_House1_EventScript_PtNpc1::
	msgbox EternaCity_House1_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_House1_Text_PtNpc1:
	.string "ETERNA came to be long ago in honor of\n"
	.string "ancient POKéMON.\p"
	.string "Though many things have changed,\n"
	.string "what is important has not.\p"
	.string "I hope it remains that way forever\n"
	.string "more...$"

EternaCity_House1_EventScript_PtNpc2::
	msgbox EternaCity_House1_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_House1_Text_PtNpc2:
	.string "Have you seen the POKéMON statue?\p"
	.string "When I was a wee child, it used to be\n"
	.string "the centerpiece of many festivals...$"

EternaCity_House1_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox EternaCity_House1_Text_PtNpc3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EternaCity_House1_EventScript_PtNpc3_No
	msgbox EternaCity_House1_Text_PtNpc3_Yes, MSGBOX_DEFAULT
	release
	end

EternaCity_House1_EventScript_PtNpc3_No:
	msgbox EternaCity_House1_Text_PtNpc3_No, MSGBOX_DEFAULT
	release
	end

EternaCity_House1_Text_PtNpc3:
	.string "Sheesh! What's the world coming to?!\p"
	.string "Someone ripped off the descriptive\n"
	.string "plate from the POKéMON statue!\p"
	.string "Now no one can read the inscription!\n"
	.string "Why would someone do that?\p"
	.string "Actually, want to know what it said?$"

EternaCity_House1_Text_PtNpc3_Yes:
	.string "The first inscription went like this,\n"
	.string "sort of.\p"
	.string "“...creation of DIA... ...giver of time...\p"
	.string "“In laughter, there is tears... And,\n"
	.string "likewise...\p"
	.string "“The same time flows... ...the blessing\n"
	.string "of DIA...” Yikes... I've forgotten big\l"
	.string "chunks of it.\p"
	.string "Want to hear about the other\n"
	.string "inscription?$"

EternaCity_House1_Text_PtNpc3_No:
	.string "Well, if you're not interested, don't\n"
	.string "feel obligated or anything.$"
