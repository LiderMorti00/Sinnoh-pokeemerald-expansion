CelesticTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CelesticTown_OnTransitionSN
	.byte 0

CelesticTown_EventScript_PtNpc1::
	msgbox CelesticTown_Text_PtNpc1, MSGBOX_NPC
	end

CelesticTown_Text_PtNpc1:
	.string "Howdy! Studying up on local history?$"

CelesticTown_EventScript_PtNpc2::
	msgbox CelesticTown_Text_PtNpc2, MSGBOX_NPC
	end

CelesticTown_Text_PtNpc2:
	.string "Hey, do you know what they say?\p"
	.string "They say a POKéMON created the\n"
	.string "SINNOH region.$"

CelesticTown_EventScript_PtNpc3::
	msgbox CelesticTown_Text_PtNpc3, MSGBOX_NPC
	end

CelesticTown_Text_PtNpc3:
	.string "There's no POKéMON Mart in this town...\p"
	.string "Instead, you can buy and sell items in\n"
	.string "this house here.$"

CelesticTown_EventScript_PtSign1::
	msgbox CelesticTown_Text_PtSign1, MSGBOX_SIGN
	end

CelesticTown_Text_PtSign1:
	.string "CELESTIC TOWN The Past Lives$"

CelesticTown_OnTransitionSN:
	call CelesticTown_EventScript_SNVis_CEL_CYNTHIA
	call CelesticTown_EventScript_SNVis_CEL_GRUNT
	end

CelesticTown_EventScript_SNVis_CEL_GRUNT:
	setflag FLAG_SN_HIDE_CEL_GRUNT
	goto_if_unset FLAG_BADGE05_GET, CelesticTown_EventScript_SNVis_CEL_GRUNT_End
	goto_if_defeated TRAINER_ELLIOT_1, CelesticTown_EventScript_SNVis_CEL_GRUNT_End
	clearflag FLAG_SN_HIDE_CEL_GRUNT
CelesticTown_EventScript_SNVis_CEL_GRUNT_End:
	return

CelesticTown_EventScript_SNCEL_GRUNT::
	lock
	faceplayer
	msgbox CelesticTown_Text_SNWillYouMess, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CelesticTown_EventScript_SNCEL_GRUNT_No
	msgbox CelesticTown_EventScript_SNCEL_GRUNT_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_ELLIOT_1, CelesticTown_EventScript_SNCEL_GRUNT_Defeat
	msgbox CelesticTown_EventScript_SNCEL_GRUNT_Post, MSGBOX_DEFAULT
	closemessage
	sn_walkto VAR_LAST_TALKED, 30, 27, SN_SPEED_FAST, 0, 0, 0
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_CEL_GRUNT
	release
	end
CelesticTown_EventScript_SNCEL_GRUNT_No:
	msgbox CelesticTown_Text_SNVerySmart, MSGBOX_DEFAULT
	release
	end

CelesticTown_EventScript_SNCEL_GRUNT_Intro:
	.string "You dare to oppose Team Galactic?\p"
	.string "That means you’re taking on the world...\n"
	.string "No, the universe, even!$"

CelesticTown_EventScript_SNCEL_GRUNT_Defeat:
	.string "Too much to handle...$"

CelesticTown_EventScript_SNCEL_GRUNT_Post:
	.string "Too much to handle... I can’t do\n"
	.string "anything here...\p"
	.string "This place is nothing! I’ll be happily\n"
	.string "rid of this place!$"

CelesticTown_EventScript_SNVis_CEL_CYNTHIA:
	setflag FLAG_SN_HIDE_CEL_CYNTHIA
	goto_if_not_defeated TRAINER_ELLIOT_2, CelesticTown_EventScript_SNVis_CEL_CYNTHIA_End
	goto_if_set FLAG_BADGE06_GET, CelesticTown_EventScript_SNVis_CEL_CYNTHIA_End
	clearflag FLAG_SN_HIDE_CEL_CYNTHIA
CelesticTown_EventScript_SNVis_CEL_CYNTHIA_End:
	return

CelesticTown_EventScript_SNCynthia::
	lock
	faceplayer
	msgbox CelesticTown_EventScript_SNCynthia_T1, MSGBOX_DEFAULT
	msgbox CelesticTown_EventScript_SNCynthia_T2, MSGBOX_DEFAULT
	msgbox CelesticTown_EventScript_SNCynthia_T3, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_CEL_CYNTHIA, 18, 13, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_CEL_CYNTHIA
	removeobject LOCALID_SN_CEL_CYNTHIA
	setflag FLAG_SN_HIDE_CEL_CYNTHIA
	release
	end

CelesticTown_EventScript_SNCynthia_T1:
	.string "Cynthia: Was everything all right here?\p"
	.string "You saw those strange people with a\n"
	.string "Galactic Bomb, didn’t you?$"

CelesticTown_EventScript_SNCynthia_T2:
	.string "But those Team Galactic people...! I\n"
	.string "thought they were harmless.\p"
	.string "The bizarre ways they dress, and all\n"
	.string "their wild claims about making a new\p"
	.string "universe...\p"
	.string "I thought it was just silly talk.\n"
	.string "Nothing to take seriously.\p"
	.string "But they’re surprisingly more trouble\n"
	.string "than expected.\p"
	.string "Trying to monopolize POKéMON just\n"
	.string "isn’t acceptable!$"

CelesticTown_EventScript_SNCynthia_T3:
	.string "By the way, were the ruins fun to\n"
	.string "explore?\p"
	.string "If you’re interested, there is a library\n"
	.string "in Canalave City.\p"
	.string "It’s stocked with ancient books. You\n"
	.string "can look up Sinnoh history there.\p"
	.string "It might help you complete your\n"
	.string "POKéDEX, too.\p"
	.string "The quickest way to Canalave City is\n"
	.string "to go west from Jubilife City.$"

CelesticTown_Text_SNWillYouMess:
	.string "This town is insignificant! There’s\n"
	.string "nothing of value here.\p"
	.string "It doesn’t need to exist, so I’ll blow it\n"
	.string "up with a Galactic Bomb!\p"
	.string "If you try to mess with me, I’ll shut\n"
	.string "you down with a POKéMON battle.\p"
	.string "So, what’s it going to be? Are you going\n"
	.string "to mess with me?$"

CelesticTown_Text_SNVerySmart:
	.string "That’s right! Very smart! You know\n"
	.string "what’s good for you!\p"
	.string "Team Galactic has come out to the\n"
	.string "boonies like this for everyone’s sake.\p"
	.string "Your cooperation is appreciated. Now,\n"
	.string "where is my partner...?$"
