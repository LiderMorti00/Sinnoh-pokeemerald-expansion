TwinleafTown_MainHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_MainHouse_1F_OnFrame
	.byte 0

TwinleafTown_MainHouse_1F_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 1, TwinleafTown_MainHouse_1F_EventScript_MomGrass
	map_script_2 VAR_SINNOH_STORY, 4, TwinleafTown_MainHouse_1F_EventScript_MomShoes
	map_script_2 VAR_SINNOH_STORY, 10, TwinleafTown_MainHouse_1F_EventScript_MomJournal
	.2byte 0

TwinleafTown_MainHouse_1F_EventScript_MomGrass::
	lockall
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_MomGrass, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_SINNOH_STORY, 2
	releaseall
	end

TwinleafTown_MainHouse_1F_EventScript_MomShoes::
	lockall
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_MomShoes, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message TwinleafTown_MainHouse_1F_Text_ReceivedShoes
	waitfanfare
	waitmessage
	setflag FLAG_SYS_B_DASH
	msgbox TwinleafTown_MainHouse_1F_Text_ShoesInfo, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SINNOH_STORY, 5
	releaseall
	end

TwinleafTown_MainHouse_1F_EventScript_MomJournal::
	lockall
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_MomJournal, MSGBOX_DEFAULT
	giveitem ITEM_JOURNAL
	applymovement LOCALID_HOME_BARRYS_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_BarrysMom, MSGBOX_DEFAULT
	giveitem ITEM_PARCEL
	msgbox TwinleafTown_MainHouse_1F_Text_BarrysMom2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_HOME_BARRYS_MOM
	setflag FLAG_HIDE_HOME_BARRYS_MOM
	fadescreen FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 11
	releaseall
	end

TwinleafTown_MainHouse_1F_EventScript_Mom::
	lock
	faceplayer
	msgbox TwinleafTown_MainHouse_1F_Text_MomTalk, MSGBOX_DEFAULT
	release
	end

TwinleafTown_MainHouse_1F_EventScript_BarrysMom::
	msgbox TwinleafTown_MainHouse_1F_Text_BarrysMom2, MSGBOX_NPC
	end

TwinleafTown_MainHouse_1F_Text_MomGrass:
	.string "MOM: Oh, {PLAYER}! Barry just ran\n"
	.string "out of here in a big hurry. He was\l"
	.string "looking for you.\p"
	.string "Just remember: wild POKéMON live\n"
	.string "in tall grass. Never go in there\l"
	.string "without a POKéMON of your own!$"

TwinleafTown_MainHouse_1F_Text_MomShoes:
	.string "MOM: {PLAYER}! I heard everything.\n"
	.string "PROFESSOR ROWAN saved you in the\l"
	.string "tall grass?\p"
	.string "And he gave you a POKéMON! You\n"
	.string "must thank him properly. He's in\l"
	.string "SANDGEM TOWN.\p"
	.string "Oh, and take these. They'll help\n"
	.string "you get around much faster.$"

TwinleafTown_MainHouse_1F_Text_ReceivedShoes:
	.string "{PLAYER} received the RUNNING\n"
	.string "SHOES!$"

TwinleafTown_MainHouse_1F_Text_ShoesInfo:
	.string "Hold the B Button to run. Now go\n"
	.string "on, and don't forget to thank the\l"
	.string "Professor!$"

TwinleafTown_MainHouse_1F_Text_MomJournal:
	.string "MOM: So the Professor wants you to\n"
	.string "see all of Sinnoh? What an\l"
	.string "adventure!\p"
	.string "Take this JOURNAL. Write down\n"
	.string "everything you see, so you can\l"
	.string "tell me all about it later.$"

TwinleafTown_MainHouse_1F_Text_BarrysMom:
	.string "BARRY'S MOM: Oh, {PLAYER}! Barry\n"
	.string "forgot his PARCEL again. That boy!\p"
	.string "He said he was heading to JUBILIFE\n"
	.string "CITY. Could you take it to him,\l"
	.string "please?$"

TwinleafTown_MainHouse_1F_Text_BarrysMom2:
	.string "Thank you, dear. Tell Barry to\n"
	.string "slow down once in a while!$"

TwinleafTown_MainHouse_1F_Text_MomTalk:
	.string "MOM: Take good care of your\n"
	.string "POKéMON, and come home to visit\l"
	.string "sometimes, okay?$"
