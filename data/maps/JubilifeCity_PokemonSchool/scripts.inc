JubilifeCity_PokemonSchool_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_PokemonSchool_OnTransition
	.byte 0

JubilifeCity_PokemonSchool_EventScript_PtNpc1::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc1:
	.string "It's perfectly fine for Trainers and\n"
	.string "POKéMON to develop at their own pace.\p"
	.string "If there is anything you're not\n"
	.string "familiar with, you can look it up here.$"

JubilifeCity_PokemonSchool_EventScript_PtNpc2::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc2:
	.string "We learned about POKéMON types\n"
	.string "today. Umm...\p"
	.string "Grass is weak to Fire, Fire is weak to\n"
	.string "Water, and Water is weak to Grass!$"

JubilifeCity_PokemonSchool_EventScript_PtNpc3::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc3:
	.string "POKéMON are smart enough to use items\n"
	.string "they're holding.\p"
	.string "But they won't know what to do with\n"
	.string "man-made items like Potions and\l"
	.string "Antidotes.$"

JubilifeCity_PokemonSchool_EventScript_PtNpc4::
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_PtNpc4:
	.string "I wrote an essay in my notebook on\n"
	.string "what makes a true POKéMON Trainer.$"

JubilifeCity_PokemonSchool_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_PokemonSchool_EventScript_PtNpc5_No
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc5_Yes, MSGBOX_DEFAULT
	release
	end

JubilifeCity_PokemonSchool_EventScript_PtNpc5_No:
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc5_No, MSGBOX_DEFAULT
	release
	end

JubilifeCity_PokemonSchool_Text_PtNpc5:
	.string "Doing it is the best way to learn! Can\n"
	.string "we get a battle with you?$"

JubilifeCity_PokemonSchool_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc6, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_PokemonSchool_EventScript_PtNpc6_No
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc6_Yes, MSGBOX_DEFAULT
	release
	end

JubilifeCity_PokemonSchool_EventScript_PtNpc6_No:
	msgbox JubilifeCity_PokemonSchool_Text_PtNpc6_No, MSGBOX_DEFAULT
	release
	end

JubilifeCity_PokemonSchool_Text_PtNpc6:
	.string "I just became friends with my\n"
	.string "POKéMON.\p"
	.string "I'm not sure if we can do this\n"
	.string "properly, but may we battle?$"

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
	.string "{RIVAL}: {PLAYER}! What are you\n"
	.string "doing here? A PARCEL from my mom?\l"
	.string "For me?\p"
	.string "...Oh! Two TOWN MAPS! Mom always\n"
	.string "buys everything twice.$"

JubilifeCity_PokemonSchool_Text_Barry2:
	.string "{RIVAL}: You can have one of them!\n"
	.string "Here!$"

JubilifeCity_PokemonSchool_Text_Barry3:
	.string "{RIVAL}: With that, you'll never get\n"
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

JubilifeCity_PokemonSchool_OnTransition:
	goto_if_lt VAR_SINNOH_STORY, 12, JubilifeCity_PokemonSchool_EventScript_NoBarry
	goto_if_gt VAR_SINNOH_STORY, 13, JubilifeCity_PokemonSchool_EventScript_NoBarry
	clearflag FLAG_HIDE_SCHOOL_BARRY
	end
JubilifeCity_PokemonSchool_EventScript_NoBarry::
	setflag FLAG_HIDE_SCHOOL_BARRY
	end

JubilifeCity_PokemonSchool_Text_PtNpc5_Yes:
	.string "Go! My POKéMON, go!$"

JubilifeCity_PokemonSchool_Text_PtNpc5_No:
	.string "Aww! But battling is the best way to\n"
	.string "learn about POKéMON!$"

JubilifeCity_PokemonSchool_Text_PtNpc6_Yes:
	.string "I need to try the things I learned\n"
	.string "before I forget them!$"

JubilifeCity_PokemonSchool_Text_PtNpc6_No:
	.string "Boo! Where's your sense of adventure?\p"
	.string "Don't be shy about talking to people\n"
	.string "and getting into battles!$"
