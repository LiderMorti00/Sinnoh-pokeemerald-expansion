FloaromaTown_MapScripts::
	.byte 0

FloaromaTown_EventScript_Grunts::
	msgbox FloaromaTown_Text_Grunts, MSGBOX_NPC
	end

FloaromaTown_Text_Grunts:
	.string "Grunt 1: Aren’t we Team Galactic? And\n"
	.string "we’re assigned here?\p"
	.string "Standing around among flowers... This\n"
	.string "doesn’t seem all that cool.\p"
	.string "Grunt 2: Hey now! Don’t complain. This\n"
	.string "is a pretty decent assignment.\p"
	.string "But Bug- and Grass-type POKéMON so\n"
	.string "creep me out...\p"
	.string "I don’t like being here either.$"

FloaromaTown_EventScript_PtNpc1::
	msgbox FloaromaTown_Text_PtNpc1, MSGBOX_NPC
	end

FloaromaTown_Text_PtNpc1:
	.string "Welcome to FLOAROMA, the town of\n"
	.string "flowers, flowers, and more flowers!\p"
	.string "You should plant some flowers of your\n"
	.string "own, too. Yay for flowers!$"

FloaromaTown_EventScript_PtNpc2::
	msgbox FloaromaTown_Text_PtNpc2, MSGBOX_NPC
	end

FloaromaTown_Text_PtNpc2:
	.string "I simply love it here... The atmosphere\n"
	.string "is so uplifting.\p"
	.string "You came to get emotionally healed\n"
	.string "too, didn't you?$"

FloaromaTown_EventScript_PtNpc3::
	msgbox FloaromaTown_Text_PtNpc3, MSGBOX_NPC
	end

FloaromaTown_Text_PtNpc3:
	.string "I wanted to get some flowers from the\n"
	.string "FLOAROMA MEADOW...\p"
	.string "But some TEAM GALACTIC guys in\n"
	.string "snazzy outfits came along...\p"
	.string "Those GALACTIC guys went to the\n"
	.string "meadow past these flowers here...$"

FloaromaTown_EventScript_PtNpc4::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_GRACIDEA, FloaromaTown_EventScript_SNGracideaDone
	setvar VAR_0x8004, SPECIES_SHAYMIN
	special SinnohPartyHasSpecies
	goto_if_eq VAR_RESULT, FALSE, FloaromaTown_EventScript_SNGracideaAsk
	msgbox FloaromaTown_Text_SNHaveGracidea, MSGBOX_DEFAULT
	giveitem ITEM_GRACIDEA
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_SN_RECEIVED_GRACIDEA
FloaromaTown_EventScript_SNGracideaDone:
	msgbox FloaromaTown_Text_SNGracideaLong, MSGBOX_DEFAULT
	release
	end
FloaromaTown_EventScript_SNGracideaAsk:
	msgbox FloaromaTown_Text_SNGracideaAskT, MSGBOX_DEFAULT
	release
	end

FloaromaTown_Text_PtNpc4:
	.string "The flowers here are so pretty.\n"
	.string "They say something special made\l"
	.string "them bloom.$"

FloaromaTown_EventScript_PtNpc5::
	msgbox FloaromaTown_Text_PtNpc5, MSGBOX_NPC
	end

FloaromaTown_Text_PtNpc5:
	.string "The Berries you pick can be used as\n"
	.string "food for POKéMON.\p"
	.string "You can also trade them in at the\n"
	.string "florist's.\p"
	.string "They'll exchange Berries for\n"
	.string "Accessories to dress up your POKéMON.$"

FloaromaTown_EventScript_PtNpc6::
	msgbox FloaromaTown_Text_PtNpc6, MSGBOX_NPC
	end

FloaromaTown_Text_PtNpc6:
	.string "I got drawn here by the sweet scent\n"
	.string "of Honey...\p"
	.string "Seriously, what's that? What am I? A\n"
	.string "POKéMON or something? Mmm... Honey.$"

FloaromaTown_EventScript_Sign1::
	msgbox FloaromaTown_Text_Sign1, MSGBOX_SIGN
	end

FloaromaTown_Text_Sign1:
	.string "PICK A PECK OF COLORS FLOWER SHOP$"

FloaromaTown_EventScript_Sign2::
	msgbox FloaromaTown_Text_Sign2, MSGBOX_SIGN
	end

FloaromaTown_Text_Sign2:
	.string "FLOAROMA TOWN\p"
	.string "The town of flower scents.$"

FloaromaTown_EventScript_Sign3::
	msgbox FloaromaTown_Text_Sign3, MSGBOX_SIGN
	end

FloaromaTown_Text_Sign3:
	.string "FLOAROMA TOWN\p"
	.string "The town of flower scents.$"

FloaromaTown_EventScript_Sign4::
	msgbox FloaromaTown_Text_Sign4, MSGBOX_SIGN
	end

FloaromaTown_Text_Sign4:
	.string "POKéMON CENTER\p"
	.string "Heal your POKéMON!$"

FloaromaTown_Text_SNHaveGracidea:
	.string "Oh, a SHAYMIN?\p"
	.string "If you have that POKéMON, then you\n"
	.string "also should have some Gracidea\l"
	.string "flowers.\p"
	.string "I’ve got a whole bunch, so you can have\n"
	.string "some.$"

FloaromaTown_Text_SNGracideaLong:
	.string "Gracidea flowers have been around a\n"
	.string "long time in this region.\p"
	.string "They’re given as bouquets to express\n"
	.string "feelings of gratitude.\p"
	.string "Isn’t that charming?\p"
	.string "With these Gracidea flowers you don’t\n"
	.string "need to say thanks with words.\p"
	.string "You can, instead, demonstrate your\n"
	.string "gratitude with a bouquet. How nice!$"

FloaromaTown_Text_SNGracideaAskT:
	.string "Do you know about Gracidea flowers?\p"
	.string "They’re given as bouquets to express\n"
	.string "feelings of gratitude.\p"
	.string "It’s an enduring tradition around\n"
	.string "these parts.$"
