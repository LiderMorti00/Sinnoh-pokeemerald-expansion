LakeVerity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeVerity_OnTransition
	.byte 0

LakeVerity_OnTransition:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LakeVerity_EventScript_SetDawn
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	end

LakeVerity_EventScript_SetDawn::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
	end

LakeVerity_EventScript_Rowan::
LakeVerity_EventScript_RowanScene::
	lockall
	msgbox LakeVerity_Text_Rowan1, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LAKE_VERITY_ROWAN, Common_Movement_FaceDown
	applymovement LOCALID_LAKE_VERITY_ASSISTANT, Common_Movement_FaceDown
	waitmovement 0
	msgbox LakeVerity_Text_Rowan2, MSGBOX_DEFAULT
	msgbox LakeVerity_Text_Assistant, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LAKE_VERITY_ROWAN
	removeobject LOCALID_LAKE_VERITY_ASSISTANT
	setflag FLAG_HIDE_LAKE_VERITY_ROWAN
	clearflag FLAG_HIDE_LAKEFRONT_BARRY
	clearflag FLAG_HIDE_LAKEFRONT_BRIEFCASE
	fadescreen FADE_FROM_BLACK
	msgbox LakeVerity_Text_BarryAfterRowan, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SINNOH_STORY, 4
	releaseall
	end

LakeVerity_Text_Rowan1:
	.string "PROFESSOR: ...It is as I feared.\n"
	.string "The lake is quiet. Too quiet.\p"
	.string "Something stirs beneath these\n"
	.string "waters, and it is watching us.$"

LakeVerity_Text_Rowan2:
	.string "PROFESSOR: Hm? And who might you be?\p"
	.string "The tall grass is no place to\n"
	.string "wander without POKéMON of your own.\p"
	.string "...Come. We are finished here.$"

LakeVerity_Text_Assistant:
	.string "ASSISTANT: Coming, Professor!\n"
	.string "Sorry, you two, excuse us!$"

LakeVerity_Text_BarryAfterRowan:
	.string "Barry ran back toward the lake's\n"
	.string "entrance, looking excited.$"
