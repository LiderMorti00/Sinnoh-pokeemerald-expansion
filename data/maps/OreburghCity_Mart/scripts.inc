OreburghCity_Mart_MapScripts::
	.byte 0

OreburghCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE01_GET, OreburghCity_Mart_EventScript_ClerkBadge
	pokemart OreburghCity_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

OreburghCity_Mart_EventScript_ClerkBadge::
	pokemart OreburghCity_Mart_Pokemart_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OreburghCity_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend

	.align 2
OreburghCity_Mart_Pokemart_Badge:
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

OreburghCity_Mart_EventScript_PtNpc1::
	msgbox OreburghCity_Mart_Text_PtNpc1, MSGBOX_NPC
	end

OreburghCity_Mart_Text_PtNpc1:
	.string "The Badges that POKéMON Gyms give\n"
	.string "you are a measure of a Trainer's worth.\p"
	.string "By getting more Badges, you get to\n"
	.string "buy more items in Poké Marts.$"

OreburghCity_Mart_EventScript_PtNpc2::
	msgbox OreburghCity_Mart_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_Mart_Text_PtNpc2:
	.string "The POKÉ MART is staffed by a lady and\n"
	.string "a young fellow.\p"
	.string "They offer different kinds of\n"
	.string "merchandise. Did you know?$"
