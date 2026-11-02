FuegoIronworks_Inside_MapScripts::
	.byte 0

FuegoIronworks_Inside_EventScript_Dillan::
	trainerbattle_single TRAINER_LOLA_5, FuegoIronworks_Inside_Text_DillanIntro, FuegoIronworks_Inside_Text_DillanDefeat
	msgbox FuegoIronworks_Inside_Text_DillanPost, MSGBOX_AUTOCLOSE
	end

FuegoIronworks_Inside_Text_DillanIntro:
	.string "I work in the fiery foundry. You bet I’m\n"
	.string "hot and sweaty!$"

FuegoIronworks_Inside_Text_DillanDefeat:
	.string "I burned out...$"

FuegoIronworks_Inside_Text_DillanPost:
	.string "I toughened up my muscles from honest\n"
	.string "work.\p"
	.string "POKéMON have nothing on me!$"

FuegoIronworks_Inside_EventScript_Holden::
	trainerbattle_single TRAINER_RICKY_1, FuegoIronworks_Inside_Text_HoldenIntro, FuegoIronworks_Inside_Text_HoldenDefeat
	msgbox FuegoIronworks_Inside_Text_HoldenPost, MSGBOX_AUTOCLOSE
	end

FuegoIronworks_Inside_Text_HoldenIntro:
	.string "Well! It’s not often we get a visitor\n"
	.string "like you to the ironworks!\p"
	.string "Let’s mark the occasion with a battle!$"

FuegoIronworks_Inside_Text_HoldenDefeat:
	.string "Fire! And once more, only because I\n"
	.string "feel like it, fiyaaaah!$"

FuegoIronworks_Inside_Text_HoldenPost:
	.string "The floor panels move automatically.\n"
	.string "We’re pretty proud of them here!$"

FuegoIronworks_Inside_EventScript_Conrad::
	trainerbattle_single TRAINER_RICKY_2, FuegoIronworks_Inside_Text_ConradIntro, FuegoIronworks_Inside_Text_ConradDefeat
	msgbox FuegoIronworks_Inside_Text_ConradPost, MSGBOX_AUTOCLOSE
	end

FuegoIronworks_Inside_Text_ConradIntro:
	.string "Are you maybe getting annoyed by\n"
	.string "where the floor panels take you?$"

FuegoIronworks_Inside_Text_ConradDefeat:
	.string "I’m going down in flames!$"

FuegoIronworks_Inside_Text_ConradPost:
	.string "The sweat of a working man is beautiful\n"
	.string "to behold...\p"
	.string "There is also beauty in the tears wept\n"
	.string "from defeat...$"

FuegoIronworks_Inside_Text_PtNpc1:
	.string "Mr. Fuego: Do you have any Star Pieces?\n"
	.string "You can trade them for various Shards.$"

FuegoIronworks_Inside_EventScript_SNFuego::
	lock
	faceplayer
	msgbox FuegoIronworks_Inside_EventScript_SNFuego_Hello, MSGBOX_DEFAULT
	checkitem ITEM_STAR_PIECE
	goto_if_eq VAR_RESULT, FALSE, FuegoIronworks_Inside_EventScript_SNFuego_None
	message FuegoIronworks_Inside_EventScript_SNFuego_Which
	waitmessage
	dynmultipush FuegoIronworks_Inside_EventScript_SNFuego_Red, 0
	dynmultipush FuegoIronworks_Inside_EventScript_SNFuego_Blue, 1
	dynmultipush FuegoIronworks_Inside_EventScript_SNFuego_Yellow, 2
	dynmultipush FuegoIronworks_Inside_EventScript_SNFuego_Green, 3
	dynmultipush FuegoIronworks_Inside_EventScript_SNFuego_Cancel, 255
	dynmultistack 0, 0, FALSE, 5, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	switch VAR_RESULT
	case 0, FuegoIronworks_Inside_EventScript_SNFuego_G0
	case 1, FuegoIronworks_Inside_EventScript_SNFuego_G1
	case 2, FuegoIronworks_Inside_EventScript_SNFuego_G2
	case 3, FuegoIronworks_Inside_EventScript_SNFuego_G3
	release
	end
FuegoIronworks_Inside_EventScript_SNFuego_G0:
	setvar VAR_0x8006, ITEM_RED_SHARD
	goto FuegoIronworks_Inside_EventScript_SNFuego_Give
FuegoIronworks_Inside_EventScript_SNFuego_G1:
	setvar VAR_0x8006, ITEM_BLUE_SHARD
	goto FuegoIronworks_Inside_EventScript_SNFuego_Give
FuegoIronworks_Inside_EventScript_SNFuego_G2:
	setvar VAR_0x8006, ITEM_YELLOW_SHARD
	goto FuegoIronworks_Inside_EventScript_SNFuego_Give
FuegoIronworks_Inside_EventScript_SNFuego_G3:
	setvar VAR_0x8006, ITEM_GREEN_SHARD
FuegoIronworks_Inside_EventScript_SNFuego_Give:
	checkitemspace VAR_0x8006
	goto_if_eq VAR_RESULT, FALSE, FuegoIronworks_Inside_EventScript_SNFuego_Full
	removeitem ITEM_STAR_PIECE
	giveitem VAR_0x8006
	release
	end
FuegoIronworks_Inside_EventScript_SNFuego_None:
	msgbox FuegoIronworks_Inside_EventScript_SNFuego_NoneT, MSGBOX_DEFAULT
	release
	end
FuegoIronworks_Inside_EventScript_SNFuego_Full:
	msgbox FuegoIronworks_Inside_EventScript_SNFuego_FullT, MSGBOX_DEFAULT
	release
	end
FuegoIronworks_Inside_EventScript_SNFuego_Red:
	.string "RED SHARD$"
FuegoIronworks_Inside_EventScript_SNFuego_Blue:
	.string "BLUE SHARD$"
FuegoIronworks_Inside_EventScript_SNFuego_Yellow:
	.string "YELLOW SHARD$"
FuegoIronworks_Inside_EventScript_SNFuego_Green:
	.string "GREEN SHARD$"
FuegoIronworks_Inside_EventScript_SNFuego_Cancel:
	.string "CANCEL$"
FuegoIronworks_Inside_EventScript_SNFuego_Hello:
	.string "Mr. Fuego: Do you have any Star Pieces?\n"
	.string "You can trade them for various Shards.$"

FuegoIronworks_Inside_EventScript_SNFuego_Which:
	.string "Which Shard would you like for your\n"
	.string "Star Piece?$"

FuegoIronworks_Inside_EventScript_SNFuego_NoneT:
	.string "Come back when you find a Star Piece.\n"
	.string "They’re buried on Iron Island, you\l"
	.string "know.$"

FuegoIronworks_Inside_EventScript_SNFuego_FullT:
	.string "Your Bag is full!$"
