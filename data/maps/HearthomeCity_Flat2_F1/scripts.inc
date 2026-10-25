HearthomeCity_Flat2_F1_MapScripts::
	.byte 0

HearthomeCity_Flat2_F1_Text_PtNpc1_0:
	.string "There are the Contests! Then, we have\n"
	.string "Amity Square!\p"
	.string "Hearthome gets visitors from all over,\n"
	.string "so things have to be nice and clean!$"

HearthomeCity_Flat2_F1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_Flat2_F1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat2_F1_Text_PtNpc2_0:
	.string "People all over the world follow\n"
	.string "POKéMON Contests.\p"
	.string "What should I do? I could captivate\n"
	.string "the whole world!$"

HearthomeCity_Flat2_F1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_Flat2_F1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat2_F1_Text_PtNpc3_0:
	.string "SHROOMISH: Pofwaaah!$"

HearthomeCity_Flat2_F1_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_SHROOMISH, CRY_MODE_NORMAL
	msgbox HearthomeCity_Flat2_F1_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat2_F1_Text_PtNpc4_0:
	.string "My SHROOMISH finds Berries and things\n"
	.string "when we go to Amity Square.$"

HearthomeCity_Flat2_F1_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox HearthomeCity_Flat2_F1_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end
