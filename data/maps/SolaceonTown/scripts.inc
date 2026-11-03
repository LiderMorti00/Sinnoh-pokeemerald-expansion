SolaceonTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SolaceonTown_OnTransitionSN
	.byte 0

SolaceonTown_EventScript_PtNpc1::
	msgbox SolaceonTown_Text_PtNpc1, MSGBOX_NPC
	end

SolaceonTown_Text_PtNpc1:
	.string "Howdy, traveling Trainer. Take it easy,\n"
	.string "slow, and casual.$"

SolaceonTown_EventScript_PtNpc2::
	msgbox SolaceonTown_Text_PtNpc2, MSGBOX_NPC
	end

SolaceonTown_Text_PtNpc2:
	.string "I'm too little, so I don't know how to\n"
	.string "battle very good.\p"
	.string "The nice Day-Care Lady is raising my\n"
	.string "POKéMON for me.$"

SolaceonTown_EventScript_PtNpc3::
	msgbox SolaceonTown_Text_PtNpc3, MSGBOX_NPC
	end

SolaceonTown_Text_PtNpc3:
	.string "Breathing in this refreshing air... It\n"
	.string "perks up POKéMON, don't you think?$"

SolaceonTown_EventScript_PtNpc4::
	msgbox SolaceonTown_Text_PtNpc4, MSGBOX_NPC
	end

SolaceonTown_Text_PtNpc4:
	.string "Every Sunday, I visit the Lost Tower...$"

SolaceonTown_EventScript_PtNpc5::
	msgbox SolaceonTown_Text_PtNpc5, MSGBOX_NPC
	end

SolaceonTown_Text_PtNpc5:
	.string "Your encounters with POKéMON can be\n"
	.string "considered your shared history.\p"
	.string "This here's a POKéNAV app called\n"
	.string "POKéMON History.\p"
	.string "Use it to see your history of POKéMON\n"
	.string "catches.$"

SolaceonTown_EventScript_PtNpc6::
	msgbox SolaceonTown_Text_PtNpc6, MSGBOX_NPC
	end

SolaceonTown_Text_PtNpc6:
	.string "There used to be nothing here but a\n"
	.string "road that went straight through.\p"
	.string "Over time, POKéMON and people just\n"
	.string "gathered, and the town came to be.$"

SolaceonTown_EventScript_PtSign1::
	msgbox SolaceonTown_Text_PtSign1, MSGBOX_SIGN
	end

SolaceonTown_Text_PtSign1:
	.string "SOLACEON TOWN Free of Worry!$"

SolaceonTown_EventScript_PtSign2::
	msgbox SolaceonTown_Text_PtSign2, MSGBOX_SIGN
	end

SolaceonTown_Text_PtSign2:
	.string "POKéMON Day Care Let Us Raise Your\n"
	.string "POKéMON$"

SolaceonTown_EventScript_PtSign3::
	msgbox SolaceonTown_Text_PtSign3, MSGBOX_SIGN
	end

SolaceonTown_Text_PtSign3:
	.string "POKéMON News Press Wanted: Pro\n"
	.string "POKéMON Catcher!$"

SolaceonTown_EventScript_SNSecretPower::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SolaceonTown_EventScript_SNSecretPower_Done
	msgbox SolaceonTown_EventScript_SNSecretPower_T1, MSGBOX_DEFAULT
	giveitem ITEM_TM_SECRET_POWER
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SECRET_POWER
SolaceonTown_EventScript_SNSecretPower_Done:
	msgbox SolaceonTown_EventScript_SNSecretPower_T2, MSGBOX_DEFAULT
	release
	end
SolaceonTown_EventScript_SNSecretPower_T1:
	.string "Hey there! Have you ever seen those\n"
	.string "little hollows in the cliffs along the\l"
	.string "routes?\p"
	.string "With this move, you can make a hidden\n"
	.string "room of your very own in one of them!$"

SolaceonTown_EventScript_SNSecretPower_T2:
	.string "Use SECRET POWER on a hollow in a cliff\n"
	.string "to make your own SECRET BASE!\p"
	.string "You can buy decorations for it at the\n"
	.string "VEILSTONE DEPARTMENT STORE.$"

SolaceonTown_EventScript_SNMon1Buneary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
	msgbox SolaceonTown_EventScript_SNMon1Buneary_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SolaceonTown_EventScript_SNMon1Buneary_Text:
	.string "BUNEARY: Bun! Buneary!$"

SolaceonTown_EventScript_SNMon2Buneary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
	msgbox SolaceonTown_EventScript_SNMon2Buneary_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SolaceonTown_EventScript_SNMon2Buneary_Text:
	.string "BUNEARY: Bun! Buneary!$"

SolaceonTown_EventScript_SNMonPachirisu::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
	msgbox SolaceonTown_EventScript_SNMonPachirisu_Text, MSGBOX_DEFAULT
	waitmoncry
	release
	end

SolaceonTown_EventScript_SNMonPachirisu_Text:
	.string "PACHIRISU: Pachi! Pachiri!$"

SolaceonTown_OnTransitionSN:
	call SolaceonTown_EventScript_SNVis_SOL_BARRY
	end

SolaceonTown_EventScript_SNVis_SOL_BARRY:
	setflag FLAG_SN_HIDE_SOL_BARRY
	goto_if_set FLAG_SN_SOLACEON_BARRY, SolaceonTown_EventScript_SNVis_SOL_BARRY_End
	clearflag FLAG_SN_HIDE_SOL_BARRY
SolaceonTown_EventScript_SNVis_SOL_BARRY_End:
	return

SolaceonTown_EventScript_SNSolB_T0::
	goto_if_set FLAG_SN_HIDE_SOL_BARRY, SolaceonTown_EventScript_SNSolB_T0_End
	lockall
	sn_walktoplayer LOCALID_SN_SOL_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_SOL_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SolaceonTown_EventScript_SNBarry
SolaceonTown_EventScript_SNSolB_T0_End:
	end

SolaceonTown_EventScript_SNSolB_T0_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_down
	step_end

SolaceonTown_EventScript_SNSolB_T0_P:
	face_up
	step_end

SolaceonTown_EventScript_SNSolB_T1::
	goto_if_set FLAG_SN_HIDE_SOL_BARRY, SolaceonTown_EventScript_SNSolB_T1_End
	lockall
	sn_walktoplayer LOCALID_SN_SOL_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_SOL_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SolaceonTown_EventScript_SNBarry
SolaceonTown_EventScript_SNSolB_T1_End:
	end

SolaceonTown_EventScript_SNSolB_T1_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	face_down
	step_end

SolaceonTown_EventScript_SNSolB_T1_P:
	face_up
	step_end

SolaceonTown_EventScript_SNSolB_T2::
	goto_if_set FLAG_SN_HIDE_SOL_BARRY, SolaceonTown_EventScript_SNSolB_T2_End
	lockall
	sn_walktoplayer LOCALID_SN_SOL_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_SOL_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SolaceonTown_EventScript_SNBarry
SolaceonTown_EventScript_SNSolB_T2_End:
	end

SolaceonTown_EventScript_SNSolB_T2_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_left
	face_down
	step_end

SolaceonTown_EventScript_SNSolB_T2_P:
	face_up
	step_end

SolaceonTown_EventScript_SNSolB_T3::
	goto_if_set FLAG_SN_HIDE_SOL_BARRY, SolaceonTown_EventScript_SNSolB_T3_End
	lockall
	sn_walktoplayer LOCALID_SN_SOL_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_SOL_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SolaceonTown_EventScript_SNBarry
SolaceonTown_EventScript_SNSolB_T3_End:
	end

SolaceonTown_EventScript_SNSolB_T3_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	face_down
	step_end

SolaceonTown_EventScript_SNSolB_T3_P:
	face_up
	step_end

SolaceonTown_EventScript_SNSolB_T4::
	goto_if_set FLAG_SN_HIDE_SOL_BARRY, SolaceonTown_EventScript_SNSolB_T4_End
	lockall
	sn_walktoplayer LOCALID_SN_SOL_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_SOL_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SolaceonTown_EventScript_SNBarry
SolaceonTown_EventScript_SNSolB_T4_End:
	end

SolaceonTown_EventScript_SNSolB_T4_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	face_down
	step_end

SolaceonTown_EventScript_SNSolB_T4_P:
	face_up
	step_end

SolaceonTown_EventScript_SNSolB_T5::
	goto_if_set FLAG_SN_HIDE_SOL_BARRY, SolaceonTown_EventScript_SNSolB_T5_End
	lockall
	sn_walktoplayer LOCALID_SN_SOL_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_SOL_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SolaceonTown_EventScript_SNBarry
SolaceonTown_EventScript_SNSolB_T5_End:
	end

SolaceonTown_EventScript_SNSolB_T5_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	face_down
	step_end

SolaceonTown_EventScript_SNSolB_T5_P:
	face_up
	step_end

SolaceonTown_EventScript_SNSolB_T6::
	goto_if_set FLAG_SN_HIDE_SOL_BARRY, SolaceonTown_EventScript_SNSolB_T6_End
	lockall
	sn_walktoplayer LOCALID_SN_SOL_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_SOL_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto SolaceonTown_EventScript_SNBarry
SolaceonTown_EventScript_SNSolB_T6_End:
	end

SolaceonTown_EventScript_SNSolB_T6_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

SolaceonTown_EventScript_SNSolB_T6_P:
	face_up
	step_end

SolaceonTown_EventScript_SNBarry::
	lockall
	msgbox SolaceonTown_Text_SNBarry1, MSGBOX_DEFAULT
	msgbox SolaceonTown_Text_SNBarry2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_SOLACEON_BARRY
		sn_walkto LOCALID_SN_SOL_BARRY, 18, 26, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_SOL_BARRY
	removeobject LOCALID_SN_SOL_BARRY
	setflag FLAG_SN_HIDE_SOL_BARRY
	releaseall
	end

SolaceonTown_Text_SNBarry1:
	.string "{RIVAL}: Yahoo!\p"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "I got something cool. I’ll show you as a\n"
	.string "special favor!$"

SolaceonTown_Text_SNBarry2:
	.string "{RIVAL}: Huh? What the...\p"
	.string "What’s this all about?\p"
	.string "...I got some Seals, but I forgot to put\n"
	.string "them on.\p"
	.string "Oh, right. It’s because I was at the\n"
	.string "ruins.\p"
	.string "The ruins here are cool. You have to\n"
	.string "check it out.\p"
	.string "I even found a Hidden Machine. It was\n"
	.string "Defog!\p"
	.string "Anyway, I’ll battle you another time.\n"
	.string "See ya!$"
