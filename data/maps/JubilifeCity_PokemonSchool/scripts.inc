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
	sn_walktoplayer LOCALID_SCHOOL_BARRY, SN_SPEED_FAST, 0, 0
	waitmovement LOCALID_SCHOOL_BARRY
	sn_playerface LOCALID_SCHOOL_BARRY, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox JubilifeCity_PokemonSchool_Text_Barry, MSGBOX_DEFAULT
	removeitem ITEM_PARCEL
	playfanfare MUS_OBTAIN_ITEM
	message JubilifeCity_PokemonSchool_Text_BarryParcel
	waitfanfare
	waitmessage
	msgbox JubilifeCity_PokemonSchool_Text_Barry2, MSGBOX_DEFAULT
	giveitem ITEM_TOWN_MAP
	msgbox JubilifeCity_PokemonSchool_Text_Barry3, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SCHOOL_BARRY, 6, 10, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SCHOOL_BARRY
	playse SE_EXIT
	removeobject LOCALID_SCHOOL_BARRY
	setflag FLAG_HIDE_SCHOOL_BARRY
	setvar VAR_SINNOH_STORY, 14
	releaseall
	end

JubilifeCity_PokemonSchool_Text_Barry:
	.string "{RIVAL}: Hey, {PLAYER}!\n"
	.string "Did you come to study, too?\p"
	.string "I went ahead and memorized everything\n"
	.string "that was up on the blackboard.\p"
	.string "After all, it’s the Trainer’s job to\n"
	.string "avoid having their precious POKéMON\l"
	.string "hurt in battle, right?\p"
	.string "So, {PLAYER}, what brings you?\n"
	.string "Huh?\l"
	.string "You’ve got something for me?$"

JubilifeCity_PokemonSchool_Text_BarryParcel:
	.string "{PLAYER} delivered the PARCEL.$"

JubilifeCity_PokemonSchool_Text_Barry2:
	.string "{RIVAL}: So, what is this...?\p"
	.string "Score!\n"
	.string "It’s a TOWN MAP!\p"
	.string "Huh?!\n"
	.string "Why are there two in here?\p"
	.string "I like it a lot, but I don’t need two.\n"
	.string "Here, {PLAYER}, you take one!$"

JubilifeCity_PokemonSchool_Text_Barry3:
	.string "{RIVAL}: Hmm...\p"
	.string "Well, according to the TOWN MAP,\n"
	.string "I guess Oreburgh City is where\l"
	.string "I should be going next.\p"
	.string "There’s a Gym, so it’d be perfect for\n"
	.string "raising the POKéMON I just caught.\p"
	.string "Well, I’m on the road to becoming\n"
	.string "the greatest Trainer of all time!\p"
	.string "See you around!$"

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
