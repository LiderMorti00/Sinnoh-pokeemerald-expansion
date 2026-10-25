LostTower_5F_MapScripts::
	.byte 0

LostTower_5F_Text_PtNpc1_0:
	.string "Oh! The fog is gone and, with it, all\n"
	.string "doubt in my heart!\p"
	.string "This is my thanks. Don’t be shy! Take\n"
	.string "it!$"

LostTower_5F_Text_PtNpc1_1:
	.string "I can’t see! This fog obscures\n"
	.string "everything!\p"
	.string "I wish this fog could be blown away like\n"
	.string "the doubt in my heart!$"

LostTower_5F_Text_PtNpc1_2:
	.string "That Fantina... It’s hard to tell what\n"
	.string "she’s thinking.\p"
	.string "But she has a compassionate heart. You\n"
	.string "know, she’s a regular visitor.$"

LostTower_5F_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_unset FLAG_SN_USED_DEFOG_IN_ROUTE_209_LOST_TOWER_5F, LostTower_5F_EventScript_PtNpc1_ThisFogObscuresEverything
	goto_if_set FLAG_RECEIVED_SN_ROUTE_209_LOST_TOWER_5F_SPELL_TAG, LostTower_5F_EventScript_PtNpc1_FantinaIsARegularVisitor
	msgbox LostTower_5F_Text_PtNpc1_0, MSGBOX_DEFAULT
	giveitem ITEM_SPELL_TAG, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_ROUTE_209_LOST_TOWER_5F_SPELL_TAG
	goto LostTower_5F_EventScript_PtNpc1_FantinaIsARegularVisitor
	release
	end

LostTower_5F_EventScript_PtNpc1_ThisFogObscuresEverything:
	msgbox LostTower_5F_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

LostTower_5F_EventScript_PtNpc1_FantinaIsARegularVisitor:
	msgbox LostTower_5F_Text_PtNpc1_2, MSGBOX_DEFAULT
	release
	end

LostTower_5F_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end

LostTower_5F_Text_PtNpc2_0:
	.string "Let me make your journey out of this\n"
	.string "place less frightening. Take this.$"

LostTower_5F_Text_PtNpc2_1:
	.string "I can’t see! This fog obscures\n"
	.string "everything!\p"
	.string "I wish this fog could be blown away like\n"
	.string "the doubt in my heart!$"

LostTower_5F_Text_PtNpc2_2:
	.string "The Lost Tower is where the spirits of\n"
	.string "departed POKéMON are put to rest.\p"
	.string "Those that enjoyed long lives... Those\n"
	.string "whose times were short...\p"
	.string "All the departed POKéMON shall find\n"
	.string "solace here...$"

LostTower_5F_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_unset FLAG_SN_USED_DEFOG_IN_ROUTE_209_LOST_TOWER_5F, LostTower_5F_EventScript_PtNpc2_ThisFogObscuresEverything2
	goto_if_set FLAG_RECEIVED_SN_ROUTE_209_LOST_TOWER_5F_CLEANSE_TAG, LostTower_5F_EventScript_PtNpc2_PokemonFindSolaceHere
	msgbox LostTower_5F_Text_PtNpc2_0, MSGBOX_DEFAULT
	giveitem ITEM_CLEANSE_TAG, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_ROUTE_209_LOST_TOWER_5F_CLEANSE_TAG
	goto LostTower_5F_EventScript_PtNpc2_PokemonFindSolaceHere
	release
	end

LostTower_5F_EventScript_PtNpc2_ThisFogObscuresEverything2:
	msgbox LostTower_5F_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

LostTower_5F_EventScript_PtNpc2_PokemonFindSolaceHere:
	msgbox LostTower_5F_Text_PtNpc2_2, MSGBOX_DEFAULT
	release
	end

LostTower_5F_EventScript_PtNpc2_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end
