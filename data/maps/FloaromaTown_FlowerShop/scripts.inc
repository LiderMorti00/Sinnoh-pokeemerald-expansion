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
