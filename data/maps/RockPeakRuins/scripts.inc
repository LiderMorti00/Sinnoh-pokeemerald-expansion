RockPeakRuins_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RockPeakRuins_OnTransitionSN
	.byte 0

RockPeakRuins_EventScript_PtSign1::
	msgbox RockPeakRuins_Text_PtSign1, MSGBOX_SIGN
	end

RockPeakRuins_Text_PtSign1:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

RockPeakRuins_EventScript_PtSign2::
	msgbox RockPeakRuins_Text_PtSign2, MSGBOX_SIGN
	end

RockPeakRuins_Text_PtSign2:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

RockPeakRuins_EventScript_PtSign3::
	msgbox RockPeakRuins_Text_PtSign3, MSGBOX_SIGN
	end

RockPeakRuins_Text_PtSign3:
	.string "The POKéMON statue has stopped\n"
	.string "emanating power.$"

RockPeakRuins_OnTransitionSN:
	call RockPeakRuins_EventScript_SNVis_REGIROCK
	end

RockPeakRuins_EventScript_SNVis_REGIROCK:
	setflag FLAG_SN_HIDE_REGIROCK
	goto_if_set FLAG_SN_DONE_REGIROCK, RockPeakRuins_EventScript_SNVis_REGIROCK_End
	clearflag FLAG_SN_HIDE_REGIROCK
RockPeakRuins_EventScript_SNVis_REGIROCK_End:
	return

RockPeakRuins_EventScript_SNREGIROCK::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, RockPeakRuins_EventScript_SNREGIROCK_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, RockPeakRuins_EventScript_SNREGIROCK_Ran
	setflag FLAG_SN_DONE_REGIROCK
	setflag FLAG_SN_HIDE_REGIROCK
	goto Common_EventScript_RemoveStaticPokemon

RockPeakRuins_EventScript_SNREGIROCK_Ran:
	setvar VAR_0x8004, SPECIES_REGIROCK
	goto Common_EventScript_LegendaryFlewAway
