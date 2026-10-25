ResortArea_RibbonSyndicate_F1_MapScripts::
	.byte 0

ResortArea_RibbonSyndicate_F1_Text_PtNpc1_0:
	.string "Welcome! We’ve looked forward to\n"
	.string "seeing you, {PLAYER}.\p"
	.string "I do hope you will enjoy the luxurious\n"
	.string "atmosphere and services that only\p"
	.string "we can provide.$"

ResortArea_RibbonSyndicate_F1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F1_Text_PtNpc2_0:
	.string "Just being in here is a sign of status,\n"
	.string "just so you know.$"

ResortArea_RibbonSyndicate_F1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F1_Text_PtNpc3:
	.string "I wish men would pay more attention to\n"
	.string "the way they dress themselves...$"

ResortArea_RibbonSyndicate_F1_EventScript_PtNpc3::
	msgbox ResortArea_RibbonSyndicate_F1_Text_PtNpc3, MSGBOX_NPC
	end

ResortArea_RibbonSyndicate_F1_Text_PtNpc4_0:
	.string "SKITTY: Skiii!$"

ResortArea_RibbonSyndicate_F1_EventScript_PtNpc4::
	lock
	faceplayer
	playmoncry SPECIES_SKITTY, CRY_MODE_NORMAL
	msgbox ResortArea_RibbonSyndicate_F1_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F1_Text_PtNpc5_0:
	.string "PSYDUCK: Gyaugyau!$"

ResortArea_RibbonSyndicate_F1_EventScript_PtNpc5::
	lock
	faceplayer
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox ResortArea_RibbonSyndicate_F1_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end
