Route202_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route202_OnTransition
	.byte 0

Route202_OnTransition:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route202_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

Route202_EventScript_SetDawnGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	end

Route202_EventScript_Dawn::
Route202_EventScript_DawnScene::
	lockall
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_ROUTE202_DAWN, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route202_Text_DawnTutorial, MSGBOX_DEFAULT
	giveitem ITEM_POKE_BALL, 5
	call Sinnoh_EventScript_BufferCounterpartName
	msgbox Route202_Text_DawnBye, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE202_DAWN, Route202_Movement_DawnLeaves
	waitmovement 0
	removeobject LOCALID_ROUTE202_DAWN
	setflag FLAG_HIDE_ROUTE202_DAWN
	setvar VAR_SINNOH_STORY, 12
	clearflag FLAG_HIDE_JUBILIFE_DAWN
	releaseall
	end

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
	.string "{STR_VAR_1}: There you are! The\n"
	.string "Professor asked me to teach you\l"
	.string "how to catch POKéMON.\p"
	.string "Watch closely! First, you battle a\n"
	.string "wild POKéMON, like this BIDOOF, to\l"
	.string "weaken it.\p"
	.string "Then you throw a POKé BALL!\n"
	.string "...Gotcha! See? Easy! Here, take\l"
	.string "these so you can try it yourself.$"

Route202_Text_DawnBye:
	.string "{STR_VAR_1}: JUBILIFE CITY is just\n"
	.string "up ahead. I'll see you around!$"

Route202_EventScript_Tristan::
	trainerbattle_single TRAINER_BILLY, Route202_Text_TristanIntro, Route202_Text_TristanDefeat
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
