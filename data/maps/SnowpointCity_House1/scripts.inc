SnowpointCity_House1_MapScripts::
	.byte 0

SnowpointCity_House1_Text_PtNpc1_0:
	.string "I love how my girl has so much vivacity\n"
	.string "and charm.$"

SnowpointCity_House1_Text_PtNpc1_1:
	.string "Thanks to you, my girl’s been in a really\n"
	.string "happy mood.$"

SnowpointCity_House1_EventScript_PtNpc1_MyGirlsHappy:
	msgbox SnowpointCity_House1_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

SnowpointCity_House1_Text_PtNpc2:
	.string "Thanks to POKéMON, we got to be\n"
	.string "friends, didn’t we?$"

SnowpointCity_House1_EventScript_PtNpc2::
	msgbox SnowpointCity_House1_Text_PtNpc2, MSGBOX_NPC
	end

SnowpointCity_House1_EventScript_SNTradeGaspar::
	lock
	faceplayer
	goto_if_set FLAG_SN_TRADE_GASPAR, SnowpointCity_House1_EventScript_SNTradeGaspar_Done
	ingame_trade INGAME_TRADE_GASPAR, SnowpointCity_House1_EventScript_SNTradeGaspar_Ask, SnowpointCity_House1_EventScript_SNTradeGaspar_No, SnowpointCity_House1_EventScript_SNTradeGaspar_Wrong, SnowpointCity_House1_EventScript_SNTradeGaspar_Thanks
	setflag FLAG_SN_TRADE_GASPAR
	release
	end
SnowpointCity_House1_EventScript_SNTradeGaspar_No:
	msgbox SnowpointCity_House1_EventScript_SNTradeGaspar_NoT, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House1_EventScript_SNTradeGaspar_Wrong:
	bufferspeciesname STR_VAR_1, VAR_0x8009
	msgbox SnowpointCity_House1_EventScript_SNTradeGaspar_WrongT, MSGBOX_DEFAULT
	release
	end
SnowpointCity_House1_EventScript_SNTradeGaspar_Done:
	msgbox SnowpointCity_House1_EventScript_SNTradeGaspar_DoneT, MSGBOX_DEFAULT
	release
	end

SnowpointCity_House1_EventScript_SNTradeGaspar_Ask:
	.string "Do you have a {STR_VAR_1}? Would you\n"
	.string "trade it for my {STR_VAR_2}?$"

SnowpointCity_House1_EventScript_SNTradeGaspar_Thanks:
	.string "Thank you! Please take good care of my\n"
	.string "POKéMON!$"

SnowpointCity_House1_EventScript_SNTradeGaspar_NoT:
	.string "Oh... That’s too bad.$"

SnowpointCity_House1_EventScript_SNTradeGaspar_WrongT:
	.string "That’s not a {STR_VAR_1}...$"

SnowpointCity_House1_EventScript_SNTradeGaspar_DoneT:
	.string "Our POKéMON are getting along great\n"
	.string "with their new Trainers, don’t you\l"
	.string "think?$"
