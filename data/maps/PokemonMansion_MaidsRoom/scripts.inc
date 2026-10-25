PokemonMansion_MaidsRoom_MapScripts::
	.byte 0

PokemonMansion_MaidsRoom_Text_PtNpc1_0:
	.string "You know how you can catch POKéMON in\n"
	.string "the trophy garden?\p"
	.string "If you put this on a caught POKéMON, it\n"
	.string "warms up to you faster.\p"
	.string "I’ll share one with you, so give it a try.$"

PokemonMansion_MaidsRoom_Text_PtNpc1_1:
	.string "I hope you become a Trainer that\n"
	.string "POKéMON can love and trust.$"

PokemonMansion_MaidsRoom_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_POKEMON_MANSION_MAIDS_ROOM_SOOTHE_BELL, PokemonMansion_MaidsRoom_EventScript_PtNpc1_TrainerThatPokemonLove
	msgbox PokemonMansion_MaidsRoom_Text_PtNpc1_0, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_SN_POKEMON_MANSION_MAIDS_ROOM_SOOTHE_BELL
	giveitem ITEM_SOOTHE_BELL, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	release
	end

PokemonMansion_MaidsRoom_EventScript_PtNpc1_TrainerThatPokemonLove:
	msgbox PokemonMansion_MaidsRoom_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

PokemonMansion_MaidsRoom_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end

PokemonMansion_MaidsRoom_Text_PtNpc2_0:
	.string "I’m not loafing. I’m just taking a\n"
	.string "personal break.\p"
	.string "It’s my official policy to sleep in a\n"
	.string "bed when I’m officially loafing.$"

PokemonMansion_MaidsRoom_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox PokemonMansion_MaidsRoom_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

PokemonMansion_MaidsRoom_EventScript_PtSign1::
	msgbox PokemonMansion_MaidsRoom_Text_PtSign1, MSGBOX_SIGN
	end

PokemonMansion_MaidsRoom_Text_PtSign1:
	.string "It’s a bed... Want to take a rest?$"

PokemonMansion_MaidsRoom_EventScript_PtSign2::
	msgbox PokemonMansion_MaidsRoom_Text_PtSign2, MSGBOX_SIGN
	end

PokemonMansion_MaidsRoom_Text_PtSign2:
	.string "It’s a bed... Want to take a rest?$"

PokemonMansion_MaidsRoom_EventScript_PtSign3::
	msgbox PokemonMansion_MaidsRoom_Text_PtSign3, MSGBOX_SIGN
	end

PokemonMansion_MaidsRoom_Text_PtSign3:
	.string "It’s a bed... Want to take a rest?$"

PokemonMansion_MaidsRoom_EventScript_PtSign4::
	msgbox PokemonMansion_MaidsRoom_Text_PtSign4, MSGBOX_SIGN
	end

PokemonMansion_MaidsRoom_Text_PtSign4:
	.string "It’s a bed... Want to take a rest?$"

PokemonMansion_MaidsRoom_EventScript_PtSign5::
	msgbox PokemonMansion_MaidsRoom_Text_PtSign5, MSGBOX_SIGN
	end

PokemonMansion_MaidsRoom_Text_PtSign5:
	.string "It’s a bed... Want to take a rest?$"

PokemonMansion_MaidsRoom_EventScript_PtSign6::
	msgbox PokemonMansion_MaidsRoom_Text_PtSign6, MSGBOX_SIGN
	end

PokemonMansion_MaidsRoom_Text_PtSign6:
	.string "It’s a bed... Want to take a rest?$"
