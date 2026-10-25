GalacticHQ_3F_MapScripts::
	.byte 0

GalacticHQ_3F_EventScript_Grunt::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, GalacticHQ_3F_Text_GruntIntro, GalacticHQ_3F_Text_GruntDefeat
	msgbox GalacticHQ_3F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

GalacticHQ_3F_Text_GruntIntro:
	.string "Intruder alert! There’s something\n"
	.string "smelly about you!$"

GalacticHQ_3F_Text_GruntDefeat:
	.string "Oh, it was my own POKéMON’s smell...$"

GalacticHQ_3F_Text_GruntPost:
	.string "How could we arouse suspicion? We’re\n"
	.string "Team Galactic, and this is our HQ!$"

GalacticHQ_3F_EventScript_Grunt2::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, GalacticHQ_3F_Text_Grunt2Intro, GalacticHQ_3F_Text_Grunt2Defeat
	msgbox GalacticHQ_3F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

GalacticHQ_3F_Text_Grunt2Intro:
	.string "Are you enjoying your unescorted,\n"
	.string "unauthorized, and unsettling tour\p"
	.string "of Team Galactic HQ?$"

GalacticHQ_3F_Text_Grunt2Defeat:
	.string "Let me do what I want!$"

GalacticHQ_3F_Text_Grunt2Post:
	.string "It doesn’t matter what happens to the\n"
	.string "Team Galactic HQ building.\p"
	.string "Soon, all will belong to Team Galactic,\n"
	.string "anyway!$"

GalacticHQ_3F_EventScript_Grunt3::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, GalacticHQ_3F_Text_Grunt3Intro, GalacticHQ_3F_Text_Grunt3Defeat
	msgbox GalacticHQ_3F_Text_Grunt3Post, MSGBOX_AUTOCLOSE
	end

GalacticHQ_3F_Text_Grunt3Intro:
	.string "Hey there, little Trainer! You’re\n"
	.string "famous among Team Galactic.\p"
	.string "The order has been issued--we get a\n"
	.string "promotion if we put you down!$"

GalacticHQ_3F_Text_Grunt3Defeat:
	.string "I just blew my promotion...$"

GalacticHQ_3F_Text_Grunt3Post:
	.string "What’s so special about you anyway?\p"
	.string "You’re just like any other little kid\n"
	.string "Trainer you can find anywhere!$"

GalacticHQ_3F_EventScript_Grunt4::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, GalacticHQ_3F_Text_Grunt4Intro, GalacticHQ_3F_Text_Grunt4Defeat
	msgbox GalacticHQ_3F_Text_Grunt4Post, MSGBOX_AUTOCLOSE
	end

GalacticHQ_3F_Text_Grunt4Intro:
	.string "You’re too young to understand the\n"
	.string "changing times!\p"
	.string "Stand aside and let Team Galactic\n"
	.string "shape the future!$"

GalacticHQ_3F_Text_Grunt4Defeat:
	.string "I failed to read the flow of battle, and\n"
	.string "your power was unfathomable...$"

GalacticHQ_3F_Text_Grunt4Post:
	.string "Come on, I said something cool before\n"
	.string "the battle.\p"
	.string "You need to read the dramatic\n"
	.string "situation better here!$"

GalacticHQ_3F_Text_PtNpc1_0:
	.string "The locked doors only open with a\n"
	.string "special key.\p"
	.string "Now, if I was a comedy relief sort of\n"
	.string "bad guy, I’d tell you...\p"
	.string "But I really don’t know!$"

GalacticHQ_3F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox GalacticHQ_3F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_3F_EventScript_PtSign1::
	msgbox GalacticHQ_3F_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_3F_Text_PtSign1:
	.string "The Team Galactic credo! Everything\n"
	.string "belongs to Team Galactic!\p"
	.string "Look beyond the world--space will\n"
	.string "become Team Galactic’s!$"
