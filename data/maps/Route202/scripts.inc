Route202_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route202_OnTransition
	.byte 0

Route202_OnTransition:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route202_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
	end

Route202_EventScript_SetDawnGfx::
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
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
	.string "Hey! Your eyes met mine, so we\n"
	.string "have to battle!$"

Route202_Text_TristanDefeat:
	.string "Aww, I lost...$"

Route202_Text_TristanPost:
	.string "I'll train with my STARLY until\n"
	.string "we're unbeatable!$"

Route202_EventScript_Natalie::
	trainerbattle_single TRAINER_JOEY, Route202_Text_NatalieIntro, Route202_Text_NatalieDefeat
	msgbox Route202_Text_NataliePost, MSGBOX_AUTOCLOSE
	end

Route202_Text_NatalieIntro:
	.string "Oh, a new Trainer! Want to see how\n"
	.string "cute my POKéMON is?$"

Route202_Text_NatalieDefeat:
	.string "Cute AND tough... but not tough\n"
	.string "enough.$"

Route202_Text_NataliePost:
	.string "Winning isn't everything. Cuteness\n"
	.string "counts too!$"

Route202_EventScript_Logan::
	trainerbattle_single TRAINER_TIMMY, Route202_Text_LoganIntro, Route202_Text_LoganDefeat
	msgbox Route202_Text_LoganPost, MSGBOX_AUTOCLOSE
	end

Route202_Text_LoganIntro:
	.string "I found a BURMY in a tree! Let's\n"
	.string "see how it battles!$"

Route202_Text_LoganDefeat:
	.string "Its cloak wasn't enough\n"
	.string "protection...$"

Route202_Text_LoganPost:
	.string "BURMY changes its cloak depending\n"
	.string "on where it last battled. Neat,\l"
	.string "huh?$"

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
	.string "See the Trainers over there? If\n"
	.string "your eyes meet, you'll have to\l"
	.string "battle!$"
