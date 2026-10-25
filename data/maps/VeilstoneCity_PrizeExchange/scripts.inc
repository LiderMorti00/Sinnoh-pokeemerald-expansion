VeilstoneCity_PrizeExchange_MapScripts::
	.byte 0

VeilstoneCity_PrizeExchange_Text_PtNpc1:
	.string "Welcome!\p"
	.string "You may exchange your Coins for\n"
	.string "fabulous prizes here!$"

VeilstoneCity_PrizeExchange_EventScript_PtNpc1::
	msgbox VeilstoneCity_PrizeExchange_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_PrizeExchange_Text_PtNpc2:
	.string "I’ll tell you what type your POKéMON’s\n"
	.string "Hidden Power will be.\p"
	.string "My own hidden power lets me do that.$"

VeilstoneCity_PrizeExchange_EventScript_PtNpc2::
	msgbox VeilstoneCity_PrizeExchange_Text_PtNpc2, MSGBOX_NPC
	end

VeilstoneCity_PrizeExchange_Text_PtNpc3_0:
	.string "They have prizes I really want. But\n"
	.string "Coins, I have none!$"

VeilstoneCity_PrizeExchange_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox VeilstoneCity_PrizeExchange_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
