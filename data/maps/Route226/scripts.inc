Route226_MapScripts::
	.byte 0

Route226_EventScript_Lydia::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TREECKO, Route226_Text_LydiaIntro, Route226_Text_LydiaDefeat
	msgbox Route226_Text_LydiaPost, MSGBOX_AUTOCLOSE
	end

Route226_Text_LydiaIntro:
	.string "I want to be with my water POKéMON!\n"
	.string "That's why I swim!$"

Route226_Text_LydiaDefeat:
	.string "Glub glub... I'm sinking...$"

Route226_Text_LydiaPost:
	.string "I thought that everyone would be all\n"
	.string "dedicated to training out here.\p"
	.string "But most people are really laid back.\n"
	.string "It's not like what I imagined.\p"
	.string "I guess being with POKéMON, people\n"
	.string "get all mellowed out.$"

Route226_EventScript_Graham::
	trainerbattle_single TRAINER_ROBIN, Route226_Text_GrahamIntro, Route226_Text_GrahamDefeat
	msgbox Route226_Text_GrahamPost, MSGBOX_AUTOCLOSE
	end

Route226_Text_GrahamIntro:
	.string "I took great pains raising my\n"
	.string "partners. I'll show you how strong I\l"
	.string "made them!$"

Route226_Text_GrahamDefeat:
	.string "It needs to be leveled more?!$"

Route226_Text_GrahamPost:
	.string "My POKéMON...\p"
	.string "They're the first friends I ever\n"
	.string "caught. They mean everything to me!$"

Route226_EventScript_Geneva::
	trainerbattle_single TRAINER_RICK, Route226_Text_GenevaIntro, Route226_Text_GenevaDefeat
	msgbox Route226_Text_GenevaPost, MSGBOX_AUTOCLOSE
	end

Route226_Text_GenevaIntro:
	.string "My POKéMON grew up in the arms of\n"
	.string "Mother Nature. They're tough!$"

Route226_Text_GenevaDefeat:
	.string "How could you be tougher than Mother\n"
	.string "Nature?$"

Route226_Text_GenevaPost:
	.string "Most of the time, my POKéMON return to\n"
	.string "their POKé BALLS right away.\p"
	.string "But sometimes, they just fall asleep\n"
	.string "on top of my head. That gets messy.$"

Route226_EventScript_Stanley::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_TORCHIC, Route226_Text_StanleyIntro, Route226_Text_StanleyDefeat
	msgbox Route226_Text_StanleyPost, MSGBOX_AUTOCLOSE
	end

Route226_Text_StanleyIntro:
	.string "How do you do? I'm Stanley, and I'm a\n"
	.string "Dragon Tamer.\p"
	.string "What do you say we let our POKéMON\n"
	.string "have it out? Sound OK to you?$"

Route226_Text_StanleyDefeat:
	.string "Victory! That is, victory for you...$"

Route226_Text_StanleyPost:
	.string "It seems to me, there's this certain\n"
	.string "image that goes with a Dragon Tamer.\p"
	.string "But me, I'd much sooner take it easy,\n"
	.string "take it slow, and take it my own way.\p"
	.string "I figure there's more than my style\n"
	.string "that I need to work on first.$"

Route226_EventScript_Wade::
	trainerbattle_single TRAINER_MAY_ROUTE_103_MUDKIP, Route226_Text_WadeIntro, Route226_Text_WadeDefeat
	msgbox Route226_Text_WadePost, MSGBOX_AUTOCLOSE
	end

Route226_Text_WadeIntro:
	.string "Me and my POKéMON are pumped up and\n"
	.string "ready to go all out!$"

Route226_Text_WadeDefeat:
	.string "Our muscles are deflating...$"

Route226_Text_WadePost:
	.string "Overwhelm with our dazzling\n"
	.string "physiques! That was our game plan...$"

Route226_EventScript_PtSign1::
	msgbox Route226_Text_PtSign1, MSGBOX_SIGN
	end

Route226_Text_PtSign1:
	.string "Rt. 226 Survival Area$"

Route226_EventScript_PtSign2::
	msgbox Route226_Text_PtSign2, MSGBOX_SIGN
	end

Route226_Text_PtSign2:
	.string "Rt. 227 Rt. 228$"
