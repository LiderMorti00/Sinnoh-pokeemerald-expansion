SnowpointCity_MapScripts::
	.byte 0

SnowpointCity_EventScript_PtNpc1::
	msgbox SnowpointCity_Text_PtNpc1, MSGBOX_NPC
	end

SnowpointCity_Text_PtNpc1:
	.string "There is nothing exceptional here.\n"
	.string "That makes SNOWPOINT unique.\p"
	.string "There's nothing exceptional about me.\n"
	.string "That's what makes me stand out!$"

SnowpointCity_EventScript_PtSign1::
	msgbox SnowpointCity_Text_PtSign1, MSGBOX_SIGN
	end

SnowpointCity_Text_PtSign1:
	.string "SNOWPOINT CITY City of Snow$"

SnowpointCity_EventScript_PtSign2::
	msgbox SnowpointCity_Text_PtSign2, MSGBOX_SIGN
	end

SnowpointCity_Text_PtSign2:
	.string "SNOWPOINT CITY POKéMON Gym Leader:\n"
	.string "CANDICE The Diamond Dust Girl!$"

SnowpointCity_Text_PtNpc2_0:
	.string "Brrr... This snowbound town is always\n"
	.string "freezing cold.\p"
	.string "But the spirits of the Trainers and\n"
	.string "their POKéMON burn hot and bright.\p"
	.string "Especially the Gym Leader.$"

SnowpointCity_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SnowpointCity_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Text_PtNpc3_0:
	.string "Your scarf looks nice and warm. I wish I\n"
	.string "had one like it.$"

SnowpointCity_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SnowpointCity_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Text_PtNpc4:
	.string "Only the chosen may enter the\n"
	.string "Snowpoint Temple.\p"
	.string "I’m sorry, but you will have to leave.$"

SnowpointCity_EventScript_PtNpc4::
	msgbox SnowpointCity_Text_PtNpc4, MSGBOX_NPC
	end

SnowpointCity_Text_PtNpc5_0:
	.string "Candice is teaching me about POKéMON.\p"
	.string "She says I have to start by making\n"
	.string "friends with POKéMON.$"

SnowpointCity_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox SnowpointCity_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_FerrySailor::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, SnowpointCity_EventScript_FerryNotYet
	msgbox SnowpointCity_Text_SailToBattleZone, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SnowpointCity_EventScript_FerryNo
	msgbox SnowpointCity_Text_LetsSetSail, MSGBOX_DEFAULT
	closemessage
	warp MAP_FIGHT_AREA, 19, 18
	waitstate
	release
	end

SnowpointCity_EventScript_FerryNotYet:
	msgbox SnowpointCity_Text_GreatTrainer, MSGBOX_DEFAULT
	release
	end

SnowpointCity_EventScript_FerryNo:
	msgbox SnowpointCity_Text_PtNpc1, MSGBOX_DEFAULT
	release
	end
SnowpointCity_Text_SailToBattleZone:
	.string "What is it? Do you want to sail to the\n"
	.string "Fight Area?$"

SnowpointCity_Text_LetsSetSail:
	.string "Aye, aye, then! Let’s set sail!$"

SnowpointCity_Text_GreatTrainer:
	.string "A great Trainer recognized by the\n"
	.string "POKéMON League...\p"
	.string "I look forward to carrying someone like\n"
	.string "that on this ship!$"
