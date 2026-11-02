IronRuins_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IronRuins_OnTransitionSN
	.byte 0

IronRuins_EventScript_PtSign1::
	msgbox IronRuins_Text_PtSign1, MSGBOX_SIGN
	end

IronRuins_Text_PtSign1:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

IronRuins_EventScript_PtSign2::
	msgbox IronRuins_Text_PtSign2, MSGBOX_SIGN
	end

IronRuins_Text_PtSign2:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

IronRuins_EventScript_PtSign3::
	msgbox IronRuins_Text_PtSign3, MSGBOX_SIGN
	end

IronRuins_Text_PtSign3:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

IronRuins_OnTransitionSN:
	call IronRuins_EventScript_SNVis_REGISTEEL
	end

IronRuins_EventScript_SNVis_REGISTEEL:
	setflag FLAG_SN_HIDE_REGISTEEL
	goto_if_set FLAG_SN_DONE_REGISTEEL, IronRuins_EventScript_SNVis_REGISTEEL_End
	clearflag FLAG_SN_HIDE_REGISTEEL
IronRuins_EventScript_SNVis_REGISTEEL_End:
	return

IronRuins_EventScript_SNREGISTEEL::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGISTEEL, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, IronRuins_EventScript_SNREGISTEEL_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, IronRuins_EventScript_SNREGISTEEL_Ran
	setflag FLAG_SN_DONE_REGISTEEL
	setflag FLAG_SN_HIDE_REGISTEEL
	goto Common_EventScript_RemoveStaticPokemon

IronRuins_EventScript_SNREGISTEEL_Ran:
	setvar VAR_0x8004, SPECIES_REGISTEEL
	goto Common_EventScript_LegendaryFlewAway
