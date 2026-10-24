JubilifeCity_PoketchCompany_F2_MapScripts::
	.byte 0

JubilifeCity_PoketchCompany_F2_EventScript_PtNpc1::
	msgbox JubilifeCity_PoketchCompany_F2_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_PoketchCompany_F2_Text_PtNpc1:
	.string "We'll try to think like a Trainer and\n"
	.string "find what POKéTCH apps would be good.$"

JubilifeCity_PoketchCompany_F2_EventScript_PtNpc2::
	msgbox JubilifeCity_PoketchCompany_F2_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_PoketchCompany_F2_Text_PtNpc2:
	.string "POKéMON Watch! That's POKéTCH for\n"
	.string "short.\p"
	.string "Say it the long way and... What does\n"
	.string "POKéMON stand for again?\p"
	.string "Anyway, I'm the father of the\n"
	.string "president of the POKéTCH Company!$"

JubilifeCity_PoketchCompany_F2_EventScript_PtNpc3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox JubilifeCity_PoketchCompany_F2_Text_PtNpc3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JubilifeCity_PoketchCompany_F2_Text_PtNpc3:
	.string "CLEFAIRY: Cleffy?$"

JubilifeCity_PoketchCompany_F2_EventScript_PtNpc4::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
	msgbox JubilifeCity_PoketchCompany_F2_Text_PtNpc4, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JubilifeCity_PoketchCompany_F2_Text_PtNpc4:
	.string "PACHIRISU: Patchii?$"
