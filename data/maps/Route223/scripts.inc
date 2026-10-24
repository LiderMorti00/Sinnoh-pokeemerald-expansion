Route223_MapScripts::
	.byte 0

Route223_EventScript_Wesley::
	trainerbattle_single TRAINER_CAROL, Route223_Text_WesleyIntro, Route223_Text_WesleyDefeat
	msgbox Route223_Text_WesleyPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_WesleyIntro:
	.string "I've decided! I'm off to the POKéMON\n"
	.string "LEAGUE if I win!$"

Route223_Text_WesleyDefeat:
	.string "Blblblblugh...$"

Route223_Text_WesleyPost:
	.string "It's OK. Just let me float away like\n"
	.string "driftwood...$"

Route223_EventScript_Ricardo::
	trainerbattle_single TRAINER_NANCY, Route223_Text_RicardoIntro, Route223_Text_RicardoDefeat
	msgbox Route223_Text_RicardoPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_RicardoIntro:
	.string "It might not look like it, but I'm\n"
	.string "traveling now.$"

Route223_Text_RicardoDefeat:
	.string "You've got the upper hand on me.$"

Route223_Text_RicardoPost:
	.string "But you can be sure that there will be\n"
	.string "bigger challenges in front of you.\p"
	.string "Go! Go as far as you can! You alone can\n"
	.string "broaden your horizons.$"

Route223_EventScript_Francisco::
	trainerbattle_single TRAINER_MARTHA, Route223_Text_FranciscoIntro, Route223_Text_FranciscoDefeat
	msgbox Route223_Text_FranciscoPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_FranciscoIntro:
	.string "The sea around these parts is harsh.\n"
	.string "As am I!$"

Route223_Text_FranciscoDefeat:
	.string "The world is so harsh...$"

Route223_Text_FranciscoPost:
	.string "What? You've got that many Gym\n"
	.string "Badges? No wonder you're so tough...$"

Route223_EventScript_Colton::
	trainerbattle_single TRAINER_CEDRIC, Route223_Text_ColtonIntro, Route223_Text_ColtonDefeat
	msgbox Route223_Text_ColtonPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_ColtonIntro:
	.string "To swim every sea there is... That's my\n"
	.string "dream!$"

Route223_Text_ColtonDefeat:
	.string "Boo! I'm not done with my dream!$"

Route223_Text_ColtonPost:
	.string "What is the sea like in places like the\n"
	.string "Kanto and Hoenn regions?$"

Route223_EventScript_Troy::
	trainerbattle_single TRAINER_IRENE, Route223_Text_TroyIntro, Route223_Text_TroyDefeat
	msgbox Route223_Text_TroyPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_TroyIntro:
	.string "Yes, I know I can surf, but I'd rather\n"
	.string "swim instead.\p"
	.string "It does seem weird, I agree.$"

Route223_Text_TroyDefeat:
	.string "Kaploosh!$"

Route223_Text_TroyPost:
	.string "If you don't know how, I'm willing to\n"
	.string "show you how to swim.$"

Route223_EventScript_Oscar::
	trainerbattle_single TRAINER_GINA_AND_MIA_1, Route223_Text_OscarIntro, Route223_Text_OscarDefeat
	msgbox Route223_Text_OscarPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_OscarIntro:
	.string "I train at a POKéMON Gym, too.\p"
	.string "Don't think you're going to win easily!$"

Route223_Text_OscarDefeat:
	.string "Master Wake... I mean, CRASHER WAKE,\n"
	.string "sorry!$"

Route223_Text_OscarPost:
	.string "What to do... Train at the Gym again, or\n"
	.string "train by myself...$"

Route223_EventScript_Miranda::
	trainerbattle_single TRAINER_MIU_AND_YUKI, Route223_Text_MirandaIntro, Route223_Text_MirandaDefeat
	msgbox Route223_Text_MirandaPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_MirandaIntro:
	.string "I'm determined to go to the POKéMON\n"
	.string "LEAGUE, no matter how hard it is.$"

Route223_Text_MirandaDefeat:
	.string "Th-this is so hard...$"

Route223_Text_MirandaPost:
	.string "Losing won't make me quit. I mean, this\n"
	.string "is my dream!\p"
	.string "The POKéMON LEAGUE isn't going\n"
	.string "anywhere, either.$"

Route223_EventScript_Aubree::
	trainerbattle_single TRAINER_HUEY, Route223_Text_AubreeIntro, Route223_Text_AubreeDefeat
	msgbox Route223_Text_AubreePost, MSGBOX_AUTOCLOSE
	end

Route223_Text_AubreeIntro:
	.string "Excuse me for wearing my bikini!$"

Route223_Text_AubreeDefeat:
	.string "Was I multitasking too much, battling\n"
	.string "and swimming at the same time?$"

Route223_Text_AubreePost:
	.string "When I'm in my bikini, I'm at a loss\n"
	.string "about where to carry my POKé BALLS!$"

Route223_EventScript_Paige::
	trainerbattle_single TRAINER_EDMOND, Route223_Text_PaigeIntro, Route223_Text_PaigeDefeat
	msgbox Route223_Text_PaigePost, MSGBOX_AUTOCLOSE
	end

Route223_Text_PaigeIntro:
	.string "Deep breathing before battle!\n"
	.string "Breathe in...and out!$"

Route223_Text_PaigeDefeat:
	.string "Breathe in...and out. Breathe in...and\n"
	.string "out!$"

Route223_Text_PaigePost:
	.string "Deep breathing after battle, too!\n"
	.string "Breathe in...and out!$"

Route223_EventScript_Crystal::
	trainerbattle_single TRAINER_DWAYNE, Route223_Text_CrystalIntro, Route223_Text_CrystalDefeat
	msgbox Route223_Text_CrystalPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_CrystalIntro:
	.string "Your POKéMON doesn't seem to be\n"
	.string "tiring at all from carrying you on its\l"
	.string "back.\p"
	.string "Let me see how strong it is!$"

Route223_Text_CrystalDefeat:
	.string "I can't take any more... I'm all tired\n"
	.string "out!$"

Route223_Text_CrystalPost:
	.string "While floating here, I think about\n"
	.string "everything and nothing.\p"
	.string "Like how I should battle next, and\n"
	.string "what's for dinner tomorrow, and...$"

Route223_EventScript_Cassandra::
	trainerbattle_single TRAINER_LEONARD, Route223_Text_CassandraIntro, Route223_Text_CassandraDefeat
	msgbox Route223_Text_CassandraPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_CassandraIntro:
	.string "Did you know, I was crowned the\n"
	.string "champion of a swimsuit contest!\p"
	.string "So now, I'm trying to win a title at a\n"
	.string "POKéMON Contest!$"

Route223_Text_CassandraDefeat:
	.string "I'm speechless! I never lose when I'm\n"
	.string "in my swimsuit!$"

Route223_Text_CassandraPost:
	.string "I shouldn't be worried about what\n"
	.string "bikini to wear.\p"
	.string "The first thing to do is consider what\n"
	.string "POKéMON I should be using!$"

Route223_EventScript_Gabrielle::
	trainerbattle_single TRAINER_DUNCAN, Route223_Text_GabrielleIntro, Route223_Text_GabrielleDefeat
	msgbox Route223_Text_GabriellePost, MSGBOX_AUTOCLOSE
	end

Route223_Text_GabrielleIntro:
	.string "My favorite kind of guy is someone\n"
	.string "that looks good out on the open sea!$"

Route223_Text_GabrielleDefeat:
	.string "The tide is going out...$"

Route223_Text_GabriellePost:
	.string "Don't get me wrong, it's not as if I\n"
	.string "don't like mountain men.\p"
	.string "But, you know, my most favorite kind\n"
	.string "of guy looks great with POKéMON!$"

Route223_EventScript_Zachariah::
	trainerbattle_single TRAINER_JAZMYN, Route223_Text_ZachariahIntro, Route223_Text_ZachariahDefeat
	msgbox Route223_Text_ZachariahPost, MSGBOX_AUTOCLOSE
	end

Route223_Text_ZachariahIntro:
	.string "I came out here because I wanted to\n"
	.string "see the POKéMON LEAGUE for myself.$"

Route223_Text_ZachariahDefeat:
	.string "I'm shocked... No, really, I am.$"

Route223_Text_ZachariahPost:
	.string "The way I battle now, well, I can only\n"
	.string "look at the POKéMON LEAGUE!\p"
	.string "You, go on! You go to the POKéMON\n"
	.string "LEAGUE for me, too!$"
