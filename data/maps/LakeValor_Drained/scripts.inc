LakeValor_Drained_MapScripts::
	.byte 0

LakeValor_Drained_EventScript_Grunt::
	trainerbattle_single TRAINER_CINDY_2, LakeValor_Drained_Text_GruntIntro, LakeValor_Drained_Text_GruntDefeat
	msgbox LakeValor_Drained_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

LakeValor_Drained_Text_GruntIntro:
	.string "We set off the Galactic Bomb! Its\n"
	.string "blast force was phenomenal!$"

LakeValor_Drained_Text_GruntDefeat:
	.string "Your POKéMON attack with phenomenal\n"
	.string "power...$"

LakeValor_Drained_Text_GruntPost:
	.string "But so what? You aim to take us all on?\p"
	.string "Dream on! Team Galactic is huge in\n"
	.string "number.\p"
	.string "Even as we speak, other members should\n"
	.string "be near Twinleaf Town.\p"
	.string "That’s right, they’re on the way to\n"
	.string "Lake Verity!$"

LakeValor_Drained_EventScript_Grunt2::
	trainerbattle_single TRAINER_CINDY_3, LakeValor_Drained_Text_Grunt2Intro, LakeValor_Drained_Text_Grunt2Defeat
	msgbox LakeValor_Drained_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

LakeValor_Drained_Text_Grunt2Intro:
	.string "...Would you like to join the MAGIKARP\n"
	.string "and flop around in the mud?$"

LakeValor_Drained_Text_Grunt2Defeat:
	.string "...Overwhelming!$"

LakeValor_Drained_Text_Grunt2Post:
	.string "I played you for a child, and paid a\n"
	.string "stiff price for my arrogance...\p"
	.string "However, you’re much too late.\p"
	.string "Team Galactic has already found the\n"
	.string "sunken island under the lake.\p"
	.string "And the POKéMON that lay in it? Well,\n"
	.string "what do you think?$"

LakeValor_Drained_EventScript_Grunt3::
	trainerbattle_single TRAINER_CINDY_4, LakeValor_Drained_Text_Grunt3Intro, LakeValor_Drained_Text_Grunt3Defeat
	msgbox LakeValor_Drained_Text_Grunt3Post, MSGBOX_AUTOCLOSE
	end

LakeValor_Drained_Text_Grunt3Intro:
	.string "I’ll punish you in place of our boss for\n"
	.string "defying Team Galactic!$"

LakeValor_Drained_Text_Grunt3Defeat:
	.string "Grr... I took the punishment...$"

LakeValor_Drained_Text_Grunt3Post:
	.string "We’re Team Galactic! The no. 1\n"
	.string "syndicate in the world!\p"
	.string "To defy us is to defy the universe!$"

LakeValor_Drained_Text_PtNpc1_0:
	.string "What do you want? You’re investigating\n"
	.string "the explosion?\p"
	.string "Bah, it doesn’t matter who you are. It’s\n"
	.string "too late to make any difference.\p"
	.string "Things are going to get really\n"
	.string "interesting now.\p"
	.string "All the legendary POKéMON are going to\n"
	.string "be brought to our HQ in Veilstone!$"

LakeValor_Drained_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox LakeValor_Drained_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc2_0:
	.string "Even Team Galactic has no use for\n"
	.string "MAGIKARP! Worthless, all of them!$"

LakeValor_Drained_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox LakeValor_Drained_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc3_0:
	.string "Hahaha! Next stop, Lake Verity!\p"
	.string "The closest civilization is that hick\n"
	.string "town called Twinleaf!\p"
	.string "We can roll in there completely\n"
	.string "unopposed!$"

LakeValor_Drained_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox LakeValor_Drained_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc4_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc4::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc5_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc5::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc6_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc6::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc7_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc7::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc8_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc8::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc8_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc9_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc9::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc9_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc10_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc10::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc10_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc11_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc11::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc11_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc12_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc12::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc12_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc13_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc13::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc13_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc14_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc14::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc14_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc15_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc15::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc15_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc16_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc16::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc16_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc17_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc17::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc17_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc18_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc18::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc18_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc19_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc19::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc19_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc20_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc20::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc20_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc21_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc21::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc21_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc22_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc22::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc22_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc23_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc23::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc23_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc24_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc24::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc24_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc25_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc25::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc25_0, MSGBOX_DEFAULT
	release
	end

LakeValor_Drained_Text_PtNpc26_0:
	.string "A MAGIKARP is weakly flopping about...$"

LakeValor_Drained_EventScript_PtNpc26::
	lock
	faceplayer
	playmoncry SPECIES_MAGIKARP, CRY_MODE_NORMAL
	msgbox LakeValor_Drained_Text_PtNpc26_0, MSGBOX_DEFAULT
	release
	end
