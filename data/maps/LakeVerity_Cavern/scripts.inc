LakeVerity_Cavern_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeVerity_Cavern_OnTransitionSN
	.byte 0

LakeVerity_Cavern_OnTransitionSN:
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
	release
	end

LakeVerity_Cavern_EventScript_SNMESPRIT_TFled:
	.string "MESPRIT fled!\p"
	.string "It seems to be wandering all over\n"
	.string "Sinnoh!$"

