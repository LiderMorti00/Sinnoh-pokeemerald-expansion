SolaceonTown_NewsPress_MapScripts::
	.byte 0

SolaceonTown_NewsPress_Text_PtNpc1:
	.string "Whoops! What’s all this? Your Bag is\n"
	.string "stuffed full.\p"
	.string "I’ll hold on to these until the next\n"
	.string "time.$"

SolaceonTown_NewsPress_Text_PtNpc2_0:
	.string "The Sinnoh region’s newspaper is tiny,\n"
	.string "but it has many fans.\p"
	.string "That newspaper is printed right here!$"

SolaceonTown_NewsPress_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SolaceonTown_NewsPress_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SolaceonTown_NewsPress_EventScript_SNEditor::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_NEWSPRESS, SolaceonTown_NewsPress_EventScript_SNEditor_Done
	special SinnohNewsPressPick
	bufferspeciesname STR_VAR_1, VAR_0x8004
	msgbox SolaceonTown_NewsPress_EventScript_SNEditor_Ask, MSGBOX_DEFAULT
	special SinnohPartyHasSpecies
	goto_if_eq VAR_RESULT, FALSE, SolaceonTown_NewsPress_EventScript_SNEditor_Wait
	msgbox SolaceonTown_NewsPress_EventScript_SNEditor_Great, MSGBOX_DEFAULT
	random 3
	switch VAR_RESULT
	case 0, SolaceonTown_NewsPress_EventScript_SNEditor_Great1
	case 1, SolaceonTown_NewsPress_EventScript_SNEditor_Great2
	giveitem ITEM_DUSK_BALL, 3
	goto SolaceonTown_NewsPress_EventScript_SNEditor_Scale
SolaceonTown_NewsPress_EventScript_SNEditor_Great1:
	giveitem ITEM_NET_BALL, 3
	goto SolaceonTown_NewsPress_EventScript_SNEditor_Scale
SolaceonTown_NewsPress_EventScript_SNEditor_Great2:
	giveitem ITEM_QUICK_BALL, 3
SolaceonTown_NewsPress_EventScript_SNEditor_Scale:
	giveitem ITEM_HEART_SCALE
	setflag FLAG_DAILY_SN_NEWSPRESS
	release
	end
SolaceonTown_NewsPress_EventScript_SNEditor_Wait:
	msgbox SolaceonTown_NewsPress_EventScript_SNEditor_WaitT, MSGBOX_DEFAULT
	release
	end
SolaceonTown_NewsPress_EventScript_SNEditor_Done:
	msgbox SolaceonTown_NewsPress_EventScript_SNEditor_DoneT, MSGBOX_DEFAULT
	release
	end

SolaceonTown_NewsPress_EventScript_SNEditor_Ask:
	.string "I’m the editor of the Sinnoh Now\n"
	.string "newspaper! For today’s edition, I need\l"
	.string "a photo of a {STR_VAR_1}.\p"
	.string "If you have one with you, show it to me!$"

SolaceonTown_NewsPress_EventScript_SNEditor_Great:
	.string "Oh! That’s a fine {STR_VAR_1}! This will\n"
	.string "make a great front page! Here, a little\l"
	.string "reward!$"

SolaceonTown_NewsPress_EventScript_SNEditor_WaitT:
	.string "Bring me a {STR_VAR_1} today, please!\n"
	.string "I’ll make it worth your while!$"

SolaceonTown_NewsPress_EventScript_SNEditor_DoneT:
	.string "Today’s edition is already printed!\n"
	.string "Come back tomorrow!$"
