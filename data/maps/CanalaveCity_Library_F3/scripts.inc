CanalaveCity_Library_F3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CanalaveCity_Library_F3_OnTransitionSN
	.byte 0

CanalaveCity_Library_F3_Text_PtNpc1_0:
	.string "Every book contains someone’s\n"
	.string "memories of various places and times.\p"
	.string "Libraries aren’t just buildings where\n"
	.string "books are kept, you know.\p"
	.string "They’re where different places and\n"
	.string "times are gathered together.$"

CanalaveCity_Library_F3_Text_PtNpc1_1:
	.string "W-was that an earthquake? I didn’t\n"
	.string "imagine it?$"

CanalaveCity_Library_F3_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_3, CanalaveCity_Library_F3_EventScript_PtNpc1_WasThatAnEarthquake
	msgbox CanalaveCity_Library_F3_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtNpc1_WasThatAnEarthquake:
	msgbox CanalaveCity_Library_F3_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_Text_PtNpc2_0:
	.string "Someone’s always checked out the book\n"
	.string "I want to read...$"

CanalaveCity_Library_F3_Text_PtNpc2_1:
	.string "I’m feeling wobbly...\p"
	.string "Even though the tremor has ended, my\n"
	.string "knees still feel like jelly...$"

CanalaveCity_Library_F3_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_3, CanalaveCity_Library_F3_EventScript_PtNpc2_ImFeelingWobbly
	msgbox CanalaveCity_Library_F3_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtNpc2_ImFeelingWobbly:
	msgbox CanalaveCity_Library_F3_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtSign1::
	msgbox CanalaveCity_Library_F3_Text_PtSign1, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign1:
	.string "This book is titled “Sinnoh Myth.” Want\n"
	.string "to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign2::
	msgbox CanalaveCity_Library_F3_Text_PtSign2, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign2:
	.string "This book is titled “Sinnoh Myth.” Want\n"
	.string "to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign3::
	msgbox CanalaveCity_Library_F3_Text_PtSign3, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign3:
	.string "This book is titled “Sinnoh Region’s\n"
	.string "Mythology.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign4::
	msgbox CanalaveCity_Library_F3_Text_PtSign4, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign4:
	.string "This book is titled “Sinnoh Region’s\n"
	.string "Mythology.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign5::
	msgbox CanalaveCity_Library_F3_Text_PtSign5, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign5:
	.string "This book is titled “Sinnoh’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign6::
	msgbox CanalaveCity_Library_F3_Text_PtSign6, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign6:
	.string "This book is titled “Sinnoh’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign7::
	msgbox CanalaveCity_Library_F3_Text_PtSign7, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign7:
	.string "This book is titled “Veilstone’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign8::
	msgbox CanalaveCity_Library_F3_Text_PtSign8, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign8:
	.string "This book is titled “Veilstone’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign9::
	msgbox CanalaveCity_Library_F3_Text_PtSign9, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign9:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign10::
	msgbox CanalaveCity_Library_F3_Text_PtSign10, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign10:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign11::
	msgbox CanalaveCity_Library_F3_Text_PtSign11, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign11:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign12::
	msgbox CanalaveCity_Library_F3_Text_PtSign12, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign12:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign13::
	msgbox CanalaveCity_Library_F3_Text_PtSign13, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign13:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_EventScript_PtSign14::
	msgbox CanalaveCity_Library_F3_Text_PtSign14, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign14:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_EventScript_PtSign15::
	msgbox CanalaveCity_Library_F3_Text_PtSign15, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign15:
	.string "On this floor, you will find many books\n"
	.string "on the myths and legends of\p"
	.string "the Sinnoh region.$"

CanalaveCity_Library_F3_EventScript_PtSign16::
	msgbox CanalaveCity_Library_F3_Text_PtSign16, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign16:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign17::
	msgbox CanalaveCity_Library_F3_Text_PtSign17, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign17:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign18::
	msgbox CanalaveCity_Library_F3_Text_PtSign18, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign18:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign19::
	msgbox CanalaveCity_Library_F3_Text_PtSign19, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign19:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign20::
	msgbox CanalaveCity_Library_F3_Text_PtSign20, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign20:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign21::
	msgbox CanalaveCity_Library_F3_Text_PtSign21, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign21:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_EventScript_PtSign22::
	msgbox CanalaveCity_Library_F3_Text_PtSign22, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign22:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_OnTransitionSN:
	call CanalaveCity_Library_F3_EventScript_SNGfx
	call CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN
	end

CanalaveCity_Library_F3_EventScript_SNGfx:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, CanalaveCity_Library_F3_EventScript_SNGfxDawn
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	return
CanalaveCity_Library_F3_EventScript_SNGfxDawn:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	return

CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN:
	setflag FLAG_SN_HIDE_LIB_ROWAN
	goto_if_unset FLAG_BADGE06_GET, CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN_End
	goto_if_ge VAR_SINNOH_STORY, 31, CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN_End
	clearflag FLAG_SN_HIDE_LIB_ROWAN
CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN_End:
	return

CanalaveCity_Library_F3_EventScript_SNRowan::
	lockall
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T1, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T2, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T3, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T4, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T5, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T6, MSGBOX_DEFAULT
	closemessage
	playse SE_THUNDER
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special ShakeCamera
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	delay 60
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T7, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T8, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_EventScript_SNRowan_T9, MSGBOX_DEFAULT
	call Sinnoh_EventScript_BufferCounterpartName
	msgbox CanalaveCity_Library_F3_Text_SNAfter1, MSGBOX_DEFAULT
	checkplayergender
	call_if_eq VAR_RESULT, MALE, CanalaveCity_Library_F3_Text_SNAfter2_ScrD
	call_if_eq VAR_RESULT, FEMALE, CanalaveCity_Library_F3_Text_SNAfter2_ScrL
	msgbox CanalaveCity_Library_F3_Text_SNAfter3, MSGBOX_DEFAULT
	closemessage
		sn_walkto LOCALID_SN_LIB_ROWAN, 1, 1, SN_SPEED_NORMAL, 0, 0, 0
	sn_walkto LOCALID_SN_LIB_COUNTERPART, 1, 1, SN_SPEED_NORMAL, 0, 0, 1
	sn_walkto LOCALID_SN_LIB_BARRY, 4, 3, SN_SPEED_FAST, 0, 0, 2
	waitmovement LOCALID_SN_LIB_ROWAN
	waitmovement LOCALID_SN_LIB_COUNTERPART
	waitmovement LOCALID_SN_LIB_BARRY
	removeobject LOCALID_SN_LIB_ROWAN
	removeobject LOCALID_SN_LIB_COUNTERPART
	removeobject LOCALID_SN_LIB_BARRY
	setflag FLAG_SN_HIDE_LIB_ROWAN
	setvar VAR_SINNOH_STORY, 31
	setflag FLAG_SN_LAKE_VALOR_EXPLODED
	setflag FLAG_SN_LAKE_VALOR_EXPLODED_2
	setflag FLAG_SN_LAKE_VALOR_EXPLODED_3
	setflag FLAG_SN_LAKE_VALOR_EXPLODED_4
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNRowan_T1:
	.string "Rowan: Hm! Everyone’s here finally.\n"
	.string "{PLAYER}, everyone, listen.\p"
	.string "You may have forgotten already, but I\n"
	.string "study the evolution of POKéMON.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T2:
	.string "This is where you three come in.\p"
	.string "In the three lakes of Sinnoh, there are\n"
	.string "said to be mirage POKéMON.\p"
	.string "If we can obtain data on them, it may\n"
	.string "shed some light on how the\p"
	.string "process of POKéMON evolution works.\p"
	.string "I need help from each one of you on\n"
	.string "this grand undertaking.\p"
	.string "Help me find these POKéMON that are\n"
	.string "considered to be mirages.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T3:
	.string "Rowan: Hm! I would have made all of you\n"
	.string "go regardless... Anyway.\p"
	.string "Now, there are three lakes.\n"
	.string "Fortuitously, there are three of you.\p"
	.string "You should therefore split up and\n"
	.string "investigate the lakes individually.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T4:
	.string "Rowan: BARRY, I want you to\n"
	.string "investigate Lake Acuity.\p"
	.string "That would take you almost to\n"
	.string "Snowpoint City.\p"
	.string "The road there is harsh. I need a tough\n"
	.string "Trainer to go.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T5:
	.string "BARRY: Uh... Yeah, of course! Gramps,\n"
	.string "you know how to call it!\p"
	.string "You can tell I’m the hotness!\p"
	.string "And, you know what? I was going to\n"
	.string "catch those legendary POKéMON for\l"
	.string "you.\p"
	.string "You know, as thanks for giving us our\n"
	.string "POKéMON back on Route 201.\p"
	.string "...Even though I forgot completely\n"
	.string "about it until just now.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T6:
	.string "Rowan: Very well. I’m counting on you.\p"
	.string "And that leaves {PLAYER} with Lake\n"
	.string "Valor.\p"
	.string "The lake is between Veilstone and\n"
	.string "Pastoria, if memory serves...$"

CanalaveCity_Library_F3_EventScript_SNRowan_T7:
	.string "DDDOOOMMM!!$"

CanalaveCity_Library_F3_EventScript_SNRowan_T8:
	.string "Rowan: ... ...Has it stopped?\p"
	.string "Are all of you unharmed?$"

CanalaveCity_Library_F3_EventScript_SNRowan_T9:
	.string "BARRY: What was that about?!\p"
	.string "No, wait, I mean, TV! The TV! News!\n"
	.string "Anything!$"

CanalaveCity_Library_F3_EventScript_SNEnter0::
	goto_if_set FLAG_SN_HIDE_LIB_ROWAN, CanalaveCity_Library_F3_EventScript_SNEnter0_End
	lockall
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNOverHere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CanalaveCity_Library_F3_EventScript_SNEnter0_M
	waitmovement 0
	goto CanalaveCity_Library_F3_EventScript_SNRowan
CanalaveCity_Library_F3_EventScript_SNEnter0_End:
	end

CanalaveCity_Library_F3_EventScript_SNEnter0_M:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	face_up
	step_end

CanalaveCity_Library_F3_EventScript_SNEnter1::
	goto_if_set FLAG_SN_HIDE_LIB_ROWAN, CanalaveCity_Library_F3_EventScript_SNEnter1_End
	lockall
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNOverHere, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, CanalaveCity_Library_F3_EventScript_SNEnter1_M
	waitmovement 0
	goto CanalaveCity_Library_F3_EventScript_SNRowan
CanalaveCity_Library_F3_EventScript_SNEnter1_End:
	end

CanalaveCity_Library_F3_EventScript_SNEnter1_M:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	face_up
	step_end

CanalaveCity_Library_F3_Text_SNOverHere:
	.string "BARRY: Hey, {PLAYER}! Over here! This\n"
	.string "way!$"

CanalaveCity_Library_F3_Text_SNAfter1:
	.string "Rowan: ...That tremor... That wasn’t a\n"
	.string "natural occurrence.\p"
	.string "Rowan: ...That {RIVAL}... Can’t sit\n"
	.string "still...\p"
	.string "{PLAYER}, I don’t like to demand, but I\n"
	.string "need you at Lake Valor.\p"
	.string "It’s impossible for things to be OK. Not\n"
	.string "after an explosion like that.\p"
	.string "But I have no idea what is taking\n"
	.string "place...\p"
	.string "But before you go, let me stress: don’t\n"
	.string "get in over your head.\p"
	.string "We will try to join you as soon as we\n"
	.string "inspect Lake Verity.$"

CanalaveCity_Library_F3_Text_SNAfter2:
	.string "{STR_VAR_1}: ...{PLAYER}, you’ll be OK, no\n"
	.string "matter what, right?\p"
	.string "{STR_VAR_1}: {STR_VAR_1}: We’re going\n"
	.string "off to Lake Verity first...\p"
	.string "Don’t do anything rash if something\n"
	.string "does happen.$"

CanalaveCity_Library_F3_Text_SNAfter3:
	.string "Rowan: Hmm...\p"
	.string "What is taking place at Lake Valor...\n"
	.string "You must find out!\p"
	.string "But before you go, let me stress: don’t\n"
	.string "get in over your head.\p"
	.string "We will try to join you as soon as we\n"
	.string "inspect Lake Verity.\p"
	.string "Rowan: {PLAYER}. You should leave now,\n"
	.string "too.\p"
	.string "...There may be aftershocks, however.\n"
	.string "Be alert always.$"

CanalaveCity_Library_F3_Text_SNAfter2_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, CanalaveCity_Library_F3_Text_SNAfter2_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, CanalaveCity_Library_F3_Text_SNAfter2_SNDawnCall
	return
CanalaveCity_Library_F3_Text_SNAfter2_ScrL:
	msgbox CanalaveCity_Library_F3_Text_SNAfter2_Lu, MSGBOX_DEFAULT
	return

CanalaveCity_Library_F3_Text_SNAfter2_Lu:
	.string "{STR_VAR_1}: Lake Valor... I wonder what\n"
	.string "happened?\p"
	.string "{STR_VAR_1}: {STR_VAR_1}: We’re going to\n"
	.string "investigate Lake Verity before we join\l"
	.string "you.\p"
	.string "Don’t try to be a hero if anything\n"
	.string "crazy happens.$"

CanalaveCity_Library_F3_Text_SNAfter2_SNDawnCall:
	msgbox CanalaveCity_Library_F3_Text_SNAfter2, MSGBOX_DEFAULT
	return

CanalaveCity_Library_F3_Text_SNAfter2_SNLucasCall:
	msgbox CanalaveCity_Library_F3_Text_SNAfter2_SNLu, MSGBOX_DEFAULT
	return

CanalaveCity_Library_F3_Text_SNAfter2_SNLu:
	.string "{STR_VAR_1}: Lake Valor... I wonder what\n"
	.string "happened?\p"
	.string "{STR_VAR_1}: {STR_VAR_1}: We’re going to\n"
	.string "investigate Lake Verity before we join\l"
	.string "you.\p"
	.string "Don’t try to be a hero if anything\n"
	.string "crazy happens.$"

