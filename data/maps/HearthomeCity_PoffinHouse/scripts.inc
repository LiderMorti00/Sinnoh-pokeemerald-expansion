HearthomeCity_PoffinHouse_MapScripts::
	.byte 0

HearthomeCity_PoffinHouse_Text_PtNpc1_0:
	.string "Hi! Let’s get cooking!\p"
	.string "Here’s my advice on cooking tasty\n"
	.string "Poffins for your POKéMON crew!\p"
	.string "In the beginning, while it’s still a\n"
	.string "batter, swirl it gently and avoid\p"
	.string "spillage.\p"
	.string "When it starts to harden, churn it fast\n"
	.string "in big circles!\p"
	.string "At the end, make a wish for it to turn\n"
	.string "scrumptious and whirl it!$"

HearthomeCity_PoffinHouse_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_PoffinHouse_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_PoffinHouse_Text_PtNpc2_0:
	.string "Eating good food makes people and\n"
	.string "POKéMON more energetic and happy.\p"
	.string "In that sense, we’re exactly alike.$"

HearthomeCity_PoffinHouse_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_PoffinHouse_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_PoffinHouse_Text_PtNpc3_0:
	.string "Have you got some Berries?\p"
	.string "To make delicious Poffins, the key\n"
	.string "ingredient is a rare Berry.\p"
	.string "And, the more cooks you have, the more\n"
	.string "delicious the Poffin!$"

HearthomeCity_PoffinHouse_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox HearthomeCity_PoffinHouse_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_PoffinHouse_Text_PtNpc4_0:
	.string "At the Wi-Fi Club, I can cook up\n"
	.string "Poffins with my friends!$"

HearthomeCity_PoffinHouse_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox HearthomeCity_PoffinHouse_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

Sinnoh_EventScript_GenericMart::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_BADGE05_GET, Sinnoh_EventScript_GenericMart5
	goto_if_set FLAG_BADGE03_GET, Sinnoh_EventScript_GenericMart3
	goto_if_set FLAG_BADGE01_GET, Sinnoh_EventScript_GenericMart1
	pokemart Sinnoh_Pokemart_Tier0
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
Sinnoh_EventScript_GenericMart1:
	pokemart Sinnoh_Pokemart_Tier1
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
Sinnoh_EventScript_GenericMart3:
	pokemart Sinnoh_Pokemart_Tier3
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
Sinnoh_EventScript_GenericMart5:
	pokemart Sinnoh_Pokemart_Tier5
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Sinnoh_Pokemart_Tier0:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend

	.align 2
Sinnoh_Pokemart_Tier1:
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

	.align 2
Sinnoh_Pokemart_Tier3:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	pokemartlistend

	.align 2
Sinnoh_Pokemart_Tier5:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	pokemartlistend
