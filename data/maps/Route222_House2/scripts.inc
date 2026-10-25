Route222_House2_MapScripts::
	.byte 0

Route222_House2_EventScript_Janet::
	trainerbattle_single TRAINER_SAWYER_1, Route222_House2_Text_JanetIntro, Route222_House2_Text_JanetDefeat
	msgbox Route222_House2_Text_JanetPost, MSGBOX_AUTOCLOSE
	end

Route222_House2_Text_JanetIntro:
	.string "Bika bikabika! Pigachu!$"

Route222_House2_Text_JanetDefeat:
	.string "Pikachu...$"

Route222_House2_Text_JanetPost:
	.string "Pika...\p"
	.string "I’ll need a lot more practice to become\n"
	.string "a real PIKACHU...$"

Route222_House2_Text_PtNpc1_0:
	.string "PIKACHU: Pikachuu!$"

Route222_House2_EventScript_PtNpc1::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox Route222_House2_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

Route222_House2_Text_PtNpc2_0:
	.string "PIKACHU: Pikachuu!$"

Route222_House2_EventScript_PtNpc2::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox Route222_House2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

Route222_House2_Text_PtNpc3_0:
	.string "PIKACHU: Pikachuu!$"

Route222_House2_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox Route222_House2_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

Route222_House2_Text_PtNpc4_0:
	.string "PIKACHU: Pikachuu!$"

Route222_House2_EventScript_PtNpc4::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox Route222_House2_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

Route222_House2_Text_PtNpc5_0:
	.string "PIKACHU: Pikachuu!$"

Route222_House2_EventScript_PtNpc5::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox Route222_House2_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

Route222_House2_Text_PtNpc6_0:
	.string "Eehehe! I’m going for the POKéMON\n"
	.string "Championship with only PIKACHU!$"

Route222_House2_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox Route222_House2_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end
