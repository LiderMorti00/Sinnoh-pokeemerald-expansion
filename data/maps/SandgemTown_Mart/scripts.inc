SandgemTown_Mart_MapScripts::
	.byte 0

SandgemTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE01_GET, SandgemTown_Mart_EventScript_ClerkBadge
	pokemart SandgemTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SandgemTown_Mart_EventScript_ClerkBadge::
	pokemart SandgemTown_Mart_Pokemart_Badge
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
SandgemTown_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend

	.align 2
SandgemTown_Mart_Pokemart_Badge:
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

SandgemTown_Mart_EventScript_PtNpc1::
	msgbox SandgemTown_Mart_Text_PtNpc1, MSGBOX_NPC
	end

SandgemTown_Mart_Text_PtNpc1:
	.string "If you come across a POKéMON you've\n"
	.string "just gotta have, toss a POKé BALL!\p"
	.string "Never leave home without one!$"

SandgemTown_Mart_EventScript_PtNpc2::
	msgbox SandgemTown_Mart_Text_PtNpc2, MSGBOX_NPC
	end

SandgemTown_Mart_Text_PtNpc2:
	.string "If a POKéMON loses all its HP, it can't\n"
	.string "battle anymore.\p"
	.string "I'm buying lots of Potions to avoid\n"
	.string "having that happen!$"
