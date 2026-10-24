Route210_North_MapScripts::
	.byte 0

Route210_North_EventScript_Ernest::
	trainerbattle_single TRAINER_DOUGLAS, Route210_North_Text_ErnestIntro, Route210_North_Text_ErnestDefeat
	msgbox Route210_North_Text_ErnestPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_ErnestIntro:
	.string "You seem to have a lot of confidence.\n"
	.string "Let's see if it's justified!$"

Route210_North_Text_ErnestDefeat:
	.string "Haha! A total loss for me!$"

Route210_North_Text_ErnestPost:
	.string "You seem to have an abundance of\n"
	.string "talent. It's pretty amazing.$"

Route210_North_EventScript_Alyssa::
	trainerbattle_single TRAINER_DARRIN, Route210_North_Text_AlyssaIntro, Route210_North_Text_AlyssaDefeat
	msgbox Route210_North_Text_AlyssaPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_AlyssaIntro:
	.string "As an Ace Trainer, I have to take\n"
	.string "battles in stride.\p"
	.string "I need to stay cool and calm whether I\n"
	.string "win or lose.$"

Route210_North_Text_AlyssaDefeat:
	.string "Aiyeeeeh! We lost!$"

Route210_North_Text_AlyssaPost:
	.string "How dare you beat us! Go away! Go!$"

Route210_North_EventScript_Joel::
	trainerbattle_single TRAINER_JEROME, Route210_North_Text_JoelIntro, Route210_North_Text_JoelDefeat
	msgbox Route210_North_Text_JoelPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_JoelIntro:
	.string "I just startled you!\p"
	.string "While you're still struggling to\n"
	.string "recover, I'll already be the winner!$"

Route210_North_Text_JoelDefeat:
	.string "Oh, what's that? You're supposed to be\n"
	.string "fumbling more.$"

Route210_North_Text_JoelPost:
	.string "I wanted a better reaction from you.\n"
	.string "Now I feel silly for hiding!$"

Route210_North_EventScript_Nathan::
	trainerbattle_single TRAINER_MATTHEW, Route210_North_Text_NathanIntro, Route210_North_Text_NathanDefeat
	msgbox Route210_North_Text_NathanPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_NathanIntro:
	.string "We ninjas appear where you least\n"
	.string "expect us!$"

Route210_North_Text_NathanDefeat:
	.string "I didn't expect to lose...$"

Route210_North_Text_NathanPost:
	.string "While hiding, I think about what\n"
	.string "POKéMON must be thinking inside their\l"
	.string "POKé BALLS.$"

Route210_North_EventScript_Davido::
	trainerbattle_single TRAINER_DAVID, Route210_North_Text_DavidoIntro, Route210_North_Text_DavidoDefeat
	msgbox Route210_North_Text_DavidoPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_DavidoIntro:
	.string "A ninja can use all kinds of skills.\n"
	.string "Like this and like that!$"

Route210_North_Text_DavidoDefeat:
	.string "Hmm... My ninja techniques failed to\n"
	.string "work...$"

Route210_North_Text_DavidoPost:
	.string "There's a ninja Gym Leader somewhere\n"
	.string "far away.\p"
	.string "I should become a devotee of theirs.$"

Route210_North_EventScript_Patrick::
	trainerbattle_single TRAINER_SPENCER, Route210_North_Text_PatrickIntro, Route210_North_Text_PatrickDefeat
	msgbox Route210_North_Text_PatrickPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_PatrickIntro:
	.string "Try not to be shocked when you lay\n"
	.string "your eyes on my POKéMON!$"

Route210_North_Text_PatrickDefeat:
	.string "Oh, my... Good golly 'n' gosh...$"

Route210_North_Text_PatrickPost:
	.string "A dragon POKéMON's real power is\n"
	.string "nothing like mine!$"

Route210_North_EventScript_Brianna::
	trainerbattle_single TRAINER_ROLAND, Route210_North_Text_BriannaIntro, Route210_North_Text_BriannaDefeat
	msgbox Route210_North_Text_BriannaPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_BriannaIntro:
	.string "I'll teach you about the charms of\n"
	.string "bird POKéMON!$"

Route210_North_Text_BriannaDefeat:
	.string "Well, that was surprising!$"

Route210_North_Text_BriannaPost:
	.string "The sight of you battling... It was\n"
	.string "simply a wonder to watch!$"

Route210_North_EventScript_ZacJen::
	trainerbattle_double TRAINER_NOLEN, Route210_North_Text_ZacJenIntro, Route210_North_Text_ZacJenDefeat, Route210_North_Text_ZacJenNotEnough
	msgbox Route210_North_Text_ZacJenPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_ZacJenIntro:
	.string "Zac: Jen, watch this! I'm going to use\n"
	.string "everything you've taught me!$"

Route210_North_Text_ZacJenDefeat:
	.string "Zac: Wow. Someone that's even better\n"
	.string "than Jen...$"

Route210_North_Text_ZacJenPost:
	.string "Zac: I don't care if I get to meet the\n"
	.string "greatest Trainer in the region...\p"
	.string "I'd still rather learn from Jen.$"

Route210_North_Text_ZacJenNotEnough:
	.string "Zac: Would you be interested in\n"
	.string "battling the two of us at the same\l"
	.string "time?\p"
	.string "What I mean is, do you have two or more\n"
	.string "POKéMON with you?$"

Route210_North_EventScript_Brian::
	trainerbattle_single TRAINER_STAN, Route210_North_Text_BrianIntro, Route210_North_Text_BrianDefeat
	msgbox Route210_North_Text_BrianPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_BrianIntro:
	.string "Very well. I've decided.\p"
	.string "I'll battle one last time, with you,\n"
	.string "then I'm retiring as a Trainer.$"

Route210_North_Text_BrianDefeat:
	.string "I've lost, but... What is this rush I\n"
	.string "feel?!$"

Route210_North_Text_BrianPost:
	.string "Yes! This is fun! POKéMON are fun!\p"
	.string "Retire? Perish that thought!\p"
	.string "I'll become a lot tougher. Next time,\n"
	.string "victory is mine!$"

Route210_North_EventScript_Adam::
	trainerbattle_single TRAINER_BARRY, Route210_North_Text_AdamIntro, Route210_North_Text_AdamDefeat
	msgbox Route210_North_Text_AdamPost, MSGBOX_AUTOCLOSE
	end

Route210_North_Text_AdamIntro:
	.string "This buff physique isn't just for\n"
	.string "show!$"

Route210_North_Text_AdamDefeat:
	.string "B-but! My buff physique!$"

Route210_North_Text_AdamPost:
	.string "Why? Is it because my training isn't\n"
	.string "enough?!$"

Route210_North_EventScript_PtNpc1::
	msgbox Route210_North_Text_PtNpc1, MSGBOX_NPC
	end

Route210_North_Text_PtNpc1:
	.string "If I could use the hidden move Defog,\n"
	.string "I'd clear up the fog so I can see.\p"
	.string "How does Defog work?\p"
	.string "Don't bird and bug POKéMON flap their\n"
	.string "wings to blow the fog away?$"

Route210_North_EventScript_PtSign1::
	msgbox Route210_North_Text_PtSign1, MSGBOX_SIGN
	end

Route210_North_Text_PtSign1:
	.string "Rt. 210 CELESTIC TOWN$"

Route210_North_EventScript_PtSign2::
	msgbox Route210_North_Text_PtSign2, MSGBOX_SIGN
	end

Route210_North_Text_PtSign2:
	.string "Grandma Wilma's House$"
