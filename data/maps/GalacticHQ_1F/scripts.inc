GalacticHQ_1F_MapScripts::
	.byte 0

GalacticHQ_1F_EventScript_Grunt::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, GalacticHQ_1F_Text_GruntIntro, GalacticHQ_1F_Text_GruntDefeat
	msgbox GalacticHQ_1F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

GalacticHQ_1F_Text_GruntIntro:
	.string "Who do you think you are? Desecrating\n"
	.string "the halls of our HQ?!$"

GalacticHQ_1F_Text_GruntDefeat:
	.string "A tough little Trainer is what you are...$"

GalacticHQ_1F_Text_GruntPost:
	.string "In our HQ, we get around by taking warp\n"
	.string "panels.\p"
	.string "I’d like to see you figure out how they\n"
	.string "connect.$"

GalacticHQ_1F_EventScript_Fredrick::
	trainerbattle_single TRAINER_GABRIELLE_1, GalacticHQ_1F_Text_FredrickIntro, GalacticHQ_1F_Text_FredrickDefeat
	msgbox GalacticHQ_1F_Text_FredrickPost, MSGBOX_AUTOCLOSE
	end

GalacticHQ_1F_Text_FredrickIntro:
	.string "Hey, now! Our HQ is a state-of-the- art\n"
	.string "facility!\p"
	.string "A snot-nosed kid like you ought to\n"
	.string "keep your dirty hands to yourself!$"

GalacticHQ_1F_Text_FredrickDefeat:
	.string "You and your POKéMON weren’t part of\n"
	.string "my calculations...$"

GalacticHQ_1F_Text_FredrickPost:
	.string "Our boss is trying to create an\n"
	.string "entirely new world.\p"
	.string "A world only for us! For Team Galactic!$"

GalacticHQ_1F_Text_PtNpc1_0:
	.string "Welcome. This is Team Galactic Headqu...\p"
	.string "I’m sorry, this is the Galactic\n"
	.string "Veilstone Building.\p"
	.string "Cosmic energy for the win!\p"
	.string "Wouldn’t it be wonderful if we could\n"
	.string "harness that boundless energy?$"

GalacticHQ_1F_Text_PtNpc1_1:
	.string "Welcome. This is Team Galactic Headqu...\p"
	.string "I’m sorry, this is the Galactic\n"
	.string "Veilstone Building.\p"
	.string "I’m not certain if it’s a good thing or\n"
	.string "not, but we have no plans now.$"

GalacticHQ_1F_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_GALACTIC_LEFT_LAKE_VALOR, GalacticHQ_1F_EventScript_PtNpc1_WeHaveNoPlansNow
	msgbox GalacticHQ_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_EventScript_PtNpc1_WeHaveNoPlansNow:
	msgbox GalacticHQ_1F_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_Text_PtNpc2_0:
	.string "Team Galactic conducts R&D around the\n"
	.string "clock here.\p"
	.string "We focus on the development of new\n"
	.string "energy resources.$"

GalacticHQ_1F_Text_PtNpc2_1:
	.string "This is where we, Team Galactic, work.\n"
	.string "What are we supposed to do?\p"
	.string "I’m not sure how, but we’re supposed to\n"
	.string "chase our dream.\p"
	.string "Our dream of making a wonderful new\n"
	.string "world!$"

GalacticHQ_1F_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_SN_GALACTIC_LEFT_LAKE_VALOR, GalacticHQ_1F_EventScript_PtNpc2_ThisIsWhereWeWork
	msgbox GalacticHQ_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_EventScript_PtNpc2_ThisIsWhereWeWork:
	msgbox GalacticHQ_1F_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_Text_PtNpc3_0:
	.string "You’re too young for us... You can join\n"
	.string "us when you’re older.$"

GalacticHQ_1F_Text_PtNpc3_1:
	.string "I wonder where our boss went...$"

GalacticHQ_1F_EventScript_PtNpc3::
	lock
	faceplayer
	goto_if_set FLAG_SN_GALACTIC_LEFT_LAKE_VALOR, GalacticHQ_1F_EventScript_PtNpc3_IWonderWhereBossWent
	msgbox GalacticHQ_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_EventScript_PtNpc3_IWonderWhereBossWent:
	msgbox GalacticHQ_1F_Text_PtNpc3_1, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_Text_PtNpc4_0:
	.string "We, Team Galactic, will take everything\n"
	.string "that can be taken!\p"
	.string "We will eliminate everything that is\n"
	.string "not needed!\p"
	.string "That is Team Galactic’s policy!$"

GalacticHQ_1F_Text_PtNpc4_1:
	.string "We, Team Galactic, will take everything\n"
	.string "that can be taken!\p"
	.string "We will eliminate everything that is\n"
	.string "not needed!\p"
	.string "That is Team Galactic’s policy!\p"
	.string "At least it used to be. There’s nothing\n"
	.string "left now...$"

GalacticHQ_1F_EventScript_PtNpc4::
	lock
	faceplayer
	goto_if_set FLAG_SN_GALACTIC_LEFT_LAKE_VALOR, GalacticHQ_1F_EventScript_PtNpc4_NothingLeftNow
	msgbox GalacticHQ_1F_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_EventScript_PtNpc4_NothingLeftNow:
	msgbox GalacticHQ_1F_Text_PtNpc4_1, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_Text_PtNpc5_0:
	.string "Saturn: So, it’s you...\p"
	.string "I’ve heard about you and what took\n"
	.string "place at the Spear Pillar.\p"
	.string "Our leader, Master Cyrus, hated the\n"
	.string "very idea of spirit.\p"
	.string "He hated spirit for being incomplete.\p"
	.string "And yet, using fiery exhortations, he\n"
	.string "rallied the spirit of others.\p"
	.string "What he hated most, he used to control\n"
	.string "others. Isn’t that ironic?\p"
	.string "That fascinated me. I wanted to see\n"
	.string "what he would do.\p"
	.string "And I did. At his side. But it’s over.\p"
	.string "A world without spirit... Who would want\n"
	.string "such a thing?!\p"
	.string "So, what now...? What to do with Team\n"
	.string "Galactic?\p"
	.string "But I’ve learned that extremism is\n"
	.string "never the solution...\p"
	.string "Perhaps we should really be searching\n"
	.string "for new sources of energy.\p"
	.string "Instead of lying about it through our\n"
	.string "commercials.$"

GalacticHQ_1F_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox GalacticHQ_1F_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

GalacticHQ_1F_EventScript_PtSign1::
	msgbox GalacticHQ_1F_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_1F_Text_PtSign1:
	.string "The Team Galactic credo! Everything\n"
	.string "belongs to Team Galactic!\p"
	.string "Look beyond the world--space will\n"
	.string "become Team Galactic’s!$"
