EternaCity_GalacticBuilding_RotomsRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EternaCity_GalacticBuilding_RotomsRoom_OnTransition
	.byte 0

EternaCity_GalacticBuilding_RotomsRoom_OnTransition:
	setflag FLAG_SN_HIDE_ROTOM_ROWAN
	end

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
	closemessage
	goto_if_unset FLAG_SN_ROTOM_ROWAN_DONE, EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNRowan
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

EternaCity_GalacticBuilding_RotomsRoom_EventScript_SNRowan::
	setflag FLAG_SN_ROTOM_ROWAN_DONE
	delay 20
	playse SE_EXIT
	clearflag FLAG_SN_HIDE_ROTOM_ROWAN
	addobject LOCALID_SN_ROTOM_ROWAN
	applymovement OBJ_EVENT_ID_PLAYER, EternaCity_GalacticBuilding_RotomsRoom_Movement_SNNotice
	waitmovement 0
	sn_walktoplayer LOCALID_SN_ROTOM_ROWAN, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_SN_ROTOM_ROWAN
	sn_playerface LOCALID_SN_ROTOM_ROWAN, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNRowan1, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_ROTOM_ROWAN, 7, 7, SN_SPEED_NORMAL, DIR_NORTH, 0, 0
	waitmovement LOCALID_SN_ROTOM_ROWAN
	delay 16
	sn_walkto LOCALID_SN_ROTOM_ROWAN, 11, 7, SN_SPEED_NORMAL, DIR_NORTH, 0, 0
	waitmovement LOCALID_SN_ROTOM_ROWAN
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNRowan2, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_ROTOM_ROWAN, 9, 7, SN_SPEED_NORMAL, DIR_NORTH, 0, 0
	waitmovement LOCALID_SN_ROTOM_ROWAN
	msgbox EternaCity_GalacticBuilding_RotomsRoom_Text_SNRowan3, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_ROTOM_ROWAN, 8, 11, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_ROTOM_ROWAN
	playse SE_EXIT
	removeobject LOCALID_SN_ROTOM_ROWAN
	setflag FLAG_SN_HIDE_ROTOM_ROWAN
	releaseall
	end

EternaCity_GalacticBuilding_RotomsRoom_Movement_SNNotice:
	face_down
	emote_exclamation_mark
	step_end

EternaCity_GalacticBuilding_RotomsRoom_Text_SNRowan1:
	.string "Rowan: Ah, imagine finding you here!\p"
	.string "You must be eager to fill your POKéDEX\n"
	.string "to be searching even here.\p"
	.string "What am I doing?\p"
	.string "I visit a professor I know in Eterna\n"
	.string "every so often.\p"
	.string "He tells me intriguing rumors of rare\n"
	.string "POKéMON sightings and such.$"

EternaCity_GalacticBuilding_RotomsRoom_Text_SNRowan2:
	.string "A POKéMON that slips into electric\n"
	.string "appliances, you say...\p"
	.string "Hmm...\p"
	.string "That is somewhat off from what I’ve\n"
	.string "heard about it.\p"
	.string "Hmm... This is what I’ve heard.\p"
	.string "Long ago, there was a POKéMON that\n"
	.string "merged with a toy robot.\p"
	.string "Should that POKéMON be recognized as\n"
	.string "a new species or not...\p"
	.string "Debates over the issue were about to\n"
	.string "start when they were rendered moot.\p"
	.string "The very topic of discussion--the\n"
	.string "POKéMON-infused robot--disappeared...$"

EternaCity_GalacticBuilding_RotomsRoom_Text_SNRowan3:
	.string "Anyway, this ROTOM... What an\n"
	.string "interesting POKéMON.\p"
	.string "So, you say it enters an appliance and\n"
	.string "essentially merges with the device.\p"
	.string "In the process, it may also learn new\n"
	.string "moves.\p"
	.string "In a way, I suppose it could be thought\n"
	.string "of as a mechanical POKéMON.\p"
	.string "Hmm...!\p"
	.string "Though it is utterly unique, it is\n"
	.string "undeniably a form of POKéMON.\p"
	.string "Fine, fine, so be it!\p"
	.string "No matter how old one gets, there will\n"
	.string "always be new POKéMON discoveries!\p"
	.string "Take care, {PLAYER}!$"
