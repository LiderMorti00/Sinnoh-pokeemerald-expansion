ValorLakefront_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ValorLakefront_OnTransitionSN
	.byte 0

ValorLakefront_EventScript_PtSign1::
	msgbox ValorLakefront_Text_PtSign1, MSGBOX_SIGN
	end

ValorLakefront_Text_PtSign1:
	.string "Seven Stars Restaurant More Flavor\n"
	.string "Than You Can Wish For$"

ValorLakefront_OnTransitionSN:
	call ValorLakefront_EventScript_SNVis_VALOR_BARRY
	call ValorLakefront_EventScript_SNLakeWarp
	call ValorLakefront_EventScript_SNVis_VL_GRUNT
	call ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA
	end

ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA:
	setflag FLAG_SN_HIDE_VALOR_CYNTHIA
	goto_if_unset FLAG_BADGE05_GET, ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA_End
	goto_if_not_defeated TRAINER_ROBERT_2, ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA_End
	goto_if_set FLAG_SN_RECEIVED_SECRET_POTION, ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA_End
	clearflag FLAG_SN_HIDE_VALOR_CYNTHIA
ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA_End:
	return

ValorLakefront_EventScript_SNCynthia::
	lock
	faceplayer
	goto_if_set FLAG_SN_HIDE_VALOR_BARRY, ValorLakefront_EventScript_SNCynthia_NoBarry
	msgbox ValorLakefront_Text_SNIHadToTalk, MSGBOX_DEFAULT
	closemessage
	sn_walktoplayer LOCALID_SN_VALOR_BARRY, SN_SPEED_FAST, 0, 0
	waitmovement LOCALID_SN_VALOR_BARRY
	sn_playerface LOCALID_SN_VALOR_BARRY, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox ValorLakefront_Text_SNBarry0, MSGBOX_DEFAULT
	msgbox ValorLakefront_Text_SNSister, MSGBOX_DEFAULT
	msgbox ValorLakefront_Text_SNBarry1, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_VALOR_BARRY, 46, 20, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_VALOR_BARRY
	removeobject LOCALID_SN_VALOR_BARRY
	setflag FLAG_SN_HIDE_VALOR_BARRY
	msgbox ValorLakefront_Text_SNHesYourFriend, MSGBOX_DEFAULT
	closemessage
	sn_playerface LOCALID_SN_VALOR_CYNTHIA, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement LOCALID_SN_VALOR_CYNTHIA, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ValorLakefront_Text_SNPsyduck, MSGBOX_YESNO
	goto ValorLakefront_EventScript_SNCynthia_Answer
ValorLakefront_EventScript_SNCynthia_NoBarry:
	msgbox ValorLakefront_Text_SNIHadToTalk, MSGBOX_DEFAULT
	msgbox ValorLakefront_Text_SNPsyduck, MSGBOX_YESNO
ValorLakefront_EventScript_SNCynthia_Answer:
	goto_if_eq VAR_RESULT, YES, ValorLakefront_EventScript_SNCynthia_Seen
	msgbox ValorLakefront_Text_SNHaventSeen, MSGBOX_DEFAULT
	goto ValorLakefront_EventScript_SNCynthia_Potion
ValorLakefront_EventScript_SNCynthia_Seen:
	msgbox ValorLakefront_EventScript_SNCynthia_T1, MSGBOX_DEFAULT
ValorLakefront_EventScript_SNCynthia_Potion:
	msgbox ValorLakefront_EventScript_SNCynthia_T2, MSGBOX_DEFAULT
	giveitem ITEM_SECRET_POTION
	setflag FLAG_SN_RECEIVED_SECRET_POTION
	msgbox ValorLakefront_EventScript_SNCynthia_T3, MSGBOX_DEFAULT
	closemessage
		sn_walkto VAR_LAST_TALKED, 47, 18, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement VAR_LAST_TALKED
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VALOR_CYNTHIA
	release
	end
ValorLakefront_EventScript_SNCynthia_T1:
	.string "Cynthia: Yes, that’s right. By the café\n"
	.string "on Route 210.\p"
	.string "You’ve seen that group of PSYDUCK\n"
	.string "huddled with their heads in their,\p"
	.string "uh, hands...?$"

ValorLakefront_EventScript_SNCynthia_T2:
	.string "Anyway, what you should do is use this\n"
	.string "medicine on the PSYDUCK.\p"
	.string "You’re working on a POKéDEX, so it\n"
	.string "would be worthwhile for you.$"

ValorLakefront_EventScript_SNCynthia_T3:
	.string "Cynthia: I went on a big adventure with\n"
	.string "a POKéDEX when I was younger.\p"
	.string "I hope you get to meet every kind of\n"
	.string "POKéMON there is to see.\p"
	.string "It may help you with the secret of the\n"
	.string "mirage POKéMON.\p"
	.string "See you later!$"

ValorLakefront_EventScript_SNLakeWarp:
	goto_if_eq VAR_SINNOH_STORY, 31, ValorLakefront_EventScript_SNLakeDrained
	setdynamicwarp MAP_LAKE_VALOR, 0
	return
ValorLakefront_EventScript_SNLakeDrained:
	setdynamicwarp MAP_LAKE_VALOR_DRAINED, 2
	return

ValorLakefront_EventScript_SNVis_VL_GRUNT:
	setflag FLAG_SN_HIDE_VL_GRUNT
	goto_if_unset FLAG_BADGE05_GET, ValorLakefront_EventScript_SNVis_VL_GRUNT_End
	goto_if_defeated TRAINER_ROBERT_2, ValorLakefront_EventScript_SNVis_VL_GRUNT_End
	clearflag FLAG_SN_HIDE_VL_GRUNT
ValorLakefront_EventScript_SNVis_VL_GRUNT_End:
	return

ValorLakefront_EventScript_SNGrunt::
	trainerbattle_single TRAINER_ROBERT_2, ValorLakefront_EventScript_SNGrunt_Intro, ValorLakefront_EventScript_SNGrunt_Defeat, ValorLakefront_EventScript_SNGrunt_Won
	end
ValorLakefront_EventScript_SNGrunt_Won:
	lock
	msgbox ValorLakefront_EventScript_SNGrunt_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VL_GRUNT
	goto_if_set FLAG_SN_RECEIVED_SECRET_POTION, ValorLakefront_EventScript_SNNoCyn
	clearflag FLAG_SN_HIDE_VALOR_CYNTHIA
	addobject LOCALID_SN_VALOR_CYNTHIA
ValorLakefront_EventScript_SNNoCyn:
	fadescreen FADE_FROM_BLACK
	release
	end
ValorLakefront_EventScript_SNGrunt_Intro:
	.string "Aww, no... You’re still on my tail...?\p"
	.string "The lake’s within sight...\p"
	.string "You leave me no choice... My POKéMON\n"
	.string "will KO you...$"

ValorLakefront_EventScript_SNGrunt_Defeat:
	.string "Gweh! I’m running on fumes...$"

ValorLakefront_EventScript_SNGrunt_Post:
	.string "I can’t battle anymore... I’m running on\n"
	.string "fumes...\p"
	.string "I’ll have to give this to the\n"
	.string "Commander...\p"
	.string "I wish... I got to use it at the lake...$"

ValorLakefront_EventScript_SNSuiteLady::
	lock
	faceplayer
	goto_if_set FLAG_SN_RETURNED_SUITE_KEY, ValorLakefront_EventScript_SNSuiteLady_After
	checkitem ITEM_SUITE_KEY
	goto_if_eq VAR_RESULT, TRUE, ValorLakefront_EventScript_SNSuiteLady_Key
	msgbox ValorLakefront_EventScript_SNSuiteLady_T1, MSGBOX_DEFAULT
	release
	end
ValorLakefront_EventScript_SNSuiteLady_Key:
	msgbox ValorLakefront_EventScript_SNSuiteLady_T2, MSGBOX_DEFAULT
	removeitem ITEM_SUITE_KEY
	giveitem ITEM_WHITE_FLUTE
	setflag FLAG_SN_RETURNED_SUITE_KEY
	release
	end
ValorLakefront_EventScript_SNSuiteLady_After:
	msgbox ValorLakefront_EventScript_SNSuiteLady_T3, MSGBOX_DEFAULT
	release
	end

ValorLakefront_EventScript_SNSuiteLady_T1:
	.string "What am I to do...? I’ve gone and\n"
	.string "dropped my Suite Key somewhere again...\l"
	.string "It must be somewhere around the\l"
	.string "lakefront.$"

ValorLakefront_EventScript_SNSuiteLady_T2:
	.string "Oh! That’s my Suite Key! You found it\n"
	.string "for me! Thank you so much! Please,\l"
	.string "accept this as thanks.$"

ValorLakefront_EventScript_SNSuiteLady_T3:
	.string "Thank you again for finding my key. I’ll\n"
	.string "be more careful from now on.$"

ValorLakefront_EventScript_SNSuiteKey::
	goto_if_set FLAG_SN_SUITE_KEY_FOUND, ValorLakefront_EventScript_SNSuiteKey_End
	lockall
	finditem ITEM_SUITE_KEY
	setflag FLAG_SN_SUITE_KEY_FOUND
	releaseall
ValorLakefront_EventScript_SNSuiteKey_End:
	end

ValorLakefront_EventScript_SNHoneyTree::
	lock
	goto_if_ne VAR_SN_HONEY_TREE, 20, ValorLakefront_EventScript_SNHoneyTree_Fresh
	special SinnohHoneyReady
	goto_if_eq VAR_RESULT, TRUE, ValorLakefront_EventScript_SNHoneyTree_Battle
	msgbox SN_HoneyTree_Text_Wait, MSGBOX_DEFAULT
	release
	end
ValorLakefront_EventScript_SNHoneyTree_Battle:
	setvar VAR_SN_HONEY_TREE, 0
	setwildbattle SPECIES_WURMPLE, 5
	special SinnohHoneyTreeMon
	msgbox SN_HoneyTree_Text_Mon, MSGBOX_DEFAULT
	closemessage
	dowildbattle
	release
	end
ValorLakefront_EventScript_SNHoneyTree_Fresh:
	msgbox SN_HoneyTree_Text_Scent, MSGBOX_DEFAULT
	checkitem ITEM_HONEY
	goto_if_eq VAR_RESULT, FALSE, ValorLakefront_EventScript_SNHoneyTree_End
	msgbox SN_HoneyTree_Text_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ValorLakefront_EventScript_SNHoneyTree_End
	removeitem ITEM_HONEY
	setvar VAR_SN_HONEY_TREE, 20
	special SinnohHoneySlather
	msgbox SN_HoneyTree_Text_Done, MSGBOX_DEFAULT
ValorLakefront_EventScript_SNHoneyTree_End:
	release
	end

ValorLakefront_Text_SNBarry0:
	.string "{RIVAL}: Hey, {PLAYER}!\n"
	.string "Where’d that Galactic goon run off to?$"

ValorLakefront_Text_SNSister:
	.string "Huh?\n"
	.string "Is this your older sister?\p"
	.string "No? She isn’t?\n"
	.string "Oh, OK.$"

ValorLakefront_Text_SNBarry1:
	.string "That explosion in the Great\n"
	.string "Marsh? It wasn’t anything serious.\p"
	.string "Mr. Wake told me to tell you that.\p"
	.string "But that Team Galactic... Wow! Are they\n"
	.string "out of control or what?\p"
	.string "Next time I see them, I’ll teach them a\n"
	.string "lesson they won’t forget!\p"
	.string "See you around!$"

ValorLakefront_Text_SNHesYourFriend:
	.string "Cynthia: He’s your friend?\p"
	.string "He’s more impatient than he is\n"
	.string "energetic, isn’t he?$"

ValorLakefront_Text_SNIHadToTalk:
	.string "Cynthia: Oh, hello, long time no see! How\n"
	.string "is your POKéDEX filling up?\p"
	.string "I came to research the folklore about\n"
	.string "the lake, but...\p"
	.string "Well, it doesn’t appear as if the lake is\n"
	.string "open to the public now.\p"
	.string "Have you heard the folklore about it?\p"
	.string "They say there is an island inside the\n"
	.string "lake.\p"
	.string "And inside that island is a mirage of a\n"
	.string "POKéMON.\p"
	.string "No one must enter the chamber of that\n"
	.string "POKéMON...\p"
	.string "Oh, that’s right! I had to talk to you\n"
	.string "about something else...$"

ValorLakefront_Text_SNPsyduck:
	.string "Cynthia: So, getting back to what I\n"
	.string "started saying earlier...\p"
	.string "Have you seen the group of PSYDUCK on\n"
	.string "Route 210?$"

ValorLakefront_Text_SNHaventSeen:
	.string "Cynthia: You haven’t seen them? By the\n"
	.string "café on Route 210.\p"
	.string "There’s a group of PSYDUCK huddled\n"
	.string "with their heads in their, uh,\p"
	.string "hands...?$"

ValorLakefront_EventScript_SNVis_VALOR_BARRY:
	setflag FLAG_SN_HIDE_VALOR_BARRY
	goto_if_unset FLAG_BADGE05_GET, ValorLakefront_EventScript_SNVis_VALOR_BARRY_End
	goto_if_not_defeated TRAINER_ROBERT_2, ValorLakefront_EventScript_SNVis_VALOR_BARRY_End
	goto_if_set FLAG_SN_RECEIVED_SECRET_POTION, ValorLakefront_EventScript_SNVis_VALOR_BARRY_End
	clearflag FLAG_SN_HIDE_VALOR_BARRY
ValorLakefront_EventScript_SNVis_VALOR_BARRY_End:
	return
