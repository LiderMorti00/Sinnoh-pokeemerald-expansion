MtCoronet_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtCoronet_2F_OnTransitionSN
	.byte 0

MtCoronet_2F_Text_PtNpc1_0:
	.string "Looker: Please! You must stop Team\n"
	.string "Galactic!$"

MtCoronet_2F_Text_PtNpc1_1:
	.string "Looker: Please, stop Team Galactic! For\n"
	.string "only you are able!\p"
	.string "All I can do now is give you this.\p"
	.string "It is a little something I obtained in\n"
	.string "an investigation long ago.$"

MtCoronet_2F_Text_PtNpc1_2:
	.string "Looker: Please! You must stop Team\n"
	.string "Galactic!$"

MtCoronet_2F_Text_PtNpc1_3:
	.string "Your Bag, it is full? Are you prepared\n"
	.string "for every occasion?$"

MtCoronet_2F_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_SN_MT_CORONET_2F_BLACK_FLUTE, MtCoronet_2F_EventScript_PtNpc1_TryAgainGiveBlackFlute
	msgbox MtCoronet_2F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

MtCoronet_2F_EventScript_PtNpc1_TryAgainGiveBlackFlute:
	msgbox MtCoronet_2F_Text_PtNpc1_1, MSGBOX_DEFAULT
	giveitem ITEM_BLACK_FLUTE, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	call MtCoronet_2F_EventScript_PtNpc1_YouMustStopTeamGalactic
	release
	end

MtCoronet_2F_EventScript_PtNpc1_BagIsFullAgain:
	call MtCoronet_2F_EventScript_PtNpc1_YourBagItIsFull
	release
	end

MtCoronet_2F_EventScript_PtNpc1_YouMustStopTeamGalactic:
	setflag FLAG_RECEIVED_SN_MT_CORONET_2F_BLACK_FLUTE
	msgbox MtCoronet_2F_Text_PtNpc1_2, MSGBOX_DEFAULT
	return

MtCoronet_2F_EventScript_PtNpc1_YourBagItIsFull:
	msgbox MtCoronet_2F_Text_PtNpc1_3, MSGBOX_DEFAULT
	return

MtCoronet_2F_OnTransitionSN:
	call MtCoronet_2F_EventScript_SNVis_CORONET_LOOKER
	end

MtCoronet_2F_EventScript_SNVis_CORONET_LOOKER:
	setflag FLAG_SN_HIDE_CORONET_LOOKER
	goto_if_lt VAR_SINNOH_STORY, 32, MtCoronet_2F_EventScript_SNVis_CORONET_LOOKER_End
	goto_if_ge VAR_SINNOH_STORY, 33, MtCoronet_2F_EventScript_SNVis_CORONET_LOOKER_End
	goto_if_set FLAG_SN_CORONET_LOOKER, MtCoronet_2F_EventScript_SNVis_CORONET_LOOKER_End
	clearflag FLAG_SN_HIDE_CORONET_LOOKER
MtCoronet_2F_EventScript_SNVis_CORONET_LOOKER_End:
	return

MtCoronet_2F_EventScript_SNLooker::
	lock
	faceplayer
	msgbox MtCoronet_2F_Text_SNLooker1, MSGBOX_DEFAULT
	msgbox MtCoronet_2F_Text_SNLooker2, MSGBOX_DEFAULT
	giveitem ITEM_FULL_RESTORE, 2
	msgbox MtCoronet_2F_Text_SNLooker3, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_CORONET_LOOKER
		sn_walkto LOCALID_SN_CORONET_LOOKER, 12, 5, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_CORONET_LOOKER
	removeobject LOCALID_SN_CORONET_LOOKER
	setflag FLAG_SN_HIDE_CORONET_LOOKER
	release
	end

MtCoronet_2F_Text_SNLooker1:
	.string "Looker: Observe, if you will, that hole.\p"
	.string "There was once a cave painting that\n"
	.string "had blocked the way to the summit.\p"
	.string "But the wall, it is no longer there. It\n"
	.string "lies in pieces. Do you see?\p"
	.string "Ever since the three POKéMON of the\n"
	.string "lakes have been captured...\p"
	.string "Something terrible is happening, but\n"
	.string "what exactly, I do not know.\p"
	.string "Looker: There is but one cause! Team\n"
	.string "Galactic’s Cyrus!\p"
	.string "And now, we are all caught up. Now, to\n"
	.string "the next step.\p"
	.string "Are you Trainer enough to advance?\n"
	.string "Show me, if you will!$"

MtCoronet_2F_Text_SNLooker2:
	.string "Looker: ... ...\p"
	.string "Hahaha! You can relax now.\p"
	.string "You see, I understand. You are far\n"
	.string "superior to me.\p"
	.string "As are the Commanders. Cyrus, too,\n"
	.string "naturally.\p"
	.string "Team Galactic is beyond my reach...\p"
	.string "Please, you must stop them! For only\n"
	.string "you are able!\p"
	.string "All I can do now is give you this.\p"
	.string "It is a little something I obtained in\n"
	.string "an investigation long ago.\p"
	.string "Looker: Please, stop Team Galactic! For\n"
	.string "only you are able!\p"
	.string "All I can do now is give you this.\p"
	.string "It is a little something I obtained in\n"
	.string "an investigation long ago.$"

MtCoronet_2F_Text_SNLooker3:
	.string "Looker: Please! You must stop Team\n"
	.string "Galactic!$"
