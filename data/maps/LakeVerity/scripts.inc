LakeVerity_MapScripts::
	.byte 0

LakeVerity_EventScript_Scene::
	lockall
	msgbox LakeVerity_Text_Cyrus, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LAKE_CYRUS, Common_Movement_FaceDown
	waitmovement 0
	msgbox LakeVerity_Text_Cyrus2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LAKE_CYRUS
	fadescreen FADE_FROM_BLACK
	playmoncry SPECIES_MESPRIT, CRY_MODE_NORMAL
	waitmoncry
	msgbox LakeVerity_Text_Cry, MSGBOX_DEFAULT
	msgbox LakeVerity_Text_Barry, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_LAKE_BARRY
	setflag FLAG_HIDE_LAKE_VERITY_ROWAN
	fadescreen FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 7
	releaseall
	end

LakeVerity_Text_Cyrus:
	.string "???: ...This lake is said to be\n"
	.string "home to a POKéMON of emotion.\p"
	.string "Emotion... A useless burden that\n"
	.string "only brings conflict. One day I\l"
	.string "will create a world free of it.\p"
	.string "And time and space will be mine to\n"
	.string "command.$"

LakeVerity_Text_Cyrus2:
	.string "???: ...Children. Step aside.$"

LakeVerity_Text_Cry:
	.string "Something cried out from the\n"
	.string "middle of the lake...$"

LakeVerity_Text_Barry:
	.string "BARRY: Did you hear that?! That\n"
	.string "has to be the legendary POKéMON!\p"
	.string "Ah! But we don't have any POKé\n"
	.string "BALLS! Argh!\p"
	.string "The Professor said to come to him\n"
	.string "if we needed anything. Let's go to\l"
	.string "SANDGEM!$"

Sinnoh_EventScript_BufferCounterpartName::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sinnoh_EventScript_BufferDawn
	bufferstring STR_VAR_1, Sinnoh_Text_Lucas
	return

Sinnoh_EventScript_BufferDawn::
	bufferstring STR_VAR_1, Sinnoh_Text_Dawn
	return

Sinnoh_Text_Dawn:
	.string "DAWN$"

Sinnoh_Text_Lucas:
	.string "LUCAS$"

LakeVerity_EventScript_NoPokemonGrass::
	lockall
	msgbox Sinnoh_Text_NoPokemonGrass, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, LakeVerity_EventScript_GrassBackDown
	goto_if_eq VAR_RESULT, DIR_SOUTH, LakeVerity_EventScript_GrassBackUp
	goto_if_eq VAR_RESULT, DIR_WEST, LakeVerity_EventScript_GrassBackRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto LakeVerity_EventScript_GrassBackEnd

LakeVerity_EventScript_GrassBackDown::
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto LakeVerity_EventScript_GrassBackEnd

LakeVerity_EventScript_GrassBackUp::
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto LakeVerity_EventScript_GrassBackEnd

LakeVerity_EventScript_GrassBackRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight

LakeVerity_EventScript_GrassBackEnd::
	waitmovement 0
	releaseall
	end
