JubilifeCity_Mart_MapScripts::
	.byte 0

JubilifeCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE01_GET, JubilifeCity_Mart_EventScript_ClerkBadge
	pokemart JubilifeCity_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

JubilifeCity_Mart_EventScript_ClerkBadge::
	pokemart JubilifeCity_Mart_Pokemart_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
JubilifeCity_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend

	.align 2
JubilifeCity_Mart_Pokemart_Badge:
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

JubilifeCity_Mart_EventScript_PtNpc1::
	msgbox JubilifeCity_Mart_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_Mart_Text_PtNpc1:
	.string "I buy strings for my guitar here.\n"
	.string "Oh, and POTIONS too.$"

JubilifeCity_Mart_EventScript_PtNpc2::
	msgbox JubilifeCity_Mart_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_Mart_Text_PtNpc2:
	.string "This mart has everything! I could\n"
	.string "shop all day.$"

JubilifeCity_Mart_EventScript_PtNpc3::
	msgbox JubilifeCity_Mart_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_Mart_Text_PtNpc3:
	.string "Shopping in the big city is so\n"
	.string "exciting!$"
