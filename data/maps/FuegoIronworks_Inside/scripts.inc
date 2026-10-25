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

FuegoIronworks_Inside_EventScript_PtNpc1::
	msgbox FuegoIronworks_Inside_Text_PtNpc1, MSGBOX_NPC
	end
