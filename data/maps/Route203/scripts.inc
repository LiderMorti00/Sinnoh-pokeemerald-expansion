Route203_MapScripts::
	.byte 0

Route203_EventScript_Barry::
Route203_EventScript_BarryScene::
	lockall
	applymovement LOCALID_ROUTE203_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route203_Text_BarryIntro, MSGBOX_DEFAULT
	closemessage
	switch VAR_STARTER_MON
	case 0, Route203_EventScript_BattleChimchar
	case 1, Route203_EventScript_BattlePiplup
	case 2, Route203_EventScript_BattleTurtwig
	end

Route203_EventScript_BattleChimchar::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE203_CHIMCHAR, Route203_Text_BarryDefeat
	goto Route203_EventScript_BarryAfter

Route203_EventScript_BattlePiplup::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE203_PIPLUP, Route203_Text_BarryDefeat
	goto Route203_EventScript_BarryAfter

Route203_EventScript_BattleTurtwig::
	trainerbattle_no_intro TRAINER_BARRY_ROUTE203_TURTWIG, Route203_Text_BarryDefeat
	goto Route203_EventScript_BarryAfter

Route203_EventScript_BarryAfter::
	msgbox Route203_Text_BarryAfter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE203_BARRY, Route203_Movement_BarryLeaves
	waitmovement 0
	removeobject LOCALID_ROUTE203_BARRY
	setflag FLAG_HIDE_ROUTE203_BARRY
	setvar VAR_SINNOH_STORY, 17
	releaseall
	end

Route203_Movement_BarryLeaves:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	step_end

Route203_Text_BarryIntro:
	.string "BARRY: Oh! {PLAYER}! Perfect\n"
	.string "timing!\p"
	.string "I've been training nonstop. Let's\n"
	.string "see which of us got stronger!$"

Route203_Text_BarryDefeat:
	.string "Argh! You beat me again?! I'm\n"
	.string "fining you!$"

Route203_Text_BarryAfter:
	.string "BARRY: OREBURGH CITY is past the\n"
	.string "gate ahead. There's a GYM there!\p"
	.string "I'm going to get my first BADGE\n"
	.string "before you. See ya!$"

Route203_EventScript_Sebastian::
	trainerbattle_single TRAINER_EDDIE, Route203_Text_SebastianIntro, Route203_Text_SebastianDefeat
	msgbox Route203_Text_SebastianPost, MSGBOX_AUTOCLOSE
	end

Route203_Text_SebastianIntro:
	.string "Before I challenge the POKéMON Gym\n"
	.string "Leader, I'll test my strength on you!$"

Route203_Text_SebastianDefeat:
	.string "I guess it means I'm not ready for the\n"
	.string "Gym challenge yet...$"

Route203_Text_SebastianPost:
	.string "I guess if you don't have a single Gym\n"
	.string "Badge, you're a total nobody...$"

Route203_EventScript_Michael::
	trainerbattle_single TRAINER_ALLEN, Route203_Text_MichaelIntro, Route203_Text_MichaelDefeat
	msgbox Route203_Text_MichaelPost, MSGBOX_AUTOCLOSE
	end

Route203_Text_MichaelIntro:
	.string "I get my get-up-and-go from my\n"
	.string "POKéMON!\p"
	.string "Here we go! KRICKETOT! ZUBAT!$"

Route203_Text_MichaelDefeat:
	.string "Ack! My POKéMON...$"

Route203_Text_MichaelPost:
	.string "Keep out of the grass or dodge the\n"
	.string "eyes of Trainers...?\p"
	.string "I always have a tough time choosing.$"

Route203_EventScript_Kaitlin::
	trainerbattle_single TRAINER_DILLON, Route203_Text_KaitlinIntro, Route203_Text_KaitlinDefeat
	msgbox Route203_Text_KaitlinPost, MSGBOX_AUTOCLOSE
	end

Route203_Text_KaitlinIntro:
	.string "I found a Trainer while looking for\n"
	.string "some POKéMON!$"

Route203_Text_KaitlinDefeat:
	.string "Hunh? You're finished so soon?$"

Route203_Text_KaitlinPost:
	.string "I walk through tall grass until I find\n"
	.string "the POKéMON I want.$"

Route203_EventScript_Dallas::
	trainerbattle_single TRAINER_JAYLEN, Route203_Text_DallasIntro, Route203_Text_DallasDefeat
	msgbox Route203_Text_DallasPost, MSGBOX_AUTOCLOSE
	end

Route203_Text_DallasIntro:
	.string "I'm never apart from my SHINX. Our\n"
	.string "bond is strong!$"

Route203_Text_DallasDefeat:
	.string "So sad... And so crushed...$"

Route203_Text_DallasPost:
	.string "I don't bear grudges over losing. But I\n"
	.string "promise I'll get tougher!$"

Route203_EventScript_Madeline::
	trainerbattle_single TRAINER_TRAVIS, Route203_Text_MadelineIntro, Route203_Text_MadelineDefeat
	msgbox Route203_Text_MadelinePost, MSGBOX_AUTOCLOSE
	end

Route203_Text_MadelineIntro:
	.string "I got a nifty-keen Gym Badge from the\n"
	.string "Gym Leader in OREBURGH CITY!$"

Route203_Text_MadelineDefeat:
	.string "Oh, I lost! Lalala!$"

Route203_Text_MadelinePost:
	.string "I'm collecting lots of Gym Badges.\n"
	.string "They're so sparkly and pretty!$"

Route203_EventScript_Sign1::
	msgbox Route203_Text_Sign1, MSGBOX_SIGN
	end

Route203_Text_Sign1:
	.string "ROUTE 203\p"
	.string "West: JUBILIFE CITY East: OREBURGH\n"
	.string "GATE$"

Route203_EventScript_Sign2::
	msgbox Route203_Text_Sign2, MSGBOX_SIGN
	end

Route203_Text_Sign2:
	.string "TRAINER TIPS\p"
	.string "Some items can only be found by\n"
	.string "searching carefully. Look closely\l"
	.string "at odd-looking spots!$"

Route203_EventScript_Sign3::
	msgbox Route203_Text_Sign3, MSGBOX_SIGN
	end

Route203_Text_Sign3:
	.string "TRAINER TIPS\p"
	.string "ZUBAT fly out in dark caves. REPEL\n"
	.string "keeps weak wild POKéMON away.$"

Route203_EventScript_Sign4::
	msgbox Route203_Text_Sign4, MSGBOX_SIGN
	end

Route203_Text_Sign4:
	.string "OREBURGH GATE\p"
	.string "The tunnel ahead leads to OREBURGH\n"
	.string "CITY.$"

Route203_EventScript_PtNpc1::
	msgbox Route203_Text_PtNpc1, MSGBOX_NPC
	end

Route203_Text_PtNpc1:
	.string "Your favorite POKéMON should be\n"
	.string "placed at the top left of your party\l"
	.string "list.\p"
	.string "That way, it will be the first to go out\n"
	.string "in a battle.$"
