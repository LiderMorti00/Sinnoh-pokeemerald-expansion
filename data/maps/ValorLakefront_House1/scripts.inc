ValorLakefront_House1_MapScripts::
	.byte 0

ValorLakefront_House1_Text_PtNpc1_0:
	.string "Thanks for helping me out. Here’s\n"
	.string "something for your trouble!$"

ValorLakefront_House1_Text_PtNpc1_1:
	.string "Blow the White Flute if you want to\n"
	.string "attract more wild POKéMON.\p"
	.string "It’s a rare glass flute you can only\n"
	.string "get in the Hoenn region.$"

ValorLakefront_House1_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_GRAND_LAKE_VALOR_LAKEFRONT_EAST_HOUSE_WHITE_FLUTE, ValorLakefront_House1_EventScript_PtNpc1_BlowToAttractPokemon
	msgbox ValorLakefront_House1_Text_PtNpc1_0, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_SN_GRAND_LAKE_VALOR_LAKEFRONT_EAST_HOUSE_WHITE_FLUTE
	giveitem ITEM_WHITE_FLUTE, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end

ValorLakefront_House1_EventScript_PtNpc1_BlowToAttractPokemon:
	msgbox ValorLakefront_House1_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

ValorLakefront_House1_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end
