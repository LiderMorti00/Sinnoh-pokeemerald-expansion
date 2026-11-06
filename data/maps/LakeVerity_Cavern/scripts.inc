LakeVerity_Cavern_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeVerity_Cavern_OnTransitionSN
	.byte 0

LakeVerity_Cavern_OnTransitionSN:
	call LakeVerity_Cavern_EventScript_SNVis_VERITY_ROWAN
	call LakeVerity_Cavern_EventScript_SNVis_MESPRIT
	end

LakeVerity_Cavern_EventScript_SNVis_MESPRIT:
	setflag FLAG_SN_HIDE_MESPRIT
	goto_if_lt VAR_SINNOH_STORY, 32, LakeVerity_Cavern_EventScript_SNVis_MESPRIT_End
	goto_if_set FLAG_SN_DONE_MESPRIT, LakeVerity_Cavern_EventScript_SNVis_MESPRIT_End
	clearflag FLAG_SN_HIDE_MESPRIT
LakeVerity_Cavern_EventScript_SNVis_MESPRIT_End:
	return

LakeVerity_Cavern_EventScript_SNMESPRIT::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MESPRIT, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	msgbox LakeVerity_Cavern_EventScript_SNMESPRIT_TFled, MSGBOX_DEFAULT
	closemessage
	playse SE_M_TELEPORT
	fadescreen FADE_TO_WHITE
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_DONE_MESPRIT
	setflag FLAG_SN_HIDE_MESPRIT
	fadescreen FADE_FROM_WHITE
	waitse
	setvar VAR_0x8004, SPECIES_MESPRIT
	setvar VAR_0x8005, 50
	special SinnohAddRoamer
	clearflag FLAG_SN_HIDE_VERITY_ROWAN_2
	addobject LOCALID_SN_VCAVE_ROWAN
	goto LakeVerity_Cavern_EventScript_SNRowan
	end

LakeVerity_Cavern_EventScript_SNMESPRIT_TFled:
	.string "MESPRIT fled!\p"
	.string "It seems to be wandering all over\n"
	.string "Sinnoh!$"

LakeVerity_Cavern_EventScript_SNVis_VERITY_ROWAN:
	setflag FLAG_SN_HIDE_VERITY_ROWAN_2
	goto_if_unset FLAG_SN_DONE_MESPRIT, LakeVerity_Cavern_EventScript_SNVis_VERITY_ROWAN_End
	goto_if_set FLAG_SN_VERITY_ROWAN, LakeVerity_Cavern_EventScript_SNVis_VERITY_ROWAN_End
	clearflag FLAG_SN_HIDE_VERITY_ROWAN_2
LakeVerity_Cavern_EventScript_SNVis_VERITY_ROWAN_End:
	return

LakeVerity_Cavern_EventScript_SNRowan::
	lock
	msgbox LakeVerity_Cavern_Text_SNRowan1, MSGBOX_DEFAULT
	msgbox LakeVerity_Cavern_Text_SNRowan2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_VERITY_ROWAN
	sn_walkto LOCALID_SN_VCAVE_ROWAN, 15, 30, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_VCAVE_ROWAN
	removeobject LOCALID_SN_VCAVE_ROWAN
	setflag FLAG_SN_HIDE_VERITY_ROWAN_2
	release
	end

LakeVerity_Cavern_Text_SNRowan1:
	.string "Rowan: ... ...\p"
	.string "{PLAYER}, that was MESPRIT, wasn’t it?\p"
	.string "You’ve accomplished what I’d asked you\n"
	.string "to do at the Canalave Library...\p"
	.string "I asked you to get data on the POKéMON\n"
	.string "of the lake, and you did.\p"
	.string "But it didn’t provide any answers\n"
	.string "about the mysteries of evolution.\p"
	.string "I still don’t know why some POKéMON\n"
	.string "evolve and others don’t.\p"
	.string "Ultimately, it only deepened the\n"
	.string "mystery.\p"
	.string "But having mysteries to solve... That\n"
	.string "adds to my enjoyment!$"

LakeVerity_Cavern_Text_SNRowan2:
	.string "Rowan: {PLAYER}, why don’t you chase\n"
	.string "after MESPRIT?\p"
	.string "To me, it seemed as if it wanted to play\n"
	.string "with you.\p"
	.string "If you were to use the PokéNav app\n"
	.string "Marking Map, you’d be able to\p"
	.string "track the movements of POKéMON.\p"
	.string "Rowan: Go on, {PLAYER}.\p"
	.string "I’m sure that you will keep meeting\n"
	.string "countless POKéMON and people.\p"
	.string "Those encounters will keep thrilling\n"
	.string "you in their own special ways.\p"
	.string "I hope you’ll enjoy that experience!\n"
	.string "Take care, {PLAYER}.$"
