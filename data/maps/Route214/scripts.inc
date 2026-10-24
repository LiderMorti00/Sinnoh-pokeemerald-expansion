Route214_MapScripts::
	.byte 0

Route214_EventScript_Carlos::
	trainerbattle_single TRAINER_KATELYNN, Route214_Text_CarlosIntro, Route214_Text_CarlosDefeat
	msgbox Route214_Text_CarlosPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_CarlosIntro:
	.string "When I toss this coin, you call it.\n"
	.string "Heads, we battle.\p"
	.string "Tails, we battle!\p"
	.string "Now, how will this play out, my friend?$"

Route214_Text_CarlosDefeat:
	.string "The coin came up tails, and like it, my\n"
	.string "POKéMON is facedown...$"

Route214_Text_CarlosPost:
	.string "I flipped a coin when I was ten. I\n"
	.string "decided to live in SINNOH then.$"

Route214_EventScript_Douglas::
	trainerbattle_single TRAINER_ANDREW, Route214_Text_DouglasIntro, Route214_Text_DouglasDefeat
	msgbox Route214_Text_DouglasPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_DouglasIntro:
	.string "For the sake of my collection, I take\n"
	.string "on people I know I can't beat.\p"
	.string "That's what a Collector does.$"

Route214_Text_DouglasDefeat:
	.string "That attack right then was\n"
	.string "remarkable! You ought to be proud of\l"
	.string "it!$"

Route214_Text_DouglasPost:
	.string "I take pride in having POKéMON that\n"
	.string "others don't.\p"
	.string "Oh, I'm also proud about winning\n"
	.string "second prize in one of JUBILIFE TV's\l"
	.string "drawings.$"

Route214_EventScript_Brady::
	trainerbattle_single TRAINER_IVAN, Route214_Text_BradyIntro, Route214_Text_BradyDefeat
	msgbox Route214_Text_BradyPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_BradyIntro:
	.string "What's that?!\p"
	.string "You say you have a Pokédex? An\n"
	.string "authentic one!$"

Route214_Text_BradyDefeat:
	.string "Your Pokédex fills me with such envy,\n"
	.string "envy, envy...$"

Route214_Text_BradyPost:
	.string "There's all kinds of Trainers with all\n"
	.string "sorts of POKéMON with them.\p"
	.string "The more you battle, the more your\n"
	.string "Pokédex is filled!$"

Route214_EventScript_Bryan::
	trainerbattle_single TRAINER_CLAUDE, Route214_Text_BryanIntro, Route214_Text_BryanDefeat
	msgbox Route214_Text_BryanPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_BryanIntro:
	.string "Ah-ha! I found me a Trainer!\p"
	.string "I challenge you to battle with the\n"
	.string "POKéMON I've found!$"

Route214_Text_BryanDefeat:
	.string "It's a challenge trying to win with\n"
	.string "POKéMON one isn't familiar with...$"

Route214_Text_BryanPost:
	.string "Discovery is the treasure I seek.\n"
	.string "Collecting a lot is my life!$"

Route214_EventScript_Ronald::
	trainerbattle_single TRAINER_NED, Route214_Text_RonaldIntro, Route214_Text_RonaldDefeat
	msgbox Route214_Text_RonaldPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_RonaldIntro:
	.string "I travel all over the world in search\n"
	.string "of mysteries.$"

Route214_Text_RonaldDefeat:
	.string "Gasp... One more... Gasp... It's like I\n"
	.string "went on a diet...$"

Route214_Text_RonaldPost:
	.string "There are mysteries waiting for me to\n"
	.string "investigate around the world.\p"
	.string "This is no time to be feeling sorry for\n"
	.string "myself.$"

Route214_EventScript_Jamal::
	trainerbattle_single TRAINER_DALE, Route214_Text_JamalIntro, Route214_Text_JamalDefeat
	msgbox Route214_Text_JamalPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_JamalIntro:
	.string "To find my favorite POKéMON, I'll go\n"
	.string "east, west, or any which way!$"

Route214_Text_JamalDefeat:
	.string "But they're rare POKéMON!$"

Route214_Text_JamalPost:
	.string "If you're trying to find the POKéMON\n"
	.string "you want, you need to go everywhere!\p"
	.string "Not just east and west, either. South\n"
	.string "and north are important, too!$"

Route214_EventScript_Devon::
	trainerbattle_single TRAINER_NOLAN, Route214_Text_DevonIntro, Route214_Text_DevonDefeat
	msgbox Route214_Text_DevonPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_DevonIntro:
	.string "Oh? A little kid like you is going to\n"
	.string "teach me about POKéMON?$"

Route214_Text_DevonDefeat:
	.string "Wow, is that right?$"

Route214_Text_DevonPost:
	.string "There are so many kinds of POKéMON. I\n"
	.string "can't decide which one to pamper.$"

Route214_EventScript_Mitchell::
	trainerbattle_single TRAINER_BARNY, Route214_Text_MitchellIntro, Route214_Text_MitchellDefeat
	msgbox Route214_Text_MitchellPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_MitchellIntro:
	.string "I'd sensed the presence of a Trainer\n"
	.string "for a while. It was you!$"

Route214_Text_MitchellDefeat:
	.string "Defeating you will be no easy matter.$"

Route214_Text_MitchellPost:
	.string "Is it possible to become more powerful\n"
	.string "by understanding POKéMON?$"

Route214_EventScript_Abigail::
	trainerbattle_single TRAINER_WADE, Route214_Text_AbigailIntro, Route214_Text_AbigailDefeat
	msgbox Route214_Text_AbigailPost, MSGBOX_AUTOCLOSE
	end

Route214_Text_AbigailIntro:
	.string "There! Behind you!$"

Route214_Text_AbigailDefeat:
	.string "My plan to spook you didn't go over\n"
	.string "well at all.$"

Route214_Text_AbigailPost:
	.string "You might be tough, but let down your\n"
	.string "guard at your own risk!$"

Route214_EventScript_PtSign1::
	msgbox Route214_Text_PtSign1, MSGBOX_SIGN
	end

Route214_Text_PtSign1:
	.string "Rt. 214 VEILSTONE CITY$"

Route214_EventScript_PtSign2::
	msgbox Route214_Text_PtSign2, MSGBOX_SIGN
	end

Route214_Text_PtSign2:
	.string "Rt. 214 LAKE VALOR$"
