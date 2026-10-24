EternaCity_HerbShop_MapScripts::
	.byte 0

EternaCity_HerbShop_EventScript_PtNpc1::
	msgbox EternaCity_HerbShop_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_HerbShop_Text_PtNpc1:
	.string "Herbal meds work most impressively.\n"
	.string "But your POKéMON won't like them.\p"
	.string "They're horribly bitter and smelly!$"

EternaCity_HerbShop_EventScript_PtNpc2::
	msgbox EternaCity_HerbShop_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_HerbShop_Text_PtNpc2:
	.string "Someone ought to invent herbal\n"
	.string "medicine that isn't bitter.\p"
	.string "That would be a medical breakthrough!$"

EternaCity_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EternaCity_HerbShop_Pokemart_Herbs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EternaCity_HerbShop_Pokemart_Herbs:
	.2byte ITEM_HEAL_POWDER
	.2byte ITEM_ENERGY_POWDER
	.2byte ITEM_ENERGY_ROOT
	.2byte ITEM_REVIVAL_HERB
	pokemartlistend
