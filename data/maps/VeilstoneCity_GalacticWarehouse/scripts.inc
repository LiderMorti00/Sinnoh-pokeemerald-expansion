VeilstoneCity_GalacticWarehouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VeilstoneCity_GalacticWarehouse_OnTransitionSN
	.byte 0

VeilstoneCity_GalacticWarehouse_Text_PtNpc1_0:
	.string "Looker: I am concerned over what I\n"
	.string "have overheard in the Game Corner.\p"
	.string "The Team Galactic has transported\n"
	.string "something to Pastoria City.\p"
	.string "What they are up to, I do not know, but\n"
	.string "I have bad feelings about it.$"

VeilstoneCity_GalacticWarehouse_OnTransitionSN:
	call VeilstoneCity_GalacticWarehouse_EventScript_SNVis_WH_IN_LOOKER
	end

VeilstoneCity_GalacticWarehouse_EventScript_SNVis_WH_IN_LOOKER:
	setflag FLAG_SN_HIDE_WH_IN_LOOKER
	goto_if_unset FLAG_SN_VEIL_WAREHOUSE_DONE, VeilstoneCity_GalacticWarehouse_EventScript_SNVis_WH_IN_LOOKER_End
	goto_if_ge VAR_SINNOH_STORY, 32, VeilstoneCity_GalacticWarehouse_EventScript_SNVis_WH_IN_LOOKER_End
	clearflag FLAG_SN_HIDE_WH_IN_LOOKER
VeilstoneCity_GalacticWarehouse_EventScript_SNVis_WH_IN_LOOKER_End:
	return

VeilstoneCity_GalacticWarehouse_EventScript_SNLooker::
	lock
	faceplayer
	goto_if_set FLAG_SN_VEIL_STORAGE_OPEN, VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_Key
	goto_if_set FLAG_SN_RECEIVED_HM_FLY, VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_After
	msgbox VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_T1, MSGBOX_DEFAULT
	giveitem ITEM_HM02
	goto_if_eq VAR_RESULT, FALSE, VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_End
	setflag FLAG_SN_RECEIVED_HM_FLY
VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_After:
	msgbox VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_T2, MSGBOX_DEFAULT
VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_End:
	release
	end
VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_Key:
	msgbox VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_K1, MSGBOX_DEFAULT
	msgbox VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_K2, MSGBOX_DEFAULT
	msgbox VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_K3, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_GalacticWarehouse_EventScript_SNBackDoor::
	goto_if_set FLAG_SN_VEIL_STORAGE_OPEN, VeilstoneCity_GalacticWarehouse_EventScript_SNBackDoor_End
	lockall
	msgbox VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_Locked, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
VeilstoneCity_GalacticWarehouse_EventScript_SNBackDoor_End:
	end

VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_T1:
	.string "Looker: Ah, this Hidden Machine... It is\n"
	.string "of the hidden move Fly.\p"
	.string "{PLAYER}, this, you should be keeping.\p"
	.string "It will not do to leave this item here\n"
	.string "to be used by the Team Galactic.$"

VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_T2:
	.string "Looker: So, we did not learn very much\n"
	.string "from this exercise... No matter.\p"
	.string "What concerns me is what I have\n"
	.string "overheard in the Game Corner.\p"
	.string "The Team Galactic has transported\n"
	.string "something to Pastoria City.\p"
	.string "What they are up to, I do not know, but\n"
	.string "I have bad feelings about it.$"

VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_K1:
	.string "Looker: Ah, hello! I have kept you\n"
	.string "waiting.$"

VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_K2:
	.string "Looker: I will use this Storage Key I\n"
	.string "have obtained from the Team Galactic...\p"
	.string "...Ker-chunk!\p"
	.string "Yes! It is opened!$"

VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_K3:
	.string "I will go on ahead, my friend. Do not\n"
	.string "expose yourself to danger!$"

VeilstoneCity_GalacticWarehouse_EventScript_SNLooker_Locked:
	.string "Looker: Hmm... A key is necessary for us\n"
	.string "to go on.\p"
	.string "For the time being, we cannot give\n"
	.string "chase to those who run away.$"
