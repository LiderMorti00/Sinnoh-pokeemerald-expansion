SurvivalArea_Battleground_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SurvivalArea_Battleground_OnTransitionSN
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SurvivalArea_Battleground_OnFrameSN
	.byte 0

SurvivalArea_Battleground_OnFrameSN:
	map_script_2 VAR_TEMP_3, 1, SurvivalArea_Battleground_EventScript_SNWelcome
	.2byte 0

SurvivalArea_Battleground_EventScript_SNWelcome::
	lockall
	setvar VAR_TEMP_3, 0
	setflag FLAG_SN_BG_WELCOMED
	applymovement LOCALID_BG_EXPERT, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_BG_EXPERT, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_BG_EXPERT
	sn_playerface LOCALID_BG_EXPERT, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SurvivalArea_Battleground_Text_SNWelcome, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_BG_EXPERT, 9, 3, SN_SPEED_NORMAL, DIR_SOUTH, 0, 0
	waitmovement LOCALID_BG_EXPERT
	releaseall
	end

SurvivalArea_Battleground_EventScript_SNBuckIntro::
	lock
	faceplayer
	msgbox SurvivalArea_Battleground_Text_SNBuckIntro, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_BG_BUCK_LEFT
	sn_walkto VAR_LAST_TALKED, 7, 8, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement 0
	playse SE_EXIT
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_BG_BUCK_INTRO
	release
	end

SurvivalArea_Battleground_Text_PtNpc1_0:
	.string "What should we talk about today? ...Ah,\n"
	.string "I know.\p"
	.string "Let me tell you about the volcano\n"
	.string "named Stark Mountain.\p"
	.string "That volcano dates to when Sinnoh was\n"
	.string "made by the melding of time and space.\p"
	.string "Fiery lava spilled out and pooled, and\n"
	.string "then it became a POKéMON.\p"
	.string "It’s said the Magma Stone was used to\n"
	.string "keep the POKéMON pinned down.\p"
	.string "It kept the POKéMON from rampaging\n"
	.string "and the volcano from erupting.$"

SurvivalArea_Battleground_Text_PtNpc1_1:
	.string "Welcome to the Battleground! Make\n"
	.string "yourself at home like always.$"

SurvivalArea_Battleground_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_BATTLED_STARK_MOUNTAIN_ROOM_3_HEATRAN, SurvivalArea_Battleground_EventScript_PtNpc1_MakeYourselfAtHome
	msgbox SurvivalArea_Battleground_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_PtNpc1_MakeYourselfAtHome:
	msgbox SurvivalArea_Battleground_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_OnTransitionSN:
	setflag FLAG_SN_VISITED_BATTLEGROUND
	call SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK
	call SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA
	call SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA
	call SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE
	call SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE
	call SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON
	call SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE
	call SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER
	call SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK
	call SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL
	call SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY
	call SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY
	call SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA
	special SinnohBattlegroundSelect
	special SinnohBattlegroundMsgSet
	setflag FLAG_SN_HIDE_BG_BUCK_INTRO
	goto_if_unset FLAG_SN_BATTLED_STARK_MOUNTAIN_ROOM_3_HEATRAN, SurvivalArea_Battleground_OnTransitionSN_Welcome
	goto_if_set FLAG_SN_BG_BUCK_LEFT, SurvivalArea_Battleground_OnTransitionSN_Welcome
	clearflag FLAG_SN_HIDE_BG_BUCK_INTRO
SurvivalArea_Battleground_OnTransitionSN_Welcome:
	setvar VAR_TEMP_3, 0
	goto_if_set FLAG_SN_BG_WELCOMED, SurvivalArea_Battleground_OnTransitionSN_End
	setvar VAR_TEMP_3, 1
SurvivalArea_Battleground_OnTransitionSN_End:
	end

SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK:
	setflag FLAG_SN_HIDE_BG_ROARK
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK_End
	clearflag FLAG_SN_HIDE_BG_ROARK
SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA:
	setflag FLAG_SN_HIDE_BG_GARDENIA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA_End
	clearflag FLAG_SN_HIDE_BG_GARDENIA
SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA:
	setflag FLAG_SN_HIDE_BG_FANTINA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA_End
	clearflag FLAG_SN_HIDE_BG_FANTINA
SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE:
	setflag FLAG_SN_HIDE_BG_MAYLENE
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE_End
	clearflag FLAG_SN_HIDE_BG_MAYLENE
SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE:
	setflag FLAG_SN_HIDE_BG_WAKE
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE_End
	clearflag FLAG_SN_HIDE_BG_WAKE
SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON:
	setflag FLAG_SN_HIDE_BG_BYRON
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON_End
	clearflag FLAG_SN_HIDE_BG_BYRON
SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE:
	setflag FLAG_SN_HIDE_BG_CANDICE
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE_End
	clearflag FLAG_SN_HIDE_BG_CANDICE
SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER:
	setflag FLAG_SN_HIDE_BG_VOLKNER
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER_End
	clearflag FLAG_SN_HIDE_BG_VOLKNER
SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK:
	setflag FLAG_SN_HIDE_BG_BUCK
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK_End
	clearflag FLAG_SN_HIDE_BG_BUCK
SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL:
	setflag FLAG_SN_HIDE_BG_CHERYL
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL_End
	clearflag FLAG_SN_HIDE_BG_CHERYL
SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY:
	setflag FLAG_SN_HIDE_BG_RILEY
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY_End
	clearflag FLAG_SN_HIDE_BG_RILEY
SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY:
	setflag FLAG_SN_HIDE_BG_MARLEY
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY_End
	clearflag FLAG_SN_HIDE_BG_MARLEY
SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA:
	setflag FLAG_SN_HIDE_BG_MIRA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA_End
	clearflag FLAG_SN_HIDE_BG_MIRA
SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA_End:
	return

SurvivalArea_Battleground_EventScript_SNRoark::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_ROARK, SurvivalArea_Battleground_EventScript_SNRoark_Done
	call SurvivalArea_Battleground_EventScript_SNRoark_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNRoark_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNRoark_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRoark_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_CHARLOTTE, SurvivalArea_Battleground_EventScript_SNRoark_Lose
	setflag FLAG_DAILY_SN_BG_ROARK
	goto SurvivalArea_Battleground_EventScript_SNRoark_Done
	end
SurvivalArea_Battleground_EventScript_SNRoark_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRoark_Ask2
	goto_if_set FLAG_TEMP_11, SurvivalArea_Battleground_EventScript_SNRoark_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRoark_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRoark_Ask2:
	goto_if_set FLAG_TEMP_11, SurvivalArea_Battleground_EventScript_SNRoark_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRoark_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRoark_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNRoark_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNRoark_No:
	setflag FLAG_TEMP_11
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRoark_No2
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRoark_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRoark_Done:
	goto_if_set FLAG_SN_HIDE_BG_BYRON, SurvivalArea_Battleground_EventScript_SNRoark_DoneNormal
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_DefeatByronPresent, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRoark_DoneNormal:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRoark_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRoark_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattle:
	.string "Roark: I went down to the Underground\n"
	.string "every day.\p"
	.string "I toughened up my POKéMON by digging\n"
	.string "up Fossils nonstop.\p"
	.string "Could I show you how tough I made them\n"
	.string "in a battle?$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_Intro:
	.string "Roark: Here goes! These are my rocking\n"
	.string "POKéMON, my pride and joy!$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_DeclinedBattle:
	.string "Roark: This is another topic, but you\n"
	.string "know those Spheres you can dig up?\p"
	.string "Yes, those Spheres. The ones in the\n"
	.string "Underground.\p"
	.string "Why do you suppose Spheres grow if you\n"
	.string "leave them buried?\p"
	.string "It’s not a huge issue or anything, but\n"
	.string "doesn’t it strike you as odd?$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattleAgain:
	.string "Roark: Look, can I have some time?\p"
	.string "I feel lucky to have run into you here,\n"
	.string "so can I challenge you to a battle?$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_Defeat:
	.string "Roark: ...We lost control there.\p"
	.string "Next time, I’d like to challenge you to\n"
	.string "a Fossil-digging race underground.$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattle2:
	.string "Roark: Would you like to battle?\p"
	.string "You’ll get to see a different me than\n"
	.string "you saw at my Gym.$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_Intro2:
	.string "Roark: I’ve got a TYRANITAR I’m going\n"
	.string "to send out.\p"
	.string "It’s tougher than even my dad’s\n"
	.string "AGGRON!$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_DeclinedBattle2:
	.string "Roark: Hmm... That’s a heartbreaking\n"
	.string "answer.$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_AskBattleAgain2:
	.string "Roark: Oh, you do want to battle?$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_Defeat2:
	.string "Roark: POKéMON from ancient times...\p"
	.string "Fossils that are yet to be\n"
	.string "discovered...\p"
	.string "I wonder if I can find new Fossils if I\n"
	.string "dig all over Sinnoh?$"

SurvivalArea_Battleground_EventScript_SNRoark_Text_DefeatByronPresent:
	.string "Roark: When I became a Gym Leader, I\n"
	.string "finally realized how great my dad is.\p"
	.string "Not that I’d ever admit that to him, of\n"
	.string "course.$"

SurvivalArea_Battleground_EventScript_SNRoark_Lose:
	.string "Roark: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNGardenia::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_GARDENIA, SurvivalArea_Battleground_EventScript_SNGardenia_Done
	call SurvivalArea_Battleground_EventScript_SNGardenia_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNGardenia_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNGardenia_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNGardenia_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_DEANDRE, SurvivalArea_Battleground_EventScript_SNGardenia_Lose
	setflag FLAG_DAILY_SN_BG_GARDENIA
	goto SurvivalArea_Battleground_EventScript_SNGardenia_Done
	end
SurvivalArea_Battleground_EventScript_SNGardenia_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNGardenia_Ask2
	goto_if_set FLAG_TEMP_12, SurvivalArea_Battleground_EventScript_SNGardenia_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNGardenia_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNGardenia_Ask2:
	goto_if_set FLAG_TEMP_12, SurvivalArea_Battleground_EventScript_SNGardenia_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNGardenia_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNGardenia_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNGardenia_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNGardenia_No:
	setflag FLAG_TEMP_12
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNGardenia_No2
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNGardenia_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNGardenia_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNGardenia_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNGardenia_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattle:
	.string "Gardenia: Hi, have you been keeping\n"
	.string "well?\p"
	.string "Let’s cut to the good stuff! Let’s get\n"
	.string "down to battle!$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_Intro:
	.string "Gardenia: Yes, that’s right!\p"
	.string "A battle will tell you if someone you\n"
	.string "haven’t seen’s been keeping well!$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_DeclinedBattle:
	.string "Gardenia: You won’t battle? You’re not\n"
	.string "in the mood, huh?\p"
	.string "Well, why not polish your Badges, then?\n"
	.string "That might put a shine on your day,\l"
	.string "too.$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattleAgain:
	.string "Gardenia: Oh? You do want a battle?$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_Defeat:
	.string "Gardenia: Out of the Gym, a Gym Leader\n"
	.string "is just another Trainer.\p"
	.string "But wherever I go, I still try to be as\n"
	.string "tough as I can.\p"
	.string "It’s not fair to my POKéMON if we were\n"
	.string "to lose because of me.$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattle2:
	.string "Gardenia: My Grass-type POKéMON are\n"
	.string "growing good and strong.\p"
	.string "I’m kind of interested in what POKéMON\n"
	.string "you have, too.\p"
	.string "Want to battle? A real quick one?$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_Intro2:
	.string "Gardenia: I can’t deny that Grass-type\n"
	.string "POKéMON have many weak points.\p"
	.string "But I’ll show you that’s not the only\n"
	.string "factor in deciding who wins!$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_DeclinedBattle2:
	.string "Gardenia: Aww, really?\p"
	.string "My grass POKéMON are growing good and\n"
	.string "strong, too...$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_AskBattleAgain2:
	.string "Gardenia: My Grass-type POKéMON are\n"
	.string "growing good and strong.\p"
	.string "Come on, let’s battle! A real quick one,\n"
	.string "OK?$"

SurvivalArea_Battleground_EventScript_SNGardenia_Text_Defeat2:
	.string "Gardenia: By the way... Have you been to\n"
	.string "the Old Chateau?\p"
	.string "Me? Uh, well, you know, I have my Gym\n"
	.string "Leader job and all, so...\p"
	.string "Well, actually, I’m here training... ...I’m\n"
	.string "here just for fun...\p"
	.string "Ahahaha! Don’t mind me!$"

SurvivalArea_Battleground_EventScript_SNGardenia_Lose:
	.string "Gardenia: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNFantina::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_FANTINA, SurvivalArea_Battleground_EventScript_SNFantina_Done
	call SurvivalArea_Battleground_EventScript_SNFantina_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNFantina_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNFantina_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNFantina_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_1, SurvivalArea_Battleground_EventScript_SNFantina_Lose
	setflag FLAG_DAILY_SN_BG_FANTINA
	goto SurvivalArea_Battleground_EventScript_SNFantina_Done
	end
SurvivalArea_Battleground_EventScript_SNFantina_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNFantina_Ask2
	goto_if_set FLAG_TEMP_13, SurvivalArea_Battleground_EventScript_SNFantina_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNFantina_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNFantina_Ask2:
	goto_if_set FLAG_TEMP_13, SurvivalArea_Battleground_EventScript_SNFantina_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNFantina_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNFantina_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNFantina_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNFantina_No:
	setflag FLAG_TEMP_13
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNFantina_No2
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNFantina_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNFantina_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNFantina_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNFantina_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattle:
	.string "Fantina: Finally, you have arrived!\p"
	.string "So, you shall challenge me. And I shall\n"
	.string "win.\p"
	.string "You will be startled by how much\n"
	.string "stronger I have become!$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_Intro:
	.string "Ohohoho!!$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_DeclinedBattle:
	.string "Fantina: You... You disappoint me. It is\n"
	.string "very sad.\p"
	.string "But, realize, you have not beaten me if\n"
	.string "you refuse.$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattleAgain:
	.string "Fantina: This time, you shall challenge\n"
	.string "me, yes?\p"
	.string "But I shall win.\p"
	.string "You will be startled by how much\n"
	.string "stronger I have become!$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_Defeat:
	.string "Fantina: You are an amazing person!\n"
	.string "Très fantastique!\p"
	.string "I am delighted--for now I have a\n"
	.string "purpose!\p"
	.string "My purpose, it is to defeat you! It is a\n"
	.string "gift from you to me!$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattle2:
	.string "Fantina: Oh? It is you? Are you not\n"
	.string "taking part in Contests?\p"
	.string "Since you are involving yourself in\n"
	.string "Contests, you should challenge me.$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_Intro2:
	.string "Fantina: POKéMON battles, they are\n"
	.string "fun, always without fail.\p"
	.string "Why, you ask? Because, in those\n"
	.string "moments, we are at our most serious.$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_DeclinedBattle2:
	.string "Fantina: No? Well, that is OK, also.\p"
	.string "Just seeing your face, it has made me\n"
	.string "happy.$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_AskBattleAgain2:
	.string "Fantina: Yes, what is it? I accept your\n"
	.string "challenge if you give it!$"

SurvivalArea_Battleground_EventScript_SNFantina_Text_Defeat2:
	.string "Fantina: I wish to battle as if I were\n"
	.string "dancing.$"

SurvivalArea_Battleground_EventScript_SNFantina_Lose:
	.string "Fantina: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNMaylene::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_MAYLENE, SurvivalArea_Battleground_EventScript_SNMaylene_Done
	call SurvivalArea_Battleground_EventScript_SNMaylene_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNMaylene_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNMaylene_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMaylene_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_2, SurvivalArea_Battleground_EventScript_SNMaylene_Lose
	setflag FLAG_DAILY_SN_BG_MAYLENE
	goto SurvivalArea_Battleground_EventScript_SNMaylene_Done
	end
SurvivalArea_Battleground_EventScript_SNMaylene_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMaylene_Ask2
	goto_if_set FLAG_TEMP_14, SurvivalArea_Battleground_EventScript_SNMaylene_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMaylene_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMaylene_Ask2:
	goto_if_set FLAG_TEMP_14, SurvivalArea_Battleground_EventScript_SNMaylene_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMaylene_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMaylene_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNMaylene_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNMaylene_No:
	setflag FLAG_TEMP_14
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMaylene_No2
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMaylene_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMaylene_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMaylene_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMaylene_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattle:
	.string "Maylene: I think it’s OK if I were to\n"
	.string "keep losing to the same Trainer.\p"
	.string "Battling that person tells me how much\n"
	.string "my POKéMON and I have changed.\p"
	.string "That’s why I would like to challenge\n"
	.string "you for a rematch now, {PLAYER}.$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_Intro:
	.string "Maylene: OK! Rei! Oh, that’s my bow\n"
	.string "before a match.\p"
	.string "{PLAYER}, I’m throwing everything I\n"
	.string "have at you!$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_DeclinedBattle:
	.string "Maylene: Sigh...\p"
	.string "I braced myself for a battle. This is a\n"
	.string "little deflating...$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattleAgain:
	.string "Maylene: Yes, what is it, {PLAYER}?\n"
	.string "Would you maybe like a battle?$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_Defeat:
	.string "Maylene: I love visiting here.\p"
	.string "Buck’s grandpa cooks for us, and it’s\n"
	.string "all delicious.\p"
	.string "That’s not all! We can eat all we want.\n"
	.string "Isn’t that amazing, {PLAYER}?$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattle2:
	.string "Maylene: Being together with POKéMON\n"
	.string "gave me the strength to keep going.\p"
	.string "Please, {PLAYER}, accept my challenge!$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_Intro2:
	.string "Maylene: OK, here we come, {PLAYER}!$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_DeclinedBattle2:
	.string "Maylene: OK! Got it!\p"
	.string "We’ll train much harder so we can\n"
	.string "battle with you, {PLAYER}.$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_AskBattleAgain2:
	.string "Maylene: {PLAYER}! I know I’m being a\n"
	.string "pest, but please,\p"
	.string "accept our challenge!$"

SurvivalArea_Battleground_EventScript_SNMaylene_Text_Defeat2:
	.string "Maylene: Hello, {PLAYER}!\p"
	.string "I’ve heard that it’s more healthy to go\n"
	.string "barefoot.\p"
	.string "Come to think of it, the POKéMON are all\n"
	.string "barefooted.$"

SurvivalArea_Battleground_EventScript_SNMaylene_Lose:
	.string "Maylene: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNWake::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_WAKE, SurvivalArea_Battleground_EventScript_SNWake_Done
	call SurvivalArea_Battleground_EventScript_SNWake_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNWake_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNWake_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNWake_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_3, SurvivalArea_Battleground_EventScript_SNWake_Lose
	setflag FLAG_DAILY_SN_BG_WAKE
	goto SurvivalArea_Battleground_EventScript_SNWake_Done
	end
SurvivalArea_Battleground_EventScript_SNWake_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNWake_Ask2
	goto_if_set FLAG_TEMP_15, SurvivalArea_Battleground_EventScript_SNWake_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNWake_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNWake_Ask2:
	goto_if_set FLAG_TEMP_15, SurvivalArea_Battleground_EventScript_SNWake_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNWake_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNWake_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNWake_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNWake_No:
	setflag FLAG_TEMP_15
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNWake_No2
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNWake_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNWake_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNWake_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNWake_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattle:
	.string "Wake: What’s there to do for Trainers\n"
	.string "here?\p"
	.string "Seems to me there’s nothing to do but\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNWake_Text_Intro:
	.string "Wake: My POKéMON have new Water-type\n"
	.string "moves under their belts!\p"
	.string "Let’s see how you bear up under them!$"

SurvivalArea_Battleground_EventScript_SNWake_Text_DeclinedBattle:
	.string "Wake: Then, you get my song instead!\n"
	.string "Er-hem!\p"
	.string "The ring is my roiling sea. ? The\n"
	.string "towering waves shaped me.\p"
	.string "Crash! Crash! Crasher Wake! Crash!\n"
	.string "Crash! Crasher Wake!\p"
	.string "I’m the tidal wave of power to wash you\n"
	.string "away!\p"
	.string "Put out the fire, Crasher Wake! Run\n"
	.string "from electricity, Crasher Wake!\p"
	.string "Ah, ah, aaaah! The ring is my sea. ?$"

SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattleAgain:
	.string "Wake: Words aren’t needed.\p"
	.string "We understand each other through\n"
	.string "battle!\p"
	.string "That’s what makes us Trainers!$"

SurvivalArea_Battleground_EventScript_SNWake_Text_Defeat:
	.string "Wake: Battles that end with both sides\n"
	.string "enjoying the experience without\l"
	.string "caring\p"
	.string "about the winner or loser...\p"
	.string "That’s what I strive for.\p"
	.string "One of these days, I hope to battle\n"
	.string "everyone in the world...\p"
	.string "Isn’t that right, {PLAYER}?!$"

SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattle2:
	.string "Wake: All right! How’s it going?\p"
	.string "My POKéMON were toughened up by\n"
	.string "stormy white waters!\p"
	.string "They’ll take everything you can throw\n"
	.string "at them and then pull you under!\p"
	.string "Victory will be ours! Come on, let’s get\n"
	.string "it done!$"

SurvivalArea_Battleground_EventScript_SNWake_Text_Intro2:
	.string "Wake: That’s the spirit! Bring it on!$"

SurvivalArea_Battleground_EventScript_SNWake_Text_DeclinedBattle2:
	.string "Wake: Whoops!\p"
	.string "You’re giving me the slip? You’re a\n"
	.string "slick one, {PLAYER}!$"

SurvivalArea_Battleground_EventScript_SNWake_Text_AskBattleAgain2:
	.string "Wake: So, what’s the story? Are we\n"
	.string "gonna battle?$"

SurvivalArea_Battleground_EventScript_SNWake_Text_Defeat2:
	.string "Wake: For all the training I do, there\n"
	.string "are still plenty tougher than me.\p"
	.string "The stronger I get, the farther away\n"
	.string "the goal seems to be.\p"
	.string "The road is harsh and long. There’s no\n"
	.string "end to it.\p"
	.string "But beside me always are my POKéMON.\n"
	.string "Every inch of the way!$"

SurvivalArea_Battleground_EventScript_SNWake_Lose:
	.string "Wake: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNByron::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_BYRON, SurvivalArea_Battleground_EventScript_SNByron_Done
	call SurvivalArea_Battleground_EventScript_SNByron_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNByron_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNByron_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNByron_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_4, SurvivalArea_Battleground_EventScript_SNByron_Lose
	setflag FLAG_DAILY_SN_BG_BYRON
	goto SurvivalArea_Battleground_EventScript_SNByron_Done
	end
SurvivalArea_Battleground_EventScript_SNByron_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNByron_Ask2
	goto_if_set FLAG_TEMP_16, SurvivalArea_Battleground_EventScript_SNByron_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNByron_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNByron_Ask2:
	goto_if_set FLAG_TEMP_16, SurvivalArea_Battleground_EventScript_SNByron_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNByron_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNByron_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNByron_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNByron_No:
	setflag FLAG_TEMP_16
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNByron_No2
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNByron_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNByron_Done:
	goto_if_set FLAG_SN_HIDE_BG_ROARK, SurvivalArea_Battleground_EventScript_SNByron_DoneNormal
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_DefeatRoarkPresent, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNByron_DoneNormal:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNByron_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNByron_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattle:
	.string "Byron: I’ve faced many a challenger at\n"
	.string "my Gym.\p"
	.string "I trained on Iron Island while\n"
	.string "contemplating my worth for days...\p"
	.string "I have the confidence now to batter\n"
	.string "down your defenses.\p"
	.string "Could I ask you for a rematch?$"

SurvivalArea_Battleground_EventScript_SNByron_Text_Intro:
	.string "Byron: We are tempered and honed by\n"
	.string "battling the strong.\p"
	.string "Here’s to our showdown!$"

SurvivalArea_Battleground_EventScript_SNByron_Text_DeclinedBattle:
	.string "Byron: When you came to the Gym, you\n"
	.string "had a glint that’s dulled now.$"

SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattleAgain:
	.string "Byron: I have the confidence now to\n"
	.string "batter down your defenses.\p"
	.string "Could I ask you for a rematch?$"

SurvivalArea_Battleground_EventScript_SNByron_Text_Defeat:
	.string "Byron: I trained by pummeling steel\n"
	.string "continuously on Iron Island alongside\p"
	.string "POKéMON...\p"
	.string "Gwahahahaha! I could still use more\n"
	.string "toughening up!$"

SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattle2:
	.string "Byron: Since we last lost to you, we’ve\n"
	.string "been in training.\p"
	.string "I think we’ve addressed our\n"
	.string "shortcomings.\p"
	.string "Could I ask you for another rematch?$"

SurvivalArea_Battleground_EventScript_SNByron_Text_Intro2:
	.string "Byron: Thank you!\p"
	.string "Like me, my POKéMON were longing for\n"
	.string "another chance to battle with you!$"

SurvivalArea_Battleground_EventScript_SNByron_Text_DeclinedBattle2:
	.string "Byron: Gwahahaha! That’s\n"
	.string "disappointing, but all right!\p"
	.string "There’s a lot to be learned by battling\n"
	.string "you. We had our hopes up.$"

SurvivalArea_Battleground_EventScript_SNByron_Text_AskBattleAgain2:
	.string "Byron: Could I ask you for another\n"
	.string "rematch?$"

SurvivalArea_Battleground_EventScript_SNByron_Text_Defeat2:
	.string "Byron: Argh... Came up short again...\p"
	.string "Do I talk to my son Roark to train\n"
	.string "together...?\p"
	.string "No, that’s too embarrassing... Hmm...\n"
	.string "This is a dilemma...$"

SurvivalArea_Battleground_EventScript_SNByron_Text_DefeatRoarkPresent:
	.string "Byron: ...That Roark thinks he can show\n"
	.string "up his old man?\p"
	.string "My act needs polishing still, I fear...\p"
	.string "Ah, it’s you! Don’t mind me. Make\n"
	.string "yourself at home.$"

SurvivalArea_Battleground_EventScript_SNByron_Lose:
	.string "Byron: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNCandice::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_CANDICE, SurvivalArea_Battleground_EventScript_SNCandice_Done
	call SurvivalArea_Battleground_EventScript_SNCandice_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNCandice_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNCandice_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCandice_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_5, SurvivalArea_Battleground_EventScript_SNCandice_Lose
	setflag FLAG_DAILY_SN_BG_CANDICE
	goto SurvivalArea_Battleground_EventScript_SNCandice_Done
	end
SurvivalArea_Battleground_EventScript_SNCandice_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCandice_Ask2
	goto_if_set FLAG_TEMP_17, SurvivalArea_Battleground_EventScript_SNCandice_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCandice_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCandice_Ask2:
	goto_if_set FLAG_TEMP_17, SurvivalArea_Battleground_EventScript_SNCandice_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCandice_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCandice_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNCandice_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNCandice_No:
	setflag FLAG_TEMP_17
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCandice_No2
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCandice_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCandice_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCandice_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCandice_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattle:
	.string "Candice: Hiya! What’s up?\p"
	.string "I bet you can’t tell what I’m thinking!\p"
	.string "I’ll give the answer away. I want to\n"
	.string "battle with you!$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_Intro:
	.string "Candice: This time, Candice is going to\n"
	.string "push through on willpower!$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_DeclinedBattle:
	.string "Candice: Oh... Did my willpower\n"
	.string "intimidate you?$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattleAgain:
	.string "Candice: Listen, listen. You’ll battle\n"
	.string "Candice, won’t you?$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_Defeat:
	.string "Candice: Oh, wow, your scarf is totally\n"
	.string "in fashion.\p"
	.string "I wish I had one like that.$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattle2:
	.string "Candice: Candice is on fire!\p"
	.string "I’m blazing hot!\p"
	.string "Hot enough to melt Ice-type POKéMON!\p"
	.string "I need a battle to cool me down!$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_Intro2:
	.string "Candice: OK! I’ll show you how good\n"
	.string "Candice...\p"
	.string "I mean, how good my POKéMON can be!$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_DeclinedBattle2:
	.string "Candice: Awww!$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_AskBattleAgain2:
	.string "Candice: You really want to battle with\n"
	.string "me, don’t you?$"

SurvivalArea_Battleground_EventScript_SNCandice_Text_Defeat2:
	.string "Candice: Awww! That’s it!\p"
	.string "I’m going to train so I can throw a\n"
	.string "Focus Punch myself!$"

SurvivalArea_Battleground_EventScript_SNCandice_Lose:
	.string "Candice: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNVolkner::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_VOLKNER, SurvivalArea_Battleground_EventScript_SNVolkner_Done
	call SurvivalArea_Battleground_EventScript_SNVolkner_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNVolkner_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNVolkner_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNVolkner_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_6, SurvivalArea_Battleground_EventScript_SNVolkner_Lose
	setflag FLAG_DAILY_SN_BG_VOLKNER
	goto SurvivalArea_Battleground_EventScript_SNVolkner_Done
	end
SurvivalArea_Battleground_EventScript_SNVolkner_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNVolkner_Ask2
	goto_if_set FLAG_TEMP_18, SurvivalArea_Battleground_EventScript_SNVolkner_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNVolkner_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNVolkner_Ask2:
	goto_if_set FLAG_TEMP_18, SurvivalArea_Battleground_EventScript_SNVolkner_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNVolkner_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNVolkner_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNVolkner_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNVolkner_No:
	setflag FLAG_TEMP_18
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNVolkner_No2
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNVolkner_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNVolkner_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNVolkner_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNVolkner_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattle:
	.string "Volkner: Your POKéMON... I can feel\n"
	.string "their power!\p"
	.string "Of course, you can sense the power of\n"
	.string "my POKéMON, can’t you?\p"
	.string "Let us battle with you!$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_Intro:
	.string "Volkner: Yeah! It’s electric, this\n"
	.string "feeling of anticipation!\p"
	.string "Let’s do it! We’re going to make some\n"
	.string "sparks fly!$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_DeclinedBattle:
	.string "Volkner: Aww, come on now. Don’t\n"
	.string "disappoint me...$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattleAgain:
	.string "Volkner: Hm? What’s up? You do want to\n"
	.string "battle?$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_Defeat:
	.string "Volkner: Winning makes me happy, and\n"
	.string "losing leaves me angry...\p"
	.string "That’s no great revelation, but it’s\n"
	.string "what makes me stronger.$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattle2:
	.string "Volkner: My ELECTIVIRE demands tough\n"
	.string "opponents.\p"
	.string "I’m willing to beg. Let’s battle!$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_Intro2:
	.string "Volkner: You! And me! Let’s make some\n"
	.string "sparks fly!$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_DeclinedBattle2:
	.string "Volkner: Well, yeah, an ELECTIVIRE is\n"
	.string "intimidating. I hear you...$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_AskBattleAgain2:
	.string "Volkner: Hm? What’s up? You’re willing\n"
	.string "to face my ELECTIVIRE?\p"
	.string "And help toughen up my POKéMON?$"

SurvivalArea_Battleground_EventScript_SNVolkner_Text_Defeat2:
	.string "Volkner: Some Trainers have POKéMON\n"
	.string "they just have to have in their party.\p"
	.string "For me, ELECTIVIRE is that POKéMON...$"

SurvivalArea_Battleground_EventScript_SNVolkner_Lose:
	.string "Volkner: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNBuck::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_BUCK, SurvivalArea_Battleground_EventScript_SNBuck_Done
	call SurvivalArea_Battleground_EventScript_SNBuck_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNBuck_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNBuck_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNBuck_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_7, SurvivalArea_Battleground_EventScript_SNBuck_Lose
	setflag FLAG_DAILY_SN_BG_BUCK
	goto SurvivalArea_Battleground_EventScript_SNBuck_Done
	end
SurvivalArea_Battleground_EventScript_SNBuck_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNBuck_Ask2
	goto_if_set FLAG_TEMP_19, SurvivalArea_Battleground_EventScript_SNBuck_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNBuck_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNBuck_Ask2:
	goto_if_set FLAG_TEMP_19, SurvivalArea_Battleground_EventScript_SNBuck_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNBuck_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNBuck_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNBuck_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNBuck_No:
	setflag FLAG_TEMP_19
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNBuck_No2
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNBuck_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNBuck_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNBuck_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNBuck_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattle:
	.string "Buck: Ehehehe! You’re here at last!\n"
	.string "Let’s not waste time! Let’s do this!$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_Intro:
	.string "Buck: ...I’m telling you right now. I’m\n"
	.string "seriously tough. Act surprised!$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_DeclinedBattle:
	.string "Buck: Huh, what? That takes the wind\n"
	.string "out of my sails.\p"
	.string "Well, since you’re here, kick back, make\n"
	.string "yourself at home, and all that.$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattleAgain:
	.string "Buck: What? What?! So we are going to\n"
	.string "battle?$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_Defeat:
	.string "Buck: Fweh! Too much!\p"
	.string "I guess I’ll better my team at the\n"
	.string "Battle Tower.$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattle2:
	.string "Buck: One, there’s no shortcuts in the\n"
	.string "way of POKéMON!\p"
	.string "Two... Never mind that, let’s do this!$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_Intro2:
	.string "Buck: I can feel my POKéMON shivering\n"
	.string "inside their POKé BALLS!\p"
	.string "It’s out of anticipation, not fear!$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_DeclinedBattle2:
	.string "Buck: Hey! This place! It’s named the\n"
	.string "Battleground for a reason!$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_AskBattleAgain2:
	.string "Buck: So? Do you feel like battling\n"
	.string "now?$"

SurvivalArea_Battleground_EventScript_SNBuck_Text_Defeat2:
	.string "Buck: Fweh! Too much!\p"
	.string "I guess I’ll better my team on Stark\n"
	.string "Mountain!$"

SurvivalArea_Battleground_EventScript_SNBuck_Lose:
	.string "Buck: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNCheryl::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_CHERYL, SurvivalArea_Battleground_EventScript_SNCheryl_Done
	call SurvivalArea_Battleground_EventScript_SNCheryl_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNCheryl_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNCheryl_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCheryl_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_8, SurvivalArea_Battleground_EventScript_SNCheryl_Lose
	setflag FLAG_DAILY_SN_BG_CHERYL
	goto SurvivalArea_Battleground_EventScript_SNCheryl_Done
	end
SurvivalArea_Battleground_EventScript_SNCheryl_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCheryl_Ask2
	goto_if_set FLAG_TEMP_1A, SurvivalArea_Battleground_EventScript_SNCheryl_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCheryl_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCheryl_Ask2:
	goto_if_set FLAG_TEMP_1A, SurvivalArea_Battleground_EventScript_SNCheryl_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCheryl_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNCheryl_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNCheryl_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNCheryl_No:
	setflag FLAG_TEMP_1A
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCheryl_No2
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCheryl_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCheryl_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNCheryl_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCheryl_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattle:
	.string "Cheryl: Oh, hello, {PLAYER}. You’re my\n"
	.string "opponent of the day?$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_Intro:
	.string "Cheryl: My POKéMON have been itching\n"
	.string "for a battle.$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_DeclinedBattle:
	.string "Cheryl: Oh, but my POKéMON were itching\n"
	.string "for a battle...$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattleAgain:
	.string "Cheryl: {PLAYER}, may I ask you for a\n"
	.string "battle?$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_Defeat:
	.string "Cheryl: Thank you, {PLAYER}!\p"
	.string "Thanks to you, my adorable POKéMON\n"
	.string "became a little tougher.$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattle2:
	.string "Cheryl: It’s been a long time... Hasn’t\n"
	.string "it?\p"
	.string "Would you care to have a battle with\n"
	.string "me?$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_Intro2:
	.string "Cheryl: I should warn you, my POKéMON\n"
	.string "can be quite rambunctious.$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_DeclinedBattle2:
	.string "Cheryl: Giggle...\p"
	.string "POKéMON would get worn out if we\n"
	.string "battled all the time, wouldn’t they?$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_AskBattleAgain2:
	.string "Cheryl: ...Yes? Would you like to battle\n"
	.string "after all?$"

SurvivalArea_Battleground_EventScript_SNCheryl_Text_Defeat2:
	.string "Cheryl: Being a Trainer isn’t easy.\p"
	.string "The more you battle, the more you\n"
	.string "discover.\p"
	.string "But, you know? I love POKéMON for that,\n"
	.string "too!$"

SurvivalArea_Battleground_EventScript_SNCheryl_Lose:
	.string "Cheryl: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNRiley::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_RILEY, SurvivalArea_Battleground_EventScript_SNRiley_Done
	call SurvivalArea_Battleground_EventScript_SNRiley_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNRiley_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNRiley_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRiley_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_9, SurvivalArea_Battleground_EventScript_SNRiley_Lose
	setflag FLAG_DAILY_SN_BG_RILEY
	goto SurvivalArea_Battleground_EventScript_SNRiley_Done
	end
SurvivalArea_Battleground_EventScript_SNRiley_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRiley_Ask2
	goto_if_set FLAG_TEMP_1B, SurvivalArea_Battleground_EventScript_SNRiley_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRiley_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRiley_Ask2:
	goto_if_set FLAG_TEMP_1B, SurvivalArea_Battleground_EventScript_SNRiley_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRiley_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNRiley_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNRiley_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNRiley_No:
	setflag FLAG_TEMP_1B
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRiley_No2
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRiley_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRiley_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNRiley_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRiley_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattle:
	.string "Riley: You and I, we’re both Trainers.\p"
	.string "Let’s forego the small talk and\n"
	.string "proceed right to battle.\p"
	.string "That’s my style!$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_Intro:
	.string "Riley: Battling is our way of greeting!$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_DeclinedBattle:
	.string "Riley: All right, then. So, what’ve you\n"
	.string "got to tell me?$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattleAgain:
	.string "Riley: See? It just doesn’t feel right\n"
	.string "if we don’t battle, does it?$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_Defeat:
	.string "Riley: Know your enemy.\p"
	.string "If you know your opponent’s POKéMON\n"
	.string "and what moves they use...\p"
	.string "If you have intelligence like that,\n"
	.string "your chances of winning are much\l"
	.string "improved.$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattle2:
	.string "Riley: Hi. Long time, no see.\p"
	.string "If it’s all right with you, I’d like to\n"
	.string "challenge you to a battle right now.$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_Intro2:
	.string "Riley: We’re pulling out all the stops to\n"
	.string "put your POKéMON down.$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_DeclinedBattle2:
	.string "Riley: Oh, all right. Then we’ll wait till\n"
	.string "you’re ready.$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_AskBattleAgain2:
	.string "Riley: That look you have... I take it\n"
	.string "you’re ready for our battle?$"

SurvivalArea_Battleground_EventScript_SNRiley_Text_Defeat2:
	.string "Riley: If I weren’t on Iron Island\n"
	.string "then...\p"
	.string "If you hadn’t arrived on Iron Island\n"
	.string "then...\p"
	.string "Perhaps we would have never met. Or,\n"
	.string "would we have met elsewhere?$"

SurvivalArea_Battleground_EventScript_SNRiley_Lose:
	.string "Riley: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNMarley::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_MARLEY, SurvivalArea_Battleground_EventScript_SNMarley_Done
	call SurvivalArea_Battleground_EventScript_SNMarley_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNMarley_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNMarley_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMarley_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_10, SurvivalArea_Battleground_EventScript_SNMarley_Lose
	setflag FLAG_DAILY_SN_BG_MARLEY
	goto SurvivalArea_Battleground_EventScript_SNMarley_Done
	end
SurvivalArea_Battleground_EventScript_SNMarley_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMarley_Ask2
	goto_if_set FLAG_TEMP_1C, SurvivalArea_Battleground_EventScript_SNMarley_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMarley_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMarley_Ask2:
	goto_if_set FLAG_TEMP_1C, SurvivalArea_Battleground_EventScript_SNMarley_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMarley_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMarley_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNMarley_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNMarley_No:
	setflag FLAG_TEMP_1C
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMarley_No2
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMarley_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMarley_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMarley_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMarley_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattle:
	.string "Marley: I... Is it OK to battle?$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_Intro:
	.string "Marley: ...OK. I’ll do my best.$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_DeclinedBattle:
	.string "Marley: ...Oh? ...You can be that mean?$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattleAgain:
	.string "Marley: ...So? Are we battling?$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_Defeat:
	.string "Marley: ...You’re so strong. It makes me\n"
	.string "feel happy.\p"
	.string "...I don’t know why. This is a strange\n"
	.string "feeling...$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattle2:
	.string "Marley: ...Oh? A battle? With me?$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_Intro2:
	.string "Marley: ...OK. I...won’t lose...!$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_DeclinedBattle2:
	.string "Marley: ...Oh, you. I’m getting to dislike\n"
	.string "you a little.$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_AskBattleAgain2:
	.string "Marley: ...If you won’t battle, I might\n"
	.string "not come back...$"

SurvivalArea_Battleground_EventScript_SNMarley_Text_Defeat2:
	.string "Marley: ...I might like battling with you.\p"
	.string "...Just a little. Only a little tiny bit.$"

SurvivalArea_Battleground_EventScript_SNMarley_Lose:
	.string "Marley: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNMira::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_MIRA, SurvivalArea_Battleground_EventScript_SNMira_Done
	call SurvivalArea_Battleground_EventScript_SNMira_Ask
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNMira_No
	call_if_eq VAR_TEMP_4, 0, SurvivalArea_Battleground_EventScript_SNMira_Intro1
	call_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMira_Intro2
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_11, SurvivalArea_Battleground_EventScript_SNMira_Lose
	setflag FLAG_DAILY_SN_BG_MIRA
	goto SurvivalArea_Battleground_EventScript_SNMira_Done
	end
SurvivalArea_Battleground_EventScript_SNMira_Ask:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMira_Ask2
	goto_if_set FLAG_TEMP_1D, SurvivalArea_Battleground_EventScript_SNMira_AskAgain1
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattle, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMira_AskAgain1:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattleAgain, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMira_Ask2:
	goto_if_set FLAG_TEMP_1D, SurvivalArea_Battleground_EventScript_SNMira_AskAgain2
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattle2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMira_AskAgain2:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattleAgain2, MSGBOX_YESNO
	return
SurvivalArea_Battleground_EventScript_SNMira_Intro1:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_Intro, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNMira_Intro2:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_Intro2, MSGBOX_DEFAULT
	return
SurvivalArea_Battleground_EventScript_SNMira_No:
	setflag FLAG_TEMP_1D
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMira_No2
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_DeclinedBattle, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMira_No2:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_DeclinedBattle2, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMira_Done:
	goto_if_eq VAR_TEMP_4, 1, SurvivalArea_Battleground_EventScript_SNMira_Done2
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_Defeat, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMira_Done2:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Text_Defeat2, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattle:
	.string "Mira: {PLAYER}! Please teach Mira about\n"
	.string "POKéMON!$"

SurvivalArea_Battleground_EventScript_SNMira_Text_Intro:
	.string "Mira: {PLAYER}!\p"
	.string "Mira will show you that Mira doesn’t get\n"
	.string "lost anymore, {PLAYER}!$"

SurvivalArea_Battleground_EventScript_SNMira_Text_DeclinedBattle:
	.string "Mira: Mira is a little sad... Mira’s\n"
	.string "POKéMON are stronger now.$"

SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattleAgain:
	.string "Mira: {PLAYER}, please? Please teach\n"
	.string "Mira about POKéMON!$"

SurvivalArea_Battleground_EventScript_SNMira_Text_Defeat:
	.string "Mira: {PLAYER}, please teach Mira about\n"
	.string "POKéMON again!\p"
	.string "Mira wants to get a lot, lot stronger,\n"
	.string "like {PLAYER}!$"

SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattle2:
	.string "Mira: {PLAYER}! Mira is stronger now!\p"
	.string "Please! Battle with Mira!$"

SurvivalArea_Battleground_EventScript_SNMira_Text_Intro2:
	.string "Mira: {PLAYER} will be shocked by Mira!$"

SurvivalArea_Battleground_EventScript_SNMira_Text_DeclinedBattle2:
	.string "Mira: Mira really did get stronger. Mira\n"
	.string "wanted {PLAYER} to see.$"

SurvivalArea_Battleground_EventScript_SNMira_Text_AskBattleAgain2:
	.string "Mira: You will battle Mira?$"

SurvivalArea_Battleground_EventScript_SNMira_Text_Defeat2:
	.string "Mira: {PLAYER}, you are always with your\n"
	.string "POKéMON.\p"
	.string "That’s how you got to be so strong.\n"
	.string "Mira is beginning to understand!$"

SurvivalArea_Battleground_EventScript_SNMira_Lose:
	.string "Mira: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_Text_SNWelcome:
	.string "Oh? So, you are?! You’re Buck’s friend,\n"
	.string "yes!\p"
	.string "I’ve heard about you from both Buck\n"
	.string "and Wake.\p"
	.string "Well, my young friend, you’re always\n"
	.string "welcome here from now on!\p"
	.string "This is a private club for only Sinnoh’s\n"
	.string "Gym Leaders, or those vouched for by\p"
	.string "those selfsame Gym Leaders.\p"
	.string "It’s a place where the best seek to\n"
	.string "better themselves.\p"
	.string "Welcome to the Battleground!$"

SurvivalArea_Battleground_Text_SNBuckIntro:
	.string "Buck: My place is open only to the\n"
	.string "toughest Trainers--I’m serious.\p"
	.string "You’re supposed to be introduced by a\n"
	.string "Gym Leader, but you’re special.\p"
	.string "Well, I’m off to the Battle Frontier.\p"
	.string "I feel like seeing how far I can go up\n"
	.string "the Tower.$"
