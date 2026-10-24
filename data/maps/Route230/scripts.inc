Route230_MapScripts::
	.byte 0

Route230_EventScript_Glenn::
	trainerbattle_single TRAINER_JULIO, Route230_Text_GlennIntro, Route230_Text_GlennDefeat
	msgbox Route230_Text_GlennPost, MSGBOX_AUTOCLOSE
	end

Route230_Text_GlennIntro:
	.string "A Trainer riding a POKéMON! I like\n"
	.string "that! Let's battle it out!$"

Route230_Text_GlennDefeat:
	.string "Awesome! You're a real wild child!$"

Route230_Text_GlennPost:
	.string "You ride atop the waves while riding\n"
	.string "on a POKéMON!\p"
	.string "And you rode right over me!$"

Route230_EventScript_Joanna::
	trainerbattle_single TRAINER_GRUNT_UNUSED, Route230_Text_JoannaIntro, Route230_Text_JoannaDefeat
	msgbox Route230_Text_JoannaPost, MSGBOX_AUTOCLOSE
	end

Route230_Text_JoannaIntro:
	.string "People keep coming to us for battles.\n"
	.string "I really don't know why! Teehee!$"

Route230_Text_JoannaDefeat:
	.string "OK, we lost.$"

Route230_Text_JoannaPost:
	.string "I wanted to be alone, but swatting\n"
	.string "away immature boys on the prowl...\p"
	.string "Well, my POKéMON grew tough without me\n"
	.string "really even trying.$"

Route230_EventScript_Kurt::
	trainerbattle_single TRAINER_GRUNT_JAGGED_PASS, Route230_Text_KurtIntro, Route230_Text_KurtDefeat
	msgbox Route230_Text_KurtPost, MSGBOX_AUTOCLOSE
	end

Route230_Text_KurtIntro:
	.string "Check out my physique! The rough seas\n"
	.string "sculpted this awesome body!$"

Route230_Text_KurtDefeat:
	.string "I've got a muscular physique, but\n"
	.string "there's no strength behind it...$"

Route230_Text_KurtPost:
	.string "Seeing a POKéMON use Surf to carry\n"
	.string "you out on the sea...\p"
	.string "It strikes an emotional chord with me\n"
	.string "somewhere deep down.$"

Route230_EventScript_Sophia::
	trainerbattle_single TRAINER_LEONARDO, Route230_Text_SophiaIntro, Route230_Text_SophiaDefeat
	msgbox Route230_Text_SophiaPost, MSGBOX_AUTOCLOSE
	end

Route230_Text_SophiaIntro:
	.string "Are your POKéMON growing properly?$"

Route230_Text_SophiaDefeat:
	.string "Maybe too grown up!$"

Route230_Text_SophiaPost:
	.string "I've grown with my POKéMON, too. My\n"
	.string "swimsuit's getting a little tight...$"

Route230_EventScript_Sam::
	trainerbattle_single TRAINER_ATHENA, Route230_Text_SamIntro, Route230_Text_SamDefeat
	msgbox Route230_Text_SamPost, MSGBOX_AUTOCLOSE
	end

Route230_Text_SamIntro:
	.string "Check out my dynamic form! Victory is\n"
	.string "assured!$"

Route230_Text_SamDefeat:
	.string "Oh. That's how it is.$"

Route230_Text_SamPost:
	.string "Being a good swimmer doesn't make me\n"
	.string "any better as a Trainer...$"

Route230_EventScript_Mallory::
	trainerbattle_single TRAINER_HARRISON, Route230_Text_MalloryIntro, Route230_Text_MalloryDefeat
	msgbox Route230_Text_MalloryPost, MSGBOX_AUTOCLOSE
	end

Route230_Text_MalloryIntro:
	.string "I'm a mermaid drifting among the\n"
	.string "waves...\p"
	.string "And a high-spirited gal who battles\n"
	.string "with POKéMON!$"

Route230_Text_MalloryDefeat:
	.string "Losing... Makes my tears well up.$"

Route230_Text_MalloryPost:
	.string "A mermaid's tears are so salty...$"

Route230_EventScript_PtSign1::
	msgbox Route230_Text_PtSign1, MSGBOX_SIGN
	end

Route230_Text_PtSign1:
	.string "Rt. 230 Fight Area$"
