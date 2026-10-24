EternaCity_CycleShop_MapScripts::
	.byte 0

EternaCity_CycleShop_EventScript_Clerk::
	goto_if_set FLAG_HIDE_ETERNA_GALACTIC, EternaCity_CycleShop_EventScript_ClerkAfter
	msgbox EternaCity_CycleShop_Text_Clerk, MSGBOX_NPC
	end

EternaCity_CycleShop_EventScript_ClerkAfter::
	msgbox EternaCity_CycleShop_Text_ClerkAfter, MSGBOX_NPC
	end

EternaCity_CycleShop_Text_ClerkAfter:
	.string "What was TEAM GALACTIC trying to do\n"
	.string "with other people's POKéMON?$"

EternaCity_CycleShop_Text_Clerk:
	.string "Sorry, we're closed! Our boss went\n"
	.string "to talk to those GALACTIC people\l"
	.string "and hasn't come back...\p"
	.string "Without him, I can't sell any\n"
	.string "bikes. I'm so worried!$"

EternaCity_CycleShop_EventScript_PtNpc1::
	msgbox EternaCity_CycleShop_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_CycleShop_Text_PtNpc1:
	.string "The manager's gone off to the TEAM\n"
	.string "GALACTIC building and hasn't\l"
	.string "returned.\p"
	.string "I wonder what's holding him up?$"

EternaCity_CycleShop_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_BICYCLE, EternaCity_CycleShop_EventScript_OwnerManual
	msgbox EternaCity_CycleShop_Text_OwnerThanks, MSGBOX_DEFAULT
	giveitem ITEM_BICYCLE
	setflag FLAG_RECEIVED_BICYCLE
	msgbox EternaCity_CycleShop_Text_OwnerManual, MSGBOX_DEFAULT
	release
	end

EternaCity_CycleShop_EventScript_OwnerManual::
	msgbox EternaCity_CycleShop_Text_OwnerManual, MSGBOX_DEFAULT
	release
	end

EternaCity_CycleShop_EventScript_Clefairy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox EternaCity_CycleShop_Text_Clefairy, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EternaCity_CycleShop_Text_OwnerThanks:
	.string "Thanks for rescuing me! This is\n"
	.string "something to show my thanks!\p"
	.string "It's the latest model Bicycle! You\n"
	.string "must take it. I insist!$"

EternaCity_CycleShop_Text_OwnerManual:
	.string "It's the latest model, so I'll read the\n"
	.string "operating manual to you.\p"
	.string "“Press the B Button to shift up or\n"
	.string "down.” In third gear, you can't go all\l"
	.string "that fast, but it's easier to control.\p"
	.string "In fourth gear, it gets harder to\n"
	.string "steer and stop, but it's fast! Really!$"

EternaCity_CycleShop_Text_Clefairy:
	.string "CLEFAIRY: Pip piih!$"
