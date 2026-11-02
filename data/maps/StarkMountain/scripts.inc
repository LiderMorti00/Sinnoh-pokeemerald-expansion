StarkMountain_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StarkMountain_OnFrameSN
	map_script MAP_SCRIPT_ON_TRANSITION, StarkMountain_OnTransitionSN
	.byte 0

StarkMountain_EventScript_Darien::
	trainerbattle_single TRAINER_FERNANDO_1, StarkMountain_Text_DarienIntro, StarkMountain_Text_DarienDefeat
	msgbox StarkMountain_Text_DarienPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Text_DarienIntro:
	.string "My POKéMON and I seek only victory!$"

StarkMountain_Text_DarienDefeat:
	.string "Arrrgh! My POKéMON...$"

StarkMountain_Text_DarienPost:
	.string "I failed my POKéMON! I wasn’t prepared\n"
	.string "enough to lead it!\p"
	.string "I don’t ever want my precious POKéMON\n"
	.string "to be humiliated again!$"

StarkMountain_OnTransitionSN:
	call StarkMountain_EventScript_SNVis_STARK_OUT_GRUNTS
	call StarkMountain_EventScript_SNVis_STARK_FAREWELL
	end

StarkMountain_EventScript_SNVis_STARK_OUT_GRUNTS:
	setflag FLAG_SN_HIDE_STARK_OUT_GRUNTS
	goto_if_unset FLAG_SYS_GAME_CLEAR, StarkMountain_EventScript_SNVis_STARK_OUT_GRUNTS_End
	goto_if_set FLAG_SN_STARK_OUT_DONE, StarkMountain_EventScript_SNVis_STARK_OUT_GRUNTS_End
	clearflag FLAG_SN_HIDE_STARK_OUT_GRUNTS
StarkMountain_EventScript_SNVis_STARK_OUT_GRUNTS_End:
	return

StarkMountain_EventScript_SNVis_STARK_FAREWELL:
	setflag FLAG_SN_HIDE_STARK_FAREWELL
	goto_if_unset FLAG_SN_STARK_R3_DONE, StarkMountain_EventScript_SNVis_STARK_FAREWELL_End
	goto_if_set FLAG_SN_STARK_FAREWELL, StarkMountain_EventScript_SNVis_STARK_FAREWELL_End
	clearflag FLAG_SN_HIDE_STARK_FAREWELL
StarkMountain_EventScript_SNVis_STARK_FAREWELL_End:
	return

StarkMountain_EventScript_SNGrunts::
	goto_if_set FLAG_SN_HIDE_STARK_OUT_GRUNTS, StarkMountain_EventScript_SNGrunts_End
	lockall
	msgbox StarkMountain_EventScript_SNGrunts_T1, MSGBOX_DEFAULT
	applymovement LOCALID_SN_STARK_GRUNT1, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox StarkMountain_EventScript_SNGrunts_T2, MSGBOX_DEFAULT
	msgbox StarkMountain_EventScript_SNGrunts_T3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_GRUNT2, StarkMountain_EventScript_SNGrunts_M2
	applymovement LOCALID_SN_STARK_GRUNT1, StarkMountain_EventScript_SNGrunts_M1
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SN_STARK_GRUNT1
	removeobject LOCALID_SN_STARK_GRUNT2
	setflag FLAG_SN_HIDE_STARK_OUT_GRUNTS
	setflag FLAG_SN_STARK_OUT_DONE
	releaseall
StarkMountain_EventScript_SNGrunts_End:
	end

StarkMountain_EventScript_SNGrunts_M2:
	walk_right
	walk_up
	step_end

StarkMountain_EventScript_SNGrunts_M1:
	walk_right
	walk_right
	walk_up
	step_end

StarkMountain_EventScript_SNGrunts_T1:
	.string "Grunt 1: This is it! Stark Mountain!\p"
	.string "Now we need to get deep inside. Let’s\n"
	.string "do this!$"

StarkMountain_EventScript_SNGrunts_T2:
	.string "Grunt 2: Yeah, but... Can that old guy\n"
	.string "really take over?\p"
	.string "Can he replace Master Cyrus?$"

StarkMountain_EventScript_SNGrunts_T3:
	.string "Grunt 1: Yeah, I hear you...\p"
	.string "That elder Charon is a Commander, but\n"
	.string "he can’t replace Master Cyrus.\p"
	.string "...Maybe this is a good time for me to be\n"
	.string "done with this Team Galactic thing...$"

StarkMountain_EventScript_SNFarewell::
	setvar VAR_TEMP_E, 1
	goto_if_set FLAG_SN_HIDE_STARK_FAREWELL, StarkMountain_EventScript_SNFarewell_End
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox StarkMountain_EventScript_SNFarewell_T1, MSGBOX_DEFAULT
	closemessage
	delay 15
	msgbox StarkMountain_EventScript_SNFarewell_T2, MSGBOX_DEFAULT
	applymovement LOCALID_SN_STARK_BUCK, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox StarkMountain_EventScript_SNFarewell_T3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_BUCK, StarkMountain_EventScript_SNFarewell_BuckIn
	waitmovement 0
	playse SE_EXIT
	removeobject LOCALID_SN_STARK_BUCK
	applymovement LOCALID_SN_STARK_LOOKER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox StarkMountain_EventScript_SNFarewell_T4, MSGBOX_DEFAULT
	closemessage
	delay 30
	addobject LOCALID_SN_STARK_BUCK
	applymovement LOCALID_SN_STARK_BUCK, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	msgbox StarkMountain_EventScript_SNFarewell_T5, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_STARK_BUCK, StarkMountain_EventScript_SNFarewell_BuckOut
	waitmovement 0
	removeobject LOCALID_SN_STARK_BUCK
	applymovement LOCALID_SN_STARK_LOOKER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox StarkMountain_EventScript_SNFarewell_T6, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_STARK_LOOKER
	setflag FLAG_SN_HIDE_STARK_FAREWELL
	setflag FLAG_SN_STARK_FAREWELL
	fadescreen FADE_FROM_BLACK
	releaseall
StarkMountain_EventScript_SNFarewell_End:
	end

StarkMountain_EventScript_SNFarewell_BuckIn:
	walk_right
	walk_up
	step_end

StarkMountain_EventScript_SNFarewell_BuckOut:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

StarkMountain_EventScript_SNFarewell_T1:
	.string "Looker: Whew! The air outside, it is\n"
	.string "delicious, yes!\p"
	.string "...Gweh! Gah! Geff! Bleah!\p"
	.string "I have inhaled the volcanic ash by the\n"
	.string "lungful!$"

StarkMountain_EventScript_SNFarewell_T2:
	.string "Now, you two. This is what they were\n"
	.string "after.\p"
	.string "The Magma Stone.\p"
	.string "Moving this is said to awaken the\n"
	.string "POKéMON HEATRAN.\p"
	.string "The old tales say that its awakening,\n"
	.string "it will make Stark Mountain erupt.\p"
	.string "...But I have moved it. It is here. Will\n"
	.string "this cause the eruption?!$"

StarkMountain_EventScript_SNFarewell_T3:
	.string "Buck: Hey, don’t sweat it, stranger.\p"
	.string "Give me that Magma Stone. I’ll go put it\n"
	.string "back for you.$"

StarkMountain_EventScript_SNFarewell_T4:
	.string "Looker: That boy, he has quite the\n"
	.string "energy, yes?\p"
	.string "{PLAYER}, I should tell you why I have\n"
	.string "arrived here.\p"
	.string "After we parted at the Mt. Coronet, I\n"
	.string "investigated their hideout.\p"
	.string "I uncovered Charon’s plot, which led me\n"
	.string "to a stakeout of this place.\p"
	.string "That Charon is now securely within our\n"
	.string "custody.\p"
	.string "It is safe to say the Team Galactic is\n"
	.string "a threat no longer.\p"
	.string "That being said, it looks like my work\n"
	.string "here is finally finished.$"

StarkMountain_EventScript_SNFarewell_T5:
	.string "Buck: Hey, stranger! I put the Magma\n"
	.string "Stone where it belongs.\p"
	.string "It’ll be OK now. HEATRAN won’t wake up.\n"
	.string "Probably.\p"
	.string "But, hey, {PLAYER}! You’re an amazing\n"
	.string "Trainer!\p"
	.string "Swing by my place later. It’s in the\n"
	.string "Survival Area.\p"
	.string "Be seeing you, stranger, {PLAYER}!\n"
	.string "Bye-bye!$"

StarkMountain_EventScript_SNFarewell_T6:
	.string "Looker: I, also, will take my leave.\p"
	.string "“The more wonderful the meeting, the\n"
	.string "sadder the parting.”\p"
	.string "That is a quote I have heard many\n"
	.string "years ago in a foreign land.\p"
	.string "Its meaning... I understand it better\n"
	.string "now.\p"
	.string "Farewell, {PLAYER}, my friend! Long may\n"
	.string "you cherish POKéMON!$"

StarkMountain_OnFrameSN:
	map_script_2 VAR_TEMP_E, 0, StarkMountain_EventScript_SNFarewell
	.2byte 0
