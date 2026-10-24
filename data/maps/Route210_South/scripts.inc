Route210_South_MapScripts::
	.byte 0

Route210_South_EventScript_Fabian::
	trainerbattle_single TRAINER_DEAN, Route210_South_Text_FabianIntro, Route210_South_Text_FabianDefeat
	msgbox Route210_South_Text_FabianPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_FabianIntro:
	.string "I am one of the Ninja Trio! Being\n"
	.string "discovered means I must battle!$"

Route210_South_Text_FabianDefeat:
	.string "I concede defeat...$"

Route210_South_Text_FabianPost:
	.string "My cover is blown, so what should I do?\p"
	.string "Maybe I'll go catch some Contests in\n"
	.string "HEARTHOME CITY. Maybe I'll do that.$"

Route210_South_EventScript_Brennan::
	trainerbattle_single TRAINER_RODNEY, Route210_South_Text_BrennanIntro, Route210_South_Text_BrennanDefeat
	msgbox Route210_South_Text_BrennanPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_BrennanIntro:
	.string "I am one of the Ninja Trio! Being\n"
	.string "discovered means I must battle!$"

Route210_South_Text_BrennanDefeat:
	.string "I concede defeat...$"

Route210_South_Text_BrennanPost:
	.string "While I hid in the tall grass, I sensed\n"
	.string "POKéMON all around me!\p"
	.string "Furtive sounds of movement... Stifled\n"
	.string "cries... I heard them!$"

Route210_South_EventScript_TeriTia::
	trainerbattle_double TRAINER_RICHARD, Route210_South_Text_TeriTiaIntro, Route210_South_Text_TeriTiaDefeat, Route210_South_Text_TeriTiaNotEnough
	msgbox Route210_South_Text_TeriTiaPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_TeriTiaIntro:
	.string "Teri: Yay! We're gonna battle with lots\n"
	.string "of POKéMON!$"

Route210_South_Text_TeriTiaDefeat:
	.string "Teri: We tried really hard together,\n"
	.string "but we lost anyway.$"

Route210_South_Text_TeriTiaPost:
	.string "Teri: Our mommy is a twin, too.$"

Route210_South_Text_TeriTiaNotEnough:
	.string "Teri: We want to battle with lots of\n"
	.string "POKéMON.$"

Route210_South_EventScript_Bruce::
	trainerbattle_single TRAINER_HERMAN, Route210_South_Text_BruceIntro, Route210_South_Text_BruceDefeat
	msgbox Route210_South_Text_BrucePost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_BruceIntro:
	.string "I am one of the Ninja Trio! Being\n"
	.string "discovered means I must battle!\p"
	.string "But how did you discover me? Don't\n"
	.string "tell me you're a ninja, too!$"

Route210_South_Text_BruceDefeat:
	.string "I concede defeat...$"

Route210_South_Text_BrucePost:
	.string "A POKéMON Trainer's good at finding\n"
	.string "stuff, I guess.$"

Route210_South_EventScript_Wyatt::
	trainerbattle_single TRAINER_SANTIAGO, Route210_South_Text_WyattIntro, Route210_South_Text_WyattDefeat
	msgbox Route210_South_Text_WyattPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_WyattIntro:
	.string "I'm warmed up and limber. I'm OK to\n"
	.string "battle!$"

Route210_South_Text_WyattDefeat:
	.string "...Oh, serious woe. I wasn't prepared\n"
	.string "emotionally for this.$"

Route210_South_Text_WyattPost:
	.string "I wish I could just run from all this...\n"
	.string "Just joking.$"

Route210_South_EventScript_Kahlil::
	trainerbattle_single TRAINER_GILBERT, Route210_South_Text_KahlilIntro, Route210_South_Text_KahlilDefeat
	msgbox Route210_South_Text_KahlilPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_KahlilIntro:
	.string "Hey, check this out! Look at the\n"
	.string "luster of my POKéMON's fur!$"

Route210_South_Text_KahlilDefeat:
	.string "Hey, hey, did you take a good look?$"

Route210_South_Text_KahlilPost:
	.string "The VEILSTONE Department Store is\n"
	.string "pretty impressive!\p"
	.string "Did you know they even sell Poffins?$"

Route210_South_EventScript_Amber::
	trainerbattle_single TRAINER_FRANKLIN, Route210_South_Text_AmberIntro, Route210_South_Text_AmberDefeat
	msgbox Route210_South_Text_AmberPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_AmberIntro:
	.string "I'm a rookie breeder, but I'll do my\n"
	.string "very best!$"

Route210_South_Text_AmberDefeat:
	.string "It's all right! I'm still a rookie!$"

Route210_South_Text_AmberPost:
	.string "The best way to raise POKéMON?\p"
	.string "...Hmm, when it comes right down to it,\n"
	.string "isn't it all about love?$"

Route210_South_EventScript_AvaMatt::
	trainerbattle_double TRAINER_KEVIN, Route210_South_Text_AvaMattIntro, Route210_South_Text_AvaMattDefeat, Route210_South_Text_AvaMattNotEnough
	msgbox Route210_South_Text_AvaMattPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_AvaMattIntro:
	.string "Matt: Uhohoho! I'll show y'all how\n"
	.string "tightly I've bonded with my daughter!$"

Route210_South_Text_AvaMattDefeat:
	.string "Matt: Parent-and-child power couldn't\n"
	.string "get the job done.$"

Route210_South_Text_AvaMattPost:
	.string "Matt: I reckon the bonds between you\n"
	.string "and your POKéMON are like the bonds\l"
	.string "parents share with their kids.$"

Route210_South_Text_AvaMattNotEnough:
	.string "Matt: Oh, there's no way you could\n"
	.string "beat us both with one POKéMON.$"

Route210_South_EventScript_Marco::
	trainerbattle_single TRAINER_JACK, Route210_South_Text_MarcoIntro, Route210_South_Text_MarcoDefeat
	msgbox Route210_South_Text_MarcoPost, MSGBOX_AUTOCLOSE
	end

Route210_South_Text_MarcoIntro:
	.string "My POKéMON toughened up while working\n"
	.string "on the ranch.\p"
	.string "I'm right proud of them!$"

Route210_South_Text_MarcoDefeat:
	.string "Hahahah! Your POKéMON sure can be\n"
	.string "counted on!$"

Route210_South_Text_MarcoPost:
	.string "When I cuddle with my POKéMON, I can\n"
	.string "feel not just their bodies' warmth,\l"
	.string "but their compassion.$"

Route210_South_EventScript_PtSign1::
	msgbox Route210_South_Text_PtSign1, MSGBOX_SIGN
	end

Route210_South_Text_PtSign1:
	.string "Rt. 210 SOLACEON TOWN$"

Route210_South_EventScript_PtSign2::
	msgbox Route210_South_Text_PtSign2, MSGBOX_SIGN
	end

Route210_South_Text_PtSign2:
	.string "Café Cabin Freshly Squeezed Milk$"
