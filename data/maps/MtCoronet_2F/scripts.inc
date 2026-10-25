MtCoronet_2F_MapScripts::
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
