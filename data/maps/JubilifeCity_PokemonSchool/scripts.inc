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
	removeitem ITEM_PARCEL
	msgbox JubilifeCity_PokemonSchool_Text_Barry2, MSGBOX_DEFAULT
	giveitem ITEM_TOWN_MAP
	msgbox JubilifeCity_PokemonSchool_Text_Barry3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCHOOL_BARRY, JubilifeCity_PokemonSchool_Movement_BarryLeaves
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SCHOOL_BARRY
	setflag FLAG_HIDE_SCHOOL_BARRY
	setvar VAR_SINNOH_STORY, 14
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
	.string "BARRY: {PLAYER}! What are you\n"
	.string "doing here? A PARCEL from my mom?\l"
	.string "For me?\p"
	.string "...Oh! Two TOWN MAPS! Mom always\n"
	.string "buys everything twice.$"

JubilifeCity_PokemonSchool_Text_Barry2:
	.string "BARRY: You can have one of them!\n"
	.string "Here!$"

JubilifeCity_PokemonSchool_Text_Barry3:
	.string "BARRY: With that, you'll never get\n"
	.string "lost! I'm heading to OREBURGH for\l"
	.string "my first BADGE. See ya!$"

JubilifeCity_PokemonSchool_EventScript_Harrison::
	trainerbattle_single TRAINER_DAISY, JubilifeCity_PokemonSchool_Text_HarrisonIntro, JubilifeCity_PokemonSchool_Text_HarrisonDefeat
	msgbox JubilifeCity_PokemonSchool_Text_HarrisonPost, MSGBOX_AUTOCLOSE
	end

JubilifeCity_PokemonSchool_Text_HarrisonIntro:
	.string "Let's test what we learned in\n"
	.string "class!$"

JubilifeCity_PokemonSchool_Text_HarrisonDefeat:
	.string "I need to study more...$"

JubilifeCity_PokemonSchool_Text_HarrisonPost:
	.string "Type matchups are harder than they\n"
	.string "look!$"

JubilifeCity_PokemonSchool_EventScript_Christine::
	trainerbattle_single TRAINER_JOHANNA, JubilifeCity_PokemonSchool_Text_ChristineIntro, JubilifeCity_PokemonSchool_Text_ChristineDefeat
	msgbox JubilifeCity_PokemonSchool_Text_ChristinePost, MSGBOX_AUTOCLOSE
	end

JubilifeCity_PokemonSchool_Text_ChristineIntro:
	.string "I'm the top student here! Battle\n"
	.string "me!$"

JubilifeCity_PokemonSchool_Text_ChristineDefeat:
	.string "Maybe not the top student after\n"
	.string "all...$"

JubilifeCity_PokemonSchool_Text_ChristinePost:
	.string "I'll review my notes and try\n"
	.string "again!$"
