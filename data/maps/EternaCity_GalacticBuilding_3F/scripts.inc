EternaCity_GalacticBuilding_3F_MapScripts::
	.byte 0

EternaCity_GalacticBuilding_3F_EventScript_GruntOrdinary::
	msgbox EternaCity_GalacticBuilding_3F_Text_GruntOrdinary, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_3F_Text_GruntOrdinary:
	.string "Ordinary people like you can't\n"
	.string "understand TEAM GALACTIC's grand\l"
	.string "designs!\p"
	.string "Come to think of it... I don't even know\n"
	.string "what's going on...$"


EternaCity_GalacticBuilding_3F_EventScript_Grunt::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_TREECKO, EternaCity_GalacticBuilding_3F_Text_GruntIntro, EternaCity_GalacticBuilding_3F_Text_GruntDefeat
	msgbox EternaCity_GalacticBuilding_3F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_3F_Text_GruntIntro:
	.string "Why, thank you!\p"
	.string "We love it when people come to us to\n"
	.string "donate their POKéMON!$"

EternaCity_GalacticBuilding_3F_Text_GruntDefeat:
	.string "What do you think you're doing?!$"

EternaCity_GalacticBuilding_3F_Text_GruntPost:
	.string "You can catch POKéMON anywhere.\n"
	.string "What's so special about them?\p"
	.string "Trainers that lose theirs should quit\n"
	.string "whining and catch some more!$"


EternaCity_GalacticBuilding_3F_EventScript_Travon::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_MUDKIP, EternaCity_GalacticBuilding_3F_Text_TravonIntro, EternaCity_GalacticBuilding_3F_Text_TravonDefeat
	msgbox EternaCity_GalacticBuilding_3F_Text_TravonPost, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_3F_Text_TravonIntro:
	.string "Our mission is to implement our\n"
	.string "operations without question.\p"
	.string "It is all for the new world order that\n"
	.string "our boss will lead!$"

EternaCity_GalacticBuilding_3F_Text_TravonDefeat:
	.string "This won't go unpunished...$"

EternaCity_GalacticBuilding_3F_Text_TravonPost:
	.string "I'm willing to do anything to get ahead\n"
	.string "in TEAM GALACTIC.\p"
	.string "One day you'll see what we are all\n"
	.string "about.\p"
	.string "It's wonder, compassion, splendor,\n"
	.string "humor, power, awe, and tragedy!$"
