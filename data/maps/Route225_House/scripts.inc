Route225_House_MapScripts::
	.byte 0

Route225_House_Text_PtNpc1_0:
	.string "Isn’t it hot in the Battle Zone? Why\n"
	.string "not let your POKéMON drink this?$"

Route225_House_Text_PtNpc1_1:
	.string "Water is the wellspring of life.\p"
	.string "Having said that, no one knows where\n"
	.string "POKéMON originated.$"

Route225_House_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_ROUTE_225_HOUSE_FRESH_WATER, Route225_House_EventScript_PtNpc1_WellspringOfLife
	msgbox Route225_House_Text_PtNpc1_0, MSGBOX_DEFAULT
	giveitem ITEM_FRESH_WATER, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_ROUTE_225_HOUSE_FRESH_WATER
	goto Route225_House_EventScript_PtNpc1_WellspringOfLife

Route225_House_EventScript_PtNpc1_WellspringOfLife:
	msgbox Route225_House_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

Route225_House_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end
