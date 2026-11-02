EternaCity_GalacticBuilding_RotomsRoom_MapScripts::
	.byte 0

EternaCity_GalacticBuilding_RotomsRoom_Text_PtSign1:
	.string "There was an appliance here. The one\n"
	.string "with the oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_Text_PtSign2:
	.string "There was an appliance here. The one\n"
	.string "with the oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_Text_PtSign3:
	.string "There was an appliance here. The one\n"
	.string "with the oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_Text_PtSign4:
	.string "There was an appliance here. The one\n"
	.string "with the oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_Text_PtSign5:
	.string "There was an appliance here. The one\n"
	.string "with the oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNAppliance1::
	lockall
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl1, MSGBOX_DEFAULT
	setvar VAR_0x8004, 1
	goto EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNTryRotom
	end

EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl1:
	.string "There is a microwave oven here. It has\n"
	.string "an oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNAppliance2::
	lockall
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl2, MSGBOX_DEFAULT
	setvar VAR_0x8004, 2
	goto EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNTryRotom
	end

EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl2:
	.string "There is a washing machine here. It has\n"
	.string "an oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNAppliance3::
	lockall
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl3, MSGBOX_DEFAULT
	setvar VAR_0x8004, 3
	goto EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNTryRotom
	end

EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl3:
	.string "There is a refrigerator here. It has an\n"
	.string "oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNAppliance4::
	lockall
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl4, MSGBOX_DEFAULT
	setvar VAR_0x8004, 4
	goto EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNTryRotom
	end

EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl4:
	.string "There is a electric fan here. It has an\n"
	.string "oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNAppliance5::
	lockall
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl5, MSGBOX_DEFAULT
	setvar VAR_0x8004, 5
	goto EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNTryRotom
	end

EternaCity_GalacticBuilding_RotomsRoom_Text_SNAppl5:
	.string "There is a lawn mower here. It has an\n"
	.string "oddly shaped motor.$"

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNTryRotom::
	special SinnohPartyHasRotom
	goto_if_eq VAR_RESULT, FALSE, EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNNoRotom
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNAsk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNNoRotom
	special SinnohRotomAppliance
	goto_if_eq VAR_RESULT, 2, EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNSame
	playse SE_M_THUNDERBOLT
	waitse
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNChanged, MSGBOX_DEFAULT
	releaseall
	end
EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNSame:
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNSame, MSGBOX_DEFAULT
EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNNoRotom:
	releaseall
	end

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNNormal::
	lockall
	special SinnohPartyHasRotom
	goto_if_eq VAR_RESULT, FALSE, EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNNoRotom
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNNoRotom
	setvar VAR_0x8004, 0
	special SinnohRotomAppliance
	goto_if_eq VAR_RESULT, 2, EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNSame
	playse SE_M_THUNDERBOLT
	waitse
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNChanged, MSGBOX_DEFAULT
	releaseall
	end

EternaCity_GalacticBuilding_RotomsRoom_Text_SNAsk:
	.string "Do you want your ROTOM to enter the\n"
	.string "motor?$"

EternaCity_GalacticBuilding_RotomsRoom_Text_SNChanged:
	.string "ROTOM entered the motor and changed\n"
	.string "its form!$"

EternaCity_GalacticBuilding_RotomsRoom_Text_SNSame:
	.string "ROTOM is already in this form.$"

EternaCity_GalacticBuilding_RotomsRoom_Text_SNBack:
	.string "There is an empty space where the old\n"
	.string "motor was. Do you want ROTOM to return\l"
	.string "to its original form?$"
