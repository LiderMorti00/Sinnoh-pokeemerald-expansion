EternaCity_GalacticBuilding_1F_MapScripts::
	.byte 0

EternaCity_GalacticBuilding_1F_EventScript_GruntWelcome::
	msgbox EternaCity_GalacticBuilding_1F_Text_GruntWelcome, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_1F_Text_GruntWelcome:
	.string "Welcome to TEAM GALACTIC. Are you\n"
	.string "here to donate your POKéMON?\p"
	.string "What? You're not? Then kindly get off\n"
	.string "our property!\p"
	.string "Do we have to bring the pain like we\n"
	.string "did with the Cycle Shop manager?$"


EternaCity_GalacticBuilding_1F_EventScript_GruntStars::
	msgbox EternaCity_GalacticBuilding_1F_Text_GruntStars, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_1F_Text_GruntStars:
	.string "As a group, TEAM GALACTIC has its\n"
	.string "sights set on the stars, not on this\l"
	.string "world!$"


EternaCity_GalacticBuilding_1F_EventScript_Grunt::
	trainerbattle_single TRAINER_CLARENCE, EternaCity_GalacticBuilding_1F_Text_GruntIntro, EternaCity_GalacticBuilding_1F_Text_GruntDefeat
	msgbox EternaCity_GalacticBuilding_1F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_1F_Text_GruntIntro:
	.string "We are acquiring POKéMON for a most\n"
	.string "astonishing undertaking!\p"
	.string "Your meddling won't be tolerated!$"

EternaCity_GalacticBuilding_1F_Text_GruntDefeat:
	.string "I feel like I got meddled with...$"

EternaCity_GalacticBuilding_1F_Text_GruntPost:
	.string "Our astonishing undertaking is most\n"
	.string "certainly breathtaking.\p"
	.string "If you ever hope to see its glorious\n"
	.string "unveiling, then don't meddle with us!$"


EternaCity_GalacticBuilding_1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TERRY, EternaCity_GalacticBuilding_1F_Text_Grunt2Intro, EternaCity_GalacticBuilding_1F_Text_Grunt2Defeat
	msgbox EternaCity_GalacticBuilding_1F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_1F_Text_Grunt2Intro:
	.string "So sorry, sweetie. TEAM GALACTIC has\n"
	.string "no room for kiddies!$"

EternaCity_GalacticBuilding_1F_Text_Grunt2Defeat:
	.string "B-but, deary, you're just a kid!$"

EternaCity_GalacticBuilding_1F_Text_Grunt2Post:
	.string "You wanted to go up? Well, why didn't\n"
	.string "you?$"
