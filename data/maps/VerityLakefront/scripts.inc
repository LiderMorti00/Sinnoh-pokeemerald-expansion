VerityLakefront_MapScripts::
	.byte 0

VerityLakefront_EventScript_Barry::
VerityLakefront_EventScript_Briefcase::
VerityLakefront_EventScript_BriefcaseScene::
	lockall
	setflag FLAG_SYS_POKEMON_GET
	applymovement LOCALID_LAKEFRONT_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox VerityLakefront_Text_ABriefcase, MSGBOX_DEFAULT
	closemessage
	playse SE_PIN
	msgbox VerityLakefront_Text_WildPokemon, MSGBOX_DEFAULT
	msgbox VerityLakefront_Text_UseThese, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LAKEFRONT_BRIEFCASE
	setflag FLAG_HIDE_LAKEFRONT_BRIEFCASE
	special ChooseStarter
	setvar VAR_SINNOH_HAS_POKEMON, 1
	special HealPlayerParty
	msgbox VerityLakefront_Text_BarryPicks, MSGBOX_DEFAULT
	closemessage
	setflag B_FLAG_NO_WHITEOUT
	switch VAR_STARTER_MON
	case 0, VerityLakefront_EventScript_BattleChimchar
	case 1, VerityLakefront_EventScript_BattlePiplup
	case 2, VerityLakefront_EventScript_BattleTurtwig
	end

VerityLakefront_EventScript_BattleChimchar::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_CHIMCHAR, VerityLakefront_Text_BarryDefeat
	goto VerityLakefront_EventScript_AfterBattle

VerityLakefront_EventScript_BattlePiplup::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_PIPLUP, VerityLakefront_Text_BarryDefeat
	goto VerityLakefront_EventScript_AfterBattle

VerityLakefront_EventScript_BattleTurtwig::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_TURTWIG, VerityLakefront_Text_BarryDefeat
	goto VerityLakefront_EventScript_AfterBattle

VerityLakefront_EventScript_AfterBattle::
	clearflag B_FLAG_NO_WHITEOUT
	special HealPlayerParty
	msgbox VerityLakefront_Text_BarryAfter, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LAKEFRONT_BARRY, VerityLakefront_Movement_BarryLeaves
	waitmovement 0
	removeobject LOCALID_LAKEFRONT_BARRY
	setflag FLAG_HIDE_LAKEFRONT_BARRY
	setvar VAR_SINNOH_STORY, 5
	releaseall
	end

VerityLakefront_Movement_BarryLeaves:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
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
	step_end

VerityLakefront_Text_ABriefcase:
	.string "BARRY: {PLAYER}! Look, the Professor\n"
	.string "left his briefcase behind!\p"
	.string "Should we... take a peek? Just a\n"
	.string "tiny little peek?$"

VerityLakefront_Text_WildPokemon:
	.string "Wild STARLY swooped down\n"
	.string "from the trees!$"

VerityLakefront_Text_UseThese:
	.string "BARRY: Whoa! {PLAYER}, grab a POKéMON\n"
	.string "from the briefcase! Quick!$"

VerityLakefront_Text_BarryPicks:
	.string "BARRY: Phew... That was close!\p"
	.string "I'll take this one, then!\n"
	.string "And now...\p"
	.string "Let's see whose POKéMON is\n"
	.string "stronger! Here I come!$"

VerityLakefront_Text_BarryDefeat:
	.string "What?! No way! I'm fining\n"
	.string "myself for that one!$"

VerityLakefront_Text_BarryAfter:
	.string "BARRY: Hmm... We used the\n"
	.string "Professor's POKéMON without asking.\p"
	.string "We'd better return the briefcase.\n"
	.string "His lab is in SANDGEM TOWN,\l"
	.string "east of ROUTE 201. Let's go!$"

VerityLakefront_EventScript_Sign1::
	msgbox VerityLakefront_Text_Sign1, MSGBOX_SIGN
	end

VerityLakefront_Text_Sign1:
	.string "LAKE VERITY\p"
	.string "A lake said to be home to a\n"
	.string "POKéMON of emotion.$"
