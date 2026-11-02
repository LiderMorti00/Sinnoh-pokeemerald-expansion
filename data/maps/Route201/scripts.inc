Route201_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route201_OnTransition
	.byte 0

Route201_OnTransition:
	call_if_eq VAR_SINNOH_HAS_POKEMON, 1, Sinnoh_EventScript_SetPokemonMenu
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route201_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

Route201_EventScript_SetDawnGfx::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route201_EventScript_SetLucasGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	end
Route201_EventScript_SetLucasGfx:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

Route201_EventScript_Barry::
	lockall
	goto_if_eq VAR_SINNOH_STORY, 5, Route201_EventScript_BarryLake
	goto_if_ne VAR_SINNOH_STORY, 3, Route201_EventScript_BarryEnd
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route201_Text_PtTooSlow, MSGBOX_DEFAULT
	msgbox Route201_Text_PtLetsGetMoving, MSGBOX_DEFAULT
	msgbox Route201_Text_PtIveGotAnIdea, MSGBOX_DEFAULT
	msgbox Route201_Text_PtJustKeepDashing, MSGBOX_DEFAULT
	msgbox Route201_Text_PtHereGoes, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_WalkUp
	waitmovement 0
	playse SE_PIN
	msgbox Route201_Text_PtHoldIt, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_ExclamationMark
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE201_ROWAN
	addobject LOCALID_ROUTE201_ROWAN
	applymovement LOCALID_ROUTE201_ROWAN, Route201_Movement_RowanArrives
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_FaceLeft
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Route201_Text_PtYouHaveNoPokemon, MSGBOX_DEFAULT
	msgbox Route201_Text_PtRivalEllipsis, MSGBOX_DEFAULT
	msgbox Route201_Text_PtProfessorEllipsis, MSGBOX_DEFAULT
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Route201_Text_PtThisIsProfRowan, MSGBOX_DEFAULT
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Route201_Text_PtHmmWhatToDo, MSGBOX_DEFAULT
	msgbox Route201_Text_PtYouLovePokemonDoYou, MSGBOX_YESNO
Route201_EventScript_PtLoveLoop:
	goto_if_eq VAR_RESULT, YES, Route201_EventScript_PtLoveYes
	msgbox Route201_Text_PtYoureNotMakingSense, MSGBOX_DEFAULT
	msgbox Route201_Text_PtIDidntCatchThat, MSGBOX_YESNO
	goto Route201_EventScript_PtLoveLoop
Route201_EventScript_PtLoveYes:
	msgbox Route201_Text_PtILovePokemonToo, MSGBOX_DEFAULT
	msgbox Route201_Text_PtIWillAskOnceAgain, MSGBOX_DEFAULT
Route201_EventScript_PtAnswer:
	msgbox Route201_Text_PtTheAnswerWillNeverChange, MSGBOX_DEFAULT
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Route201_Text_PtRightPlayer, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route201_EventScript_PtRight
	msgbox Route201_Text_PtThatJokesGettingOld, MSGBOX_DEFAULT
	goto Route201_EventScript_PtAnswer
Route201_EventScript_PtRight:
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_FaceLeft
	waitmovement 0
	msgbox Route201_Text_PtItWorriesMe, MSGBOX_DEFAULT
	msgbox Route201_Text_PtGiveAPokemonToMyFriend, MSGBOX_DEFAULT
	msgbox Route201_Text_PtEntrustYouWithPokemon, MSGBOX_DEFAULT
	closemessage
	addobject LOCALID_ROUTE201_DAWN
	applymovement LOCALID_ROUTE201_DAWN, Route201_Movement_DawnArrives
	waitmovement 0
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route201_EventScript_PtBrief_L
	msgbox Route201_Text_PtDawnBriefcase, MSGBOX_DEFAULT
	goto Route201_EventScript_PtBrief_N
Route201_EventScript_PtBrief_L:
	msgbox Route201_Text_PtLucasBriefcase, MSGBOX_DEFAULT
Route201_EventScript_PtBrief_N:
	closemessage
	msgbox Route201_Text_PtPeopleShouldMeetPokemon, MSGBOX_DEFAULT
	msgbox Route201_Text_PtGoOnChooseAPokemon, MSGBOX_DEFAULT
	msgbox Route201_Text_PtICantBelieveIt, MSGBOX_DEFAULT
	msgbox Route201_Text_PtYouCanChooseFirst, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	special ChooseStarter
	setflag FLAG_SYS_POKEMON_GET
	setvar VAR_SINNOH_HAS_POKEMON, 1
	switch VAR_STARTER_MON
	case 1, Route201_EventScript_PtBufPiplup
	case 2, Route201_EventScript_PtBufTurtwig
	bufferspeciesname STR_VAR_1, SPECIES_CHIMCHAR
	goto Route201_EventScript_PtPicked
Route201_EventScript_PtBufPiplup:
	bufferspeciesname STR_VAR_1, SPECIES_PIPLUP
	goto Route201_EventScript_PtPicked
Route201_EventScript_PtBufTurtwig:
	bufferspeciesname STR_VAR_1, SPECIES_TURTWIG
Route201_EventScript_PtPicked:
	msgbox Route201_Text_PtImPickingThisStarter, MSGBOX_DEFAULT
	msgbox Route201_Text_PtIHopeYoullDoWell, MSGBOX_DEFAULT
	msgbox Route201_Text_PtComeSeeMeInSandgemTown, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE201_ROWAN, Route201_Movement_RowanLeaves
	waitmovement 0
	removeobject LOCALID_ROUTE201_ROWAN
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route201_EventScript_PtWait_L
	msgbox Route201_Text_PtDawnWaitForMe, MSGBOX_DEFAULT
	goto Route201_EventScript_PtWait_N
Route201_EventScript_PtWait_L:
	msgbox Route201_Text_PtLucasWaitForMe, MSGBOX_DEFAULT
Route201_EventScript_PtWait_N:
	closemessage
	applymovement LOCALID_ROUTE201_DAWN, Route201_Movement_DawnLeaves
	waitmovement 0
	removeobject LOCALID_ROUTE201_DAWN
	setflag FLAG_HIDE_ROUTE201_ROWAN
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_FacePlayer
	waitmovement 0
	msgbox Route201_Text_PtProfRowansReallyNice, MSGBOX_DEFAULT
Route201_EventScript_PtAskBattle:
	msgbox Route201_Text_PtOnlyOneThingToDo, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route201_EventScript_PtBattle
	msgbox Route201_Text_PtDontBeThatWay, MSGBOX_DEFAULT
	goto Route201_EventScript_PtAskBattle
Route201_EventScript_PtBattle:
	msgbox Route201_Text_PtIChallengeYouToABattle, MSGBOX_DEFAULT
	closemessage
	setflag B_FLAG_NO_WHITEOUT
	switch VAR_STARTER_MON
	case 0, Route201_EventScript_BattleChimchar
	case 1, Route201_EventScript_BattlePiplup
	case 2, Route201_EventScript_BattleTurtwig
	end

Route201_EventScript_BattleChimchar::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_CHIMCHAR, Route201_Text_BarryDefeat
	goto Route201_EventScript_AfterBattle
Route201_EventScript_BattlePiplup::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_PIPLUP, Route201_Text_BarryDefeat
	goto Route201_EventScript_AfterBattle
Route201_EventScript_BattleTurtwig::
	trainerbattle_no_intro TRAINER_BARRY_LAKE_TURTWIG, Route201_Text_BarryDefeat
	goto Route201_EventScript_AfterBattle

Route201_EventScript_AfterBattle::
	clearflag B_FLAG_NO_WHITEOUT
	specialvar VAR_RESULT, GetBattleOutcome
	special HealPlayerParty
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route201_EventScript_PtWon
	msgbox Route201_Text_PtIWonLetsGoHome, MSGBOX_DEFAULT
	goto Route201_EventScript_PtAfterMsg
Route201_EventScript_PtWon:
	msgbox Route201_Text_PtWhewLetsGoHome, MSGBOX_DEFAULT
Route201_EventScript_PtAfterMsg:
	closemessage
	setvar VAR_SINNOH_STORY, 4
	warp MAP_TWINLEAF_TOWN_MAIN_HOUSE_1F, 2, 6
	waitstate
	releaseall
	end

Route201_EventScript_BarryLake::
	applymovement LOCALID_ROUTE201_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route201_Text_PtLetsCatchThatLegendary, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ROUTE201_BARRY, Route201_Movement_BarryToLake
	waitmovement 0
	removeobject LOCALID_ROUTE201_BARRY
	setflag FLAG_HIDE_ROUTE201_BARRY
	setvar VAR_SINNOH_STORY, 6
Route201_EventScript_BarryEnd::
	releaseall
	end

Route201_EventScript_BlockSandgem::
	lockall
	msgbox Route201_Text_LakeFirst, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
	end

Route201_EventScript_Clerk::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ROUTE201_POTION, Route201_EventScript_ClerkAfter
	msgbox Route201_Text_PtPotion, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	setflag FLAG_RECEIVED_ROUTE201_POTION
	release
	end
Route201_EventScript_ClerkAfter::
	msgbox Route201_Text_PtFindMarts, MSGBOX_DEFAULT
	release
	end

Route201_Movement_BarryToLake:
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

Route201_Text_BarryDefeat:
	.string "What?! I'm fining you for being so\n"
	.string "strong!$"

Route201_Text_LakeFirst:
	.string "{RIVAL} went west, toward LAKE\n"
	.string "VERITY. I should follow him first.$"

Route201_EventScript_NoPokemonGrass::
	lockall
	msgbox Sinnoh_Text_NoPokemonGrass, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, Route201_EventScript_GrassBackDown
	goto_if_eq VAR_RESULT, DIR_SOUTH, Route201_EventScript_GrassBackUp
	goto_if_eq VAR_RESULT, DIR_WEST, Route201_EventScript_GrassBackRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto Route201_EventScript_GrassBackEnd

Route201_EventScript_GrassBackDown::
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto Route201_EventScript_GrassBackEnd

Route201_EventScript_GrassBackUp::
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto Route201_EventScript_GrassBackEnd

Route201_EventScript_GrassBackRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight

Route201_EventScript_GrassBackEnd::
	waitmovement 0
	releaseall
	end

Sinnoh_Text_NoPokemonGrass:
	.string "Wild POKéMON live in tall grass.\n"
	.string "It's too dangerous to go in\l"
	.string "without a POKéMON of your own!$"

Route201_EventScript_Sign1::
	msgbox Route201_Text_Sign1, MSGBOX_SIGN
	end

Route201_Text_Sign1:
	.string "ROUTE 201\p"
	.string "West: LAKE VERITY South: TWINLEAF\n"
	.string "TOWN East: SANDGEM TOWN$"

Route201_EventScript_Sign2::
	msgbox Route201_Text_Sign2, MSGBOX_SIGN
	end

Route201_Text_Sign2:
	.string "TRAINER TIPS\p"
	.string "Press START to open the menu. You\n"
	.string "can check your POKéMON and your\l"
	.string "BAG there.$"

Route201_EventScript_Sign3::
	msgbox Route201_Text_Sign3, MSGBOX_SIGN
	end

Route201_Text_Sign3:
	.string "Beware of tall grass! Wild POKéMON\n"
	.string "may jump out at any time.$"

Route201_EventScript_PtNpc1::
	msgbox Route201_Text_PtNpc1, MSGBOX_NPC
	end

Route201_Text_PtNpc1:
	.string "Wild POKéMON lurk in tall grass. They\n"
	.string "can come bursting out at any time.\p"
	.string "So, if you're wanting to battle wild\n"
	.string "POKéMON, just walk in tall grass.\p"
	.string "If you want to avoid wild POKéMON,\n"
	.string "then stay out of the tall grass.$"

Route201_EventScript_PtNpc2::
	msgbox Route201_Text_PtNpc2, MSGBOX_NPC
	end

Route201_Text_PtNpc2:
	.string "That ledge is one way. Jump down for a\n"
	.string "shortcut to TWINLEAF TOWN!$"

Route201_EventScript_PtNpc3::
	msgbox Route201_Text_PtNpc3, MSGBOX_NPC
	end

Route201_Text_PtNpc3:
	.string "If your POKéMON's health--that's its\n"
	.string "HP--is getting low, you should go home\l"
	.string "and get some rest.$"

Route201_Movement_RowanArrives:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route201_Movement_DawnArrives:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route201_Movement_RowanLeaves:
	walk_right
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
	walk_left
	step_end

Route201_Movement_DawnLeaves:
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
	step_end

Sinnoh_EventScript_SetPokemonMenu::
	setflag FLAG_SYS_POKEMON_GET
	return

Route201_Text_PtTooSlow:
	.string "Too slow!$"

Route201_Text_PtLetsGetMoving:
	.string "{RIVAL}: All right! Let’s get moving\n"
	.string "to Prof. Rowan’s lab.$"

Route201_Text_PtIveGotAnIdea:
	.string "{RIVAL}: ... ...\p"
	.string "What? Don’t go into the grass, right?\p"
	.string "No worries! No problem!\p"
	.string "It doesn’t matter that we don’t have\n"
	.string "any POKéMON.\p"
	.string "Trust me on this one. I’ve got an idea!\p"
	.string "Now listen. You know how wild POKéMON\n"
	.string "jump out when you go into tall grass?$"

Route201_Text_PtJustKeepDashing:
	.string "So, what you do is, you scoot over to\n"
	.string "the next patch of grass before any\p"
	.string "wild POKéMON can appear!\p"
	.string "If we just keep dashing, we can get to\n"
	.string "Sandgem Town without running into\p"
	.string "wild POKéMON!\p"
	.string "OK, stick with me!$"

Route201_Text_PtHereGoes:
	.string "OK, here goes!\p"
	.string "On your marks...$"

Route201_Text_PtHoldIt:
	.string "Hold it!$"

Route201_Text_PtRivalEllipsis:
	.string "{RIVAL}: ... ...$"

Route201_Text_PtThisIsProfRowan:
	.string "{RIVAL}: Hey, {PLAYER}. This old guy...\p"
	.string "It’s Prof. Rowan, isn’t it? What’s he\n"
	.string "doing here...?$"

Route201_Text_PtYoureNotMakingSense:
	.string "{RIVAL}: Whoa, hold up! You’re not\n"
	.string "making any sense here!$"

Route201_Text_PtILovePokemonToo:
	.string "{RIVAL}: Me, too! I love POKéMON,\n"
	.string "too!$"

Route201_Text_PtTheAnswerWillNeverChange:
	.string "{RIVAL}: What?! You can ask a\n"
	.string "hundred times!\p"
	.string "The answer will never change!\p"
	.string "We’ll both answer a hundred times, we\n"
	.string "love POKéMON!$"

Route201_Text_PtRightPlayer:
	.string "Right, {PLAYER}?$"

Route201_Text_PtThatJokesGettingOld:
	.string "{RIVAL}: ... That joke’s getting old!$"

Route201_Text_PtGiveAPokemonToMyFriend:
	.string "{RIVAL}: ...Uh... Well, I, uh...\p"
	.string "... ...\p"
	.string "Well, then forget about me, but give a\n"
	.string "POKéMON to my friend here!\p"
	.string "I mean, it was me who tried to go into\n"
	.string "the tall grass and all...$"

Route201_Text_PtICantBelieveIt:
	.string "{RIVAL}: Really?! Prof. Rowan!\p"
	.string "I can’t believe it! I’m so happy now\n"
	.string "that I can’t keep a straight face!$"

Route201_Text_PtYouCanChooseFirst:
	.string "Hey, {PLAYER}. You can choose first.\p"
	.string "Hey, I’m practically a grown-up. I have\n"
	.string "to show some class here.$"

Route201_Text_PtProfRowansReallyNice:
	.string "{RIVAL}: How do you like that? Prof.\n"
	.string "Rowan’s really nice.\p"
	.string "On TV, he seems so stern and scary.$"

Route201_Text_PtOnlyOneThingToDo:
	.string "Heheh, {PLAYER}! We’ve both got\n"
	.string "POKéMON now.\p"
	.string "There’s only one thing to do, right? Are\n"
	.string "you up for this?$"

Route201_Text_PtDontBeThatWay:
	.string "{RIVAL}: What’s with that attitude?\n"
	.string "Don’t be that way!$"

Route201_Text_PtIChallengeYouToABattle:
	.string "{RIVAL}: I’ve always wanted to say\n"
	.string "this...\p"
	.string "The time has finally come!\p"
	.string "{PLAYER}! I challenge you to a battle!$"

Route201_Text_PtWhewLetsGoHome:
	.string "{RIVAL}: Whew! Let’s go home.\p"
	.string "I’m beat after that battle. My POKéMON\n"
	.string "needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_Text_PtIWonLetsGoHome:
	.string "{RIVAL}: Aha... Ahaha... I won? I won!\p"
	.string "But that battle, it could’ve gone\n"
	.string "either way. It was that close!\p"
	.string "I can tell you one thing: battling is\n"
	.string "awesomely fun!\p"
	.string "OK, let’s go home.\p"
	.string "I’m beat after that battle. My POKéMON\n"
	.string "needs rest, too.\p"
	.string "See ya, {PLAYER}!$"

Route201_Text_PtLetsCatchThatLegendary:
	.string "{RIVAL}: Too slow! {PLAYER}, I’m sick\n"
	.string "of waiting!\p"
	.string "I’m going to go see Prof. Rowan, so I\n"
	.string "can thank him properly.\p"
	.string "So, I had this great idea. Listen up,\n"
	.string "OK?\p"
	.string "You know that lake where we always\n"
	.string "play at?\p"
	.string "You know how they say a legendary\n"
	.string "POKéMON lives there?\p"
	.string "You guessed it! Let’s catch that\n"
	.string "POKéMON.\p"
	.string "That’ll make Prof. Rowan happy. I’m sure\n"
	.string "of that!$"

Route201_Text_PtImPickingThisStarter:
	.string "{RIVAL}: Then, I choose you! I’m\n"
	.string "picking this {STR_VAR_1}!$"

Route201_Text_PtHmmWhatToDo:
	.string "Professor: ... ...\p"
	.string "They tried to go into the tall grass\n"
	.string "because they wanted POKéMON...\p"
	.string "Hmm... What to do...?\p"
	.string "Their world would surely change if they\n"
	.string "were to meet POKéMON...\p"
	.string "Is it right for me to put them on that\n"
	.string "path...?\p"
	.string "... ...$"

Route201_Text_PtYouHaveNoPokemon:
	.string "Professor: You two don’t seem to have\n"
	.string "any POKéMON between you?\p"
	.string "Then, what is the meaning of going into\n"
	.string "the tall grass?!$"

Route201_Text_PtProfessorEllipsis:
	.string "Professor: ... ...\p"
	.string "... ...$"

Route201_Text_PtYouLovePokemonDoYou:
	.string "Rowan: You two. You truly love POKéMON,\n"
	.string "do you?$"

Route201_Text_PtIDidntCatchThat:
	.string "Professor: Er-hem!\p"
	.string "I didn’t quite catch that, so I will ask\n"
	.string "you again.\p"
	.string "You two. You truly love POKéMON, do\n"
	.string "you?$"

Route201_Text_PtIWillAskOnceAgain:
	.string "Professor: I will ask you once again.\p"
	.string "You two. You truly love POKéMON, do\n"
	.string "you?$"

Route201_Text_PtItWorriesMe:
	.string "Professor: ...A pair of reckless kids\n"
	.string "who foolishly try to enter tall grass\p"
	.string "without POKéMON of their own...?\p"
	.string "It worries me what people like that\n"
	.string "would do with POKéMON.$"

Route201_Text_PtEntrustYouWithPokemon:
	.string "Professor: !\p"
	.string "How big of you...\p"
	.string "Very well, then! I will entrust you two\n"
	.string "with POKéMON!\p"
	.string "I apologize for putting you through\n"
	.string "that exercise.\p"
	.string "However!\p"
	.string "You must promise me that you will never\n"
	.string "recklessly endanger yourselves again.\p"
	.string "Now, then...\p"
	.string "Hm? Now, where...?$"

Route201_Text_PtPeopleShouldMeetPokemon:
	.string "Rowan: Hm!\p"
	.string "We exist side by side with POKéMON.\p"
	.string "There comes a time when people should\n"
	.string "meet POKéMON.\p"
	.string "There is a world that should be\n"
	.string "explored together.\p"
	.string "For them, today is that time. The place,\n"
	.string "right here.$"

Route201_Text_PtIHopeYoullDoWell:
	.string "Rowan: Very well! Both of you have\n"
	.string "chosen a good POKéMON, it seems.\p"
	.string "Now, listen well!\p"
	.string "The POKéMON you have been entrusted\n"
	.string "with are unfamiliar with the world.\p"
	.string "In that regard, they’re much like you.\p"
	.string "As fellow newcomers to the world, I\n"
	.string "hope you’ll do well together.$"

Route201_Text_PtComeSeeMeInSandgemTown:
	.string "Rowan: If you have any trouble, come\n"
	.string "see me at my lab in Sandgem Town.\p"
	.string "And now, we’ll be on our way.$"

Route201_Text_PtGoOnChooseAPokemon:
	.string "Rowan: Go on! Open the briefcase and\n"
	.string "choose a POKéMON!$"

Route201_Text_PtDawnBriefcase:
	.string "Dawn: Professor Rowan.\p"
	.string "You left your briefcase at the lake!\p"
	.string "Oh? Is something wrong here?\p"
	.string "Rowan: Ah! There it is! Dawn, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own POKéMON.\p"
	.string "Dawn: Pardon?!\p"
	.string "Those POKéMON are hard to replace. Are\n"
	.string "you sure about giving them away?$"

Route201_Text_PtLucasBriefcase:
	.string "Lucas: Professor Rowan!\p"
	.string "You left your briefcase behind at the\n"
	.string "lake.\p"
	.string "Is something wrong here?\p"
	.string "Rowan: Ah! There it is! Lucas, nice work.\p"
	.string "What I was about to do was to entrust\n"
	.string "these two with their own POKéMON.\p"
	.string "Lucas: Wha...?!\p"
	.string "Those POKéMON are crucial. You’re\n"
	.string "giving them away?$"

Route201_Text_PtDawnWaitForMe:
	.string "Dawn: Professor! Wait for me, please!\p"
	.string "I’m sorry... Please let me pass.$"

Route201_Text_PtLucasWaitForMe:
	.string "Lucas: Professor! Wait for me!\p"
	.string "Uh, sorry, folks.$"

Route201_Text_PtPotion:
	.string "Hi! I work at a POKéMON Mart.\p"
	.string "Did you know that a POKéMON’s health is\n"
	.string "measured by Hit Points (HP)?\p"
	.string "If a POKéMON runs out of HP, it faints\n"
	.string "and can’t battle anymore.\p"
	.string "If a POKéMON’s HP gets low, you should\n"
	.string "heal it with a Potion.\p"
	.string "Here, let me give you a Potion as a free\n"
	.string "sample. First one’s free!\p"
	.string "It will automatically go in the Medicine\n"
	.string "Pocket of your Bag.$"

Route201_Text_PtFindMarts:
	.string "You can find a POKéMON Mart in cities\n"
	.string "and most major towns.$"

