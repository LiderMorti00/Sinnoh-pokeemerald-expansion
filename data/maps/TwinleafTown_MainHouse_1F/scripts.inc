TwinleafTown_MainHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TwinleafTown_MainHouse_1F_OnFrame
	.byte 0

TwinleafTown_MainHouse_1F_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 0, TwinleafTown_MainHouse_1F_EventScript_MomIntro
	.2byte 0

TwinleafTown_MainHouse_1F_EventScript_MomIntro::
	lockall
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FacePlayer
	waitmovement 0
	msgbox TwinleafTown_MainHouse_1F_Text_BarryWasHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWINLEAF_MOM, Common_Movement_FaceUp
	waitmovement 0
	setvar VAR_SINNOH_STORY, 1
	releaseall
	end

TwinleafTown_MainHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_lt VAR_SINNOH_STORY, 6, TwinleafTown_MainHouse_1F_EventScript_MomGoOut
	goto_if_unset FLAG_SYS_B_DASH, TwinleafTown_MainHouse_1F_EventScript_MomRunningShoes
	msgbox TwinleafTown_MainHouse_1F_Text_TakeCare, MSGBOX_DEFAULT
	release
	end

TwinleafTown_MainHouse_1F_EventScript_MomGoOut::
	msgbox TwinleafTown_MainHouse_1F_Text_GoSeeBarry, MSGBOX_DEFAULT
	release
	end

TwinleafTown_MainHouse_1F_EventScript_MomRunningShoes::
	msgbox TwinleafTown_MainHouse_1F_Text_YouGotAPokemon, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message TwinleafTown_MainHouse_1F_Text_ReceivedRunningShoes
	waitfanfare
	waitmessage
	setflag FLAG_SYS_B_DASH
	msgbox TwinleafTown_MainHouse_1F_Text_RunningShoesInfo, MSGBOX_DEFAULT
	release
	end

TwinleafTown_MainHouse_1F_Text_BarryWasHere:
	.string "MOM: Oh, good morning, {PLAYER}!\n"
	.string "Barry dashed in here a moment ago.\p"
	.string "He was shouting about something\n"
	.string "urgent and ran right back home.\p"
	.string "You'd better go see him before he\n"
	.string "bursts through the door again!$"

TwinleafTown_MainHouse_1F_Text_GoSeeBarry:
	.string "MOM: Barry lives in the house just\n"
	.string "up the road. Go on, he's waiting!$"

TwinleafTown_MainHouse_1F_Text_YouGotAPokemon:
	.string "MOM: {PLAYER}! Is that a POKéMON?\n"
	.string "And Professor Rowan gave you a\l"
	.string "POKéDEX? That's wonderful!\p"
	.string "If you're going on a journey, you'll\n"
	.string "need these. Here you go!$"

TwinleafTown_MainHouse_1F_Text_ReceivedRunningShoes:
	.string "{PLAYER} received the\n"
	.string "RUNNING SHOES!$"

TwinleafTown_MainHouse_1F_Text_RunningShoesInfo:
	.string "Hold the B Button while walking\n"
	.string "to run. Now you can go anywhere!$"

TwinleafTown_MainHouse_1F_Text_TakeCare:
	.string "MOM: Take good care of your\n"
	.string "POKéMON, and come home once\l"
	.string "in a while, okay?$"
