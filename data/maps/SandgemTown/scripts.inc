SandgemTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_OnFrame
	.byte 0

SandgemTown_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 9, SandgemTown_EventScript_Rowan
	.2byte 0

SandgemTown_OnTransition:
	call_if_eq VAR_SINNOH_HAS_POKEMON, 1, Sinnoh_EventScript_SetPokemonMenu
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	end

SandgemTown_EventScript_SetDawnGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	end

SandgemTown_EventScript_Escort::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 7, SandgemTown_EventScript_EscortEnd
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_SANDGEM_DAWN, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox SandgemTown_Text_Dawn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SANDGEM_DAWN, SandgemTown_Movement_DawnToLab
	waitmovement 0
	getplayerxy VAR_0x8004, VAR_0x8005
	call_if_eq VAR_0x8005, 9, SandgemTown_EventScript_PlayerWalk9
	call_if_eq VAR_0x8005, 10, SandgemTown_EventScript_PlayerWalk10
	call_if_eq VAR_0x8005, 11, SandgemTown_EventScript_PlayerWalk11
	call_if_eq VAR_0x8005, 12, SandgemTown_EventScript_PlayerWalk12
	call_if_eq VAR_0x8005, 13, SandgemTown_EventScript_PlayerWalk13
	applymovement LOCALID_SANDGEM_DAWN, Common_Movement_FaceRight
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	clearflag FLAG_HIDE_SANDGEM_BARRY
	addobject LOCALID_SANDGEM_BARRY
	playse SE_DOOR
	applymovement LOCALID_SANDGEM_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox SandgemTown_Text_Barry, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SANDGEM_BARRY, SandgemTown_Movement_BarryRuns
	waitmovement 0
	removeobject LOCALID_SANDGEM_BARRY
	setflag FLAG_HIDE_SANDGEM_BARRY
	call Sinnoh_EventScript_BufferCounterpartName
	msgbox SandgemTown_Text_DawnGoIn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SANDGEM_DAWN, SandgemTown_Movement_DawnEnters
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_SANDGEM_DAWN
	setflag FLAG_HIDE_SANDGEM_DAWN
	setvar VAR_SINNOH_STORY, 8
SandgemTown_EventScript_EscortEnd::
	releaseall
	end

SandgemTown_EventScript_PlayerWalk9::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab9
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk10::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab10
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk11::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab11
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk12::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab12
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk13::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab13
	waitmovement 0
	return

SandgemTown_EventScript_Rowan::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 9, SandgemTown_EventScript_RowanEnd
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_SANDGEM_ROWAN, Common_Movement_FacePlayer
	applymovement LOCALID_SANDGEM_DAWN2, Common_Movement_FacePlayer
	waitmovement 0
	msgbox SandgemTown_Text_Rowan, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	msgbox SandgemTown_Text_Rowan2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SANDGEM_ROWAN, SandgemTown_Movement_RowanLeaves
	waitmovement 0
	removeobject LOCALID_SANDGEM_ROWAN
	applymovement LOCALID_SANDGEM_DAWN2, SandgemTown_Movement_DawnTour
	waitmovement 0
	applymovement LOCALID_SANDGEM_DAWN2, Common_Movement_FaceUp
	waitmovement 0
	msgbox SandgemTown_Text_Dawn2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SANDGEM_DAWN2, SandgemTown_Movement_DawnLeaves
	waitmovement 0
	removeobject LOCALID_SANDGEM_DAWN2
	setflag FLAG_HIDE_SANDGEM_ROWAN
	clearflag FLAG_HIDE_HOME_BARRYS_MOM
	setvar VAR_SINNOH_STORY, 10
SandgemTown_EventScript_RowanEnd::
	releaseall
	end

SandgemTown_EventScript_BlockNorth::
	lockall
	goto_if_eq VAR_SINNOH_STORY, 10, SandgemTown_EventScript_BlockNorthMom
	msgbox SandgemTown_Text_LabFirst, MSGBOX_DEFAULT
	goto SandgemTown_EventScript_BlockNorthEnd
SandgemTown_EventScript_BlockNorthMom::
	msgbox SandgemTown_Text_TellMom, MSGBOX_DEFAULT
SandgemTown_EventScript_BlockNorthEnd::
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

SandgemTown_Text_Dawn:
	.string "{STR_VAR_1}: Oh, there you are!\n"
	.string "The Professor is waiting for you\l"
	.string "in his lab. Come on, follow me!$"

SandgemTown_Text_Barry:
	.string "BARRY: Whoa, {PLAYER}! The\n"
	.string "Professor isn't as scary as he\l"
	.string "looks, you know!\p"
	.string "I'm off to find that legendary\n"
	.string "POKéMON! See ya!$"

SandgemTown_Text_Rowan:
	.string "ROWAN: Ah, {PLAYER}. One more\n"
	.string "thing. Take this. It contains a\l"
	.string "move that grows stronger the more\n"
	.string "your POKéMON trusts you.$"

SandgemTown_Text_Rowan2:
	.string "ROWAN: {STR_VAR_1}, show {PLAYER}\n"
	.string "around town. I must return to my\l"
	.string "research.$"

SandgemTown_Text_Dawn2:
	.string "{STR_VAR_1}: See that building\n"
	.string "with the red roof? That's the\l"
	.string "POKéMON CENTER. It heals your\n"
	.string "POKéMON for free!\p"
	.string "And the blue one is the POKé MART.\n"
	.string "You should go home and tell your\l"
	.string "mom about your journey first,\n"
	.string "though!$"

SandgemTown_Text_LabFirst:
	.string "PROFESSOR ROWAN'S lab is right\n"
	.string "here in SANDGEM. I should go there\l"
	.string "first.$"

SandgemTown_Text_TellMom:
	.string "I should go home to TWINLEAF and\n"
	.string "tell Mom about my journey first.$"

SandgemTown_EventScript_Sign1::
	msgbox SandgemTown_Text_Sign1, MSGBOX_SIGN
	end

SandgemTown_Text_Sign1:
	.string "SANDGEM TOWN\p"
	.string "The town of sand and sea.$"

SandgemTown_EventScript_Sign2::
	msgbox SandgemTown_Text_Sign2, MSGBOX_SIGN
	end

SandgemTown_Text_Sign2:
	.string "POKéMON RESEARCH LAB\p"
	.string "Professor Rowan$"

SandgemTown_EventScript_Sign3::
	msgbox SandgemTown_Text_Sign3, MSGBOX_SIGN
	end

SandgemTown_Text_Sign3:
	.string "Welcome! POKéMON CENTER and POKé\n"
	.string "MART are right here in SANDGEM!$"

SandgemTown_EventScript_Sign4::
	msgbox SandgemTown_Text_Sign4, MSGBOX_SIGN
	end

SandgemTown_Text_Sign4:
	.string "TRAINER TIPS\p"
	.string "Heal your POKéMON for free at any\n"
	.string "POKéMON CENTER.$"

SandgemTown_EventScript_SignExtra1::
	msgbox SandgemTown_Text_SignExtra1, MSGBOX_SIGN
	end

SandgemTown_Text_SignExtra1:
	.string "TRAINER TIPS\p"
	.string "Talk to people you meet. They may\n"
	.string "give you useful hints or items!$"

SandgemTown_EventScript_PtNpc1::
	msgbox SandgemTown_Text_PtNpc1, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc1:
	.string "The beach is right next to town. I\n"
	.string "love the smell of the sea!$"

SandgemTown_EventScript_PtNpc2::
	msgbox SandgemTown_Text_PtNpc2, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc2:
	.string "PROFESSOR ROWAN is back from\n"
	.string "KANTO. The whole town is talking\l"
	.string "about it.$"

SandgemTown_EventScript_PtNpc3::
	msgbox SandgemTown_Text_PtNpc3, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc3:
	.string "I raise POKéMON with my husband.\n"
	.string "Healthy POKéMON are happy POKéMON!$"

SandgemTown_Movement_DawnToLab:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SandgemTown_Movement_PlayerToLab9:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

SandgemTown_Movement_PlayerToLab10:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

SandgemTown_Movement_PlayerToLab11:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

SandgemTown_Movement_PlayerToLab12:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

SandgemTown_Movement_PlayerToLab13:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

SandgemTown_Movement_BarryRuns:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SandgemTown_Movement_DawnEnters:
	walk_up
	walk_right
	walk_up
	step_end

SandgemTown_Movement_RowanLeaves:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SandgemTown_Movement_DawnTour:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SandgemTown_Movement_DawnLeaves:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SandgemTown_Text_DawnGoIn:
	.string "{STR_VAR_1}: That was Barry,\n"
	.string "right? He's always in such a\l"
	.string "hurry! Come on, let's go in.$"
