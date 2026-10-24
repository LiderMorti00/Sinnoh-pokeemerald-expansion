JubilifeCity_Flat2_F1_MapScripts::
	.byte 0

JubilifeCity_Flat2_F1_EventScript_PtNpc1::
	msgbox JubilifeCity_Flat2_F1_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_Flat2_F1_Text_PtNpc1:
	.string "POKéMON are wonderful, deeply\n"
	.string "mysterious creatures.\p"
	.string "But to Trainers, the key thing is to do\n"
	.string "battle with their POKéMON.\p"
	.string "That's what it boils down to.$"

JubilifeCity_Flat2_F1_EventScript_PtNpc2::
	msgbox JubilifeCity_Flat2_F1_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_Flat2_F1_Text_PtNpc2:
	.string "Hello there, Trainer!\p"
	.string "If you get stumped and don't know\n"
	.string "what to do...\p"
	.string "Talk to people! Talk to everyone you\n"
	.string "see!\p"
	.string "Go places! Go wherever you can!\p"
	.string "You'll find many new places by doing\n"
	.string "just that.$"

JubilifeCity_Flat2_F1_EventScript_PtNpc3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
	msgbox JubilifeCity_Flat2_F1_Text_PtNpc3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JubilifeCity_Flat2_F1_Text_PtNpc3:
	.string "PACHIRISU: Kukkuuh!$"
