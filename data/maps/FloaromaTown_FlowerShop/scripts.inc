FloaromaTown_FlowerShop_MapScripts::
	.byte 0

FloaromaTown_FlowerShop_EventScript_Florist::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_FLOAROMA_BERRY, FloaromaTown_FlowerShop_EventScript_FloristAfter
	msgbox FloaromaTown_FlowerShop_Text_Florist, MSGBOX_DEFAULT
	giveitem ITEM_ORAN_BERRY, 3
	setflag FLAG_RECEIVED_FLOAROMA_BERRY
	release
	end
FloaromaTown_FlowerShop_EventScript_FloristAfter::
	msgbox FloaromaTown_FlowerShop_Text_FloristAfter, MSGBOX_DEFAULT
	release
	end

FloaromaTown_FlowerShop_Text_Florist:
	.string "Welcome to the PICK A PECK OF\n"
	.string "COLORS FLOWER SHOP! Here, take\l"
	.string "some BERRIES as a welcome gift!$"

FloaromaTown_FlowerShop_Text_FloristAfter:
	.string "BERRIES grow best in soft,\n"
	.string "soil-rich ground. Take good care\l"
	.string "of them!$"

FloaromaTown_FlowerShop_EventScript_PtNpc1::
	msgbox FloaromaTown_FlowerShop_Text_PtNpc1, MSGBOX_NPC
	end

FloaromaTown_FlowerShop_Text_PtNpc1:
	.string "A single Berry will grow into a plant\n"
	.string "that makes several Berries.\p"
	.string "By planting one, there will be more and\n"
	.string "more Berries in the world.\p"
	.string "I hope you will help us spread more\n"
	.string "Berries everywhere!$"
