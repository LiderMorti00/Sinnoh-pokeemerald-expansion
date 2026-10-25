GalacticHQ_2F_MapScripts::
	.byte 0

GalacticHQ_2F_EventScript_Grunt::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, GalacticHQ_2F_Text_GruntIntro, GalacticHQ_2F_Text_GruntDefeat
	msgbox GalacticHQ_2F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

GalacticHQ_2F_Text_GruntIntro:
	.string "I’m, like, this close to getting my\n"
	.string "promotion to Commander.\p"
	.string "I’ll impress our great boss by making\n"
	.string "you my newest trophy!$"

GalacticHQ_2F_Text_GruntDefeat:
	.string "...I wish this never happened.$"

GalacticHQ_2F_Text_GruntPost:
	.string "Losing sets me back to square one...\p"
	.string "I’ll probably get busted down to the\n"
	.string "gruntiest of the grunts... Humph!$"

GalacticHQ_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, GalacticHQ_2F_Text_Grunt2Intro, GalacticHQ_2F_Text_Grunt2Defeat
	msgbox GalacticHQ_2F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

GalacticHQ_2F_Text_Grunt2Intro:
	.string "Having fun scampering around our HQ,\n"
	.string "you sneaky intruder?\p"
	.string "Your trail blazing will go out in a blaze\n"
	.string "of glory right now!$"

GalacticHQ_2F_Text_Grunt2Defeat:
	.string "Your trailblazing streak lives on!$"

GalacticHQ_2F_Text_Grunt2Post:
	.string "So what, you have momentum... It’s too\n"
	.string "late. The experiment’s done!$"

GalacticHQ_2F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, GalacticHQ_2F_Text_Grunt3Intro, GalacticHQ_2F_Text_Grunt3Defeat
	msgbox GalacticHQ_2F_Text_Grunt3Post, MSGBOX_AUTOCLOSE
	end

GalacticHQ_2F_Text_Grunt3Intro:
	.string "You should be tired out by now. It’s\n"
	.string "Team Galactic’s turn to shine!$"

GalacticHQ_2F_Text_Grunt3Defeat:
	.string "What? I don’t get it. What’s your rush?$"

GalacticHQ_2F_Text_Grunt3Post:
	.string "POKéMON are that important to you? Is\n"
	.string "that what this is all about?$"

GalacticHQ_2F_EventScript_Darrius::
	trainerbattle_single TRAINER_GRUNT_MUSEUM_2, GalacticHQ_2F_Text_DarriusIntro, GalacticHQ_2F_Text_DarriusDefeat
	msgbox GalacticHQ_2F_Text_DarriusPost, MSGBOX_AUTOCLOSE
	end

GalacticHQ_2F_Text_DarriusIntro:
	.string "I won’t let you disrupt our research!\n"
	.string "This is for Team Galactic!$"

GalacticHQ_2F_Text_DarriusDefeat:
	.string "I got whipped... I look pathetic...$"

GalacticHQ_2F_Text_DarriusPost:
	.string "Our boss is a scientific genius!\p"
	.string "He will make the power of mythical\n"
	.string "POKéMON his own!$"

GalacticHQ_2F_EventScript_PtSign1::
	msgbox GalacticHQ_2F_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign1:
	.string "It’s a bed... Want to take a rest?$"

GalacticHQ_2F_EventScript_PtSign2::
	msgbox GalacticHQ_2F_Text_PtSign2, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign2:
	.string "Team Galactic Nap Room\p"
	.string "Ensure the bed is unoccupied before\n"
	.string "getting into it!$"

GalacticHQ_2F_EventScript_PtSign3::
	msgbox GalacticHQ_2F_Text_PtSign3, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign3:
	.string "Team Galactic TV Room\p"
	.string "State-of-the-art audio & video\n"
	.string "system for member use only!\p"
	.string "Onward to a new universe! Team\n"
	.string "Galactic!$"

GalacticHQ_2F_EventScript_PtSign4::
	msgbox GalacticHQ_2F_Text_PtSign4, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign4:
	.string "The Team Galactic credo! Everything\n"
	.string "belongs to Team Galactic!\p"
	.string "Look beyond the world--space will\n"
	.string "become Team Galactic’s!$"

GalacticHQ_2F_EventScript_PtSign5::
	msgbox GalacticHQ_2F_Text_PtSign5, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign5:
	.string "There is a notice taped on to the\n"
	.string "refrigerator.\p"
	.string "“Drink all you wish and gain the energy\n"
	.string "to move us forward!”\p"
	.string "The refrigerator is filled with murky,\n"
	.string "sinister drinks and nothing else...$"

GalacticHQ_2F_EventScript_PtSign6::
	msgbox GalacticHQ_2F_Text_PtSign6, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign6:
	.string "There is a notice tacked on to the\n"
	.string "kitchen sink.\p"
	.string "“Health and prosperity through the\n"
	.string "partaking of favorite foods!”\p"
	.string "Foul, unidentifiable substances are\n"
	.string "caked around the sink...$"

GalacticHQ_2F_EventScript_PtSign7::
	msgbox GalacticHQ_2F_Text_PtSign7, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign7:
	.string "There is a notice tacked on to the\n"
	.string "kitchen sink.\p"
	.string "“Health and prosperity through the\n"
	.string "partaking of favorite foods!”\p"
	.string "Foul, unidentifiable substances are\n"
	.string "caked around the sink...$"

GalacticHQ_2F_EventScript_PtSign8::
	msgbox GalacticHQ_2F_Text_PtSign8, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign8:
	.string "It’s a bed... Want to take a rest?$"

GalacticHQ_2F_EventScript_PtSign9::
	msgbox GalacticHQ_2F_Text_PtSign9, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign9:
	.string "It’s a bed... Want to take a rest?$"

GalacticHQ_2F_EventScript_PtSign10::
	msgbox GalacticHQ_2F_Text_PtSign10, MSGBOX_SIGN
	end

GalacticHQ_2F_Text_PtSign10:
	.string "It’s a bed... Want to take a rest?$"
