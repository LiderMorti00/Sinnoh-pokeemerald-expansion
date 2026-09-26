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
	setvar VAR_SINNOH_STORY, 13
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
	.string "My MACHOP has been doing push-ups\n"
	.string "all day. Ready?$"

Route203_Text_SebastianDefeat:
	.string "Too many push-ups, not enough\n"
	.string "battling...$"

Route203_Text_SebastianPost:
	.string "Muscles aren't everything, I\n"
	.string "guess.$"

Route203_EventScript_Michael::
	trainerbattle_single TRAINER_ALLEN, Route203_Text_MichaelIntro, Route203_Text_MichaelDefeat
	msgbox Route203_Text_MichaelPost, MSGBOX_AUTOCLOSE
	end

Route203_Text_MichaelIntro:
	.string "The cave nearby is full of ZUBAT.\n"
	.string "I caught one!$"

Route203_Text_MichaelDefeat:
	.string "Hey, not fair!$"

Route203_Text_MichaelPost:
	.string "Try the cave near OREBURGH GATE.\n"
	.string "It's dark in there!$"

Route203_EventScript_Kaitlin::
	trainerbattle_single TRAINER_DILLON, Route203_Text_KaitlinIntro, Route203_Text_KaitlinDefeat
	msgbox Route203_Text_KaitlinPost, MSGBOX_AUTOCLOSE
	end

Route203_Text_KaitlinIntro:
	.string "I have four POKéMON! Can you\n"
	.string "handle all of them?$"

Route203_Text_KaitlinDefeat:
	.string "All four... gone.$"

Route203_Text_KaitlinPost:
	.string "Quantity isn't quality, is it?$"

Route203_EventScript_Dallas::
	trainerbattle_single TRAINER_JAYLEN, Route203_Text_DallasIntro, Route203_Text_DallasDefeat
	msgbox Route203_Text_DallasPost, MSGBOX_AUTOCLOSE
	end

Route203_Text_DallasIntro:
	.string "My SHINX's fur crackles with\n"
	.string "electricity. Feel it!$"

Route203_Text_DallasDefeat:
	.string "Zapped out...$"

Route203_Text_DallasPost:
	.string "SHINX glows when it's excited. So\n"
	.string "cool.$"

Route203_EventScript_Madeline::
	trainerbattle_single TRAINER_TRAVIS, Route203_Text_MadelineIntro, Route203_Text_MadelineDefeat
	msgbox Route203_Text_MadelinePost, MSGBOX_AUTOCLOSE
	end

Route203_Text_MadelineIntro:
	.string "PSYDUCK always has a headache, but\n"
	.string "it battles hard!$"

Route203_Text_MadelineDefeat:
	.string "Poor PSYDUCK...$"

Route203_Text_MadelinePost:
	.string "Its headache got worse. I'll take\n"
	.string "it to the POKéMON CENTER.$"

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

Route203_EventScript_SignExtra1::
	msgbox Route203_Text_SignExtra1, MSGBOX_SIGN
	end

Route203_Text_SignExtra1:
	.string "OREBURGH GATE\p"
	.string "The tunnel ahead leads to OREBURGH\n"
	.string "CITY.$"

Route203_EventScript_PtNpc1::
	msgbox Route203_Text_PtNpc1, MSGBOX_NPC
	end

Route203_Text_PtNpc1:
	.string "OREBURGH GATE is just ahead. It's\n"
	.string "a dark tunnel, so be ready!$"
