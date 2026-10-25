GalacticHQ_B2F_MapScripts::
	.byte 0

GalacticHQ_B2F_EventScript_Grunt::
	trainerbattle_single TRAINER_ROSE_1, GalacticHQ_B2F_Text_GruntIntro, GalacticHQ_B2F_Text_GruntDefeat
	msgbox GalacticHQ_B2F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

GalacticHQ_B2F_Text_GruntIntro:
	.string "Well, what have we here? A Trainer who’s\n"
	.string "lost their way?$"

GalacticHQ_B2F_Text_GruntDefeat:
	.string "You’re lost but you won! That burns me\n"
	.string "up to eleven!$"

GalacticHQ_B2F_Text_GruntPost:
	.string "You barged right into our HQ? You must\n"
	.string "not know what fear is, kid!$"

GalacticHQ_B2F_EventScript_Grunt2::
	trainerbattle_single TRAINER_ROSE_2, GalacticHQ_B2F_Text_Grunt2Intro, GalacticHQ_B2F_Text_Grunt2Defeat
	msgbox GalacticHQ_B2F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

GalacticHQ_B2F_Text_Grunt2Intro:
	.string "What with that creepy Charon and a kid\n"
	.string "like you around, the HQ’s not the\p"
	.string "same anymore.\p"
	.string "Like, you characters changed the, well,\n"
	.string "character of the place!$"

GalacticHQ_B2F_Text_Grunt2Defeat:
	.string "Oh, sure. Why don’t you just get all\n"
	.string "cocky about it!$"

GalacticHQ_B2F_Text_Grunt2Post:
	.string "Without our special card key, you’re\n"
	.string "not going to get very far.\p"
	.string "Well, non-Team Galactic member? What’s\n"
	.string "your next move?$"

GalacticHQ_B2F_Text_PtNpc1_0:
	.string "OK, to get into Master Cyrus’s speech...\n"
	.string "Uh, where was it now?\p"
	.string "At the Galactic Veilstone Building,\n"
	.string "that much I’m sure about.\p"
	.string "Go in through the door beside the\n"
	.string "reception counter, I think it was?\p"
	.string "Uh? What’d I do with that key anyway?\n"
	.string "Where’s it gone?$"

GalacticHQ_B2F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox GalacticHQ_B2F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_B2F_Text_PtNpc2_0:
	.string "Team Galactic will set free all POKéMON,\n"
	.string "all of nature!\p"
	.string "Uwahahaha! Team Galactic will then own\n"
	.string "it all!$"

GalacticHQ_B2F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox GalacticHQ_B2F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
