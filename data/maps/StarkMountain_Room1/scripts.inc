StarkMountain_Room1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StarkMountain_Room1_OnFrameSN
	map_script MAP_SCRIPT_ON_TRANSITION, StarkMountain_Room1_OnTransitionSN
	.byte 0

StarkMountain_Room1_OnTransitionSN:
	call StarkMountain_Room1_EventScript_SNVis_STARK_R1
	end

StarkMountain_Room1_EventScript_SNVis_STARK_R1:
	setflag FLAG_SN_HIDE_STARK_R1
	goto_if_unset FLAG_SYS_GAME_CLEAR, StarkMountain_Room1_EventScript_SNVis_STARK_R1_End
	goto_if_set FLAG_SN_STARK_R1_DONE, StarkMountain_Room1_EventScript_SNVis_STARK_R1_End
	clearflag FLAG_SN_HIDE_STARK_R1
StarkMountain_Room1_EventScript_SNVis_STARK_R1_End:
	return

StarkMountain_Room1_EventScript_SNCommanders::
	setvar VAR_TEMP_E, 1
	goto_if_set FLAG_SN_HIDE_STARK_R1, StarkMountain_Room1_EventScript_SNCommanders_End
	lockall
	applymovement LOCALID_SN_STARK_MARS, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SN_STARK_MARS, StarkMountain_Room1_EventScript_SNCommanders_MarsStep
	waitmovement 0
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T1, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_SOPHIE, StarkMountain_Room1_EventScript_SNCommanders_MarsDefeat
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_MARS, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_SN_STARK_JUPITER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_JUPITER, Common_Movement_FaceDown
	waitmovement 0
	trainerbattle_no_intro TRAINER_COBY, StarkMountain_Room1_EventScript_SNCommanders_JupDefeat
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T4, MSGBOX_DEFAULT
	closemessage
	delay 15
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T5, MSGBOX_DEFAULT
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T6, MSGBOX_DEFAULT
	closemessage
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T7, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_MARS, StarkMountain_Room1_EventScript_SNCommanders_MarsLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SN_STARK_MARS
	waitse
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T8, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_JUPITER, StarkMountain_Room1_EventScript_SNCommanders_JupLeave
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SN_STARK_JUPITER
	waitse
	applymovement LOCALID_SN_STARK_CHARON, Common_Movement_FaceDown
	waitmovement 0
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T9, MSGBOX_DEFAULT
	msgbox StarkMountain_Room1_EventScript_SNCommanders_T10, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_R1_GRUNT1, StarkMountain_Room1_EventScript_SNCommanders_Up
	applymovement LOCALID_SN_STARK_R1_GRUNT2, StarkMountain_Room1_EventScript_SNCommanders_Up
	applymovement LOCALID_SN_STARK_CHARON, StarkMountain_Room1_EventScript_SNCommanders_Up
	waitmovement 0
	removeobject LOCALID_SN_STARK_CHARON
	removeobject LOCALID_SN_STARK_R1_GRUNT1
	removeobject LOCALID_SN_STARK_R1_GRUNT2
	setflag FLAG_SN_HIDE_STARK_R1
	setflag FLAG_SN_STARK_R1_DONE
	releaseall
StarkMountain_Room1_EventScript_SNCommanders_End:
	end

StarkMountain_Room1_EventScript_SNCommanders_MarsStep:
	walk_down
	step_end

StarkMountain_Room1_EventScript_SNCommanders_MarsLeave:
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	step_end

StarkMountain_Room1_EventScript_SNCommanders_JupLeave:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	step_end

StarkMountain_Room1_EventScript_SNCommanders_Up:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

StarkMountain_Room1_EventScript_SNCommanders_T1:
	.string "Mars: Hey! You! Tell us where Master\n"
	.string "Cyrus went.\p"
	.string "Where were you after you disappeared\n"
	.string "at the Spear Pillar?\p"
	.string "Huh? The Distortion World?! Where\n"
	.string "GIRATINA was?\p"
	.string "You’re not making any sense! Don’t play\n"
	.string "that card with me!\p"
	.string "Fine! You don’t want to talk? I’ll bash\n"
	.string "you and make you talk!$"

StarkMountain_Room1_EventScript_SNCommanders_MarsDefeat:
	.string "Mars: No! Not again!$"

StarkMountain_Room1_EventScript_SNCommanders_T2:
	.string "Mars: My POKéMON let me down again!\p"
	.string "How am I supposed to get information\n"
	.string "about our missing Master Cyrus?$"

StarkMountain_Room1_EventScript_SNCommanders_T3:
	.string "Jupiter: ...Mars. You really are weak.\n"
	.string "Pitifully so.\p"
	.string "You make me embarrassed to be a\n"
	.string "Commander like you.\p"
	.string "Fine. I’ll go up next.\p"
	.string "I want to know what became of Master\n"
	.string "Cyrus, too.$"

StarkMountain_Room1_EventScript_SNCommanders_JupDefeat:
	.string "Jupiter: ...Impossible.$"

StarkMountain_Room1_EventScript_SNCommanders_T4:
	.string "Jupiter: ...How dare you!$"

StarkMountain_Room1_EventScript_SNCommanders_T5:
	.string "Mars: OK! That’s it for me! I’m going to\n"
	.string "look for Master Cyrus.\p"
	.string "The Distortion World, was it called? I\n"
	.string "should go there, right?\p"
	.string "I’m quits with Team Galactic. Jupiter,\n"
	.string "you can deal with it!$"

StarkMountain_Room1_EventScript_SNCommanders_T6:
	.string "Jupiter: Following Mars’s lead at\n"
	.string "anything irks me, but...\p"
	.string "I’m quitting to do my own thing, too.\p"
	.string "Team Galactic’s just no fun without\n"
	.string "Master Cyrus around.\p"
	.string "So, old-timer, go ahead. Do what you\n"
	.string "want with Team Galactic.$"

StarkMountain_Room1_EventScript_SNCommanders_T7:
	.string "Mars: There you have it. We’re going\n"
	.string "back to being ordinary girls.\p"
	.string "You can mop up whichever way you want.$"

StarkMountain_Room1_EventScript_SNCommanders_T8:
	.string "Jupiter: ...Says you. An “ordinary girl”\n"
	.string "you’re not.\p"
	.string "What should I do now? Is leaving on a\n"
	.string "journey the right idea?$"

StarkMountain_Room1_EventScript_SNCommanders_T9:
	.string "Charon: Sigh... So impressionable and\n"
	.string "impetuous.\p"
	.string "What do they see in Cyrus? Immature,\n"
	.string "overthinking buffoon.\p"
	.string "He goes through the trouble of\n"
	.string "assembling Team Galactic for what?\p"
	.string "Ultimately, he destroys his own\n"
	.string "creation for his ludicrous vision.\p"
	.string "It’s no thanks to him that I have to\n"
	.string "struggle with the pieces.$"

StarkMountain_Room1_EventScript_SNCommanders_T10:
	.string "...But that’s fine. The young can live\n"
	.string "with their dreams.\p"
	.string "I prefer to remain firmly in reality.\n"
	.string "And for that, money is paramount.\p"
	.string "You there, child. I’m not dealing with\n"
	.string "you.\p"
	.string "After all, the other Galactic members\n"
	.string "who did all suffered consequences.\p"
	.string "We’ll be off to collect the Magma\n"
	.string "Stone. It’s all for the money!$"

StarkMountain_Room1_OnFrameSN:
	map_script_2 VAR_TEMP_E, 0, StarkMountain_Room1_EventScript_SNCommanders
	.2byte 0
