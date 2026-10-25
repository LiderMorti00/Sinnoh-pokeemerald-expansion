GalacticHQ_4F_MapScripts::
	.byte 0

GalacticHQ_4F_Text_PtNpc1:
	.string "Cyrus: ...So, you’ve come. You heard my\n"
	.string "speech, I take it.\p"
	.string "Snicker... A big lie, of course.\p"
	.string "It’s true insofar as my intention is to\n"
	.string "create a new world.\p"
	.string "But that world isn’t for the likes of\n"
	.string "Team Galactic.\p"
	.string "I seek an entirely new world solely for\n"
	.string "myself.\p"
	.string "If not, it could never be the complete\n"
	.string "and perfect world.\p"
	.string "You’ve seen my minions of Team\n"
	.string "Galactic.\p"
	.string "You yourself must know that they are\n"
	.string "uniformly useless and incomplete.$"

GalacticHQ_4F_EventScript_PtNpc1::
	msgbox GalacticHQ_4F_Text_PtNpc1, MSGBOX_NPC
	end

GalacticHQ_4F_EventScript_PtSign1::
	msgbox GalacticHQ_4F_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_4F_Text_PtSign1:
	.string "Team Galactic Warp Panels!\p"
	.string "The green warp panel returns you to\n"
	.string "the ground floor.\p"
	.string "Onward to a new universe! -Team\n"
	.string "Galactic$"

GalacticHQ_4F_EventScript_PtSign2::
	msgbox GalacticHQ_4F_Text_PtSign2, MSGBOX_SIGN
	end

GalacticHQ_4F_Text_PtSign2:
	.string "Team Galactic Report$"
