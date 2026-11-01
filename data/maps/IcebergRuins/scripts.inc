IcebergRuins_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IcebergRuins_OnTransitionSN
	.byte 0

IcebergRuins_EventScript_PtSign1::
	msgbox IcebergRuins_Text_PtSign1, MSGBOX_SIGN
	end

IcebergRuins_Text_PtSign1:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

IcebergRuins_EventScript_PtSign2::
	msgbox IcebergRuins_Text_PtSign2, MSGBOX_SIGN
	end

IcebergRuins_Text_PtSign2:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

IcebergRuins_EventScript_PtSign3::
	msgbox IcebergRuins_Text_PtSign3, MSGBOX_SIGN
	end

IcebergRuins_Text_PtSign3:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

IcebergRuins_OnTransitionSN:
	call IcebergRuins_EventScript_SNVis_REGICE
	end

IcebergRuins_EventScript_SNVis_REGICE:
	setflag FLAG_SN_HIDE_REGICE
	goto_if_set FLAG_SN_DONE_REGICE, IcebergRuins_EventScript_SNVis_REGICE_End
	clearflag FLAG_SN_HIDE_REGICE
IcebergRuins_EventScript_SNVis_REGICE_End:
	return

IcebergRuins_EventScript_SNREGICE::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGICE, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IcebergRuins_EventScript_SNREGICE_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IcebergRuins_EventScript_SNREGICE_Ran
	setflag FLAG_SN_DONE_REGICE
	setflag FLAG_SN_HIDE_REGICE
	goto Common_EventScript_RemoveStaticPokemon

IcebergRuins_EventScript_SNREGICE_Ran:
	setvar VAR_0x8004, SPECIES_REGICE
	goto Common_EventScript_LegendaryFlewAway
