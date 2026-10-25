FightArea_FrontierGate_MapScripts::
	.byte 0

FightArea_FrontierGate_Text_PtNpc1_0:
	.string "The Vs. Recorder is sure nifty!\p"
	.string "Touching the screen shows you how\n"
	.string "much BP you have.$"

FightArea_FrontierGate_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox FightArea_FrontierGate_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

FightArea_FrontierGate_Text_PtNpc2_0:
	.string "The five facilities of the Battle\n"
	.string "Frontier are...\p"
	.string "Tower.\p"
	.string "Hall.\p"
	.string "Castle.\p"
	.string "Factory.\p"
	.string "And Arcade.\p"
	.string "How do you make an acronym out of\n"
	.string "that? THCFA?\p"
	.string "Rearrange those letters, maybe?\n"
	.string "FATCH! CHAFT!\p"
	.string "...Nope! Nothing works! Didn’t anyone\n"
	.string "think of this?!$"

FightArea_FrontierGate_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox FightArea_FrontierGate_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

FightArea_FrontierGate_Text_PtNpc3_0:
	.string "The Battle Frontier is up ahead!\p"
	.string "What kinds of Trainers will I see? What\n"
	.string "battles will I experience?\p"
	.string "It’s a whole new adventure for me!$"

FightArea_FrontierGate_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox FightArea_FrontierGate_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

FightArea_FrontierGate_Text_PtNpc4_0:
	.string "Welcome to the Battle Frontier!\p"
	.string "Should I explain how the Battle Castle\n"
	.string "works?$"

FightArea_FrontierGate_Text_PtNpc4_1:
	.string "The Battle Castle is at the lower-left\n"
	.string "corner of the Battle Frontier.\p"
	.string "Here, you are provided with Castle\n"
	.string "Points, CP, that you must manage.\p"
	.string "The CP are used for healing POKéMON,\n"
	.string "renting items or Berries, and so on.\p"
	.string "The objective is to keep a winning\n"
	.string "streak alive while managing your CP.$"

FightArea_FrontierGate_Text_PtNpc4_2:
	.string "We hope you enjoy your visit!$"

FightArea_FrontierGate_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox FightArea_FrontierGate_Text_PtNpc4_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, FightArea_FrontierGate_EventScript_PtNpc4_ExplainBattleCastle
	goto_if_eq VAR_RESULT, NO, FightArea_FrontierGate_EventScript_PtNpc4_EnjoyVisitBattleCastle
	release
	end

FightArea_FrontierGate_EventScript_PtNpc4_ExplainBattleCastle:
	msgbox FightArea_FrontierGate_Text_PtNpc4_1, MSGBOX_DEFAULT
	goto FightArea_FrontierGate_EventScript_PtNpc4_EnjoyVisitBattleCastle
	release
	end

FightArea_FrontierGate_EventScript_PtNpc4_EnjoyVisitBattleCastle:
	msgbox FightArea_FrontierGate_Text_PtNpc4_2, MSGBOX_DEFAULT
	goto FightArea_FrontierGate_EventScript_PtNpc4_AttendantBattleCastleEnd
	release
	end

FightArea_FrontierGate_EventScript_PtNpc4_AttendantBattleCastleEnd:
	release
	end
