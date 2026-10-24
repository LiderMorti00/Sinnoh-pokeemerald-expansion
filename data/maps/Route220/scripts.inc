Route220_MapScripts::
	.byte 0

Route220_EventScript_Erik::
	trainerbattle_single TRAINER_IMANI, Route220_Text_ErikIntro, Route220_Text_ErikDefeat
	msgbox Route220_Text_ErikPost, MSGBOX_AUTOCLOSE
	end

Route220_Text_ErikIntro:
	.string "On your marks, get set, go!\p"
	.string "...When I say that, let's start.$"

Route220_Text_ErikDefeat:
	.string "Yow-ow-ow-ow! My leg's cramped up!$"

Route220_Text_ErikPost:
	.string "I forgot to do my stretching\n"
	.string "exercises...$"

Route220_EventScript_Vincent::
	trainerbattle_single TRAINER_KYLA, Route220_Text_VincentIntro, Route220_Text_VincentDefeat
	msgbox Route220_Text_VincentPost, MSGBOX_AUTOCLOSE
	end

Route220_Text_VincentIntro:
	.string "OK! Get your breathing in order! OK!\n"
	.string "You're ready to go!$"

Route220_Text_VincentDefeat:
	.string "I let my momentum falter...$"

Route220_Text_VincentPost:
	.string "Listen, I have something important to\n"
	.string "say to you.\p"
	.string "Don't drown in your own talent.$"

Route220_EventScript_Jessica::
	trainerbattle_single TRAINER_DENISE, Route220_Text_JessicaIntro, Route220_Text_JessicaDefeat
	msgbox Route220_Text_JessicaPost, MSGBOX_AUTOCLOSE
	end

Route220_Text_JessicaIntro:
	.string "Swimming is a workout for your entire\n"
	.string "body.\p"
	.string "Jump in and swim! Swim, you!$"

Route220_Text_JessicaDefeat:
	.string "Sunk like a stone!$"

Route220_Text_JessicaPost:
	.string "Well, POKéMON's one thing, but you\n"
	.string "should take up swimming, too!$"

Route220_EventScript_Erica::
	trainerbattle_single TRAINER_BETH, Route220_Text_EricaIntro, Route220_Text_EricaDefeat
	msgbox Route220_Text_EricaPost, MSGBOX_AUTOCLOSE
	end

Route220_Text_EricaIntro:
	.string "The human body floats more easily in\n"
	.string "the sea, so it's easy to swim!$"

Route220_Text_EricaDefeat:
	.string "The sea is salty, but all I taste is\n"
	.string "bitterness...$"

Route220_Text_EricaPost:
	.string "I've got that sinking feeling...$"

Route220_EventScript_Adrian::
	trainerbattle_single TRAINER_TARA, Route220_Text_AdrianIntro, Route220_Text_AdrianDefeat
	msgbox Route220_Text_AdrianPost, MSGBOX_AUTOCLOSE
	end

Route220_Text_AdrianIntro:
	.string "I only live to swim. Teach me what's so\n"
	.string "fun about POKéMON!$"

Route220_Text_AdrianDefeat:
	.string "Oh, yeah, that was fun! I learned\n"
	.string "something good!$"

Route220_Text_AdrianPost:
	.string "It's what I live for! POKéMON!$"

Route220_EventScript_Katelyn::
	trainerbattle_single TRAINER_MISSY, Route220_Text_KatelynIntro, Route220_Text_KatelynDefeat
	msgbox Route220_Text_KatelynPost, MSGBOX_AUTOCLOSE
	end

Route220_Text_KatelynIntro:
	.string "I may not look it now, but I'm a star.\n"
	.string "I'm always with my POKéMON.$"

Route220_Text_KatelynDefeat:
	.string "I lost, but at least I had fun.$"

Route220_Text_KatelynPost:
	.string "If it were an underwater POKéMON\n"
	.string "show, I would have shined.$"

Route220_EventScript_Claire::
	trainerbattle_single TRAINER_ALICE, Route220_Text_ClaireIntro, Route220_Text_ClaireDefeat
	msgbox Route220_Text_ClairePost, MSGBOX_AUTOCLOSE
	end

Route220_Text_ClaireIntro:
	.string "I bought a new bikini! It's this year's\n"
	.string "newest model!$"

Route220_Text_ClaireDefeat:
	.string "Psssssh!$"

Route220_Text_ClairePost:
	.string "I bought the wrong size of bikini. It's\n"
	.string "a little too snug...$"
