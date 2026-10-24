EternaCity_CycleShop_MapScripts::
	.byte 0

EternaCity_CycleShop_EventScript_Clerk::
	msgbox EternaCity_CycleShop_Text_Clerk, MSGBOX_NPC
	end

EternaCity_CycleShop_Text_Clerk:
	.string "Sorry, we're closed! Our boss went\n"
	.string "to talk to those GALACTIC people\l"
	.string "and hasn't come back...\p"
	.string "Without him, I can't sell any\n"
	.string "bikes. I'm so worried!$"

EternaCity_CycleShop_EventScript_PtNpc1::
	msgbox EternaCity_CycleShop_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_CycleShop_Text_PtNpc1:
	.string "The manager's gone off to the TEAM\n"
	.string "GALACTIC building and hasn't\l"
	.string "returned.\p"
	.string "I wonder what's holding him up?$"
