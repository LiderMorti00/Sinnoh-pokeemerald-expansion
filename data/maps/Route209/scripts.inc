Route209_MapScripts::
	.byte 0

Route209_EventScript_Albert::
	trainerbattle_single TRAINER_SHEILA, Route209_Text_AlbertIntro, Route209_Text_AlbertDefeat
	msgbox Route209_Text_AlbertPost, MSGBOX_AUTOCLOSE
	end

Route209_Text_AlbertIntro:
	.string "Let me see how much you've raised your\n"
	.string "POKéMON.$"

Route209_Text_AlbertDefeat:
	.string "Good stuff! Your POKéMON are in\n"
	.string "impeccable condition.$"

Route209_Text_AlbertPost:
	.string "It's obvious you raise your POKéMON\n"
	.string "with a lot of love.$"

Route209_EventScript_Jennifer::
	trainerbattle_single TRAINER_SHIRLEY, Route209_Text_JenniferIntro, Route209_Text_JenniferDefeat
	msgbox Route209_Text_JenniferPost, MSGBOX_AUTOCLOSE
	end

Route209_Text_JenniferIntro:
	.string "Please, let me battle the POKéMON\n"
	.string "you've raised!$"

Route209_Text_JenniferDefeat:
	.string "Giggle... They're raised with a lot of\n"
	.string "care!$"

Route209_Text_JenniferPost:
	.string "Raise your POKéMON with lots of love,\n"
	.string "and they'll bond closely with you.$"

Route209_EventScript_Shelley::
	trainerbattle_single TRAINER_MOLLIE, Route209_Text_ShelleyIntro, Route209_Text_ShelleyDefeat
	msgbox Route209_Text_ShelleyPost, MSGBOX_AUTOCLOSE
	end

Route209_Text_ShelleyIntro:
	.string "Say, honey, where'd you come from?\n"
	.string "What kinds of POKéMON are you with?$"

Route209_Text_ShelleyDefeat:
	.string "Fancy folks like you have fancy\n"
	.string "POKéMON too, it looks like.$"

Route209_Text_ShelleyPost:
	.string "While working the ranch, I get to raise\n"
	.string "my POKéMON, too.\p"
	.string "I'd say it's the best of both worlds!$"

Route209_EventScript_Richard::
	trainerbattle_single TRAINER_GARRET, Route209_Text_RichardIntro, Route209_Text_RichardDefeat
	msgbox Route209_Text_RichardPost, MSGBOX_AUTOCLOSE
	end

Route209_Text_RichardIntro:
	.string "I jog every morning to keep my\n"
	.string "POKéMON fit.$"

Route209_Text_RichardDefeat:
	.string "Oops! You threw off my running rhythm.$"

Route209_Text_RichardPost:
	.string "Nothing beats being fit and healthy!\p"
	.string "Come on, won't you run with me? To a\n"
	.string "better tomorrow!$"

Route209_EventScript_Raul::
	trainerbattle_single TRAINER_MARK, Route209_Text_RaulIntro, Route209_Text_RaulDefeat
	msgbox Route209_Text_RaulPost, MSGBOX_AUTOCLOSE
	end

Route209_Text_RaulIntro:
	.string "Jogging is about rhythm. Battling is\n"
	.string "about rhythm, too!$"

Route209_Text_RaulDefeat:
	.string "It's a goal of sorts, I'd say!$"

Route209_Text_RaulPost:
	.string "If I get out of rhythm, I can't get my\n"
	.string "act together.$"

Route209_EventScript_Danielle::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_1, Route209_Text_DanielleIntro, Route209_Text_DanielleDefeat
	msgbox Route209_Text_DaniellePost, MSGBOX_AUTOCLOSE
	end

Route209_Text_DanielleIntro:
	.string "Hi, hi! I'm a POKéMON!$"

Route209_Text_DanielleDefeat:
	.string "So sad... So bitter...$"

Route209_Text_DaniellePost:
	.string "I don't want to be a Trainer. I want to\n"
	.string "be a POKéMON!$"

Route209_EventScript_EmmaLil::
	trainerbattle_double TRAINER_LUIS, Route209_Text_EmmaLilIntro, Route209_Text_EmmaLilDefeat, Route209_Text_EmmaLilNotEnough
	msgbox Route209_Text_EmmaLilPost, MSGBOX_AUTOCLOSE
	end

Route209_Text_EmmaLilIntro:
	.string "Emma: We're tough because we battle\n"
	.string "together!$"

Route209_Text_EmmaLilDefeat:
	.string "Emma: Waaah!$"

Route209_Text_EmmaLilPost:
	.string "Emma: That was awesome! Are you maybe\n"
	.string "a POKéMON genius?\p"
	.string "You're well deserving of respect!$"

Route209_Text_EmmaLilNotEnough:
	.string "We won't talk to people who have only\n"
	.string "one POKéMON!$"

Route209_EventScript_TySue::
	trainerbattle_double TRAINER_DOMINIK, Route209_Text_TySueIntro, Route209_Text_TySueDefeat, Route209_Text_TySueNotEnough
	msgbox Route209_Text_TySuePost, MSGBOX_AUTOCLOSE
	end

Route209_Text_TySueIntro:
	.string "Ty: You're not supposed to intrude on\n"
	.string "my time with Sue!$"

Route209_Text_TySueDefeat:
	.string "Ty: I only have eyes for Sue. Maybe\n"
	.string "that's why we lost?$"

Route209_Text_TySuePost:
	.string "Ty: Sue, even in defeat, you're so\n"
	.string "beautiful...!$"

Route209_Text_TySueNotEnough:
	.string "Ty: I don't want to do anything\n"
	.string "without Sue...\p"
	.string "Bring two POKéMON at least, OK?$"

Route209_EventScript_PtNpc1::
	msgbox Route209_Text_PtNpc1, MSGBOX_NPC
	end

Route209_Text_PtNpc1:
	.string "Where departed POKéMON sleep... This\n"
	.string "is the Lost Tower.$"

Route209_EventScript_PtSign1::
	msgbox Route209_Text_PtSign1, MSGBOX_SIGN
	end

Route209_Text_PtSign1:
	.string "Rt. 209 HEARTHOME CITY$"

Route209_EventScript_PtSign2::
	msgbox Route209_Text_PtSign2, MSGBOX_SIGN
	end

Route209_Text_PtSign2:
	.string "Rt. 209 SOLACEON TOWN$"

Route209_EventScript_PtSign3::
	msgbox Route209_Text_PtSign3, MSGBOX_SIGN
	end

Route209_Text_PtSign3:
	.string "Trainer Tips You may register one of\n"
	.string "the Key Items in your Bag for instant\l"
	.string "use.\p"
	.string "Simply press the Y Button to use the\n"
	.string "registered item instantly.$"
