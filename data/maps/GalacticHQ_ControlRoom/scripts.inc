GalacticHQ_ControlRoom_MapScripts::
	.byte 0

GalacticHQ_ControlRoom_Text_PtNpc1:
	.string "Our boss crafted a Red Chain from\n"
	.string "crystals he took from the three\p"
	.string "POKéMON.\p"
	.string "That Red Chain is what he needed to\n"
	.string "shackle something on Mt. Coronet.\p"
	.string "It’s also apparently needed for\n"
	.string "creating something.\p"
	.string "But that’s all I know. Who knows what\n"
	.string "he’s planning to do up there.$"

GalacticHQ_ControlRoom_EventScript_PtNpc1::
	msgbox GalacticHQ_ControlRoom_Text_PtNpc1, MSGBOX_NPC
	end

GalacticHQ_ControlRoom_Text_PtNpc2:
	.string "Charon: Humph. Saturn and even Cyrus\n"
	.string "fall to a mere child...\p"
	.string "Team Galactic’s state of affairs is\n"
	.string "worrying...\p"
	.string "That plan of Cyrus’s atop Mt. Coronet,\n"
	.string "too... Who knows if it will work.\p"
	.string "...Hmm. Perhaps another option needs to\n"
	.string "be considered.\p"
	.string "One befitting the genius of Charon!$"

GalacticHQ_ControlRoom_EventScript_PtNpc2::
	msgbox GalacticHQ_ControlRoom_Text_PtNpc2, MSGBOX_NPC
	end

GalacticHQ_ControlRoom_EventScript_PtSign1::
	msgbox GalacticHQ_ControlRoom_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign1:
	.string "It’s Team Galactic’s sinister machine.\n"
	.string "UXIE had been sealed inside it.$"

GalacticHQ_ControlRoom_EventScript_PtSign2::
	msgbox GalacticHQ_ControlRoom_Text_PtSign2, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign2:
	.string "It’s Team Galactic’s sinister machine.\n"
	.string "MESPRIT had been sealed inside it.$"

GalacticHQ_ControlRoom_EventScript_PtSign3::
	msgbox GalacticHQ_ControlRoom_Text_PtSign3, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign3:
	.string "It’s Team Galactic’s sinister machine.\n"
	.string "AZELF had been sealed inside it.$"

GalacticHQ_ControlRoom_EventScript_PtSign4::
	msgbox GalacticHQ_ControlRoom_Text_PtSign4, MSGBOX_SIGN
	end

GalacticHQ_ControlRoom_Text_PtSign4:
	.string "The button has been pressed already.\n"
	.string "You have to leave.$"
