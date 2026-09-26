JubilifeCity_PokemonSchool_MapScripts::
	.byte 0

JubilifeCity_PokemonSchool_EventScript_PtNpc1::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc1:
	.string "Welcome to the TRAINERS' SCHOOL!\n"
	.string "Take a look at the blackboard and\l"
	.string "learn the basics.$"

JubilifeCity_PokemonSchool_EventScript_PtNpc2::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc2:
	.string "I'm studying hard to become a\n"
	.string "great Trainer!$"

JubilifeCity_PokemonSchool_EventScript_PtNpc3::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc3:
	.string "Status conditions are tricky.\n"
	.string "POISON keeps hurting even after a\l"
	.string "battle!$"

JubilifeCity_PokemonSchool_EventScript_PtNpc4::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc4:
	.string "If a POKéMON is asleep, it can't\n"
	.string "attack. Use that to your\l"
	.string "advantage!$"

JubilifeCity_PokemonSchool_EventScript_PtNpc5::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc5, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc5:
	.string "Type matchups are the most\n"
	.string "important thing. WATER beats FIRE!$"

JubilifeCity_PokemonSchool_EventScript_PtNpc6::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc6, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc6:
	.string "I want to be a GYM LEADER someday.\n"
	.string "I'm taking notes on everything!$"

JubilifeCity_PokemonSchool_EventScript_Barry::
JubilifeCity_PokemonSchool_EventScript_BarryScene::
	lockall
	applymovement LOCALID_SCHOOL_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox JubilifeCity_PokemonSchool_Text_Barry, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCHOOL_BARRY, JubilifeCity_PokemonSchool_Movement_BarryLeaves
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SCHOOL_BARRY
	setflag FLAG_HIDE_SCHOOL_BARRY
	setvar VAR_SINNOH_STORY, 10
	releaseall
	end

JubilifeCity_PokemonSchool_Movement_BarryLeaves:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	step_end

JubilifeCity_PokemonSchool_Text_Barry:
	.string "BARRY: {PLAYER}! There you are! I\n"
	.string "already learned everything there\l"
	.string "is to know here!\p"
	.string "Oh, and there's a POKéTCH campaign\n"
	.string "going on in town. Find the clowns\l"
	.string "and answer their quizzes!\p"
	.string "Get three COUPONS and they give\n"
	.string "you a POKéTCH for free! I'm off to\l"
	.string "OREBURGH to get my first BADGE.\n"
	.string "See ya!$"
