StarkMountain_Room3_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StarkMountain_Room3_OnFrameSN
	map_script MAP_SCRIPT_ON_TRANSITION, StarkMountain_Room3_OnTransitionSN
	.byte 0

StarkMountain_Room3_OnTransitionSN:
	call StarkMountain_Room3_EventScript_SNVis_STARK_R3
	call StarkMountain_Room3_EventScript_SNVis_STARK_R3_HIDDEN
	call StarkMountain_Room3_EventScript_SNVis_HEATRAN
	end

StarkMountain_Room3_EventScript_SNVis_HEATRAN:
	setflag FLAG_SN_HIDE_HEATRAN
	goto_if_unset FLAG_SYS_GAME_CLEAR, StarkMountain_Room3_EventScript_SNVis_HEATRAN_End
	goto_if_unset FLAG_SN_STARK_FAREWELL, StarkMountain_Room3_EventScript_SNVis_HEATRAN_End
	goto_if_set FLAG_SN_DONE_HEATRAN, StarkMountain_Room3_EventScript_SNVis_HEATRAN_End
	clearflag FLAG_SN_HIDE_HEATRAN
StarkMountain_Room3_EventScript_SNVis_HEATRAN_End:
	return

StarkMountain_Room3_EventScript_SNHEATRAN::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_HEATRAN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_HEATRAN, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, StarkMountain_Room3_EventScript_SNHEATRAN_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, StarkMountain_Room3_EventScript_SNHEATRAN_Ran
	setflag FLAG_SN_DONE_HEATRAN
	setflag FLAG_SN_BATTLED_STARK_MOUNTAIN_ROOM_3_HEATRAN
	setflag FLAG_SN_HIDE_HEATRAN
	goto Common_EventScript_RemoveStaticPokemon
	end

StarkMountain_Room3_EventScript_SNHEATRAN_Ran:
	setvar VAR_0x8004, SPECIES_HEATRAN
	goto Common_EventScript_LegendaryFlewAway
	end

StarkMountain_Room3_EventScript_SNVis_STARK_R3:
	setflag FLAG_SN_HIDE_STARK_R3
	goto_if_unset FLAG_SYS_GAME_CLEAR, StarkMountain_Room3_EventScript_SNVis_STARK_R3_End
	goto_if_unset FLAG_SN_STARK_R1_DONE, StarkMountain_Room3_EventScript_SNVis_STARK_R3_End
	goto_if_set FLAG_SN_STARK_R3_DONE, StarkMountain_Room3_EventScript_SNVis_STARK_R3_End
	clearflag FLAG_SN_HIDE_STARK_R3
StarkMountain_Room3_EventScript_SNVis_STARK_R3_End:
	return

StarkMountain_Room3_EventScript_SNVis_STARK_R3_HIDDEN:
	setflag FLAG_SN_HIDE_STARK_R3_HIDDEN
	goto StarkMountain_Room3_EventScript_SNVis_STARK_R3_HIDDEN_End
	clearflag FLAG_SN_HIDE_STARK_R3_HIDDEN
StarkMountain_Room3_EventScript_SNVis_STARK_R3_HIDDEN_End:
	return

StarkMountain_Room3_EventScript_SNCharon::
	setvar VAR_TEMP_E, 1
	goto_if_set FLAG_SN_HIDE_STARK_R3, StarkMountain_Room3_EventScript_SNCharon_End
	lockall
	msgbox StarkMountain_Room3_EventScript_SNCharon_T1, MSGBOX_DEFAULT
	closemessage
	checkfollowernpc
	goto_if_eq VAR_RESULT, FALSE, StarkMountain_Room3_EventScript_SNCharon_NoBuck
	msgbox StarkMountain_Room3_EventScript_SNCharon_T2, MSGBOX_DEFAULT
	closemessage
StarkMountain_Room3_EventScript_SNCharon_NoBuck:
	applymovement LOCALID_SN_STARK_R3_CHARON, Common_Movement_FaceDown
	applymovement LOCALID_SN_STARK_R3_GRUNT1, Common_Movement_FaceDown
	applymovement LOCALID_SN_STARK_R3_GRUNT2, Common_Movement_FaceDown
	waitmovement 0
	msgbox StarkMountain_Room3_EventScript_SNCharon_T3, MSGBOX_DEFAULT
	msgbox StarkMountain_Room3_EventScript_SNCharon_T4, MSGBOX_DEFAULT
	playmoncry SPECIES_CROAGUNK, CRY_MODE_NORMAL
	waitmoncry
	closemessage
	clearflag FLAG_SN_HIDE_STARK_R3_HIDDEN
	addobject LOCALID_SN_STARK_CROAGUNK
	applymovement LOCALID_SN_STARK_CROAGUNK, StarkMountain_Room3_EventScript_SNCharon_CroagunkGrab
	waitmovement 0
	playse SE_M_STRENGTH
	removeobject LOCALID_SN_STARK_MAGMA_STONE
	waitse
	applymovement LOCALID_SN_STARK_R3_CHARON, Common_Movement_FaceUp
	waitmovement 0
	msgbox StarkMountain_Room3_EventScript_SNCharon_T5, MSGBOX_DEFAULT
	closemessage
	delay 15
	msgbox StarkMountain_Room3_EventScript_SNCharon_T6, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_CROAGUNK, StarkMountain_Room3_EventScript_SNCharon_CroagunkBack
	waitmovement 0
	removeobject LOCALID_SN_STARK_CROAGUNK
	playse SE_M_ROCK_THROW
	removeobject LOCALID_SN_STARK_ROCK_LOOKER
	addobject LOCALID_SN_STARK_R3_LOOKER
	waitse
	applymovement LOCALID_SN_STARK_R3_CHARON, Common_Movement_FaceRight
	waitmovement 0
	msgbox StarkMountain_Room3_EventScript_SNCharon_T7, MSGBOX_DEFAULT
	closemessage
	msgbox StarkMountain_Room3_EventScript_SNCharon_T8, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_R3_GRUNT1, Common_Movement_ExclamationMark
	applymovement LOCALID_SN_STARK_R3_GRUNT2, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox StarkMountain_Room3_EventScript_SNCharon_T9, MSGBOX_DEFAULT
	msgbox StarkMountain_Room3_EventScript_SNCharon_T10, MSGBOX_DEFAULT
	closemessage
	delay 15
	msgbox StarkMountain_Room3_EventScript_SNCharon_T11, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_R3_GRUNT1, StarkMountain_Room3_EventScript_SNCharon_GruntRun1
	applymovement LOCALID_SN_STARK_R3_GRUNT2, StarkMountain_Room3_EventScript_SNCharon_GruntRun2
	waitmovement 0
	removeobject LOCALID_SN_STARK_R3_GRUNT1
	removeobject LOCALID_SN_STARK_R3_GRUNT2
	msgbox StarkMountain_Room3_EventScript_SNCharon_T12, MSGBOX_DEFAULT
	msgbox StarkMountain_Room3_EventScript_SNCharon_T13, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_SN_STARK_POLICE1
	addobject LOCALID_SN_STARK_POLICE2
	applymovement LOCALID_SN_STARK_POLICE1, StarkMountain_Room3_EventScript_SNCharon_PoliceUp
	applymovement LOCALID_SN_STARK_POLICE2, StarkMountain_Room3_EventScript_SNCharon_PoliceUp
	waitmovement 0
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_STARK_R3_CHARON
	removeobject LOCALID_SN_STARK_POLICE1
	removeobject LOCALID_SN_STARK_POLICE2
	fadescreen FADE_FROM_BLACK
	msgbox StarkMountain_Room3_EventScript_SNCharon_T14, MSGBOX_DEFAULT
	applymovement LOCALID_SN_STARK_R3_LOOKER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox StarkMountain_Room3_EventScript_SNCharon_T15, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_HIDE_STARK_R3
	setflag FLAG_SN_HIDE_STARK_R3_HIDDEN
	setflag FLAG_SN_STARK_R3_DONE
	destroyfollowernpc
	warp MAP_STARK_MOUNTAIN, WARP_ID_NONE, 12, 8
	waitstate
StarkMountain_Room3_EventScript_SNCharon_End:
	end

StarkMountain_Room3_EventScript_SNCharon_CroagunkGrab:
	walk_fast_up
	step_end

StarkMountain_Room3_EventScript_SNCharon_CroagunkBack:
	walk_fast_down
	step_end

StarkMountain_Room3_EventScript_SNCharon_GruntRun1:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

StarkMountain_Room3_EventScript_SNCharon_GruntRun2:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

StarkMountain_Room3_EventScript_SNCharon_PoliceUp:
	walk_up
	walk_up
	step_end

StarkMountain_Room3_EventScript_SNCharon_T1:
	.string "Charon: ...Cyrus disappeared. Mars and\n"
	.string "Jupiter quit.\p"
	.string "Saturn said he would look after what\n"
	.string "remains of Team Galactic.\p"
	.string "But he won’t join me. So foolish of him!\p"
	.string "So very foolish of the rest of them!\n"
	.string "Throwing away Team Galactic!\p"
	.string "After all the effort we took as a team\n"
	.string "to make it grow...\p"
	.string "That power could have made us rich\n"
	.string "beyond imagination.\p"
	.string "But, enough of that. The Magma Stone\n"
	.string "will be mine.$"

StarkMountain_Room3_EventScript_SNCharon_T2:
	.string "Buck: Hey, you! Team Galactic! What’s\n"
	.string "going on here?!$"

StarkMountain_Room3_EventScript_SNCharon_T3:
	.string "Charon: Eh? What’s this, then? Chased\n"
	.string "me here, have you?\p"
	.string "I like seeing children try their best,\n"
	.string "but too bad for you--you’re too late.\p"
	.string "With this Magma Stone I will let awaken\n"
	.string "the legendary HEATRAN!\p"
	.string "I will control the volcano’s eruptions\n"
	.string "to extort money by the millions!\p"
	.string "Fear me! For I am Charon! The boss of\n"
	.string "the reborn Team Galactic!$"

StarkMountain_Room3_EventScript_SNCharon_T4:
	.string "???: Go, go, go!$"

StarkMountain_Room3_EventScript_SNCharon_T5:
	.string "Charon: No! The Magma Stone!\p"
	.string "What?! What is going on?!$"

StarkMountain_Room3_EventScript_SNCharon_T6:
	.string "???: Excellent work, CROAGUNK!$"

StarkMountain_Room3_EventScript_SNCharon_T7:
	.string "Looker: Pah!\p"
	.string "Disguising myself as a boulder for\n"
	.string "stakeout was not easy!$"

StarkMountain_Room3_EventScript_SNCharon_T8:
	.string "Now, old-timer, the International\n"
	.string "Police cordially requests your\l"
	.string "cooperation.\p"
	.string "I am sure you have much to tell us\n"
	.string "about the new Team Galactic.\p"
	.string "With Cyrus, Mars, and Jupiter gone, you\n"
	.string "are all that is left.$"

StarkMountain_Room3_EventScript_SNCharon_T9:
	.string "Grunt 1: Hey! It’s the International\n"
	.string "Police!$"

StarkMountain_Room3_EventScript_SNCharon_T10:
	.string "Grunt 2: Yeah! It’s the International\n"
	.string "Police all right!\p"
	.string "There’s only one thing to be done!$"

StarkMountain_Room3_EventScript_SNCharon_T11:
	.string "Grunt 1: Run away! Grunt 2: Run away!$"

StarkMountain_Room3_EventScript_SNCharon_T12:
	.string "Charon: Gah... What a mess...\p"
	.string "...Uh, International Police? What are\n"
	.string "you saying? I know nothing!\p"
	.string "A new Team Galactic? Extorting with\n"
	.string "HEATRAN?\p"
	.string "Merely the blathering of this harmless\n"
	.string "old man! All said in jest!\p"
	.string "Besides, among Team Galactic’s\n"
	.string "Commanders, I was the most junior...$"

StarkMountain_Room3_EventScript_SNCharon_T13:
	.string "Looker: You can tell us all about it. We\n"
	.string "have plenty of time.\p"
	.string "Oh, no, no. No resisting arrest. You\n"
	.string "can’t win three-on-one, no?\p"
	.string "OK, Officers, over here, if you will.$"

StarkMountain_Room3_EventScript_SNCharon_T14:
	.string "Looker: He is an old man. This heat\n"
	.string "cannot be good for him.\p"
	.string "Quickly, take him somewhere cool. Yes,\n"
	.string "the cooler will do!$"

StarkMountain_Room3_EventScript_SNCharon_T15:
	.string "Looker: {PLAYER}!\p"
	.string "And you, unfamiliar boy! I wish to say\n"
	.string "something.\p"
	.string "First, it is too hot! Let us exit this\n"
	.string "environment!$"

StarkMountain_Room3_OnFrameSN:
	map_script_2 VAR_TEMP_E, 0, StarkMountain_Room3_EventScript_SNCharon
	.2byte 0
