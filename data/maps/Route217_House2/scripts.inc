Route217_House2_MapScripts::
	.byte 0

Route217_House2_Text_PtNpc1_0:
	.string "While I was fighting my way through the\n"
	.string "blizzard, I dropped an HM.\p"
	.string "If I still had that hidden move Rock\n"
	.string "Climb, I’d be able to scale\p"
	.string "sheer cliffs...$"

Route217_House2_Text_PtNpc1_1:
	.string "That Icicle Plate, I found that under\n"
	.string "the snow as well.\p"
	.string "I’m no expert, but it looks to be of\n"
	.string "ancient origin.\p"
	.string "Even as old as the time when Sinnoh\n"
	.string "came into being...$"

Route217_House2_Text_PtNpc1_2:
	.string "While I was fighting my way through the\n"
	.string "blizzard, I dropped an HM.\p"
	.string "If I still had that hidden move Rock\n"
	.string "Climb, I’d be able to scale\p"
	.string "sheer cliffs...\p"
	.string "Hey! What’s this? You found the Hidden\n"
	.string "Machine?\p"
	.string "But I’d already given it up for lost,\n"
	.string "and you found it.\p"
	.string "It’s yours to keep, my friend. Make\n"
	.string "good use of it.\p"
	.string "I like your honesty, though. Let me\n"
	.string "reward you with this.$"

Route217_House2_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_ROUTE_217_WEST_HOUSE_ICICLE_PLATE, Route217_House2_EventScript_PtNpc1_IFoundIciclePlate
	checkitem ITEM_HM08, 1
	goto_if_eq VAR_RESULT, TRUE, Route217_House2_EventScript_PtNpc1_TryGiveIciclePlate
	msgbox Route217_House2_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

Route217_House2_EventScript_PtNpc1_IFoundIciclePlate:
	msgbox Route217_House2_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

Route217_House2_EventScript_PtNpc1_TryGiveIciclePlate:
	msgbox Route217_House2_Text_PtNpc1_2, MSGBOX_DEFAULT
	giveitem ITEM_ICICLE_PLATE, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_ROUTE_217_WEST_HOUSE_ICICLE_PLATE
	goto Route217_House2_EventScript_PtNpc1_IFoundIciclePlate

Route217_House2_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end
