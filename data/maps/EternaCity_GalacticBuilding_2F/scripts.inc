EternaCity_GalacticBuilding_2F_MapScripts::
	.byte 0

EternaCity_GalacticBuilding_2F_EventScript_GruntEnergy::
	msgbox EternaCity_GalacticBuilding_2F_Text_GruntEnergy, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_2F_Text_GruntEnergy:
	.string "TEAM GALACTIC is working hard to find\n"
	.string "new energy sources for the future!$"


EternaCity_GalacticBuilding_2F_EventScript_GruntResearch::
	msgbox EternaCity_GalacticBuilding_2F_Text_GruntResearch, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_2F_Text_GruntResearch:
	.string "We are conducting research on new\n"
	.string "forms of energy!\p"
	.string "We want to harness the mysterious\n"
	.string "power of POKéMON and use it as\l"
	.string "energy!$"


EternaCity_GalacticBuilding_2F_EventScript_Grunt::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_6, EternaCity_GalacticBuilding_2F_Text_GruntIntro, EternaCity_GalacticBuilding_2F_Text_GruntDefeat
	msgbox EternaCity_GalacticBuilding_2F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_2F_Text_GruntIntro:
	.string "Our objectives are incredible! Too\n"
	.string "incredible for me to understand!\p"
	.string "I'll fight blindly to defend them, and\n"
	.string "your intrusion won't be forgiven!$"

EternaCity_GalacticBuilding_2F_Text_GruntDefeat:
	.string "What was I fighting for, again?$"

EternaCity_GalacticBuilding_2F_Text_GruntPost:
	.string "What do you have against taking\n"
	.string "POKéMON from others?\p"
	.string "Look in any field or forest! Those\n"
	.string "things aren't exactly rare!$"


EternaCity_GalacticBuilding_2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_7, EternaCity_GalacticBuilding_2F_Text_Grunt2Intro, EternaCity_GalacticBuilding_2F_Text_Grunt2Defeat
	msgbox EternaCity_GalacticBuilding_2F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_2F_Text_Grunt2Intro:
	.string "Let's see how good this POKéMON is! I\n"
	.string "stole it from some weak Trainer.$"

EternaCity_GalacticBuilding_2F_Text_Grunt2Defeat:
	.string "What is this?!$"

EternaCity_GalacticBuilding_2F_Text_Grunt2Post:
	.string "Wimpy little POKéMON...\p"
	.string "When I get promoted, I'll demand\n"
	.string "better stolen POKéMON.$"
