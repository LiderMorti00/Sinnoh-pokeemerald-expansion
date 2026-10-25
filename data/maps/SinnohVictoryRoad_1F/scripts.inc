SinnohVictoryRoad_1F_MapScripts::
	.byte 0

SinnohVictoryRoad_1F_EventScript_Bryce::
	trainerbattle_single TRAINER_CINDY_5, SinnohVictoryRoad_1F_Text_BryceIntro, SinnohVictoryRoad_1F_Text_BryceDefeat
	msgbox SinnohVictoryRoad_1F_Text_BrycePost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_1F_Text_BryceIntro:
	.string "I am a Psychic! I can see your future!$"

SinnohVictoryRoad_1F_Text_BryceDefeat:
	.string "So be it! I will now divulge what I know\n"
	.string "of your future... Hmm!$"

SinnohVictoryRoad_1F_Text_BrycePost:
	.string "I see it now!\p"
	.string "You will battle the Elite Four of the\n"
	.string "POKéMON League!$"

SinnohVictoryRoad_1F_EventScript_Miles::
	trainerbattle_single TRAINER_CINDY_6, SinnohVictoryRoad_1F_Text_MilesIntro, SinnohVictoryRoad_1F_Text_MilesDefeat
	msgbox SinnohVictoryRoad_1F_Text_MilesPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_1F_Text_MilesIntro:
	.string "My POKéMON knows karate! I’m warning\n"
	.string "you, it’s a tough one!$"

SinnohVictoryRoad_1F_Text_MilesDefeat:
	.string "I’ve met my match in strength!$"

SinnohVictoryRoad_1F_Text_MilesPost:
	.string "I’ve made it this far in life using the\n"
	.string "karate I learned on the Internet!$"

SinnohVictoryRoad_1F_EventScript_Hana::
	trainerbattle_single TRAINER_JESSICA_1, SinnohVictoryRoad_1F_Text_HanaIntro, SinnohVictoryRoad_1F_Text_HanaDefeat
	msgbox SinnohVictoryRoad_1F_Text_HanaPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_1F_Text_HanaIntro:
	.string "I keep battling so I can soar ever\n"
	.string "higher into the skies!$"

SinnohVictoryRoad_1F_Text_HanaDefeat:
	.string "It seems I’ve been grounded...$"

SinnohVictoryRoad_1F_Text_HanaPost:
	.string "The wings of freedom...\p"
	.string "I know I’ll find them if I can win my way\n"
	.string "through the POKéMON League...$"

SinnohVictoryRoad_1F_EventScript_Mariah::
	trainerbattle_single TRAINER_JESSICA_2, SinnohVictoryRoad_1F_Text_MariahIntro, SinnohVictoryRoad_1F_Text_MariahDefeat
	msgbox SinnohVictoryRoad_1F_Text_MariahPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_1F_Text_MariahIntro:
	.string "Show me how you’ve battled to get\n"
	.string "here! Let’s do this!$"

SinnohVictoryRoad_1F_Text_MariahDefeat:
	.string "So, that’s how you battled...?$"

SinnohVictoryRoad_1F_Text_MariahPost:
	.string "Once you emerge from Victory Road, the\n"
	.string "POKéMON League lies directly\p"
	.string "ahead...\p"
	.string "But many Trainers fail to ever find\n"
	.string "their way on Victory Road...$"

SinnohVictoryRoad_1F_EventScript_Edgar::
	trainerbattle_single TRAINER_JESSICA_3, SinnohVictoryRoad_1F_Text_EdgarIntro, SinnohVictoryRoad_1F_Text_EdgarDefeat
	msgbox SinnohVictoryRoad_1F_Text_EdgarPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_1F_Text_EdgarIntro:
	.string "I can sense that your POKéMON have a\n"
	.string "lot of trust in you.\p"
	.string "You and your POKéMON... You seem to be\n"
	.string "aglow.$"

SinnohVictoryRoad_1F_Text_EdgarDefeat:
	.string "Ah, I understand it now!$"

SinnohVictoryRoad_1F_Text_EdgarPost:
	.string "Neither POKéMON nor people live\n"
	.string "forever.\p"
	.string "But it is the very frailty of life that\n"
	.string "allows us to shine!$"

SinnohVictoryRoad_1F_EventScript_Clinton::
	trainerbattle_single TRAINER_JESSICA_4, SinnohVictoryRoad_1F_Text_ClintonIntro, SinnohVictoryRoad_1F_Text_ClintonDefeat
	msgbox SinnohVictoryRoad_1F_Text_ClintonPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_1F_Text_ClintonIntro:
	.string "This is a place where tough Trainers\n"
	.string "naturally congregate.\p"
	.string "It’s ideal for training!$"

SinnohVictoryRoad_1F_Text_ClintonDefeat:
	.string "That’s why I like it here; I get to\n"
	.string "battle tough characters like you.$"

SinnohVictoryRoad_1F_Text_ClintonPost:
	.string "When two roads diverge, you must\n"
	.string "choose the path less traveled...$"

SinnohVictoryRoad_1F_Text_PtNpc1:
	.string "Let me size you up...\p"
	.string "You’ll meet many, many POKéMON. That’s\n"
	.string "what you should be thinking.\p"
	.string "Eventually, the world will appear\n"
	.string "bigger to you!$"

SinnohVictoryRoad_1F_EventScript_PtNpc1::
	msgbox SinnohVictoryRoad_1F_Text_PtNpc1, MSGBOX_NPC
	end
