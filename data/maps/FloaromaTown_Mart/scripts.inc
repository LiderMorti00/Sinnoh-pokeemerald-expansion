FloaromaTown_Mart_MapScripts::
	.byte 0

FloaromaTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE01_GET, FloaromaTown_Mart_EventScript_ClerkBadge
	pokemart FloaromaTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

FloaromaTown_Mart_EventScript_ClerkBadge::
	pokemart FloaromaTown_Mart_Pokemart_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
FloaromaTown_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend

	.align 2
FloaromaTown_Mart_Pokemart_Badge:
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

FloaromaTown_Mart_EventScript_PtNpc1::
	msgbox FloaromaTown_Mart_Text_PtNpc1, MSGBOX_NPC
	end

FloaromaTown_Mart_Text_PtNpc1:
	.string "I'm going to dress up my POKéMON with\n"
	.string "cute Accessories and take it to the\l"
	.string "TV station in JUBILIFE CITY.\p"
	.string "That way, everyone in the region will\n"
	.string "be able to see my POKéMON!$"

FloaromaTown_Mart_EventScript_PtNpc2::
	msgbox FloaromaTown_Mart_Text_PtNpc2, MSGBOX_NPC
	end

FloaromaTown_Mart_Text_PtNpc2:
	.string "You can't buy Berries or Accessories\n"
	.string "at Poké Marts.\p"
	.string "It's better for me that way. I won't\n"
	.string "waste money impulse shopping.$"
