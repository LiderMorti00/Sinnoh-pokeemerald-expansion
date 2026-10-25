GalacticHQ_Laboratory_MapScripts::
	.byte 0

GalacticHQ_Laboratory_Text_PtNpc1_0:
	.string "I feel awful about what we did... This\n"
	.string "experiment went too far...\p"
	.string "I’m not sure if I can stomach what\n"
	.string "Master Cyrus plans...$"

GalacticHQ_Laboratory_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox GalacticHQ_Laboratory_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_Laboratory_Text_PtNpc2_0:
	.string "Urff... I feel too sickened to say\n"
	.string "anything...\p"
	.string "But that thing we made... What is it\n"
	.string "going to be used for?$"

GalacticHQ_Laboratory_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox GalacticHQ_Laboratory_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_Laboratory_EventScript_PtSign1::
	msgbox GalacticHQ_Laboratory_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign1:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign2::
	msgbox GalacticHQ_Laboratory_Text_PtSign2, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign2:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign3::
	msgbox GalacticHQ_Laboratory_Text_PtSign3, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign3:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign4::
	msgbox GalacticHQ_Laboratory_Text_PtSign4, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign4:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign5::
	msgbox GalacticHQ_Laboratory_Text_PtSign5, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign5:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign6::
	msgbox GalacticHQ_Laboratory_Text_PtSign6, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign6:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign7::
	msgbox GalacticHQ_Laboratory_Text_PtSign7, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign7:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign8::
	msgbox GalacticHQ_Laboratory_Text_PtSign8, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign8:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign9::
	msgbox GalacticHQ_Laboratory_Text_PtSign9, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign9:
	.string "There is something suspended in a\n"
	.string "green fluid...$"

GalacticHQ_Laboratory_EventScript_PtSign10::
	msgbox GalacticHQ_Laboratory_Text_PtSign10, MSGBOX_SIGN
	end

GalacticHQ_Laboratory_Text_PtSign10:
	.string "There is something suspended in a\n"
	.string "green fluid...$"
