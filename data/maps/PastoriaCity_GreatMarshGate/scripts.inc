PastoriaCity_GreatMarshGate_MapScripts::
	.byte 0

PastoriaCity_GreatMarshGate_Text_PtNpc1_0:
	.string "Howdy. You’re playing the Safari Game?\p"
	.string "How would you like to try my game out\n"
	.string "at the same time?\p"
	.string "The rule--yep, there’s only one--is\n"
	.string "real simple.\p"
	.string "All you have to do is capture five or\n"
	.string "more POKéMON in one Safari Game.\p"
	.string "If you can do that, I’ll give you the\n"
	.string "POKéTCH app Matchup Checker.$"

PastoriaCity_GreatMarshGate_Text_PtNpc1_1:
	.string "The Matchup Checker app figures out\n"
	.string "how POKéMON types match up.\p"
	.string "It won’t help tell us how we match up as\n"
	.string "friends, though.$"

PastoriaCity_GreatMarshGate_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_PASTORIA_CITY_OBSERVATORY_GATE_1F_MATCHUPCHECKER, PastoriaCity_GreatMarshGate_EventScript_PtNpc1_ExplainMatchupChecker
	msgbox PastoriaCity_GreatMarshGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	goto PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd
	release
	end

PastoriaCity_GreatMarshGate_EventScript_PtNpc1_ExplainMatchupChecker:
	msgbox PastoriaCity_GreatMarshGate_Text_PtNpc1_1, MSGBOX_DEFAULT
	goto PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd
	release
	end

PastoriaCity_GreatMarshGate_EventScript_PtNpc1_CowgirlEnd:
	release
	end
