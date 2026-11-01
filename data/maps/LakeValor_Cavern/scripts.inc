LakeValor_Cavern_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeValor_Cavern_OnTransitionSN
	.byte 0

LakeValor_Cavern_Text_PtNpc1:
	.string "The mission is proceeding without a\n"
	.string "hitch. The boss should be pleased.\p"
	.string "Everything is for everyone, and for\n"
	.string "the good of Team Galactic!$"

LakeValor_Cavern_EventScript_PtNpc1::
	msgbox LakeValor_Cavern_Text_PtNpc1, MSGBOX_NPC
	end

LakeValor_Cavern_OnTransitionSN:
	call LakeValor_Cavern_EventScript_SNVis_VALOR_SATURN
	call LakeValor_Cavern_EventScript_SNVis_AZELF
	end

LakeValor_Cavern_EventScript_SNVis_VALOR_SATURN:
	setflag FLAG_SN_HIDE_VALOR_SATURN
	goto_if_lt VAR_SINNOH_STORY, 31, LakeValor_Cavern_EventScript_SNVis_VALOR_SATURN_End
	goto_if_defeated TRAINER_BENJAMIN_3, LakeValor_Cavern_EventScript_SNVis_VALOR_SATURN_End
	clearflag FLAG_SN_HIDE_VALOR_SATURN
LakeValor_Cavern_EventScript_SNVis_VALOR_SATURN_End:
	return

LakeValor_Cavern_EventScript_SNVis_AZELF:
	setflag FLAG_SN_HIDE_AZELF
	goto_if_lt VAR_SINNOH_STORY, 32, LakeValor_Cavern_EventScript_SNVis_AZELF_End
	goto_if_set FLAG_SN_DONE_AZELF, LakeValor_Cavern_EventScript_SNVis_AZELF_End
	clearflag FLAG_SN_HIDE_AZELF
LakeValor_Cavern_EventScript_SNVis_AZELF_End:
	return

LakeValor_Cavern_EventScript_SNSaturn::
	trainerbattle_single TRAINER_BENJAMIN_3, LakeValor_Cavern_EventScript_SNSaturn_Intro, LakeValor_Cavern_EventScript_SNSaturn_Defeat, LakeValor_Cavern_EventScript_SNSaturn_Won
	end

LakeValor_Cavern_EventScript_SNSaturn_Won:
	lock
	msgbox LakeValor_Cavern_EventScript_SNSaturn_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VALOR_SATURN
	fadescreen FADE_FROM_BLACK
	release
	end
LakeValor_Cavern_EventScript_SNSaturn_Intro:
	.string "I recognize your face!\p"
	.string "You’re the child who raided the Team\n"
	.string "Galactic building in Eterna!\p"
	.string "Humph! Jupiter should be ashamed of\n"
	.string "herself, being beaten by a child.\p"
	.string "But anything and anyone that opposes\n"
	.string "Team Galactic must be crushed!\p"
	.string "Even the very thought of opposition\n"
	.string "will not be tolerated!$"

LakeValor_Cavern_EventScript_SNSaturn_Defeat:
	.string "Saturn: ...Hmm. Fine.$"

LakeValor_Cavern_EventScript_SNSaturn_Post:
	.string "Gah! Even I, a Commander, only managed\n"
	.string "to buy us time?\p"
	.string "But that’s fine.\p"
	.string "A child like you will never be able to\n"
	.string "stem the flow of time!\p"
	.string "Team Galactic will get the three\n"
	.string "legendary POKéMON of the lakes!\p"
	.string "With their power, we will create an\n"
	.string "entirely new universe!\p"
	.string "By now, Mars should have captured the\n"
	.string "POKéMON of Lake Verity...$"

LakeValor_Cavern_EventScript_SNAZELF::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZELF, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_AZELF, 50
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, LakeValor_Cavern_EventScript_SNAZELF_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, LakeValor_Cavern_EventScript_SNAZELF_Ran
	setflag FLAG_SN_DONE_AZELF
	setflag FLAG_SN_HIDE_AZELF
	goto Common_EventScript_RemoveStaticPokemon
	end

LakeValor_Cavern_EventScript_SNAZELF_Ran:
	setvar VAR_0x8004, SPECIES_AZELF
	goto Common_EventScript_LegendaryFlewAway
	end
