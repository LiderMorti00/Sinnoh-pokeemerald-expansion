HearthomeCity_PokemonFanClub_MapScripts::
	.byte 0

HearthomeCity_PokemonFanClub_Text_PtNpc1:
	.string "Nationwide, there are other fan clubs,\n"
	.string "but we are number one!\p"
	.string "And why are we number one? Because I\n"
	.string "brag more than anyone!\p"
	.string "But now I can’t brag as much...\p"
	.string "People started complaining, so I’ve had\n"
	.string "to curtail my bragging...$"

HearthomeCity_PokemonFanClub_EventScript_PtNpc1::
	msgbox HearthomeCity_PokemonFanClub_Text_PtNpc1, MSGBOX_NPC
	end

HearthomeCity_PokemonFanClub_Text_PtNpc2:
	.string "Welcome to the POKéMON Fan Club! Oh,\n"
	.string "your POKéMON...$"

HearthomeCity_PokemonFanClub_EventScript_PtNpc2::
	msgbox HearthomeCity_PokemonFanClub_Text_PtNpc2, MSGBOX_NPC
	end

HearthomeCity_PokemonFanClub_Text_PtNpc3_0:
	.string "PSYDUCK: Gua gwah?!$"

HearthomeCity_PokemonFanClub_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox HearthomeCity_PokemonFanClub_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_PokemonFanClub_Text_PtNpc4_0:
	.string "BUNEARY: Kukuuh.$"

HearthomeCity_PokemonFanClub_EventScript_PtNpc4::
	lock
	faceplayer
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
	msgbox HearthomeCity_PokemonFanClub_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_PokemonFanClub_Text_PtNpc5_0:
	.string "CLEFAIRY: Pip piiih!$"

HearthomeCity_PokemonFanClub_EventScript_PtNpc5::
	lock
	faceplayer
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox HearthomeCity_PokemonFanClub_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end
