ValorLakefront_Restaurant_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ValorLakefront_Restaurant_OnTransitionSN
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ValorLakefront_Restaurant_OnFrameSN
	.byte 0

ValorLakefront_Restaurant_OnTransitionSN:
	goto_if_set FLAG_DAILY_SN_RESTAURANT, ValorLakefront_Restaurant_OnTransitionSN_Set
	setflag FLAG_DAILY_SN_RESTAURANT
	cleartrainerflag TRAINER_DAYTON
	cleartrainerflag TRAINER_RACHEL
	cleartrainerflag TRAINER_LEONEL
	cleartrainerflag TRAINER_CALLIE
	cleartrainerflag TRAINER_CALE
	cleartrainerflag TRAINER_MYLES
	cleartrainerflag TRAINER_PAT
	cleartrainerflag TRAINER_MAY_RUSTBORO_TREECKO
	cleartrainerflag TRAINER_MAY_RUSTBORO_TORCHIC
	cleartrainerflag TRAINER_FABIAN
	cleartrainerflag TRAINER_MAKAYLA
	cleartrainerflag TRAINER_AISHA
	cleartrainerflag TRAINER_BRANDI
	cleartrainerflag TRAINER_MELINA
	cleartrainerflag TRAINER_JOHNSON
	cleartrainerflag TRAINER_DEVAN
	cleartrainerflag TRAINER_MARLENE
	cleartrainerflag TRAINER_HELENE
ValorLakefront_Restaurant_OnTransitionSN_Set:
	special SinnohRestaurantSetup
	setvar VAR_TEMP_3, 0
	gettime
	goto_if_lt VAR_0x8000, 9, ValorLakefront_Restaurant_OnTransitionSN_Closed
	goto_if_ge VAR_0x8000, 23, ValorLakefront_Restaurant_OnTransitionSN_Closed
	end
ValorLakefront_Restaurant_OnTransitionSN_Closed:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	setflag FLAG_TEMP_4
	setflag FLAG_TEMP_5
	setflag FLAG_TEMP_6
	setflag FLAG_TEMP_7
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	setflag FLAG_TEMP_10
	setvar VAR_TEMP_3, 1
	end

ValorLakefront_Restaurant_OnFrameSN:
	map_script_2 VAR_TEMP_3, 1, ValorLakefront_Restaurant_EventScript_SNClosed
	.2byte 0

ValorLakefront_Restaurant_EventScript_SNClosed::
	lockall
	setvar VAR_TEMP_3, 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	delay 20
	msgbox ValorLakefront_Restaurant_Text_SNRClosed, MSGBOX_DEFAULT
	closemessage
	warp MAP_VALOR_LAKEFRONT, 28, 58
	waitstate
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNPtWAITER::
	msgbox ValorLakefront_Restaurant_Text_SNRWaiter, MSGBOX_NPC
	end

@ Cada mesa: VAR_0x8004 = mesa; el special pone en VAR_RESULT la pareja de hoy (0-8)
ValorLakefront_Restaurant_EventScript_SNTable::
	lockall
	special SinnohRestaurantCouple
	switch VAR_RESULT
	case 0, ValorLakefront_Restaurant_EventScript_SNC0
	case 1, ValorLakefront_Restaurant_EventScript_SNC1
	case 2, ValorLakefront_Restaurant_EventScript_SNC2
	case 3, ValorLakefront_Restaurant_EventScript_SNC3
	case 4, ValorLakefront_Restaurant_EventScript_SNC4
	case 5, ValorLakefront_Restaurant_EventScript_SNC5
	case 6, ValorLakefront_Restaurant_EventScript_SNC6
	case 7, ValorLakefront_Restaurant_EventScript_SNC7
	case 8, ValorLakefront_Restaurant_EventScript_SNC8
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC0:
	goto_if_defeated TRAINER_DAYTON, ValorLakefront_Restaurant_EventScript_SNC0_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC0_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC0_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC0_V2
	msgbox ValorLakefront_Restaurant_Text_SNRIsmaelIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRIsmaelAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC0_Ans
ValorLakefront_Restaurant_EventScript_SNC0_V1:
	msgbox ValorLakefront_Restaurant_Text_SNRIsmaelIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRIsmaelAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC0_Ans
ValorLakefront_Restaurant_EventScript_SNC0_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRHarleyIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRHarleyAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC0_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_DAYTON, ValorLakefront_Restaurant_Text_SNRIsmaelLose, TRAINER_RACHEL, ValorLakefront_Restaurant_Text_SNRHarleyLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC0_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC0_D2
ValorLakefront_Restaurant_EventScript_SNC0_Done:
	msgbox ValorLakefront_Restaurant_Text_SNRIsmaelDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC0_D1:
	msgbox ValorLakefront_Restaurant_Text_SNRIsmaelDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC0_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRHarleyDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC0_Need:
	msgbox ValorLakefront_Restaurant_Text_SNRIsmaelNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC1:
	goto_if_defeated TRAINER_LEONEL, ValorLakefront_Restaurant_EventScript_SNC1_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC1_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC1_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC1_V2
	msgbox ValorLakefront_Restaurant_Text_SNRRomanIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRRomanAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC1_Ans
ValorLakefront_Restaurant_EventScript_SNC1_V1:
	msgbox ValorLakefront_Restaurant_Text_SNRRomanIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRRomanAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC1_Ans
ValorLakefront_Restaurant_EventScript_SNC1_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRKylieIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRKylieAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC1_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_LEONEL, ValorLakefront_Restaurant_Text_SNRRomanLose, TRAINER_CALLIE, ValorLakefront_Restaurant_Text_SNRKylieLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC1_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC1_D2
ValorLakefront_Restaurant_EventScript_SNC1_Done:
	msgbox ValorLakefront_Restaurant_Text_SNRRomanDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC1_D1:
	msgbox ValorLakefront_Restaurant_Text_SNRRomanDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC1_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRKylieDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC1_Need:
	msgbox ValorLakefront_Restaurant_Text_SNRRomanNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC2:
	goto_if_defeated TRAINER_CALE, ValorLakefront_Restaurant_EventScript_SNC2_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC2_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC2_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC2_V2
	msgbox ValorLakefront_Restaurant_Text_SNRLeonardoIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRLeonardoAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC2_Ans
ValorLakefront_Restaurant_EventScript_SNC2_V1:
	msgbox ValorLakefront_Restaurant_Text_SNRLeonardoIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRLeonardoAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC2_Ans
ValorLakefront_Restaurant_EventScript_SNC2_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRRebeccaIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRRebeccaAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC2_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_CALE, ValorLakefront_Restaurant_Text_SNRLeonardoLose, TRAINER_MYLES, ValorLakefront_Restaurant_Text_SNRRebeccaLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC2_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC2_D2
ValorLakefront_Restaurant_EventScript_SNC2_Done:
	msgbox ValorLakefront_Restaurant_Text_SNRLeonardoDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC2_D1:
	msgbox ValorLakefront_Restaurant_Text_SNRLeonardoDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC2_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRRebeccaDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC2_Need:
	msgbox ValorLakefront_Restaurant_Text_SNRLeonardoNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC3:
	goto_if_defeated TRAINER_PAT, ValorLakefront_Restaurant_EventScript_SNC3_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC3_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC3_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC3_V2
	msgbox ValorLakefront_Restaurant_Text_SNREugeneIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREugeneAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC3_Ans
ValorLakefront_Restaurant_EventScript_SNC3_V1:
	msgbox ValorLakefront_Restaurant_Text_SNREugeneIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREugeneAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC3_Ans
ValorLakefront_Restaurant_EventScript_SNC3_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRAlisonIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRAlisonAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC3_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_PAT, ValorLakefront_Restaurant_Text_SNREugeneLose, TRAINER_MAY_RUSTBORO_TREECKO, ValorLakefront_Restaurant_Text_SNRAlisonLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC3_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC3_D2
ValorLakefront_Restaurant_EventScript_SNC3_Done:
	msgbox ValorLakefront_Restaurant_Text_SNREugeneDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC3_D1:
	msgbox ValorLakefront_Restaurant_Text_SNREugeneDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC3_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRAlisonDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC3_Need:
	msgbox ValorLakefront_Restaurant_Text_SNREugeneNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC4:
	goto_if_defeated TRAINER_MAY_RUSTBORO_TORCHIC, ValorLakefront_Restaurant_EventScript_SNC4_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC4_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC4_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC4_V2
	msgbox ValorLakefront_Restaurant_Text_SNREstebanIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREstebanAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC4_Ans
ValorLakefront_Restaurant_EventScript_SNC4_V1:
	msgbox ValorLakefront_Restaurant_Text_SNREstebanIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREstebanAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC4_Ans
ValorLakefront_Restaurant_EventScript_SNC4_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRMeredithIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRMeredithAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC4_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_MAY_RUSTBORO_TORCHIC, ValorLakefront_Restaurant_Text_SNREstebanLose, TRAINER_FABIAN, ValorLakefront_Restaurant_Text_SNRMeredithLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC4_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC4_D2
ValorLakefront_Restaurant_EventScript_SNC4_Done:
	msgbox ValorLakefront_Restaurant_Text_SNREstebanDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC4_D1:
	msgbox ValorLakefront_Restaurant_Text_SNREstebanDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC4_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRMeredithDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC4_Need:
	msgbox ValorLakefront_Restaurant_Text_SNREstebanNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC5:
	goto_if_defeated TRAINER_MAKAYLA, ValorLakefront_Restaurant_EventScript_SNC5_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC5_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC5_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC5_V2
	msgbox ValorLakefront_Restaurant_Text_SNREmanuelIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREmanuelAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC5_Ans
ValorLakefront_Restaurant_EventScript_SNC5_V1:
	msgbox ValorLakefront_Restaurant_Text_SNREmanuelIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREmanuelAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC5_Ans
ValorLakefront_Restaurant_EventScript_SNC5_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRBlytheIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRBlytheAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC5_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_MAKAYLA, ValorLakefront_Restaurant_Text_SNREmanuelLose, TRAINER_AISHA, ValorLakefront_Restaurant_Text_SNRBlytheLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC5_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC5_D2
ValorLakefront_Restaurant_EventScript_SNC5_Done:
	msgbox ValorLakefront_Restaurant_Text_SNREmanuelDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC5_D1:
	msgbox ValorLakefront_Restaurant_Text_SNREmanuelDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC5_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRBlytheDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC5_Need:
	msgbox ValorLakefront_Restaurant_Text_SNREmanuelNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC6:
	goto_if_defeated TRAINER_BRANDI, ValorLakefront_Restaurant_EventScript_SNC6_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC6_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC6_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC6_V2
	msgbox ValorLakefront_Restaurant_Text_SNRDarrylIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRDarrylAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC6_Ans
ValorLakefront_Restaurant_EventScript_SNC6_V1:
	msgbox ValorLakefront_Restaurant_Text_SNRDarrylIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRDarrylAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC6_Ans
ValorLakefront_Restaurant_EventScript_SNC6_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRValerieIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRValerieAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC6_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_BRANDI, ValorLakefront_Restaurant_Text_SNRDarrylLose, TRAINER_MELINA, ValorLakefront_Restaurant_Text_SNRValerieLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC6_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC6_D2
ValorLakefront_Restaurant_EventScript_SNC6_Done:
	msgbox ValorLakefront_Restaurant_Text_SNRDarrylDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC6_D1:
	msgbox ValorLakefront_Restaurant_Text_SNRDarrylDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC6_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRValerieDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC6_Need:
	msgbox ValorLakefront_Restaurant_Text_SNRDarrylNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC7:
	goto_if_defeated TRAINER_JOHNSON, ValorLakefront_Restaurant_EventScript_SNC7_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC7_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC7_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC7_V2
	msgbox ValorLakefront_Restaurant_Text_SNRKendrickIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRKendrickAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC7_Ans
ValorLakefront_Restaurant_EventScript_SNC7_V1:
	msgbox ValorLakefront_Restaurant_Text_SNRKendrickIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRKendrickAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC7_Ans
ValorLakefront_Restaurant_EventScript_SNC7_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRGabriellaIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRGabriellaAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC7_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_JOHNSON, ValorLakefront_Restaurant_Text_SNRKendrickLose, TRAINER_DEVAN, ValorLakefront_Restaurant_Text_SNRGabriellaLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC7_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC7_D2
ValorLakefront_Restaurant_EventScript_SNC7_Done:
	msgbox ValorLakefront_Restaurant_Text_SNRKendrickDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC7_D1:
	msgbox ValorLakefront_Restaurant_Text_SNRKendrickDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC7_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRGabriellaDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC7_Need:
	msgbox ValorLakefront_Restaurant_Text_SNRKendrickNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC8:
	goto_if_defeated TRAINER_MARLENE, ValorLakefront_Restaurant_EventScript_SNC8_Done
	specialvar VAR_RESULT, CountPartyAliveNonEggMons
	goto_if_lt VAR_RESULT, 2, ValorLakefront_Restaurant_EventScript_SNC8_Need
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC8_V1
	case 2, ValorLakefront_Restaurant_EventScript_SNC8_V2
	msgbox ValorLakefront_Restaurant_Text_SNREmilioIntro0, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREmilioAsk0, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC8_Ans
ValorLakefront_Restaurant_EventScript_SNC8_V1:
	msgbox ValorLakefront_Restaurant_Text_SNREmilioIntro1, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNREmilioAsk1, MSGBOX_YESNO
	goto ValorLakefront_Restaurant_EventScript_SNC8_Ans
ValorLakefront_Restaurant_EventScript_SNC8_V2:
	msgbox ValorLakefront_Restaurant_Text_SNRKayleeIntro2, MSGBOX_DEFAULT
	faceplayer
	msgbox ValorLakefront_Restaurant_Text_SNRKayleeAsk2, MSGBOX_YESNO
ValorLakefront_Restaurant_EventScript_SNC8_Ans:
	goto_if_eq VAR_RESULT, NO, ValorLakefront_Restaurant_EventScript_SNC_End
	closemessage
	trainerbattle_two_trainers TRAINER_MARLENE, ValorLakefront_Restaurant_Text_SNREmilioLose, TRAINER_HELENE, ValorLakefront_Restaurant_Text_SNRKayleeLose
	special SinnohRestaurantVariant
	switch VAR_RESULT
	case 1, ValorLakefront_Restaurant_EventScript_SNC8_D1
	case 2, ValorLakefront_Restaurant_EventScript_SNC8_D2
ValorLakefront_Restaurant_EventScript_SNC8_Done:
	msgbox ValorLakefront_Restaurant_Text_SNREmilioDef0, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC8_D1:
	msgbox ValorLakefront_Restaurant_Text_SNREmilioDef1, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC8_D2:
	msgbox ValorLakefront_Restaurant_Text_SNRKayleeDef2, MSGBOX_DEFAULT
	releaseall
	end
ValorLakefront_Restaurant_EventScript_SNC8_Need:
	msgbox ValorLakefront_Restaurant_Text_SNREmilioNeed, MSGBOX_DEFAULT
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNC_End:
	releaseall
	end

ValorLakefront_Restaurant_EventScript_SNT0::
	setvar VAR_0x8004, 0
	goto ValorLakefront_Restaurant_EventScript_SNTable

ValorLakefront_Restaurant_EventScript_SNT1::
	setvar VAR_0x8004, 1
	goto ValorLakefront_Restaurant_EventScript_SNTable

ValorLakefront_Restaurant_EventScript_SNT2::
	setvar VAR_0x8004, 2
	goto ValorLakefront_Restaurant_EventScript_SNTable

ValorLakefront_Restaurant_EventScript_SNT3::
	setvar VAR_0x8004, 3
	goto ValorLakefront_Restaurant_EventScript_SNTable

ValorLakefront_Restaurant_EventScript_SNT4::
	setvar VAR_0x8004, 4
	goto ValorLakefront_Restaurant_EventScript_SNTable

ValorLakefront_Restaurant_Text_SNRIsmaelLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRIsmaelNeed:
	.string "Before we make our toast, I’d hoped for\n"
	.string "a battle...\p"
	.string "However, you seem to be short a\n"
	.string "POKéMON for that.$"
ValorLakefront_Restaurant_Text_SNRIsmaelIntro0:
	.string "With someone as beautiful as you for\n"
	.string "my model, I am sure to paint\p"
	.string "a masterpiece!$"
ValorLakefront_Restaurant_Text_SNRIsmaelAsk0:
	.string "What is it? Do you wish for a battle?$"
ValorLakefront_Restaurant_Text_SNRIsmaelDef0:
	.string "Though we lost our battle... A toast to\n"
	.string "your beauty, that no\p"
	.string "painting could ever hope to capture!$"
ValorLakefront_Restaurant_Text_SNRIsmaelIntro1:
	.string "There is no price too high for the sake\n"
	.string "of my art...\p"
	.string "That said, my oh my, these meals look\n"
	.string "awfully pricey...$"
ValorLakefront_Restaurant_Text_SNRIsmaelAsk1:
	.string "What is it? Are you feeling hungry,\n"
	.string "too?\p"
	.string "Oh, I see, that’s not it! You wanted a\n"
	.string "battle!$"
ValorLakefront_Restaurant_Text_SNRIsmaelDef1:
	.string "My hors d’oeuvres have gone cold...$"
ValorLakefront_Restaurant_Text_SNRIsmaelIntro2:
	.string "The worth of a meal isn’t determined\n"
	.string "merely by its flavor.\p"
	.string "Presentation, that is, color and\n"
	.string "placement, is vital.\p"
	.string "In other words, a fine meal can be\n"
	.string "likened to the finest work of art...$"
ValorLakefront_Restaurant_Text_SNRIsmaelAsk2:
	.string "And in POKéMON battles, I also hope to\n"
	.string "see beauty.\p"
	.string "You do agree with me, yes?$"
ValorLakefront_Restaurant_Text_SNRIsmaelDef2:
	.string "The meals prepared here are not merely\n"
	.string "tasty, they are also healthy.\p"
	.string "Diners need not worry about ruining\n"
	.string "their figures eating here.$"
ValorLakefront_Restaurant_Text_SNRHarleyLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRHarleyNeed:
	.string "If you want to have a battle with us,\n"
	.string "you’ll need to bring more POKéMON.$"
ValorLakefront_Restaurant_Text_SNRHarleyIntro0:
	.string "He said he’d treat me to a dinner here\n"
	.string "if I agreed to model for him.\p"
	.string "So, I came along, but I haven’t made up\n"
	.string "my mind yet.$"
ValorLakefront_Restaurant_Text_SNRHarleyAsk0:
	.string "When I can’t decide, I battle to make\n"
	.string "the decision!$"
ValorLakefront_Restaurant_Text_SNRHarleyDef0:
	.string "I’ve decided to model for him. That’s\n"
	.string "given me an appetite!$"
ValorLakefront_Restaurant_Text_SNRHarleyIntro1:
	.string "I have to slow down on eating these\n"
	.string "delicious hors d’oeuvres.\p"
	.string "I don’t want to be all bloated by the\n"
	.string "time the main dish comes.$"
ValorLakefront_Restaurant_Text_SNRHarleyAsk1:
	.string "I’d like a light battle to work up my\n"
	.string "appetite.\p"
	.string "Would you care to join us?$"
ValorLakefront_Restaurant_Text_SNRHarleyDef1:
	.string "The hors d’oeuvres haven’t grown\n"
	.string "cold...\p"
	.string "These are supposed to be served\n"
	.string "chilled!$"
ValorLakefront_Restaurant_Text_SNRHarleyIntro2:
	.string "Today’s main dish is scrumptiously\n"
	.string "delicious!\p"
	.string "If I can keep eating this food, I’ll\n"
	.string "model anytime I can!$"
ValorLakefront_Restaurant_Text_SNRHarleyAsk2:
	.string "I feel guilty just eating all this\n"
	.string "delicious food like this.\p"
	.string "I’ll join in the battle, too!$"
ValorLakefront_Restaurant_Text_SNRHarleyDef2:
	.string "The models of great paintings were\n"
	.string "often rather plump.\p"
	.string "That means I can keep eating without\n"
	.string "obsessing over my figure!$"
ValorLakefront_Restaurant_Text_SNRRomanLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRRomanNeed:
	.string "If you want to challenge us, bring some\n"
	.string "more POKéMON.$"
ValorLakefront_Restaurant_Text_SNRRomanIntro0:
	.string "Actually, my father happens to be the\n"
	.string "chef here.$"
ValorLakefront_Restaurant_Text_SNRRomanAsk0:
	.string "What is it? A battle? Bahaha... You\n"
	.string "think you can beat me?$"
ValorLakefront_Restaurant_Text_SNRRomanDef0:
	.string "We’ve lost, but let’s make a toast to\n"
	.string "our future together anyway!$"
ValorLakefront_Restaurant_Text_SNRRomanIntro1:
	.string "I have to hand it to my father-- these\n"
	.string "hors d’oeuvres are delicious!$"
ValorLakefront_Restaurant_Text_SNRRomanAsk1:
	.string "...Are you maybe asking me for a battle?\p"
	.string "Well, certainly! I never back down from\n"
	.string "a challenge!$"
ValorLakefront_Restaurant_Text_SNRRomanDef1:
	.string "Finally. Now we can go about enjoying\n"
	.string "our meal without disruption.$"
ValorLakefront_Restaurant_Text_SNRRomanIntro2:
	.string "Fufufu, my date’s really enjoying my\n"
	.string "dad’s cooking.\p"
	.string "She has a dreamy expression after\n"
	.string "every bite!$"
ValorLakefront_Restaurant_Text_SNRRomanAsk2:
	.string "I’m feeling great! Sure, I’ll have a\n"
	.string "battle with you.\p"
	.string "That’s why you approached us, right?$"
ValorLakefront_Restaurant_Text_SNRRomanDef2:
	.string "My prowess as a Trainer isn’t up to\n"
	.string "snuff...\p"
	.string "It’s not like my father’s scrumptious\n"
	.string "cooking...$"
ValorLakefront_Restaurant_Text_SNRKylieLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRKylieNeed:
	.string "If you want to battle us, you have to\n"
	.string "have at least two POKéMON!$"
ValorLakefront_Restaurant_Text_SNRKylieIntro0:
	.string "Oh, my! Your father is the chef here?\p"
	.string "How wonderful!$"
ValorLakefront_Restaurant_Text_SNRKylieAsk0:
	.string "I haven’t told him, but my father owns\n"
	.string "the hotel and restaurant...\p"
	.string "Oh, but that’s beside the point. Would\n"
	.string "you care for a battle?$"
ValorLakefront_Restaurant_Text_SNRKylieDef0:
	.string "Let’s make a toast to the prosperity\n"
	.string "of the restaurant!$"
ValorLakefront_Restaurant_Text_SNRKylieIntro1:
	.string "Yes! This meal is good enough to serve\n"
	.string "at the hotel.$"
ValorLakefront_Restaurant_Text_SNRKylieAsk1:
	.string "Please don’t tell my date that my\n"
	.string "father owns the restaurant.\p"
	.string "I’ll have a battle with you if you keep\n"
	.string "your mouth shut.$"
ValorLakefront_Restaurant_Text_SNRKylieDef1:
	.string "My date did his best, but you were\n"
	.string "better than the both of us.$"
ValorLakefront_Restaurant_Text_SNRKylieIntro2:
	.string "This succulent flavor! It reminds me of\n"
	.string "a world trip I took.\p"
	.string "My father and I traveled everywhere\n"
	.string "dining at only the best restaurants.$"
ValorLakefront_Restaurant_Text_SNRKylieAsk2:
	.string "Eating this fabulous meal has really\n"
	.string "lifted my spirits.\p"
	.string "Join us for a battle?$"
ValorLakefront_Restaurant_Text_SNRKylieDef2:
	.string "Your father’s cooking has a very\n"
	.string "magical quality to it.\p"
	.string "It seems to perk people up with energy.$"
ValorLakefront_Restaurant_Text_SNRLeonardoLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRLeonardoNeed:
	.string "If your intention is to test your skill\n"
	.string "on us, I daresay you ought to\p"
	.string "bring at least another POKéMON.$"
ValorLakefront_Restaurant_Text_SNRLeonardoIntro0:
	.string "Let me propose a toast to many more\n"
	.string "happy years together.$"
ValorLakefront_Restaurant_Text_SNRLeonardoAsk0:
	.string "Since I took my retirement, I’ve been\n"
	.string "traveling with my wife.\p"
	.string "We both enjoy searching for delicious\n"
	.string "dining experiences.\p"
	.string "You seem to enjoy battling with\n"
	.string "POKéMON. Am I right?$"
ValorLakefront_Restaurant_Text_SNRLeonardoDef0:
	.string "Well, so much for that. Let’s try to\n"
	.string "enjoy the rest of our meal.$"
ValorLakefront_Restaurant_Text_SNRLeonardoIntro1:
	.string "Hmm! Now, this is special!\p"
	.string "It appears as if it were only grazed\n"
	.string "with fire, but in reality, much\p"
	.string "care has gone into its preparation!$"
ValorLakefront_Restaurant_Text_SNRLeonardoAsk1:
	.string "When you get to be an accomplished\n"
	.string "gourmet like myself, one can tell at\p"
	.string "a glance if a dish is delicious or not.\p"
	.string "You would battle against such a\n"
	.string "discerning gourmet?$"
ValorLakefront_Restaurant_Text_SNRLeonardoDef1:
	.string "Well, so much for that.\p"
	.string "We’ll keep a stiff upper lip and look\n"
	.string "forward to enjoying the main course.$"
ValorLakefront_Restaurant_Text_SNRLeonardoIntro2:
	.string "Hmm! The chef flambeed this to\n"
	.string "perfection!\p"
	.string "The rich aromas and flavors fill my\n"
	.string "mouth with joy!$"
ValorLakefront_Restaurant_Text_SNRLeonardoAsk2:
	.string "You’re throwing down a challenge in the\n"
	.string "middle of our meal?\p"
	.string "I would say you’re a very dedicated\n"
	.string "Trainer, especially for one so young!$"
ValorLakefront_Restaurant_Text_SNRLeonardoDef2:
	.string "Ah... I’m very satisfied with our meal\n"
	.string "and our battle.$"
ValorLakefront_Restaurant_Text_SNRRebeccaLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRRebeccaNeed:
	.string "Oh, you’re offering to do battle with\n"
	.string "us? How nice of you.\p"
	.string "Unfortunately, you simply cannot\n"
	.string "battle us both with just one POKéMON.$"
ValorLakefront_Restaurant_Text_SNRRebeccaIntro0:
	.string "To our health, welfare, and to fine\n"
	.string "dining! Cheers!$"
ValorLakefront_Restaurant_Text_SNRRebeccaAsk0:
	.string "A toast before a meal helps stimulate\n"
	.string "the appetite, I find.\p"
	.string "But that’s neither here nor there. You\n"
	.string "wanted a battle, surely?$"
ValorLakefront_Restaurant_Text_SNRRebeccaDef0:
	.string "Gourmet dining in restaurants and\n"
	.string "exhilarating POKéMON battles...\p"
	.string "There is so much contentment in my\n"
	.string "life!$"
ValorLakefront_Restaurant_Text_SNRRebeccaIntro1:
	.string "These hors d’oeuvres are simply divine!\p"
	.string "They tell me that I can expect the main\n"
	.string "course to be fantastic!$"
ValorLakefront_Restaurant_Text_SNRRebeccaAsk1:
	.string "I thought the main course arrived\n"
	.string "already...\p"
	.string "You’re a Trainer seeking battle?$"
ValorLakefront_Restaurant_Text_SNRRebeccaDef1:
	.string "The hors d’oeuvres were most\n"
	.string "excellent!$"
ValorLakefront_Restaurant_Text_SNRRebeccaIntro2:
	.string "...! This sauce!\p"
	.string "It’s a spicy sauce in Hoenn style made\n"
	.string "from grated Cheri Berries!$"
ValorLakefront_Restaurant_Text_SNRRebeccaAsk2:
	.string "Would you like to sample a bite?\p"
	.string "... Oh, right. POKéMON?$"
ValorLakefront_Restaurant_Text_SNRRebeccaDef2:
	.string "Battling is fine, of course.\p"
	.string "But for me, I would rather be out\n"
	.string "enjoying good meals.$"
ValorLakefront_Restaurant_Text_SNREugeneLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNREugeneNeed:
	.string "If you want to battle us, you have to\n"
	.string "have two POKéMON.$"
ValorLakefront_Restaurant_Text_SNREugeneIntro0:
	.string "Alison, um, I, er... Thank you for coming\n"
	.string "today...\p"
	.string "Should we make a toast?$"
ValorLakefront_Restaurant_Text_SNREugeneAsk0:
	.string "She’s the girl from the POKéMON-goods\n"
	.string "shop I go to all the time.\p"
	.string "We’re incredibly happy together. Would\n"
	.string "you like to battle us?$"
ValorLakefront_Restaurant_Text_SNREugeneDef0:
	.string "Oh, no, I’m sorry we lost. Alison, you’re\n"
	.string "not upset?$"
ValorLakefront_Restaurant_Text_SNREugeneIntro1:
	.string "If my POKéMON buddies hear I went on a\n"
	.string "date with you, Alison...\p"
	.string "They’re probably going to hate me for\n"
	.string "it...$"
ValorLakefront_Restaurant_Text_SNREugeneAsk1:
	.string "Are you Alison’s fan, too?$"
ValorLakefront_Restaurant_Text_SNREugeneDef1:
	.string "Alison, seeing your smiling face...\p"
	.string "I can’t tell if these appetizers are\n"
	.string "delicious or not!$"
ValorLakefront_Restaurant_Text_SNREugeneIntro2:
	.string "Looks like our main course is here.\n"
	.string "Please, enjoy yourself.\p"
	.string "I’ve got the bill covered today!$"
ValorLakefront_Restaurant_Text_SNREugeneAsk2:
	.string "I’ll defeat you and collect the prize\n"
	.string "money!$"
ValorLakefront_Restaurant_Text_SNREugeneDef2:
	.string "My wallet’s empty after paying the\n"
	.string "prize money...\p"
	.string "Oh, no, it’s OK! No need to worry! I still\n"
	.string "have my secret stash of cash!$"
ValorLakefront_Restaurant_Text_SNRAlisonLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRAlisonNeed:
	.string "Don’t you have two POKéMON? We’ll have\n"
	.string "to battle another time!$"
ValorLakefront_Restaurant_Text_SNRAlisonIntro0:
	.string "Fufu... Eugene, you act so different\n"
	.string "from the way you do at the shop.\p"
	.string "You’re surprisingly shy.$"
ValorLakefront_Restaurant_Text_SNRAlisonAsk0:
	.string "I work at a POKéMON-goods shop\n"
	.string "because I love POKéMON.\p"
	.string "The job lets me be with POKéMON all day\n"
	.string "long.\p"
	.string "It naturally made me pretty decent at\n"
	.string "battling. Want to try me?$"
ValorLakefront_Restaurant_Text_SNRAlisonDef0:
	.string "I don’t worry much about winning or\n"
	.string "losing.\p"
	.string "I keep my POKéMON with me because I\n"
	.string "love them!$"
ValorLakefront_Restaurant_Text_SNRAlisonIntro1:
	.string "Sorry? What? Date?\p"
	.string "Um... Eugene... You are a valued\n"
	.string "customer and all...$"
ValorLakefront_Restaurant_Text_SNRAlisonAsk1:
	.string "...Even though I said that, I admit the\n"
	.string "invitation was flattering.\p"
	.string "So I accepted his invitation.\p"
	.string "I’ll let my POKéMON decide for my fickle\n"
	.string "heart. Let’s battle?$"
ValorLakefront_Restaurant_Text_SNRAlisonDef1:
	.string "You know, it is true what they say.\n"
	.string "There is no evil among POKéMON fans!\p"
	.string "That goes for you and Eugene!$"
ValorLakefront_Restaurant_Text_SNRAlisonIntro2:
	.string "Eugene, I think you’re a little awkward,\n"
	.string "but you’re very earnest.$"
ValorLakefront_Restaurant_Text_SNRAlisonAsk2:
	.string "If I team up with my date, it could be\n"
	.string "an interesting combination.\p"
	.string "I think we could battle in an intriguing\n"
	.string "manner. Do you?$"
ValorLakefront_Restaurant_Text_SNRAlisonDef2:
	.string "The meal was delicious, and our battle\n"
	.string "was so much fun.\p"
	.string "I really insist that we split the bill.$"
ValorLakefront_Restaurant_Text_SNREstebanLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNREstebanNeed:
	.string "If you have two POKéMON, I’ll take you\n"
	.string "on with my mom.$"
ValorLakefront_Restaurant_Text_SNREstebanIntro0:
	.string "What should I have today? Juice, ice\n"
	.string "cream, cake, and, and...$"
ValorLakefront_Restaurant_Text_SNREstebanAsk0:
	.string "Oh, hi, Trainer!\p"
	.string "Want to battle POKéMON with us before\n"
	.string "we have a yummy meal?$"
ValorLakefront_Restaurant_Text_SNREstebanDef0:
	.string "I don’t get it. Grown-ups always have a\n"
	.string "toast before eating.\p"
	.string "What’s that for? And I don’t see any\n"
	.string "bread?$"
ValorLakefront_Restaurant_Text_SNREstebanIntro1:
	.string "Wow, they bring out things one dish at\n"
	.string "a time!\p"
	.string "It’s not like how it is at home!$"
ValorLakefront_Restaurant_Text_SNREstebanAsk1:
	.string "I do my homework while eating. I can\n"
	.string "battle anytime!$"
ValorLakefront_Restaurant_Text_SNREstebanDef1:
	.string "We’re going to eat this delicious stuff\n"
	.string "now. Bye-bye!$"
ValorLakefront_Restaurant_Text_SNREstebanIntro2:
	.string "Do mothers and fathers go off to eat\n"
	.string "like this?\p"
	.string "I mean without taking their kids along.$"
ValorLakefront_Restaurant_Text_SNREstebanAsk2:
	.string "But that’s OK.\p"
	.string "It’s way more fun for me to battle than\n"
	.string "go eat fancy dinners!$"
ValorLakefront_Restaurant_Text_SNREstebanDef2:
	.string "Mom, you gotta make me this at home!$"
ValorLakefront_Restaurant_Text_SNRMeredithLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRMeredithNeed:
	.string "I’m willing to have a battle with my son,\n"
	.string "my pride and joy.\p"
	.string "But you must bring more POKéMON than\n"
	.string "that.$"
ValorLakefront_Restaurant_Text_SNRMeredithIntro0:
	.string "My dear, Mommy is so proud of you for\n"
	.string "doing so well on your test.\p"
	.string "You may order anything you like. It’s\n"
	.string "your reward, dearest!$"
ValorLakefront_Restaurant_Text_SNRMeredithAsk0:
	.string "Did you know? My boy is not only a\n"
	.string "genius at school, but he’s also\p"
	.string "a POKéMON prodigy!\p"
	.string "Would you like to challenge us and see?$"
ValorLakefront_Restaurant_Text_SNRMeredithDef0:
	.string "I wish to propose a toast.\p"
	.string "May my darling Esteban get another\n"
	.string "100% on a test!$"
ValorLakefront_Restaurant_Text_SNRMeredithIntro1:
	.string "This restaurant is the talk of the\n"
	.string "town for the delicious food.$"
ValorLakefront_Restaurant_Text_SNRMeredithAsk1:
	.string "I beg your pardon? You want a battle\n"
	.string "now?\p"
	.string "Well, that’s all right. It’s not as if I\n"
	.string "dislike it.$"
ValorLakefront_Restaurant_Text_SNRMeredithDef1:
	.string "Thank you for letting my dear son\n"
	.string "experience an invaluable lesson.$"
ValorLakefront_Restaurant_Text_SNRMeredithIntro2:
	.string "This is a special occasion, Esteban.\p"
	.string "This is to celebrate your great grades!$"
ValorLakefront_Restaurant_Text_SNRMeredithAsk2:
	.string "Oh? A battle, you say? Well, certainly.\n"
	.string "Why not?$"
ValorLakefront_Restaurant_Text_SNRMeredithDef2:
	.string "Is the dessert coming soon?$"
ValorLakefront_Restaurant_Text_SNREmanuelLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNREmanuelNeed:
	.string "My daughter and I always battle\n"
	.string "together, none of that one-on-one.$"
ValorLakefront_Restaurant_Text_SNREmanuelIntro0:
	.string "Here’s a toast for Mom. May she always\n"
	.string "be healthy!$"
ValorLakefront_Restaurant_Text_SNREmanuelAsk0:
	.string "My wife’s in the hospital waiting for\n"
	.string "the baby to arrive.\p"
	.string "Since I can’t cook, I came here with my\n"
	.string "daughter.\p"
	.string "How would you like a battle with us\n"
	.string "before we eat?$"
ValorLakefront_Restaurant_Text_SNREmanuelDef0:
	.string "The house will be a lot noisier when the\n"
	.string "baby comes home with Mommy.$"
ValorLakefront_Restaurant_Text_SNREmanuelIntro1:
	.string "Wow... Look at these appetizers. This is\n"
	.string "just so extravagant.$"
ValorLakefront_Restaurant_Text_SNREmanuelAsk1:
	.string "I’m no cook, I’ll admit that freely.\p"
	.string "But battling POKéMON... There’s\n"
	.string "something I’m comfortable with.$"
ValorLakefront_Restaurant_Text_SNREmanuelDef1:
	.string "Let’s get over the sting of this loss\n"
	.string "by enjoying this delicious meal!$"
ValorLakefront_Restaurant_Text_SNREmanuelIntro2:
	.string "Here’s the main dish!$"
ValorLakefront_Restaurant_Text_SNREmanuelAsk2:
	.string "What is it? Did you want to battle with\n"
	.string "us?$"
ValorLakefront_Restaurant_Text_SNREmanuelDef2:
	.string "Jocelyn, I hope the new baby will be as\n"
	.string "kindhearted as you.$"
ValorLakefront_Restaurant_Text_SNRBlytheLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRBlytheNeed:
	.string "I can go against you with Papa. Please\n"
	.string "bring more POKéMON.$"
ValorLakefront_Restaurant_Text_SNRBlytheIntro0:
	.string "I wonder what Mommy will bring home? A\n"
	.string "baby boy? A baby girl?$"
ValorLakefront_Restaurant_Text_SNRBlytheAsk0:
	.string "A boy will be a brother, and a girl will\n"
	.string "be a sister.\p"
	.string "I’m going to be the older sister, so I\n"
	.string "should get better at POKéMON!$"
ValorLakefront_Restaurant_Text_SNRBlytheDef0:
	.string "Little babies cry like POKéMON!\n"
	.string "Piyaaaah!$"
ValorLakefront_Restaurant_Text_SNRBlytheIntro1:
	.string "Wow! This food looks really fancy!$"
ValorLakefront_Restaurant_Text_SNRBlytheAsk1:
	.string "Papa is a rotten cook, so we can go out\n"
	.string "and eat good food like this!\p"
	.string "Did you come to this restaurant to\n"
	.string "battle POKéMON?$"
ValorLakefront_Restaurant_Text_SNRBlytheDef1:
	.string "I’ve never eaten anything like this\n"
	.string "before.$"
ValorLakefront_Restaurant_Text_SNRBlytheIntro2:
	.string "I wish Mommy were here to eat with us...$"
ValorLakefront_Restaurant_Text_SNRBlytheAsk2:
	.string "Mommy gave me my POKéMON. Want to see\n"
	.string "how tough they are?$"
ValorLakefront_Restaurant_Text_SNRBlytheDef2:
	.string "Next time, let’s come with everyone.\n"
	.string "The baby, too!$"
ValorLakefront_Restaurant_Text_SNRDarrylLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRDarrylNeed:
	.string "Yeah? What’s up? Did you want to be on\n"
	.string "TV, too?\p"
	.string "Oh, right, sorry! You wanted to battle!\p"
	.string "You’ll be battling the two of us. You\n"
	.string "need at least two POKéMON.$"
ValorLakefront_Restaurant_Text_SNRDarrylIntro0:
	.string "Let’s start with a shot of the drinks\n"
	.string "as a camera test.$"
ValorLakefront_Restaurant_Text_SNRDarrylAsk0:
	.string "Hunh? You’re inviting us to battle at a\n"
	.string "time like this?$"
ValorLakefront_Restaurant_Text_SNRDarrylDef0:
	.string "Oh, man... Our drinks are lukewarm now.$"
ValorLakefront_Restaurant_Text_SNRDarrylIntro1:
	.string "Hey, these appetizers sure do look\n"
	.string "delicious.\p"
	.string "Will someone bring me a mist spray so\n"
	.string "they look even fresher?$"
ValorLakefront_Restaurant_Text_SNRDarrylAsk1:
	.string "Thanks, that was quick!\p"
	.string "...Wait, where’s the mist spray? Oh, you\n"
	.string "want a battle?\p"
	.string "Whatever, then. I’m up for your\n"
	.string "challenge!$"
ValorLakefront_Restaurant_Text_SNRDarrylDef1:
	.string "Photographing food isn’t easy. It’s\n"
	.string "actually very technical.$"
ValorLakefront_Restaurant_Text_SNRDarrylIntro2:
	.string "Whoa... So this is the main dish? Yowza!\p"
	.string "Let’s get this filming done quick so I\n"
	.string "can chow down, too!$"
ValorLakefront_Restaurant_Text_SNRDarrylAsk2:
	.string "You’ve been sniffing around a lot... Are\n"
	.string "you messing with our filming?$"
ValorLakefront_Restaurant_Text_SNRDarrylDef2:
	.string "Oh, no... Everything’s gone cold while we\n"
	.string "were battling...$"
ValorLakefront_Restaurant_Text_SNRValerieLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRValerieNeed:
	.string "If you want an autograph, you’ll have\n"
	.string "to wait till we finish filming.\p"
	.string "Oh, and if you want to battle, bring two\n"
	.string "POKéMON, OK?$"
ValorLakefront_Restaurant_Text_SNRValerieIntro0:
	.string "Today’s featured drink is freshly\n"
	.string "squeezed juice made from ripened\p"
	.string "Pecha Berries picked this morning!$"
ValorLakefront_Restaurant_Text_SNRValerieAsk0:
	.string "Pardon? POKéMON?\p"
	.string "OK, a quick one before we do any filming\n"
	.string "for the show.$"
ValorLakefront_Restaurant_Text_SNRValerieDef0:
	.string "Do you think we should rehearse this\n"
	.string "one more time?\p"
	.string "Today’s featured drink is freshly\n"
	.string "squeezed...$"
ValorLakefront_Restaurant_Text_SNRValerieIntro1:
	.string "These look fabulous, too. We need the\n"
	.string "camera to zoom in more!$"
ValorLakefront_Restaurant_Text_SNRValerieAsk1:
	.string "Please don’t talk to me while we’re\n"
	.string "filming!\p"
	.string "Oh, actually, hold on.\p"
	.string "A Trainer barges in on our fine-dining\n"
	.string "experience...\p"
	.string "I like that! It adds drama to our\n"
	.string "story!$"
ValorLakefront_Restaurant_Text_SNRValerieDef1:
	.string "Darling Darryl, are you ready?\p"
	.string "When I take a bite, I want a close-up\n"
	.string "of my lips, all right?$"
ValorLakefront_Restaurant_Text_SNRValerieIntro2:
	.string "Chomp!\p"
	.string "Mmm... This is... Light, and yet rich\n"
	.string "flavored...\p"
	.string "It delectably melts away...\p"
	.string "A hint of an aftertaste, yet crisp...\p"
	.string "Neither too sweet nor too bitter...\p"
	.string "My words can’t do this justice!$"
ValorLakefront_Restaurant_Text_SNRValerieAsk2:
	.string "It’s not easy trying to describe food\n"
	.string "while you’re eating.\p"
	.string "But I can battle anytime during\n"
	.string "filming!$"
ValorLakefront_Restaurant_Text_SNRValerieDef2:
	.string "Do you know what the most important\n"
	.string "thing is for gourmet reporting?\p"
	.string "It’s a...thesaurus-like vocabulary!$"
ValorLakefront_Restaurant_Text_SNRKendrickLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRKendrickNeed:
	.string "I’ll only say this once, so listen\n"
	.string "closely. I’ll even say it slowly.\p"
	.string "To battle against two Trainers, you\n"
	.string "need two or more POKéMON.\p"
	.string "Now if you were to bring more POKéMON,\n"
	.string "I could consider a battle...$"
ValorLakefront_Restaurant_Text_SNRKendrickIntro0:
	.string "And another brilliant day on the\n"
	.string "markets! A toast to my Lady Luck!$"
ValorLakefront_Restaurant_Text_SNRKendrickAsk0:
	.string "Since I’ve been with her, I’ve been\n"
	.string "riding a hot streak on the markets.\p"
	.string "I’m surfing on a wave of good luck!\n"
	.string "You’re sure you want to battle us?$"
ValorLakefront_Restaurant_Text_SNRKendrickDef0:
	.string "This is just a minor setback. I can\n"
	.string "easily make up for this!$"
ValorLakefront_Restaurant_Text_SNRKendrickIntro1:
	.string "There’s no need for technique.\p"
	.string "You just have to read what’s in your\n"
	.string "opponent’s heart.$"
ValorLakefront_Restaurant_Text_SNRKendrickAsk1:
	.string "When I say “heart,” I don’t mean what\n"
	.string "that person’s thinking.\p"
	.string "It’s about how they want to be\n"
	.string "perceived.\p"
	.string "Do you... Would you like me to think of\n"
	.string "you as a tough Trainer?$"
ValorLakefront_Restaurant_Text_SNRKendrickDef1:
	.string "I had a bad feeling about this\n"
	.string "Trainer...$"
ValorLakefront_Restaurant_Text_SNRKendrickIntro2:
	.string "Let’s savor this extravagant meal and\n"
	.string "think of what it represents.\p"
	.string "We can use that as motivation to keep\n"
	.string "winning at life!$"
ValorLakefront_Restaurant_Text_SNRKendrickAsk2:
	.string "Personally, I think there are two kinds\n"
	.string "of people.\p"
	.string "Those who face up to challenges and\n"
	.string "those who duck and cover.\p"
	.string "You’re the type who accepts\n"
	.string "challenges, am I right?$"
ValorLakefront_Restaurant_Text_SNRKendrickDef2:
	.string "If I had the power of premonition, I’d\n"
	.string "be a terror on the markets.\p"
	.string "But you know that’s not really\n"
	.string "possible.$"
ValorLakefront_Restaurant_Text_SNRGabriellaLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRGabriellaNeed:
	.string "Oh, you’ll have to bring more POKéMON\n"
	.string "than that to battle us!$"
ValorLakefront_Restaurant_Text_SNRGabriellaIntro0:
	.string "Ooh! All your stocks went up again? You\n"
	.string "haven’t guessed wrong yet!$"
ValorLakefront_Restaurant_Text_SNRGabriellaAsk0:
	.string "My boyfriend’s a stock-market wizard!\p"
	.string "Did you know? Someone that lucky also\n"
	.string "happens to make a tough Trainer.\p"
	.string "Are you willing to try your luck against\n"
	.string "that?$"
ValorLakefront_Restaurant_Text_SNRGabriellaDef0:
	.string "It’s just one loss. We can make that\n"
	.string "back with a big win next time!$"
ValorLakefront_Restaurant_Text_SNRGabriellaIntro1:
	.string "No, really? Ooeeeh! That is so neat!\n"
	.string "How can you tell these things?$"
ValorLakefront_Restaurant_Text_SNRGabriellaAsk1:
	.string "My boyfriend could tell that deep down,\n"
	.string "I’m actually a frightened and\p"
	.string "lonely child!\p"
	.string "I don’t think I could ever lose with\n"
	.string "him. Want to try?$"
ValorLakefront_Restaurant_Text_SNRGabriellaDef1:
	.string "It’s amazing that you predicted you\n"
	.string "would lose!$"
ValorLakefront_Restaurant_Text_SNRGabriellaIntro2:
	.string "How can you guess right about\n"
	.string "everything all the time?\p"
	.string "Do you really have the power of\n"
	.string "premonition?$"
ValorLakefront_Restaurant_Text_SNRGabriellaAsk2:
	.string "I’m convinced that he has some\n"
	.string "extrasensory power or something.\p"
	.string "I’m teaming up with a guy like that. Are\n"
	.string "you sure you want to do this?$"
ValorLakefront_Restaurant_Text_SNRGabriellaDef2:
	.string "If it’s not premonition, did you... Maybe\n"
	.string "come from the future?$"
ValorLakefront_Restaurant_Text_SNREmilioLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNREmilioNeed:
	.string "One POKéMON is insufficient if you\n"
	.string "want to battle against us.$"
ValorLakefront_Restaurant_Text_SNREmilioIntro0:
	.string "Hmm... This beverage’s coloration\n"
	.string "borders on the positively toxic...\p"
	.string "However, my analysis indicates that it\n"
	.string "is composed of natural ingredients.$"
ValorLakefront_Restaurant_Text_SNREmilioAsk0:
	.string "What is it? You are?\p"
	.string "... ...Oh, yes, a Trainer.$"
ValorLakefront_Restaurant_Text_SNREmilioDef0:
	.string "The results of that battle are\n"
	.string "insignificant. Let’s drink up.$"
ValorLakefront_Restaurant_Text_SNREmilioIntro1:
	.string "Interesting... These hors d’oeuvres are\n"
	.string "fascinating.\p"
	.string "Plant fiber 20%, iron 5%, protein 35%.\n"
	.string "Curious and curiouser...$"
ValorLakefront_Restaurant_Text_SNREmilioAsk1:
	.string "What is it now? Do you want me to\n"
	.string "analyze your skill level?$"
ValorLakefront_Restaurant_Text_SNREmilioDef1:
	.string "I feel compelled to analyze that which\n"
	.string "is unknown to me.\p"
	.string "By defining its composition, I feel\n"
	.string "reassured in my knowledge.$"
ValorLakefront_Restaurant_Text_SNREmilioIntro2:
	.string "By my calculations, the main dish\n"
	.string "should have arrived by now.\p"
	.string "Perhaps the thermal setting is too low\n"
	.string "to prepare the food efficiently?$"
ValorLakefront_Restaurant_Text_SNREmilioAsk2:
	.string "You there! Let’s battle to consume\n"
	.string "time!$"
ValorLakefront_Restaurant_Text_SNREmilioDef2:
	.string "They brought the main course while we\n"
	.string "were battling...\p"
	.string "The calorie content appears to be\n"
	.string "alarmingly high.$"
ValorLakefront_Restaurant_Text_SNRKayleeLose:
	.string "Oh!$"
ValorLakefront_Restaurant_Text_SNRKayleeNeed:
	.string "If you’d bring two or more POKéMON, we\n"
	.string "could have a battle with you.$"
ValorLakefront_Restaurant_Text_SNRKayleeIntro0:
	.string "Oh, dear! I wish you wouldn’t!\p"
	.string "We’re at a fancy restaurant, and you\n"
	.string "want to analyze what’s served?$"
ValorLakefront_Restaurant_Text_SNRKayleeAsk0:
	.string "Oh, you’re a Trainer?$"
ValorLakefront_Restaurant_Text_SNRKayleeDef0:
	.string "Cheers, dear!\p"
	.string "Please don’t start analyzing what we\n"
	.string "just drank!$"
ValorLakefront_Restaurant_Text_SNRKayleeIntro1:
	.string "Oh, dear, must you go on that way? It\n"
	.string "takes the magic out of a meal.\p"
	.string "I wish you wouldn’t think about your\n"
	.string "research while we’re out eating!$"
ValorLakefront_Restaurant_Text_SNRKayleeAsk1:
	.string "My husband never ceases to amaze me\n"
	.string "with his dedication to research.\p"
	.string "Would you care to have a battle with\n"
	.string "us?$"
ValorLakefront_Restaurant_Text_SNRKayleeDef1:
	.string "If you were to ask me, I would rather\n"
	.string "not know about what I don’t\p"
	.string "understand. It’s simpler that way.$"
ValorLakefront_Restaurant_Text_SNRKayleeIntro2:
	.string "There isn’t any point getting\n"
	.string "impatient over the food, dear.\p"
	.string "Isn’t this the sort of situation that\n"
	.string "you brought your POKéMON for?$"
ValorLakefront_Restaurant_Text_SNRKayleeAsk2:
	.string "Oh, what good timing!\p"
	.string "Would you join us for a quick battle?$"
ValorLakefront_Restaurant_Text_SNRKayleeDef2:
	.string "Oh, dear, if we take in too many\n"
	.string "calories, we can always work them off\p"
	.string "by battling!$"
ValorLakefront_Restaurant_Text_SNRWaiter:
	.string "At our restaurant, you can enjoy more\n"
	.string "than just exquisite dining.\p"
	.string "You may also partake in battles. Bon\n"
	.string "appetit!$"
ValorLakefront_Restaurant_Text_SNRClosed:
	.string "I am so sorry. We are now closed.\p"
	.string "Please do visit while we are open.$"
