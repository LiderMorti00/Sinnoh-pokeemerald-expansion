PokemonMansion_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_OnTransitionSN
	.byte 0

PokemonMansion_OnTransitionSN:
	setflag FLAG_SN_HIDE_MAID_KNOCKOUT
	setflag FLAG_SN_HIDE_MAID_BOSS
	end

PokemonMansion_Text_PtNpc1:
	.string "Mr. Backlot is the master of this\n"
	.string "mansion. This is his office.$"

PokemonMansion_EventScript_PtNpc1::
	msgbox PokemonMansion_Text_PtNpc1, MSGBOX_NPC
	end

PokemonMansion_Text_PtNpc2:
	.string "This is the way out to the trophy\n"
	.string "garden.\p"
	.string "The garden is open for all visitors to\n"
	.string "enjoy.\p"
	.string "However, please beware--wild POKéMON\n"
	.string "may appear in the garden.$"

PokemonMansion_EventScript_PtNpc2::
	msgbox PokemonMansion_Text_PtNpc2, MSGBOX_NPC
	end

PokemonMansion_Text_PtNpc3:
	.string "Please visit again tomorrow.$"

PokemonMansion_EventScript_PtNpc3::
	lockall
	faceplayer
	goto_if_set FLAG_DAILY_SN_MAID_DONE, PokemonMansion_EventScript_SNMTomorrow
	sn_walkto OBJ_EVENT_ID_PLAYER, 3, 8, SN_SPEED_NORMAL, DIR_WEST, 0, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement LOCALID_MAID_FAR_WEST, Common_Movement_FaceRight
	waitmovement 0
	special SinnohMaidTarget
	copyvar VAR_0x8006, VAR_RESULT
	goto_if_set FLAG_SN_MAID_EXPLAINED, PokemonMansion_EventScript_SNMAsk
	setflag FLAG_SN_MAID_EXPLAINED
	msgbox PokemonMansion_Text_SNMExplain, MSGBOX_DEFAULT
PokemonMansion_EventScript_SNMAsk:
	msgbox PokemonMansion_Text_SNMTarget, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PokemonMansion_EventScript_SNMNo
	setflag FLAG_DAILY_SN_MAID_DONE
	msgbox PokemonMansion_Text_SNMFirst, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAID_FAR_WEST, PokemonMansion_Movement_SNMAside
	waitmovement 0
	setvar VAR_0x8005, 0
	setobjectxyperm LOCALID_SN_MAID_KNOCKOUT, 2, 8
	clearflag FLAG_SN_HIDE_MAID_KNOCKOUT
	addobject LOCALID_SN_MAID_KNOCKOUT
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMEnter
	waitmovement 0
	msgbox PokemonMansion_Text_SNMM1Intro, MSGBOX_DEFAULT
	closemessage
	cleartrainerflag TRAINER_CAMRON
	trainerbattle_no_intro TRAINER_CAMRON, PokemonMansion_Text_SNMM1Defeat
	special SinnohAddBattleTurns
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMLeave
	waitmovement 0
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMEnter
	waitmovement 0
	msgbox PokemonMansion_Text_SNMM2Intro, MSGBOX_DEFAULT
	closemessage
	cleartrainerflag TRAINER_CAROLINA
	trainerbattle_no_intro TRAINER_CAROLINA, PokemonMansion_Text_SNMM2Defeat
	special SinnohAddBattleTurns
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMLeave
	waitmovement 0
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMEnter
	waitmovement 0
	msgbox PokemonMansion_Text_SNMM3Intro, MSGBOX_DEFAULT
	closemessage
	cleartrainerflag TRAINER_ELIJAH
	trainerbattle_no_intro TRAINER_ELIJAH, PokemonMansion_Text_SNMM3Defeat
	special SinnohAddBattleTurns
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMLeave
	waitmovement 0
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMEnter
	waitmovement 0
	msgbox PokemonMansion_Text_SNMM4Intro, MSGBOX_DEFAULT
	closemessage
	cleartrainerflag TRAINER_CELIA
	trainerbattle_no_intro TRAINER_CELIA, PokemonMansion_Text_SNMM4Defeat
	special SinnohAddBattleTurns
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMLeave
	waitmovement 0
	applymovement LOCALID_MAID_FAR_WEST, PokemonMansion_Movement_SNMBack
	waitmovement 0
	msgbox PokemonMansion_Text_SNMFour, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MAID_FAR_WEST, PokemonMansion_Movement_SNMAside
	waitmovement 0
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMEnter
	waitmovement 0
	msgbox PokemonMansion_Text_SNMM5Intro, MSGBOX_DEFAULT
	closemessage
	cleartrainerflag TRAINER_BRYAN
	trainerbattle_no_intro TRAINER_BRYAN, PokemonMansion_Text_SNMM5Defeat
	special SinnohAddBattleTurns
	applymovement LOCALID_SN_MAID_KNOCKOUT, PokemonMansion_Movement_SNMLeave
	waitmovement 0
	removeobject LOCALID_SN_MAID_KNOCKOUT
	setflag FLAG_SN_HIDE_MAID_KNOCKOUT
	applymovement LOCALID_MAID_FAR_WEST, PokemonMansion_Movement_SNMBack
	waitmovement 0
	msgbox PokemonMansion_Text_SNMResult, MSGBOX_DEFAULT
	goto_if_ne VAR_0x8005, VAR_0x8006, PokemonMansion_EventScript_SNMFail
	random 2
	copyvar VAR_0x8007, VAR_RESULT
	goto_if_eq VAR_0x8007, 1, PokemonMansion_EventScript_SNMCeleste
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_RICH_BOY
	msgbox PokemonMansion_Text_SNMLiamHit, MSGBOX_DEFAULT
	goto PokemonMansion_EventScript_SNMBoss
PokemonMansion_EventScript_SNMCeleste:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LADY
	msgbox PokemonMansion_Text_SNMCelesteHit, MSGBOX_DEFAULT
PokemonMansion_EventScript_SNMBoss:
	closemessage
	applymovement LOCALID_MAID_FAR_WEST, PokemonMansion_Movement_SNMAside
	waitmovement 0
	setobjectxyperm LOCALID_SN_MAID_BOSS, 2, 8
	clearflag FLAG_SN_HIDE_MAID_BOSS
	addobject LOCALID_SN_MAID_BOSS
	applymovement LOCALID_SN_MAID_BOSS, PokemonMansion_Movement_SNMEnter
	waitmovement 0
	goto_if_eq VAR_0x8007, 1, PokemonMansion_EventScript_SNMCelesteBattle
	msgbox PokemonMansion_Text_SNMLiamIntro, MSGBOX_DEFAULT
	closemessage
	cleartrainerflag TRAINER_BRANDEN
	trainerbattle_no_intro TRAINER_BRANDEN, PokemonMansion_Text_SNMLiamDefeat
	goto PokemonMansion_EventScript_SNMBossEnd
PokemonMansion_EventScript_SNMCelesteBattle:
	msgbox PokemonMansion_Text_SNMCelesteIntro, MSGBOX_DEFAULT
	closemessage
	cleartrainerflag TRAINER_BRYANT
	trainerbattle_no_intro TRAINER_BRYANT, PokemonMansion_Text_SNMCelesteDefeat
PokemonMansion_EventScript_SNMBossEnd:
	applymovement LOCALID_SN_MAID_BOSS, PokemonMansion_Movement_SNMLeave
	waitmovement 0
	removeobject LOCALID_SN_MAID_BOSS
	setflag FLAG_SN_HIDE_MAID_BOSS
	applymovement LOCALID_MAID_FAR_WEST, PokemonMansion_Movement_SNMBack
	waitmovement 0
	goto_if_eq VAR_0x8007, 1, PokemonMansion_EventScript_SNMCelesteWon
	msgbox PokemonMansion_Text_SNMLiamWon, MSGBOX_DEFAULT
	goto PokemonMansion_EventScript_SNMTomorrow
PokemonMansion_EventScript_SNMCelesteWon:
	msgbox PokemonMansion_Text_SNMCelesteWon, MSGBOX_DEFAULT
	goto PokemonMansion_EventScript_SNMTomorrow
PokemonMansion_EventScript_SNMFail:
	msgbox PokemonMansion_Text_SNMProud, MSGBOX_DEFAULT
PokemonMansion_EventScript_SNMTomorrow:
	msgbox PokemonMansion_Text_SNMTomorrow, MSGBOX_DEFAULT
	releaseall
	end
PokemonMansion_EventScript_SNMNo:
	msgbox PokemonMansion_Text_SNMNo, MSGBOX_DEFAULT
	releaseall
	end

PokemonMansion_Movement_SNMAside:
	walk_up
	face_down
	step_end

PokemonMansion_Movement_SNMBack:
	walk_down
	face_right
	step_end

PokemonMansion_Movement_SNMEnter:
	set_visible
	face_right
	step_end

PokemonMansion_Movement_SNMLeave:
	face_left
	set_invisible
	step_end

PokemonMansion_Text_SNMExplain:
	.string "Welcome.\p"
	.string "Here, you may challenge the mansion’s\n"
	.string "pride--the five Trainer maids.\p"
	.string "The challenge is to beat all five of us\n"
	.string "in a row without a break.\p"
	.string "In addition to beating us, if you can\n"
	.string "beat us in a specific number of turns,\p"
	.string "there will be a special gift.\p"
	.string "Incidentally, a turn refers to the time\n"
	.string "it takes for a Trainer and the\l"
	.string "opponent\p"
	.string "to each make an action.\p"
	.string "In this case, action refers to making a\n"
	.string "POKéMON use a move, using an item, or\p"
	.string "switching a POKéMON.\p"
	.string "And now...$"
PokemonMansion_Text_SNMTarget:
	.string "The 5-Maid Knockout Exact-Turn\n"
	.string "Attack Challenge!\p"
	.string "Today’s targeted number of turns is\n"
	.string "{STR_VAR_1}! Would you like to try?$"
PokemonMansion_Text_SNMNo:
	.string "Oh, how disappointing... Please take\n"
	.string "the challenge sometime.$"
PokemonMansion_Text_SNMFirst:
	.string "Very well! Our first maid, please!$"
PokemonMansion_Text_SNMFour:
	.string "Congratulations! You have defeated\n"
	.string "four maids so far.\p"
	.string "You have taken {STR_VAR_2} turns up to\n"
	.string "now. The target is {STR_VAR_1} turns.$"
PokemonMansion_Text_SNMResult:
	.string "Congratulations for your sweep. The\n"
	.string "targeted number of turns was\l"
	.string "{STR_VAR_1}.\p"
	.string "The number of turns you needed to\n"
	.string "defeat the maids was {STR_VAR_2}.$"
PokemonMansion_Text_SNMProud:
	.string "Ooh... How disappointing for you.\p"
	.string "That said, you swept the five maids.\n"
	.string "That’s plenty to be proud of!$"
PokemonMansion_Text_SNMTomorrow:
	.string "Please visit again tomorrow.$"
PokemonMansion_Text_SNMLiamHit:
	.string "How splendid of you! You hit the\n"
	.string "target!\p"
	.string "For making the sweep in the targeted\n"
	.string "number of turns, a special gift!\p"
	.string "The chance to battle our very own\n"
	.string "prodigy, Master Liam!$"
PokemonMansion_Text_SNMCelesteHit:
	.string "How splendid of you! You hit the\n"
	.string "target!\p"
	.string "For making the sweep in the targeted\n"
	.string "number of turns, a special gift!\p"
	.string "The chance to battle our very own\n"
	.string "prodigy, Lady Celeste!$"
PokemonMansion_Text_SNMLiamIntro:
	.string "A Trainer would come here and pull me\n"
	.string "into a battle...?\p"
	.string "I never expected this, but I may as\n"
	.string "well enjoy it, don’t you think?$"
PokemonMansion_Text_SNMCelesteIntro:
	.string "Oh, my... You must show me how good you\n"
	.string "are for the ladies to call me out.$"
PokemonMansion_Text_SNMLiamDefeat:
	.string "Wonderful! You’re a marvel of a Trainer!\p"
	.string "Oh, I’ll ask you not to pry into what I’m\n"
	.string "doing in the back of the mansion.\p"
	.string "This knowing wink is all you’ll get out\n"
	.string "of me.$"
PokemonMansion_Text_SNMCelesteDefeat:
	.string "Oh, my! My, my, my! Your technique was\n"
	.string "most enchanting.\p"
	.string "I will take my leave now. Giggle...$"
PokemonMansion_Text_SNMLiamWon:
	.string "Your splendor is authentic!\p"
	.string "Sweeping the floor with the five maids\n"
	.string "wasn’t enough for you, oh no!\p"
	.string "Why, to think you would triumph over\n"
	.string "even our Master Liam!$"
PokemonMansion_Text_SNMCelesteWon:
	.string "Your splendor is authentic!\p"
	.string "Sweeping the floor with the five maids\n"
	.string "wasn’t enough for you, oh no!\p"
	.string "Why, to think you would triumph over\n"
	.string "even our Lady Celeste!$"
PokemonMansion_Text_SNMM1Intro:
	.string "First up! My favorite color is blue! I\n"
	.string "will open the proceedings!$"
PokemonMansion_Text_SNMM2Intro:
	.string "I’m pleased to meet you in battle. My\n"
	.string "best color is green!$"
PokemonMansion_Text_SNMM3Intro:
	.string "My lucky color is yellow! The sunshine\n"
	.string "girl! That’s me!$"
PokemonMansion_Text_SNMM4Intro:
	.string "Pink is the color I can’t do without!\n"
	.string "I’m the fourth in line!$"
PokemonMansion_Text_SNMM5Intro:
	.string "My symbolic color is red! Prepare for\n"
	.string "no. 5!$"
PokemonMansion_Text_SNMM1Defeat:
	.string "The next person up is quite strong,\n"
	.string "really.$"
PokemonMansion_Text_SNMM2Defeat:
	.string "I was no. 2, and a little bit tough! The\n"
	.string "next maid is even tougher!$"
PokemonMansion_Text_SNMM3Defeat:
	.string "The next maid is a wee bit stronger\n"
	.string "than I am.$"
PokemonMansion_Text_SNMM4Defeat:
	.string "Th-the next maid up is really strong!$"
PokemonMansion_Text_SNMM5Defeat:
	.string "You knocked out the five of us! You\n"
	.string "have to be splendid!$"

PokemonMansion_Text_PtNpc4:
	.string "I’m so sorry. Everything beyond this\n"
	.string "point is strictly off-limits.\p"
	.string "Please, you really mustn’t. Mr. Backlot\n"
	.string "will be so cross with me!$"

PokemonMansion_EventScript_PtNpc4::
	msgbox PokemonMansion_Text_PtNpc4, MSGBOX_NPC
	end

PokemonMansion_Text_PtNpc5_0:
	.string "The expensive-looking book Mr. Backlot\n"
	.string "has... It tugs at my attention.$"

PokemonMansion_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox PokemonMansion_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end
