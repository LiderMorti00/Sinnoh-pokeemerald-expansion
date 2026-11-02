TwinleafTown_MainHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_MainHouse_1F_OnFrame
	.byte 0

TwinleafTown_MainHouse_1F_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 1, TwinleafTown_MainHouse_1F_EventScript_MomGrass
	map_script_2 VAR_SINNOH_STORY, 4, TwinleafTown_MainHouse_1F_EventScript_MomShoes
	map_script_2 VAR_SINNOH_STORY, 10, TwinleafTown_MainHouse_1F_EventScript_MomJournal
	.2byte 0

TwinleafTown_MainHouse_1F_EventScript_MomGrass::
	lockall
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_MomGrass, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_SINNOH_STORY, 2
	releaseall
	end

TwinleafTown_MainHouse_1F_EventScript_MomShoes::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	applymovement LOCALID_TWINLEAF_MOM, TwinleafTown_MainHouse_1F_Movement_MomToPlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_MomShoes, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message TwinleafTown_MainHouse_1F_Text_ReceivedShoes
	waitfanfare
	waitmessage
	setflag FLAG_SYS_B_DASH
	msgbox TwinleafTown_MainHouse_1F_Text_ShoesInfo, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWINLEAF_MOM, TwinleafTown_MainHouse_1F_Movement_MomBack
	waitmovement 0
	setvar VAR_SINNOH_STORY, 5
	releaseall
	end

TwinleafTown_MainHouse_1F_EventScript_MomJournal::
	lockall
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_MomJournal, MSGBOX_DEFAULT
	giveitem ITEM_JOURNAL
	applymovement LOCALID_HOME_BARRYS_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_BarrysMom, MSGBOX_DEFAULT
	giveitem ITEM_PARCEL
	msgbox TwinleafTown_MainHouse_1F_Text_BarrysMom2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_HOME_BARRYS_MOM
	setflag FLAG_HIDE_HOME_BARRYS_MOM
	fadescreen FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 11
	releaseall
	end

TwinleafTown_MainHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, TwinleafTown_MainHouse_1F_EventScript_SNMomNormal
	goto_if_set FLAG_SN_MOM_POSTGAME, TwinleafTown_MainHouse_1F_EventScript_SNMomNormal
	setflag FLAG_SN_MOM_POSTGAME
	msgbox TwinleafTown_MainHouse_1F_Text_SNMomPost, MSGBOX_DEFAULT
	release
	end
TwinleafTown_MainHouse_1F_EventScript_SNMomNormal:
	msgbox TwinleafTown_MainHouse_1F_Text_MomTalk, MSGBOX_DEFAULT
	release
	end

TwinleafTown_MainHouse_1F_EventScript_BarrysMom::
	msgbox TwinleafTown_MainHouse_1F_Text_BarrysMom2, MSGBOX_NPC
	end

TwinleafTown_MainHouse_1F_Text_MomGrass:
	.string "Mom: {PLAYER}!\p"
	.string "{RIVAL} already left.\p"
	.string "I don’t know what it was about, but he\n"
	.string "sure was in a hurry!\p"
	.string "Mom: You know how impatient {RIVAL}\n"
	.string "is.\p"
	.string "He took off before I could even ask\n"
	.string "what it was about.\p"
	.string "Mom: But that {RIVAL}... He always\n"
	.string "invites you along.\p"
	.string "Mom: Oh, yes! {PLAYER}!\p"
	.string "Don’t go into the tall grass. Wild\n"
	.string "POKéMON might attack you.\p"
	.string "It would be OK if you had your own\n"
	.string "POKéMON, but you don’t, so...\p"
	.string "Well, take care, sweetie!$"

TwinleafTown_MainHouse_1F_Text_MomShoes:
	.string "Mom: What’s the matter, dear?\p"
	.string "...\p"
	.string "Wow. That’s what happened to you?\p"
	.string "You and {RIVAL} are lucky to have\n"
	.string "met Prof. Rowan.\p"
	.string "Imagine if you didn’t...\p"
	.string "I wouldn’t like to think what the wild\n"
	.string "POKéMON might have done to you two.\p"
	.string "{PLAYER}, go see Prof. Rowan, and thank\n"
	.string "him properly for your POKéMON.\p"
	.string "His lab is in Sandgem Town, isn’t it?\p"
	.string "Now that you have your own POKéMON,\n"
	.string "the tall grass won’t be so threatening.\p"
	.string "Oh, I know! {PLAYER}, put these on.$"

TwinleafTown_MainHouse_1F_Text_ReceivedShoes:
	.string "{PLAYER} received a pair of Running\n"
	.string "Shoes!$"

TwinleafTown_MainHouse_1F_Text_ShoesInfo:
	.string "Going to Sandgem Town is like an\n"
	.string "adventure in itself, right?\p"
	.string "With those Running Shoes, you can get\n"
	.string "to faraway places much faster.\p"
	.string "OK... Let me read the instructions...\p"
	.string "“Press the B Button and dash about\n"
	.string "faster than ever before!\p"
	.string "“Put on the Running Shoes and blaze\n"
	.string "new trails of adventure!”\p"
	.string "Well, isn’t that just nifty!$"

TwinleafTown_MainHouse_1F_Text_MomJournal:
	.string "Mom: What is it, {PLAYER}?\p"
	.string "...\p"
	.string "Wow. Professor Rowan asked you to do\n"
	.string "something that big.\p"
	.string "OK, dear, go for it! Your mom’s got your\n"
	.string "back!\p"
	.string "Oh, I know! {PLAYER}, I’ve got something\n"
	.string "that you’ll find useful.\p"
	.string "That’s a Journal. It keeps a record of\n"
	.string "your daily events.\p"
	.string "Check it, and you’ll be able to remember\n"
	.string "what you did last.$"

TwinleafTown_MainHouse_1F_Text_BarrysMom:
	.string "Gee, a journey full of adventure... I\n"
	.string "envy you, kiddo.\p"
	.string "Plus, you’re not alone. You have your\n"
	.string "POKéMON with you.\p"
	.string "I wish I could go instead!\p"
	.string "I’m just joking, dear! Yup, {PLAYER}!\p"
	.string "I’ll be all right by myself, so you go\n"
	.string "and enjoy your adventure!\p"
	.string "When you’re exposed to new things, and\n"
	.string "experience new sensations...\p"
	.string "It makes your mother happy, too.\p"
	.string "...But come back sometimes.\p"
	.string "I would like to see the kinds of\n"
	.string "POKéMON you’ve caught, dear.\p"
	.string "{PLAYER}’s mom: Excuse me. Is my little\n"
	.string "{PLAYER} here?\p"
	.string "Mom: Oh? No, he’s not...\p"
	.string "{PLAYER}’s mom: Oh... Then, he must have\n"
	.string "left already...\p"
	.string "What to do...\p"
	.string "That boy shouted about going on an\n"
	.string "adventure, then he bolted.\p"
	.string "He’s so headstrong and reckless... I at\n"
	.string "least wanted him to take this...\p"
	.string "Mom: Not to worry, {PLAYER} will deliver\n"
	.string "that to him.\p"
	.string "{RIVAL}’s mom: Oh, really? You’d do\n"
	.string "that for me?\p"
	.string "{PLAYER}, please take this to\n"
	.string "{RIVAL} for me.$"

TwinleafTown_MainHouse_1F_Text_BarrysMom2:
	.string "{PLAYER}’s mom: Let me think...\p"
	.string "Knowing my boy, he would probably head\n"
	.string "straight to Jubilife City...\p"
	.string "OK, please take that to my {PLAYER}.\p"
	.string "Mom: Bye-bye, {PLAYER}! Enjoy your\n"
	.string "adventure!$"

TwinleafTown_MainHouse_1F_Text_MomTalk:
	.string "Mom: {PLAYER}.\p"
	.string "Listen. Always treat your POKéMON with\n"
	.string "kindness.\p"
	.string "Your POKéMON work hard, not for\n"
	.string "themselves, but for you!$"

TwinleafTown_MainHouse_1F_Movement_MomToPlayer:
	walk_down
	walk_down
	step_end

TwinleafTown_MainHouse_1F_Movement_MomBack:
	walk_up
	walk_up
	face_up
	step_end

TwinleafTown_MainHouse_1F_Text_SNMomPost:
	.string "Mom: {PLAYER}!\p"
	.string "{RIVAL} came looking for you a\n"
	.string "little while ago.\p"
	.string "I don’t know what it was about, but he\n"
	.string "was shouting about you needing\p"
	.string "to get on a ship at Snowpoint City.\p"
	.string "You know how impatient he is. He was\n"
	.string "gone before I could ask.$"
