LakeVerity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LakeVerity_OnTransitionSN
	.byte 0

LakeVerity_EventScript_Scene::
	lockall
	msgbox LakeVerity_Text_Cyrus, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_LAKE_CYRUS, Common_Movement_FaceDown
	waitmovement 0
	msgbox LakeVerity_Text_Cyrus2, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_LAKE_CYRUS
	fadescreenswapbuffers FADE_FROM_BLACK
	playmoncry SPECIES_MESPRIT, CRY_MODE_NORMAL
	waitmoncry
	msgbox LakeVerity_Text_Cry, MSGBOX_DEFAULT
	msgbox LakeVerity_Text_Barry, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_LAKE_BARRY
	setflag FLAG_HIDE_LAKE_VERITY_ROWAN
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 7
	releaseall
	end

LakeVerity_Text_Cyrus:
	.string "???: ...This lake is said to be\n"
	.string "home to a POKéMON of emotion.\p"
	.string "Emotion... A useless burden that\n"
	.string "only brings conflict. One day I\l"
	.string "will create a world free of it.\p"
	.string "And time and space will be mine to\n"
	.string "command.$"

LakeVerity_Text_Cyrus2:
	.string "???: ...Children. Step aside.$"

LakeVerity_Text_Cry:
	.string "Something cried out from the\n"
	.string "middle of the lake...$"

LakeVerity_Text_Barry:
	.string "{RIVAL}: Did you hear that?! That\n"
	.string "has to be the legendary POKéMON!\p"
	.string "Ah! But we don't have any POKé\n"
	.string "BALLS! Argh!\p"
	.string "The Professor said to come to him\n"
	.string "if we needed anything. Let's go to\l"
	.string "SANDGEM!$"

Sinnoh_EventScript_BufferCounterpartName::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Sinnoh_EventScript_BufferDawn
	bufferstring STR_VAR_1, Sinnoh_Text_Lucas
	return

Sinnoh_EventScript_BufferDawn::
	bufferstring STR_VAR_1, Sinnoh_Text_Dawn
	return

Sinnoh_Text_Dawn:
	.string "DAWN$"

Sinnoh_Text_Lucas:
	.string "LUCAS$"

LakeVerity_EventScript_NoPokemonGrass::
	lockall
	msgbox Sinnoh_Text_NoPokemonGrass, MSGBOX_DEFAULT
	closemessage
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_eq VAR_RESULT, DIR_NORTH, LakeVerity_EventScript_GrassBackDown
	goto_if_eq VAR_RESULT, DIR_SOUTH, LakeVerity_EventScript_GrassBackUp
	goto_if_eq VAR_RESULT, DIR_WEST, LakeVerity_EventScript_GrassBackRight
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	goto LakeVerity_EventScript_GrassBackEnd

LakeVerity_EventScript_GrassBackDown::
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	goto LakeVerity_EventScript_GrassBackEnd

LakeVerity_EventScript_GrassBackUp::
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
	goto LakeVerity_EventScript_GrassBackEnd

LakeVerity_EventScript_GrassBackRight::
	applymovement LOCALID_PLAYER, Common_Movement_WalkRight

LakeVerity_EventScript_GrassBackEnd::
	waitmovement 0
	releaseall
	end

LakeVerity_OnTransitionSN:
	call LakeVerity_EventScript_SNGfx
	call LakeVerity_EventScript_SNVis_VERITY_ROWAN
	call LakeVerity_EventScript_SNVis_VERITY_MARS
	call LakeVerity_EventScript_SNVis_VERITY_GRUNT1
	call LakeVerity_EventScript_SNVis_VERITY_GRUNT2
	call LakeVerity_EventScript_SNVis_VERITY_GRUNT3
	call LakeVerity_EventScript_SNVis_VERITY_GRUNT4
	end

LakeVerity_EventScript_SNVis_VERITY_MARS:
	setflag FLAG_SN_HIDE_VERITY_MARS
	goto_if_lt VAR_SINNOH_STORY, 31, LakeVerity_EventScript_SNVis_VERITY_MARS_End
	goto_if_defeated TRAINER_BENJAMIN_4, LakeVerity_EventScript_SNVis_VERITY_MARS_End
	clearflag FLAG_SN_HIDE_VERITY_MARS
LakeVerity_EventScript_SNVis_VERITY_MARS_End:
	return

LakeVerity_EventScript_SNVis_VERITY_GRUNT1:
	setflag FLAG_SN_HIDE_VERITY_GRUNT1
	goto_if_lt VAR_SINNOH_STORY, 31, LakeVerity_EventScript_SNVis_VERITY_GRUNT1_End
	goto_if_defeated TRAINER_BENJAMIN_4, LakeVerity_EventScript_SNVis_VERITY_GRUNT1_End
	goto_if_defeated TRAINER_BENJAMIN_5, LakeVerity_EventScript_SNVis_VERITY_GRUNT1_End
	clearflag FLAG_SN_HIDE_VERITY_GRUNT1
LakeVerity_EventScript_SNVis_VERITY_GRUNT1_End:
	return

LakeVerity_EventScript_SNVis_VERITY_GRUNT2:
	setflag FLAG_SN_HIDE_VERITY_GRUNT2
	goto_if_lt VAR_SINNOH_STORY, 31, LakeVerity_EventScript_SNVis_VERITY_GRUNT2_End
	goto_if_defeated TRAINER_BENJAMIN_4, LakeVerity_EventScript_SNVis_VERITY_GRUNT2_End
	goto_if_defeated TRAINER_ABIGAIL_1, LakeVerity_EventScript_SNVis_VERITY_GRUNT2_End
	clearflag FLAG_SN_HIDE_VERITY_GRUNT2
LakeVerity_EventScript_SNVis_VERITY_GRUNT2_End:
	return

LakeVerity_EventScript_SNVis_VERITY_GRUNT3:
	setflag FLAG_SN_HIDE_VERITY_GRUNT3
	goto_if_lt VAR_SINNOH_STORY, 31, LakeVerity_EventScript_SNVis_VERITY_GRUNT3_End
	goto_if_defeated TRAINER_BENJAMIN_4, LakeVerity_EventScript_SNVis_VERITY_GRUNT3_End
	goto_if_defeated TRAINER_ABIGAIL_2, LakeVerity_EventScript_SNVis_VERITY_GRUNT3_End
	clearflag FLAG_SN_HIDE_VERITY_GRUNT3
LakeVerity_EventScript_SNVis_VERITY_GRUNT3_End:
	return

LakeVerity_EventScript_SNVis_VERITY_GRUNT4:
	setflag FLAG_SN_HIDE_VERITY_GRUNT4
	goto_if_lt VAR_SINNOH_STORY, 31, LakeVerity_EventScript_SNVis_VERITY_GRUNT4_End
	goto_if_defeated TRAINER_BENJAMIN_4, LakeVerity_EventScript_SNVis_VERITY_GRUNT4_End
	goto_if_defeated TRAINER_ABIGAIL_3, LakeVerity_EventScript_SNVis_VERITY_GRUNT4_End
	clearflag FLAG_SN_HIDE_VERITY_GRUNT4
LakeVerity_EventScript_SNVis_VERITY_GRUNT4_End:
	return

LakeVerity_EventScript_SNVERITY_MARS::
	trainerbattle_single TRAINER_BENJAMIN_4, LakeVerity_EventScript_SNVERITY_MARS_Intro, LakeVerity_EventScript_SNVERITY_MARS_Defeat, LakeVerity_EventScript_SNVERITY_MARS_Won
	msgbox LakeVerity_EventScript_SNVERITY_MARS_Post, MSGBOX_AUTOCLOSE
	end

LakeVerity_EventScript_SNVERITY_MARS_Won:
	lock
	msgbox LakeVerity_EventScript_SNVERITY_MARS_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VERITY_MARS
	fadescreen FADE_FROM_BLACK
	release
	end
LakeVerity_EventScript_SNVERITY_MARS_Intro:
	.string "Mars: That face...! It brings back bad\n"
	.string "memories!\p"
	.string "I’m talking about the windworks!\p"
	.string "I caught a whole lot of trouble for\n"
	.string "that little incident.\p"
	.string "What’s with that look on your face?\n"
	.string "You do remember me, don’t you?\p"
	.string "Fine, whatever. I’ll tell you who I am\n"
	.string "again!\p"
	.string "I’m Mars, one of Team Galactic’s\n"
	.string "Commanders.\p"
	.string "So, what is it? Are you some\n"
	.string "lovey-dovey couple to the rescue?\p"
	.string "Not a chance! Not even a teeny one!\n"
	.string "You’re all going down!$"

LakeVerity_EventScript_SNVERITY_MARS_Defeat:
	.string "Mars: I lost again...$"

LakeVerity_EventScript_SNVERITY_MARS_Post:
	.string "I lost again...\p"
	.string "So, first the windworks, and now Lake\n"
	.string "Verity that I owe you for!\p"
	.string "This shouldn’t be happening to Team\n"
	.string "Galactic’s Commander...\p"
	.string "...Calm down, Mars... I’ve done my part in\n"
	.string "all of this...\p"
	.string "My mission was to transport the lake’s\n"
	.string "POKéMON to our HQ...\p"
	.string "...That’s right! I accomplished my\n"
	.string "mission without a problem!$"

LakeVerity_EventScript_SNVERITY_GRUNT1::
	trainerbattle_single TRAINER_BENJAMIN_5, LakeVerity_EventScript_SNVERITY_GRUNT1_Intro, LakeVerity_EventScript_SNVERITY_GRUNT1_Defeat, LakeVerity_EventScript_SNVERITY_GRUNT1_Won
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT1_Post, MSGBOX_AUTOCLOSE
	end

LakeVerity_EventScript_SNVERITY_GRUNT1_Won:
	lock
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT1_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VERITY_GRUNT1
	fadescreen FADE_FROM_BLACK
	release
	end
LakeVerity_EventScript_SNVERITY_GRUNT1_Intro:
	.string "Team Galactic is busy here! Get lost,\n"
	.string "kid!$"

LakeVerity_EventScript_SNVERITY_GRUNT1_Defeat:
	.string "Gah! Not again!$"

LakeVerity_EventScript_SNVERITY_GRUNT1_Post:
	.string "Mars will deal with you!$"

LakeVerity_EventScript_SNVERITY_GRUNT2::
	trainerbattle_single TRAINER_ABIGAIL_1, LakeVerity_EventScript_SNVERITY_GRUNT2_Intro, LakeVerity_EventScript_SNVERITY_GRUNT2_Defeat, LakeVerity_EventScript_SNVERITY_GRUNT2_Won
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT2_Post, MSGBOX_AUTOCLOSE
	end

LakeVerity_EventScript_SNVERITY_GRUNT2_Won:
	lock
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT2_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VERITY_GRUNT2
	fadescreen FADE_FROM_BLACK
	release
	end
LakeVerity_EventScript_SNVERITY_GRUNT2_Intro:
	.string "Team Galactic is busy here! Get lost,\n"
	.string "kid!$"

LakeVerity_EventScript_SNVERITY_GRUNT2_Defeat:
	.string "Gah! Not again!$"

LakeVerity_EventScript_SNVERITY_GRUNT2_Post:
	.string "Mars will deal with you!$"

LakeVerity_EventScript_SNVERITY_GRUNT3::
	trainerbattle_single TRAINER_ABIGAIL_2, LakeVerity_EventScript_SNVERITY_GRUNT3_Intro, LakeVerity_EventScript_SNVERITY_GRUNT3_Defeat, LakeVerity_EventScript_SNVERITY_GRUNT3_Won
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT3_Post, MSGBOX_AUTOCLOSE
	end

LakeVerity_EventScript_SNVERITY_GRUNT3_Won:
	lock
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT3_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VERITY_GRUNT3
	fadescreen FADE_FROM_BLACK
	release
	end
LakeVerity_EventScript_SNVERITY_GRUNT3_Intro:
	.string "Team Galactic is busy here! Get lost,\n"
	.string "kid!$"

LakeVerity_EventScript_SNVERITY_GRUNT3_Defeat:
	.string "Gah! Not again!$"

LakeVerity_EventScript_SNVERITY_GRUNT3_Post:
	.string "Mars will deal with you!$"

LakeVerity_EventScript_SNVERITY_GRUNT4::
	trainerbattle_single TRAINER_ABIGAIL_3, LakeVerity_EventScript_SNVERITY_GRUNT4_Intro, LakeVerity_EventScript_SNVERITY_GRUNT4_Defeat, LakeVerity_EventScript_SNVERITY_GRUNT4_Won
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT4_Post, MSGBOX_AUTOCLOSE
	end

LakeVerity_EventScript_SNVERITY_GRUNT4_Won:
	lock
	msgbox LakeVerity_EventScript_SNVERITY_GRUNT4_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VERITY_GRUNT4
	fadescreen FADE_FROM_BLACK
	release
	end
LakeVerity_EventScript_SNVERITY_GRUNT4_Intro:
	.string "Team Galactic is busy here! Get lost,\n"
	.string "kid!$"

LakeVerity_EventScript_SNVERITY_GRUNT4_Defeat:
	.string "Gah! Not again!$"

LakeVerity_EventScript_SNVERITY_GRUNT4_Post:
	.string "Mars will deal with you!$"

LakeVerity_EventScript_SNGfx:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, LakeVerity_EventScript_SNGfxDawn
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SINNOH_LUCAS
	return
LakeVerity_EventScript_SNGfxDawn:
	setvar VAR_OBJ_GFX_ID_1, OBJ_EVENT_GFX_SINNOH_DAWN
	return

LakeVerity_EventScript_SNVis_VERITY_ROWAN:
	setflag FLAG_SN_HIDE_VERITY_ROWAN
	goto_if_lt VAR_SINNOH_STORY, 31, LakeVerity_EventScript_SNVis_VERITY_ROWAN_End
	goto_if_set FLAG_SN_DONE_VERITY_HELP, LakeVerity_EventScript_SNVis_VERITY_ROWAN_End
	clearflag FLAG_SN_HIDE_VERITY_ROWAN
LakeVerity_EventScript_SNVis_VERITY_ROWAN_End:
	return

LakeVerity_EventScript_SNRowanScene::
	goto_if_set FLAG_SN_HIDE_VERITY_ROWAN, LakeVerity_EventScript_SNRowanEnd
	goto_if_set FLAG_SN_DONE_VERITY_HELP, LakeVerity_EventScript_SNRowanEnd
	lockall
	applymovement LOCALID_SN_VERITY_ROWAN, Common_Movement_ExclamationMark
	waitmovement 0
	call LakeVerity_EventScript_SNRowanTalk
	setflag FLAG_SN_DONE_VERITY_HELP
	releaseall
LakeVerity_EventScript_SNRowanEnd:
	end

LakeVerity_EventScript_SNRowan::
	lock
	faceplayer
	call LakeVerity_EventScript_SNRowanTalk
	release
	end

LakeVerity_EventScript_SNRowanTalk:
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, LakeVerity_EventScript_SNRowanLucas
	msgbox LakeVerity_Text_SNHelpDawn, MSGBOX_DEFAULT
	return
LakeVerity_EventScript_SNRowanLucas:
	msgbox LakeVerity_Text_SNHelpLucas, MSGBOX_DEFAULT
	return

LakeVerity_EventScript_SNCounterpart::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, LakeVerity_EventScript_SNCounterpartLucas
	msgbox LakeVerity_Text_SNDawn, MSGBOX_DEFAULT
	release
	end
LakeVerity_EventScript_SNCounterpartLucas:
	msgbox LakeVerity_Text_SNLucas, MSGBOX_DEFAULT
	release
	end
LakeVerity_Text_SNHelpDawn:
	.string "Rowan: Ah, {PLAYER}! What timing!\p"
	.string "Those Team Galactic scoundrels are\n"
	.string "after the legendary POKéMON!\p"
	.string "You’ve got to help Dawn!$"

LakeVerity_Text_SNHelpLucas:
	.string "Rowan: Ah, {PLAYER}! What timing!\p"
	.string "Those Team Galactic scoundrels are\n"
	.string "after the legendary POKéMON!\p"
	.string "{PLAYER}, help us! You’ve got to help\n"
	.string "Lucas!$"

LakeVerity_Text_SNDawn:
	.string "Dawn: {PLAYER}! It’s T-Team Galactic!\p"
	.string "They’re taking the POKéMON of the\n"
	.string "lake...\p"
	.string "I... I couldn’t beat this person...$"

LakeVerity_Text_SNLucas:
	.string "Lucas: It’s Team Galactic! They took\n"
	.string "the POKéMON of the lake...\p"
	.string "This woman... I lost to her, but just\n"
	.string "barely!$"
