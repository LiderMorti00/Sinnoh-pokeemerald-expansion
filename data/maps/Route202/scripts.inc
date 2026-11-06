Route202_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route202_OnTransition
	.byte 0

Route202_OnTransition:
	setflag FLAG_SN_HIDE_R202_RADAR
	goto_if_set FLAG_SN_R202_RADAR_DONE, Route202_OnTransition_Gfx
	checkitem ITEM_POKE_RADAR
	goto_if_eq VAR_RESULT, FALSE, Route202_OnTransition_Gfx
	clearflag FLAG_SN_HIDE_R202_RADAR
Route202_OnTransition_Gfx:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route202_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

Route202_EventScript_SetDawnGfx::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route202_EventScript_SetLucasGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	end
Route202_EventScript_SetLucasGfx:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

Route202_EventScript_Dawn::
Route202_EventScript_DawnScene::
	lockall
	applymovement LOCALID_ROUTE202_DAWN, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_ROUTE202_DAWN, SN_SPEED_NORMAL
	waitmovement 0
	sn_playerface LOCALID_ROUTE202_DAWN
	waitmovement LOCALID_PLAYER
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route202_EventScript_SNDemoDawn
	call_if_eq VAR_RESULT, FEMALE, Route202_EventScript_SNDemoLucas
	closemessage
	sn_walkto LOCALID_ROUTE202_DAWN, 16, 27, SN_SPEED_NORMAL, DIR_WEST, 0, 0
	sn_walkto LOCALID_PLAYER, 17, 27, SN_SPEED_NORMAL, DIR_WEST, 0, 1
	waitmovement LOCALID_ROUTE202_DAWN
	waitmovement LOCALID_PLAYER
	special SavePlayerParty
	special SinnohLoadCounterpartMon
	special SinnohStartCatchTutorial
	waitstate
	special LoadPlayerParty
	applymovement LOCALID_ROUTE202_DAWN, Common_Movement_FaceRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route202_EventScript_SNBallsDawn
	call_if_eq VAR_RESULT, FEMALE, Route202_EventScript_SNBallsLucas
	giveitem ITEM_POKE_BALL, 5
	checkplayergender
	call_if_eq VAR_RESULT, MALE, Route202_EventScript_SNByeDawn
	call_if_eq VAR_RESULT, FEMALE, Route202_EventScript_SNByeLucas
	closemessage
	sn_walkto LOCALID_ROUTE202_DAWN, 20, 18, SN_SPEED_NORMAL
	waitmovement 0
	removeobject LOCALID_ROUTE202_DAWN
	setflag FLAG_HIDE_ROUTE202_DAWN
	setvar VAR_SINNOH_STORY, 12
	clearflag FLAG_HIDE_JUBILIFE_DAWN
	releaseall
	end

Route202_EventScript_SNDemoDawn:
	msgbox Route202_Text_SNDemoDawn, MSGBOX_DEFAULT
	return
Route202_EventScript_SNDemoLucas:
	msgbox Route202_Text_SNDemoLucas, MSGBOX_DEFAULT
	return
Route202_EventScript_SNBallsDawn:
	msgbox Route202_Text_SNBallsDawn, MSGBOX_DEFAULT
	return
Route202_EventScript_SNBallsLucas:
	msgbox Route202_Text_SNBallsLucas, MSGBOX_DEFAULT
	return
Route202_EventScript_SNByeDawn:
	msgbox Route202_Text_SNByeDawn, MSGBOX_DEFAULT
	return
Route202_EventScript_SNByeLucas:
	msgbox Route202_Text_SNByeLucas, MSGBOX_DEFAULT
	return

Route202_Movement_DawnLeaves:
	walk_up
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Route202_Text_DawnTutorial:
	.string "{STR_VAR_1}: Oh, that’s right!\p"
	.string "{PLAYER}, I haven’t shown you how to\n"
	.string "catch a POKéMON.\p"
	.string "I’ll demonstrate how to catch one, so\n"
	.string "just watch me, OK?\p"
	.string "{STR_VAR_1}: Giggle... See? Isn’t it\n"
	.string "neat?\p"
	.string "Actually, it’s better to lower your\n"
	.string "target’s HP more than I did.\p"
	.string "It’s important to get the POKéMON’s HP\n"
	.string "down as low as possible.\p"
	.string "This is because a healthy POKéMON is\n"
	.string "very difficult to catch.\p"
	.string "Oh, POKéMON also get easier to catch if\n"
	.string "you make them sleep or something\p"
	.string "by using a POKéMON’s move.\p"
	.string "OK, {RIVAL}, to get you started, I’ll\n"
	.string "give you five\p"
	.string "POKé BALLS!$"

Route202_Text_DawnBye:
	.string "{STR_VAR_1}: If you have lots of\n"
	.string "POKéMON with you, it will be safer on\l"
	.string "long trips.\p"
	.string "Plus, it will be a lot more fun having\n"
	.string "your POKéMON friends along.\p"
	.string "OK, I need to get going. Bye, now!$"

Route202_EventScript_Tristan::
	trainerbattle_single TRAINER_BILLY, Route202_Text_TristanIntro, Route202_Text_TristanDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route202_EventScript_Tristan_Rematch
	msgbox Route202_Text_TristanPost, MSGBOX_AUTOCLOSE
	end

Route202_EventScript_Tristan_Rematch:
	trainerbattle_rematch TRAINER_BILLY, Route202_Text_TristanIntro, Route202_Text_TristanDefeat
	msgbox Route202_Text_TristanPost, MSGBOX_AUTOCLOSE
	end

Route202_Text_TristanIntro:
	.string "You're a POKéMON Trainer, and so am I!\n"
	.string "Our eyes met, so battle we must!$"

Route202_Text_TristanDefeat:
	.string "Too strong! Too strong!$"

Route202_Text_TristanPost:
	.string "Don't be shy about talking to Trainers\n"
	.string "you'd like to battle.\p"
	.string "POKéMON grow stronger and stronger\n"
	.string "from battling.$"

Route202_EventScript_Natalie::
	trainerbattle_single TRAINER_JOEY, Route202_Text_NatalieIntro, Route202_Text_NatalieDefeat
	msgbox Route202_Text_NataliePost, MSGBOX_AUTOCLOSE
	end

Route202_Text_NatalieIntro:
	.string "I spy, with my little eye... A Trainer!\p"
	.string "A battle, please!$"

Route202_Text_NatalieDefeat:
	.string "Oh, boo! I can't win!$"

Route202_Text_NataliePost:
	.string "My POKéMON are all tuckered out! I\n"
	.string "need to go to a POKéMON CENTER!$"

Route202_EventScript_Logan::
	trainerbattle_single TRAINER_TIMMY, Route202_Text_LoganIntro, Route202_Text_LoganDefeat
	msgbox Route202_Text_LoganPost, MSGBOX_AUTOCLOSE
	end

Route202_Text_LoganIntro:
	.string "Let's have a POKéMON battle! Humph!\n"
	.string "But I'm gonna win!$"

Route202_Text_LoganDefeat:
	.string "You beat me?! You've got talent!$"

Route202_Text_LoganPost:
	.string "It was fun battling! Yup! I'm going to\n"
	.string "battle everyone!$"

Route202_EventScript_Sign1::
	msgbox Route202_Text_Sign1, MSGBOX_SIGN
	end

Route202_Text_Sign1:
	.string "ROUTE 202\p"
	.string "North: JUBILIFE CITY South:\n"
	.string "SANDGEM TOWN$"

Route202_EventScript_Sign2::
	msgbox Route202_Text_Sign2, MSGBOX_SIGN
	end

Route202_Text_Sign2:
	.string "TRAINER TIPS\p"
	.string "A POKéMON that is asleep or\n"
	.string "paralyzed is easier to catch!$"

Route202_EventScript_Sign3::
	msgbox Route202_Text_Sign3, MSGBOX_SIGN
	end

Route202_Text_Sign3:
	.string "TRAINER TIPS\p"
	.string "Trainers will challenge you as\n"
	.string "soon as your eyes meet. Be ready!$"

Route202_EventScript_PtNpc1::
	msgbox Route202_Text_PtNpc1, MSGBOX_NPC
	end

Route202_Text_PtNpc1:
	.string "Some POKéMON only appear in the\n"
	.string "morning.\p"
	.string "Some only come out at night.\p"
	.string "I'll keep looking till I've seen them\n"
	.string "all!$"

Route202_Text_DawnTutorial_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, Route202_Text_DawnTutorial_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, Route202_Text_DawnTutorial_SNDawnCall
	return
Route202_Text_DawnTutorial_ScrL:
	msgbox Route202_Text_DawnTutorial_Lu, MSGBOX_DEFAULT
	return

Route202_Text_DawnTutorial_Lu:
	.string "{STR_VAR_1}: {PLAYER}, do you know how\n"
	.string "to catch a POKéMON?\p"
	.string "I’ll demonstrate how to catch one, so\n"
	.string "just watch, OK?\p"
	.string "{STR_VAR_1}: And that’s how it’s done.\p"
	.string "Actually, I should have lowered the\n"
	.string "target’s HP some more.\p"
	.string "Yup, the important thing is to lower\n"
	.string "the POKéMON’s HP as much as possible.\p"
	.string "See, a healthy POKéMON isn’t easy to\n"
	.string "catch.\p"
	.string "Oh, yeah. They also get easier to catch\n"
	.string "if you make one of your\p"
	.string "POKéMON put them to sleep or such.\p"
	.string "Here, {RIVAL}, I’ll give you five POKé\n"
	.string "BALLS to get you started.$"

Route202_Text_DawnBye_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, Route202_Text_DawnBye_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, Route202_Text_DawnBye_SNDawnCall
	return
Route202_Text_DawnBye_ScrL:
	msgbox Route202_Text_DawnBye_Lu, MSGBOX_DEFAULT
	return

Route202_Text_DawnBye_Lu:
	.string "{STR_VAR_1}: If you have lots of\n"
	.string "POKéMON with you, you’ll be able to\l"
	.string "travel farther.\p"
	.string "That way, you’ll have a better shot at\n"
	.string "meeting more POKéMON.\p"
	.string "See you around!$"

Route202_Text_DawnTutorial_SNDawnCall:
	msgbox Route202_Text_DawnTutorial, MSGBOX_DEFAULT
	return

Route202_Text_DawnTutorial_SNLucasCall:
	msgbox Route202_Text_DawnTutorial_SNLu, MSGBOX_DEFAULT
	return

Route202_Text_DawnTutorial_SNLu:
	.string "{STR_VAR_1}: {PLAYER}, do you know how\n"
	.string "to catch a POKéMON?\p"
	.string "I’ll demonstrate how to catch one, so\n"
	.string "just watch, OK?\p"
	.string "{STR_VAR_1}: And that’s how it’s done.\p"
	.string "Actually, I should have lowered the\n"
	.string "target’s HP some more.\p"
	.string "Yup, the important thing is to lower\n"
	.string "the POKéMON’s HP as much as possible.\p"
	.string "See, a healthy POKéMON isn’t easy to\n"
	.string "catch.\p"
	.string "Oh, yeah. They also get easier to catch\n"
	.string "if you make one of your\p"
	.string "POKéMON put them to sleep or such.\p"
	.string "Here, {RIVAL}, I’ll give you five POKé\n"
	.string "BALLS to get you started.$"

Route202_Text_DawnBye_SNDawnCall:
	msgbox Route202_Text_DawnBye, MSGBOX_DEFAULT
	return

Route202_Text_DawnBye_SNLucasCall:
	msgbox Route202_Text_DawnBye_SNLu, MSGBOX_DEFAULT
	return

Route202_Text_DawnBye_SNLu:
	.string "{STR_VAR_1}: If you have lots of\n"
	.string "POKéMON with you, you’ll be able to\l"
	.string "travel farther.\p"
	.string "That way, you’ll have a better shot at\n"
	.string "meeting more POKéMON.\p"
	.string "See you around!$"


Route202_Text_SNDemoDawn:
	.string "Dawn: Oh, that’s right!\p"
	.string "{PLAYER}, I haven’t shown you how to\n"
	.string "catch a POKéMON.\p"
	.string "I’ll demonstrate how to catch one, so\n"
	.string "just watch me, OK?$"
Route202_Text_SNDemoLucas:
	.string "Lucas: {PLAYER}, do you know how to\n"
	.string "catch a POKéMON?\p"
	.string "I’ll demonstrate how to catch one, so\n"
	.string "just watch, OK?$"
Route202_Text_SNBallsDawn:
	.string "Dawn: Giggle... See? Isn’t it neat?\p"
	.string "Actually, it’s better to lower your\n"
	.string "target’s HP more than I did.\p"
	.string "It’s important to get the POKéMON’s HP\n"
	.string "down as low as possible.\p"
	.string "This is because a healthy POKéMON is\n"
	.string "very difficult to catch.\p"
	.string "Oh, POKéMON also get easier to catch if\n"
	.string "you make them sleep or something\p"
	.string "by using a POKéMON’s move.\p"
	.string "OK, {PLAYER}, to get you started, I’ll\n"
	.string "give you five\p"
	.string "POKé BALLS!$"
Route202_Text_SNBallsLucas:
	.string "Lucas: And that’s how it’s done.\p"
	.string "Actually, I should have lowered the\n"
	.string "target’s HP some more.\p"
	.string "Yup, the important thing is to lower\n"
	.string "the POKéMON’s HP as much as possible.\p"
	.string "See, a healthy POKéMON isn’t easy to\n"
	.string "catch.\p"
	.string "Oh, yeah. They also get easier to catch\n"
	.string "if you make one of your\p"
	.string "POKéMON put them to sleep or such.\p"
	.string "Here, {PLAYER}, I’ll give you five POKé\n"
	.string "BALLS to get you started.$"
Route202_Text_SNByeDawn:
	.string "If you have lots of POKéMON with you,\n"
	.string "it will be safer on long trips.\p"
	.string "Plus, it will be a lot more fun having\n"
	.string "your POKéMON friends along.\p"
	.string "OK, I need to get going. Bye, now!$"
Route202_Text_SNByeLucas:
	.string "If you have lots of POKéMON with you,\n"
	.string "you’ll be able to travel farther.\p"
	.string "That way, you’ll have a better shot at\n"
	.string "meeting more POKéMON.\p"
	.string "See you around!$"

Route202_EventScript_SNRadarCP::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route202_EventScript_SNRadar_AL
	msgbox Route202_Text_SNRadarAD, MSGBOX_DEFAULT
	goto Route202_EventScript_SNRadar_AN
Route202_EventScript_SNRadar_AL:
	msgbox Route202_Text_SNRadarAL, MSGBOX_DEFAULT
Route202_EventScript_SNRadar_AN:
	closemessage
	applymovement LOCALID_SN_R202_RADAR_CP, Common_Movement_FaceRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route202_EventScript_SNRadar_BL
	msgbox Route202_Text_SNRadarBD, MSGBOX_DEFAULT
	goto Route202_EventScript_SNRadar_BN
Route202_EventScript_SNRadar_BL:
	msgbox Route202_Text_SNRadarBL, MSGBOX_DEFAULT
Route202_EventScript_SNRadar_BN:
	closemessage
	applymovement LOCALID_SN_R202_RADAR_CP, Route202_Movement_SNLookAround
	waitmovement 0
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route202_EventScript_SNRadar_CL
	msgbox Route202_Text_SNRadarCD, MSGBOX_DEFAULT
	goto Route202_EventScript_SNRadar_CN
Route202_EventScript_SNRadar_CL:
	msgbox Route202_Text_SNRadarCL, MSGBOX_DEFAULT
Route202_EventScript_SNRadar_CN:
	closemessage
	setflag FLAG_SN_R202_RADAR_DONE
	sn_walkto LOCALID_SN_R202_RADAR_CP, 0, 26, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_R202_RADAR_CP
	removeobject LOCALID_SN_R202_RADAR_CP
	setflag FLAG_SN_HIDE_R202_RADAR
	release
	end

Route202_Movement_SNLookAround:
	face_down
	delay_16
	face_up
	delay_16
	face_left
	delay_16
	face_player
	step_end

Route202_Text_SNRadarAD:
	.string "Dawn: Hi, {PLAYER}! I was waiting for\n"
	.string "you.\p"
	.string "Let me show you how the Poké Radar\n"
	.string "works.\p"
	.string "Let’s not waste any time. So, when you\n"
	.string "use the Poké Radar...$"

Route202_Text_SNRadarAL:
	.string "Lucas: {PLAYER}.\p"
	.string "Let me explain how the Poké Radar\n"
	.string "works.\p"
	.string "Let’s give it a go. When you use the\n"
	.string "Poké Radar...$"

Route202_Text_SNRadarBD:
	.string "Dawn: See? Did you notice the tall\n"
	.string "grass rustling?\p"
	.string "There’s a POKéMON in that patch of tall\n"
	.string "grass.\p"
	.string "If you go there, the POKéMON will come\n"
	.string "bursting out.$"

Route202_Text_SNRadarBL:
	.string "Lucas: There! Did you see the tall\n"
	.string "grass rustling?\p"
	.string "There’s a POKéMON in that patch of tall\n"
	.string "grass.\p"
	.string "Go in there, and the POKéMON will come\n"
	.string "leaping out.$"

Route202_Text_SNRadarCD:
	.string "Now, this is where it gets interesting.\p"
	.string "If you see another patch of rustling\n"
	.string "grass some distance away, go into it.\p"
	.string "You’ll see the same kind of POKéMON as\n"
	.string "before.\p"
	.string "If you want to keep meeting the same\n"
	.string "kind of POKéMON, you should maybe\p"
	.string "use some Repels.$"

Route202_Text_SNRadarCL:
	.string "Now, here’s the strange part.\p"
	.string "If you see another patch of rustling\n"
	.string "grass far away, it means the same kind\p"
	.string "of POKéMON is hiding there.\p"
	.string "So, if your aim is to keep seeing the\n"
	.string "same kind of POKéMON, you should\p"
	.string "consider using Repels.$"
