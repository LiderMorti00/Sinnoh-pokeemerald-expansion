SnowpointCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SnowpointCity_OnTransitionSN
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

SnowpointCity_OnTransitionSN:
	call SnowpointCity_EventScript_SNVis_SNOW_CYNTHIA
	end

SnowpointCity_EventScript_SNVis_SNOW_CYNTHIA:
	setflag FLAG_SN_HIDE_SNOW_CYNTHIA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SnowpointCity_EventScript_SNVis_SNOW_CYNTHIA_End
	goto_if_set FLAG_SN_SNOWPOINT_CYNTHIA, SnowpointCity_EventScript_SNVis_SNOW_CYNTHIA_End
	clearflag FLAG_SN_HIDE_SNOW_CYNTHIA
SnowpointCity_EventScript_SNVis_SNOW_CYNTHIA_End:
	return

SnowpointCity_EventScript_SNTemple::
	goto_if_set FLAG_SN_TEMPLE_OPEN, SnowpointCity_EventScript_SNTemple_End
	lockall
	msgbox SnowpointCity_Text_PtNpc4, MSGBOX_DEFAULT
	goto_if_set FLAG_SYS_GAME_CLEAR, SnowpointCity_EventScript_SNTemple_Candice
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end
SnowpointCity_EventScript_SNTemple_Candice:
	msgbox SnowpointCity_Text_SNCandice, MSGBOX_DEFAULT
	setflag FLAG_SN_TEMPLE_OPEN
	releaseall
SnowpointCity_EventScript_SNTemple_End:
	end

SnowpointCity_Text_SNCandice:
	.string "Candice: It’s OK! You can let that\n"
	.string "person in.\p"
	.string "Candice: I heard from Cynthia.\p"
	.string "You’re working on a POKéDEX, aren’t\n"
	.string "you?\p"
	.string "There should be many rare POKéMON in\n"
	.string "the temple.\p"
	.string "Enjoy your exploring!$"

SnowpointCity_EventScript_SNCynthia::
	lock
	faceplayer
	msgbox SnowpointCity_Text_SNCyn1, MSGBOX_DEFAULT
	msgbox SnowpointCity_Text_SNCyn2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_SNOWPOINT_CYNTHIA
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_SNOW_CYNTHIA
	setflag FLAG_SN_HIDE_SNOW_CYNTHIA
	fadescreen FADE_FROM_BLACK
	release
	end

SnowpointCity_Text_SNCyn1:
	.string "Cynthia: I thought you would come. I’m\n"
	.string "glad I waited for you!\p"
	.string "Cynthia: I think it’s good that our\n"
	.string "world is constantly changing.\p"
	.string "Of course, I don’t want it to become\n"
	.string "what only one person wants.\p"
	.string "A world like Cyrus envisions... No one\n"
	.string "would want that.\p"
	.string "The kind of world I want to see is\n"
	.string "where everyone can share their joy.\p"
	.string "Where POKéMON and the people around\n"
	.string "them can be happy for each other.\p"
	.string "I want the world to become a place\n"
	.string "where everyone is smiling.\p"
	.string "The world could be so much better if we\n"
	.string "all tried to make it that way.$"

SnowpointCity_Text_SNCyn2:
	.string "Cynthia: I want you to keep traveling\n"
	.string "to many far-off places.\p"
	.string "I want you to keep meeting all kinds of\n"
	.string "people and POKéMON.\p"
	.string "I came all the way here just so I could\n"
	.string "say that to you.\p"
	.string "Your horizons will expand again if you\n"
	.string "visit the Fight Area as well.\p"
	.string "I hope our paths cross again!$"

SnowpointCity_EventScript_SNPtSNOWPOINTNPCM::
	msgbox SnowpointCity_EventScript_SNPtSNOWPOINTNPCM_Text, MSGBOX_NPC
	end

SnowpointCity_EventScript_SNPtSNOWPOINTNPCM_Text:
	.string "POKéMON are said to have dragged\n"
	.string "Snowpoint City here.\p"
	.string "The Snowpoint Temple is their resting\n"
	.string "place, they say.\p"
	.string "I want to take a look around in the\n"
	.string "Snowpoint Temple.\p"
	.string "But only really tough Trainers are\n"
	.string "allowed inside.$"
