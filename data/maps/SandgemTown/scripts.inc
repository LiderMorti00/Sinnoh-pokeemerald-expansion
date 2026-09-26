SandgemTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_OnTransition
	.byte 0

SandgemTown_OnTransition:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	end

SandgemTown_EventScript_SetDawnGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	end

SandgemTown_EventScript_Escort::
	lockall
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_SANDGEM_DAWN, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox SandgemTown_Text_Dawn, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SANDGEM_DAWN, SandgemTown_Movement_DawnToLab
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_SANDGEM_DAWN
	setflag FLAG_HIDE_SANDGEM_DAWN
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
	setvar VAR_SINNOH_STORY, 8
	releaseall
	end

SandgemTown_EventScript_Rowan::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 9, SandgemTown_EventScript_RowanEnd
	call Sinnoh_EventScript_BufferCounterpartName
	clearflag FLAG_HIDE_SANDGEM_ROWAN
	addobject LOCALID_SANDGEM_ROWAN
	addobject LOCALID_SANDGEM_DAWN2
	msgbox SandgemTown_Text_Rowan, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	msgbox SandgemTown_Text_Rowan2, MSGBOX_DEFAULT
	msgbox SandgemTown_Text_Dawn2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SANDGEM_ROWAN
	removeobject LOCALID_SANDGEM_DAWN2
	setflag FLAG_HIDE_SANDGEM_ROWAN
	clearflag FLAG_HIDE_HOME_BARRYS_MOM
	fadescreen FADE_FROM_BLACK
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

SandgemTown_Movement_DawnToLab:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

SandgemTown_Movement_BarryRuns:
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
	walk_fast_right
	step_end

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
	.string "{STR_VAR_1}: That building is the\n"
	.string "POKéMON CENTER, and that one is\l"
	.string "the POKé MART!\p"
	.string "Oh, you should tell your mom about\n"
	.string "your journey before you leave.\l"
	.string "She'll be worried otherwise!$"

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
