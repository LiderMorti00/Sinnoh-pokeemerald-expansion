Route217_MapScripts::
	.byte 0

Route217_EventScript_Shawn::
	trainerbattle_single TRAINER_COLIN, Route217_Text_ShawnIntro, Route217_Text_ShawnDefeat
	msgbox Route217_Text_ShawnPost, MSGBOX_AUTOCLOSE
	end

Route217_Text_ShawnIntro:
	.string "I'll show you the techniques I had\n"
	.string "drummed into me at ski school!$"

Route217_Text_ShawnDefeat:
	.string "I don't believe it... My techniques\n"
	.string "were rebuffed...$"

Route217_Text_ShawnPost:
	.string "Maybe I should've studied at the\n"
	.string "Trainers' school instead...$"

Route217_EventScript_Lexie::
	trainerbattle_single TRAINER_BENNY, Route217_Text_LexieIntro, Route217_Text_LexieDefeat
	msgbox Route217_Text_LexiePost, MSGBOX_AUTOCLOSE
	end

Route217_Text_LexieIntro:
	.string "I've been skiing with POKéMON since I\n"
	.string "was just five years old.$"

Route217_Text_LexieDefeat:
	.string "Hunh, what...? I repeat, hunh, what...?$"

Route217_Text_LexiePost:
	.string "The scenery doesn't change very much\n"
	.string "around here. Don't go getting lost!$"

Route217_EventScript_Bjorn::
	trainerbattle_single TRAINER_CHESTER, Route217_Text_BjornIntro, Route217_Text_BjornDefeat
	msgbox Route217_Text_BjornPost, MSGBOX_AUTOCLOSE
	end

Route217_Text_BjornIntro:
	.string "We Skiers feel Mother Nature through\n"
	.string "the soles of our feet!$"

Route217_Text_BjornDefeat:
	.string "I got a good taste of your power!$"

Route217_Text_BjornPost:
	.string "Trainers get an appreciation of life\n"
	.string "through POKéMON. At least I think so.$"

Route217_EventScript_Madison::
	trainerbattle_single TRAINER_ALEX, Route217_Text_MadisonIntro, Route217_Text_MadisonDefeat
	msgbox Route217_Text_MadisonPost, MSGBOX_AUTOCLOSE
	end

Route217_Text_MadisonIntro:
	.string "Rainy days make me feel blue...\p"
	.string "But the instant it starts to snow, I'm\n"
	.string "as happy as can be!$"

Route217_Text_MadisonDefeat:
	.string "The conditions weren't very good.$"

Route217_Text_MadisonPost:
	.string "Can any of your POKéMON use that\n"
	.string "hidden move to climb cliffs?$"

Route217_EventScript_Matthew::
	trainerbattle_single TRAINER_BECK, Route217_Text_MatthewIntro, Route217_Text_MatthewDefeat
	msgbox Route217_Text_MatthewPost, MSGBOX_AUTOCLOSE
	end

Route217_Text_MatthewIntro:
	.string "Poof!\p"
	.string "You've got a good eye spotting me!$"

Route217_Text_MatthewDefeat:
	.string "You also saw through my weak spots...$"

Route217_Text_MatthewPost:
	.string "I'll play with my POKéMON--even in a\n"
	.string "blizzard!$"

Route217_EventScript_Ethan::
	trainerbattle_single TRAINER_YASU, Route217_Text_EthanIntro, Route217_Text_EthanDefeat
	msgbox Route217_Text_EthanPost, MSGBOX_AUTOCLOSE
	end

Route217_Text_EthanIntro:
	.string "There are several clans of ninjas. Are\n"
	.string "you from the Iga clan? Or Kouga?$"

Route217_Text_EthanDefeat:
	.string "I'm not much of a ninja either way...$"

Route217_Text_EthanPost:
	.string "I wonder why everyone stops being a\n"
	.string "ninja when they grow up?$"

Route217_EventScript_Luke::
	trainerbattle_single TRAINER_TAKASHI, Route217_Text_LukeIntro, Route217_Text_LukeDefeat
	msgbox Route217_Text_LukePost, MSGBOX_AUTOCLOSE
	end

Route217_Text_LukeIntro:
	.string "I dress light wherever I go. Hiyah!$"

Route217_Text_LukeDefeat:
	.string "Achoo!$"

Route217_Text_LukePost:
	.string "Maybe I'll dress warm and come back.\n"
	.string "Hiyah!$"

Route217_EventScript_Dalton::
	trainerbattle_single TRAINER_DIANNE, Route217_Text_DaltonIntro, Route217_Text_DaltonDefeat
	msgbox Route217_Text_DaltonPost, MSGBOX_AUTOCLOSE
	end

Route217_Text_DaltonIntro:
	.string "This cold is but nothing compared to\n"
	.string "the fire that burns in my heart!$"

Route217_Text_DaltonDefeat:
	.string "Your heart burns as hot as mine!$"

Route217_Text_DaltonPost:
	.string "The weather clears up sometimes. The\n"
	.string "view is breathtaking then.$"

Route217_EventScript_Olivia::
	trainerbattle_single TRAINER_JANI, Route217_Text_OliviaIntro, Route217_Text_OliviaDefeat
	msgbox Route217_Text_OliviaPost, MSGBOX_AUTOCLOSE
	end

Route217_Text_OliviaIntro:
	.string "Wh-what is it? P-POKéMON battle?!$"

Route217_Text_OliviaDefeat:
	.string "Whew... You are alive, aren't you?$"

Route217_Text_OliviaPost:
	.string "Around these parts, perhaps because\n"
	.string "of all the snow, there are many\l"
	.string "folktales of hauntings...$"

Route217_EventScript_PtSign1::
	msgbox Route217_Text_PtSign1, MSGBOX_SIGN
	end

Route217_Text_PtSign1:
	.string "Rt. 217 LAKE ACUITY$"
