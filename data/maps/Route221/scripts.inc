Route221_MapScripts::
	.byte 0

Route221_EventScript_Dillon::
	trainerbattle_single TRAINER_GRACE, Route221_Text_DillonIntro, Route221_Text_DillonDefeat
	msgbox Route221_Text_DillonPost, MSGBOX_AUTOCLOSE
	end

Route221_Text_DillonIntro:
	.string "Well? Does it look like I'm swimming\n"
	.string "gracefully?$"

Route221_Text_DillonDefeat:
	.string "I'm finally feeling fatigued...$"

Route221_Text_DillonPost:
	.string "I may look like I'm swimming\n"
	.string "gracefully, but beneath the surface\l"
	.string "I'm kicking furiously.$"

Route221_EventScript_Vanessa::
	trainerbattle_single TRAINER_TANYA, Route221_Text_VanessaIntro, Route221_Text_VanessaDefeat
	msgbox Route221_Text_VanessaPost, MSGBOX_AUTOCLOSE
	end

Route221_Text_VanessaIntro:
	.string "One thing about Water-type POKéMON:\n"
	.string "There's a huge variety!\p"
	.string "I'll show you the Water-type POKéMON\n"
	.string "I chose and why I'm so proud of them!$"

Route221_Text_VanessaDefeat:
	.string "I can't boast when I lose... I'm so\n"
	.string "disappointed...$"

Route221_Text_VanessaPost:
	.string "Sure I lost, but watch me! I'll get\n"
	.string "tougher with water POKéMON.$"

Route221_EventScript_Cory::
	trainerbattle_single TRAINER_SHARON, Route221_Text_CoryIntro, Route221_Text_CoryDefeat
	msgbox Route221_Text_CoryPost, MSGBOX_AUTOCLOSE
	end

Route221_Text_CoryIntro:
	.string "I like fishing, no question. But\n"
	.string "battling? That's what I love!$"

Route221_Text_CoryDefeat:
	.string "Sploosh!$"

Route221_Text_CoryPost:
	.string "If you don't know how to fish, you're\n"
	.string "missing half of life's enjoyment.\p"
	.string "If you don't know POKéMON... You're\n"
	.string "missing out on all of it!$"

Route221_EventScript_Ivan::
	trainerbattle_single TRAINER_NIKKI, Route221_Text_IvanIntro, Route221_Text_IvanDefeat
	msgbox Route221_Text_IvanPost, MSGBOX_AUTOCLOSE
	end

Route221_Text_IvanIntro:
	.string "Are you going to the Pal Park, too?\p"
	.string "For you, I'm willing to show off my\n"
	.string "prized POKéMON!$"

Route221_Text_IvanDefeat:
	.string "So? Hot stuff, huh? That's why I'm so\n"
	.string "proud of my POKéMON!$"

Route221_Text_IvanPost:
	.string "Pal Park, huh? I wonder what kinds of\n"
	.string "POKéMON you can see there?$"

Route221_EventScript_Jake::
	trainerbattle_single TRAINER_BRENDA, Route221_Text_JakeIntro, Route221_Text_JakeDefeat
	msgbox Route221_Text_JakePost, MSGBOX_AUTOCLOSE
	end

Route221_Text_JakeIntro:
	.string "They call me an Ace Trainer.\p"
	.string "Allow me to demonstrate the talent\n"
	.string "that makes me so!$"

Route221_Text_JakeDefeat:
	.string "I'm burning with jealousy over your\n"
	.string "raw talent!$"

Route221_Text_JakePost:
	.string "I think keeping up the effort to\n"
	.string "better yourself is a talent in itself.$"

Route221_EventScript_Shannon::
	trainerbattle_single TRAINER_KATIE, Route221_Text_ShannonIntro, Route221_Text_ShannonDefeat
	msgbox Route221_Text_ShannonPost, MSGBOX_AUTOCLOSE
	end

Route221_Text_ShannonIntro:
	.string "Really? So you think you can beat me?\n"
	.string "I'm an Ace Trainer, you do realize?$"

Route221_Text_ShannonDefeat:
	.string "I admit defeat...$"

Route221_Text_ShannonPost:
	.string "Beaten in battle, but not in spirit.\n"
	.string "That's the mark of a real Ace Trainer.$"

Route221_EventScript_PtSign1::
	msgbox Route221_Text_PtSign1, MSGBOX_SIGN
	end

Route221_Text_PtSign1:
	.string "Pal Park A Place for New Beginnings$"
