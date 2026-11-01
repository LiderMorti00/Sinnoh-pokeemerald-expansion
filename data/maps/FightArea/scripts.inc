FightArea_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FightArea_OnTransitionSN
	.byte 0

FightArea_EventScript_PtNpc1::
	msgbox FightArea_Text_PtNpc1, MSGBOX_NPC
	end

FightArea_Text_PtNpc1:
	.string "Whenever I go to a new place, I get\n"
	.string "excited over what I might discover.\p"
	.string "But places I've visited before...\p"
	.string "Even those places thrill me with new\n"
	.string "discoveries!$"

FightArea_EventScript_PtNpc2::
	msgbox FightArea_Text_PtNpc2, MSGBOX_NPC
	end

FightArea_Text_PtNpc2:
	.string "Because of the volcano, the land\n"
	.string "around here is craggy.\p"
	.string "The rough terrain and all the ups and\n"
	.string "downs make it hard to hike.$"

FightArea_EventScript_PtNpc3::
	msgbox FightArea_Text_PtNpc3, MSGBOX_NPC
	end

FightArea_Text_PtNpc3:
	.string "The way the Battle Tower looms...\p"
	.string "It really is a wall that stands before\n"
	.string "every Trainer.$"

FightArea_EventScript_PtNpc4::
	msgbox FightArea_Text_PtNpc4, MSGBOX_NPC
	end

FightArea_Text_PtNpc4:
	.string "I've battled many Trainers over the\n"
	.string "years.\p"
	.string "I've gained some confidence in my\n"
	.string "skill levels, too.\p"
	.string "But the world is still a huge place.\n"
	.string "It's not easy to win in life!$"

FightArea_EventScript_PtNpc5::
	msgbox FightArea_Text_PtNpc5, MSGBOX_NPC
	end

FightArea_Text_PtNpc5:
	.string "The POKéMON LEAGUE's Elite Four come\n"
	.string "here sometimes!$"

FightArea_EventScript_PtNpc6::
	msgbox FightArea_Text_PtNpc6, MSGBOX_NPC
	end

FightArea_Text_PtNpc6:
	.string "Your POKéMON are from SINNOH, aren't\n"
	.string "they?\p"
	.string "They're not what we're used to seeing\n"
	.string "around here.$"

FightArea_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox FightArea_Text_PtNpc7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FightArea_EventScript_PtNpc7_No
	msgbox FightArea_Text_PtNpc7_Yes, MSGBOX_DEFAULT
	closemessage
	warp MAP_SNOWPOINT_CITY, 5, 57
	waitstate
	release
	end

FightArea_EventScript_PtNpc7_No:
	msgbox FightArea_Text_PtNpc7_No, MSGBOX_DEFAULT
	release
	end

FightArea_Text_PtNpc7:
	.string "What's up? Do you want to sail to\n"
	.string "SNOWPOINT CITY?$"

FightArea_Text_PtNpc7_Yes:
	.string "Aye, right! It's anchors aweigh, then!$"

FightArea_Text_PtNpc7_No:
	.string "Oh, right. You'd rather just fly\n"
	.string "everywhere in some big hurry.$"

FightArea_EventScript_PtNpc8::
	msgbox FightArea_Text_PtNpc8, MSGBOX_NPC
	end

FightArea_Text_PtNpc8:
	.string "There's no end to becoming tough!\p"
	.string "I just made that up, but it sounds\n"
	.string "kind of cool, huh?$"

FightArea_OnTransitionSN:
	call FightArea_EventScript_SNVis_FIGHT_BARRY
	end

FightArea_EventScript_SNVis_FIGHT_BARRY:
	setflag FLAG_SN_HIDE_FIGHT_BARRY
	goto_if_defeated TRAINER_MARIA_4, FightArea_EventScript_SNVis_FIGHT_BARRY_End
	goto_if_defeated TRAINER_MARIA_5, FightArea_EventScript_SNVis_FIGHT_BARRY_End
	goto_if_defeated TRAINER_ISAIAH_1, FightArea_EventScript_SNVis_FIGHT_BARRY_End
	clearflag FLAG_SN_HIDE_FIGHT_BARRY
FightArea_EventScript_SNVis_FIGHT_BARRY_End:
	return

FightArea_EventScript_SNBarry::
	lock
	faceplayer
	msgbox FightArea_EventScript_SNBarry_Intro, MSGBOX_DEFAULT
	closemessage
	switch VAR_STARTER_MON
	case 0, FightArea_EventScript_SNBarry_B0
	case 1, FightArea_EventScript_SNBarry_B1
	case 2, FightArea_EventScript_SNBarry_B2
FightArea_EventScript_SNBarry_B0:
	trainerbattle_no_intro TRAINER_MARIA_4, FightArea_EventScript_SNBarry_Defeat
	goto FightArea_EventScript_SNBarry_After
FightArea_EventScript_SNBarry_B1:
	trainerbattle_no_intro TRAINER_MARIA_5, FightArea_EventScript_SNBarry_Defeat
	goto FightArea_EventScript_SNBarry_After
FightArea_EventScript_SNBarry_B2:
	trainerbattle_no_intro TRAINER_ISAIAH_1, FightArea_EventScript_SNBarry_Defeat
	goto FightArea_EventScript_SNBarry_After
FightArea_EventScript_SNBarry_After:
	msgbox FightArea_EventScript_SNBarry_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_FIGHT_BARRY
	fadescreen FADE_FROM_BLACK
	release
	end
FightArea_EventScript_SNBarry_Intro:
	.string "BARRY: Hey, {PLAYER}!\p"
	.string "You’re not the only one who’s getting\n"
	.string "tougher, you know!\p"
	.string "I’ll prove it to you! Get ready to\n"
	.string "battle!$"

FightArea_EventScript_SNBarry_Defeat:
	.string "BARRY: Argh!$"

FightArea_EventScript_SNBarry_Post:
	.string "BARRY: ...! It’s OK, though.\p"
	.string "{PLAYER}, the tougher you get, the\n"
	.string "tougher we can get, too.\p"
	.string "There’s no end to POKéMON. That’s what\n"
	.string "I’m saying, {PLAYER}.$"

FightArea_EventScript_SNFisher::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_SUPER_ROD, FightArea_EventScript_SNFisher_Done
	msgbox FightArea_EventScript_SNFisher_Ask, MSGBOX_YESNO
	giveitem ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_SN_RECEIVED_SUPER_ROD
FightArea_EventScript_SNFisher_Done:
	msgbox FightArea_EventScript_SNFisher_After, MSGBOX_DEFAULT
	release
	end
FightArea_EventScript_SNFisher_Ask:
	.string "Hmm! A Super Rod is really good!\p"
	.string "Wouldn’t you agree?$"

FightArea_EventScript_SNFisher_After:
	.string "What’s that? Any advice for fishing?\p"
	.string "Well, I’ll tell you. It’s all about the\n"
	.string "rod and technique!$"
