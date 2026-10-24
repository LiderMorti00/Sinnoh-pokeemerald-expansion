EternaCity_Mart_MapScripts::
	.byte 0

EternaCity_Mart_EventScript_PtNpc1::
	msgbox EternaCity_Mart_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_Mart_Text_PtNpc1:
	.string "The more Gym Badges you have, the\n"
	.string "better they treat you at Poké Marts.\p"
	.string "You get to buy a better selection of\n"
	.string "merchandise, you see.\p"
	.string "But I don't have a single Gym Badge.\n"
	.string "It's because GARDENIA's too much!\p"
	.string "Argh! I don't want to see another\n"
	.string "grass POKéMON ever again!\p"
	.string "If only I had Flying-type POKéMON...\n"
	.string "Then my losing streak would end!$"

EternaCity_Mart_EventScript_PtNpc2::
	msgbox EternaCity_Mart_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_Mart_Text_PtNpc2:
	.string "An Escape Rope is indispensable!\p"
	.string "I wish I'd had one when I got into a\n"
	.string "tough spot in the ETERNA FOREST.\p"
	.string "I would've been able to warp to the\n"
	.string "entrance instantly!$"

EternaCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EternaCity_Mart_Pokemart_Main
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EternaCity_Mart_Pokemart_Main:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend
