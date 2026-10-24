JubilifeCity_Flat3_F1_MapScripts::
	.byte 0

JubilifeCity_Flat3_F1_EventScript_PtNpc1::
	msgbox JubilifeCity_Flat3_F1_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_Flat3_F1_Text_PtNpc1:
	.string "Oh, hello, darlings. Isn't my POKéTCH\n"
	.string "quite fetching?\p"
	.string "It's the latest design that just came\n"
	.string "out. I obtained it instantly, of\l"
	.string "course.\p"
	.string "A Trainer would be simply lost without\n"
	.string "a POKéTCH, after all.$"

JubilifeCity_Flat3_F1_EventScript_PtNpc2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
	msgbox JubilifeCity_Flat3_F1_Text_PtNpc2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JubilifeCity_Flat3_F1_Text_PtNpc2:
	.string "PACHIRISU: Pachipachii?$"

JubilifeCity_Flat3_F1_EventScript_PtNpc3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox JubilifeCity_Flat3_F1_Text_PtNpc3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JubilifeCity_Flat3_F1_Text_PtNpc3:
	.string "PIKACHU: Piika pi!$"

JubilifeCity_Flat3_F1_EventScript_PtNpc4::
	msgbox JubilifeCity_Flat3_F1_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_Flat3_F1_Text_PtNpc4:
	.string "I moved here for the view of the\n"
	.string "city lights at night.$"
