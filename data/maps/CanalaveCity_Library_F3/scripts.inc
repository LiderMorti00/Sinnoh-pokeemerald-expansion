CanalaveCity_Library_F3_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CanalaveCity_Library_F3_OnTransitionSN
	.byte 0

CanalaveCity_Library_F3_Text_PtNpc1_0:
	.string "Every book contains someone’s\n"
	.string "memories of various places and times.\p"
	.string "Libraries aren’t just buildings where\n"
	.string "books are kept, you know.\p"
	.string "They’re where different places and\n"
	.string "times are gathered together.$"

CanalaveCity_Library_F3_Text_PtNpc1_1:
	.string "W-was that an earthquake? I didn’t\n"
	.string "imagine it?$"

CanalaveCity_Library_F3_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_3, CanalaveCity_Library_F3_EventScript_PtNpc1_WasThatAnEarthquake
	msgbox CanalaveCity_Library_F3_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtNpc1_WasThatAnEarthquake:
	msgbox CanalaveCity_Library_F3_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_Text_PtNpc2_0:
	.string "Someone’s always checked out the book\n"
	.string "I want to read...$"

CanalaveCity_Library_F3_Text_PtNpc2_1:
	.string "I’m feeling wobbly...\p"
	.string "Even though the tremor has ended, my\n"
	.string "knees still feel like jelly...$"

CanalaveCity_Library_F3_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_3, CanalaveCity_Library_F3_EventScript_PtNpc2_ImFeelingWobbly
	msgbox CanalaveCity_Library_F3_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtNpc2_ImFeelingWobbly:
	msgbox CanalaveCity_Library_F3_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtSign1::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign2::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign3::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohRegionsMythology
	end

CanalaveCity_Library_F3_EventScript_PtSign4::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohRegionsMythology
	end

CanalaveCity_Library_F3_EventScript_PtSign5::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohsMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign6::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohsMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign7::
	goto CanalaveCity_Library_F3_EventScript_SNBookVeilstonesMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign8::
	goto CanalaveCity_Library_F3_EventScript_SNBookVeilstonesMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign9::
	goto CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory
	end

CanalaveCity_Library_F3_EventScript_PtSign10::
	goto CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory
	end

CanalaveCity_Library_F3_EventScript_PtSign11::
	goto CanalaveCity_Library_F3_EventScript_SNBookHorrificMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign12::
	goto CanalaveCity_Library_F3_EventScript_SNBookHorrificMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign13::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories
	end

CanalaveCity_Library_F3_EventScript_PtSign14::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories
	end

CanalaveCity_Library_F3_EventScript_PtSign15::
	msgbox CanalaveCity_Library_F3_Text_PtSign15, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign15:
	.string "On this floor, you will find many books\n"
	.string "on the myths and legends of\p"
	.string "the Sinnoh region.$"

CanalaveCity_Library_F3_EventScript_PtSign16::
	goto CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory
	end

CanalaveCity_Library_F3_EventScript_PtSign17::
	goto CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory
	end

CanalaveCity_Library_F3_EventScript_PtSign18::
	goto CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory
	end

CanalaveCity_Library_F3_EventScript_PtSign19::
	goto CanalaveCity_Library_F3_EventScript_SNBookHorrificMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign20::
	goto CanalaveCity_Library_F3_EventScript_SNBookHorrificMyth
	end

CanalaveCity_Library_F3_EventScript_PtSign21::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories
	end

CanalaveCity_Library_F3_EventScript_PtSign22::
	goto CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories
	end

CanalaveCity_Library_F3_OnTransitionSN:
	call CanalaveCity_Library_F3_EventScript_SNGfx
	call CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN
	end

CanalaveCity_Library_F3_EventScript_SNGfx:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, CanalaveCity_Library_F3_EventScript_SNGfxDawn
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	return
CanalaveCity_Library_F3_EventScript_SNGfxDawn:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	return

CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN:
	setflag FLAG_SN_HIDE_LIB_ROWAN
	goto_if_unset FLAG_BADGE06_GET, CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN_End
	goto_if_ge VAR_SINNOH_STORY, 31, CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN_End
	clearflag FLAG_SN_HIDE_LIB_ROWAN
CanalaveCity_Library_F3_EventScript_SNVis_LIB_ROWAN_End:
	return

CanalaveCity_Library_F3_EventScript_SNEnter0::
CanalaveCity_Library_F3_EventScript_SNEnter1::
	goto_if_set FLAG_SN_HIDE_LIB_ROWAN, CanalaveCity_Library_F3_EventScript_SNEnter_End
	lockall
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLOverHere, MSGBOX_DEFAULT
	closemessage
	sn_walktoplayer LOCALID_SN_LIB_BARRY, SN_SPEED_FAST, 0, 0
	waitmovement LOCALID_SN_LIB_BARRY
	sn_walkto LOCALID_SN_LIB_BARRY, 7, 7, SN_SPEED_NORMAL, DIR_NORTH, 0, 0
	sn_walkto OBJ_EVENT_ID_PLAYER, 6, 7, SN_SPEED_NORMAL, DIR_NORTH, 0, 1
	waitmovement LOCALID_SN_LIB_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto CanalaveCity_Library_F3_EventScript_SNRowan
CanalaveCity_Library_F3_EventScript_SNEnter_End:
	end

CanalaveCity_Library_F3_EventScript_SNRowan::
	lockall
	applymovement LOCALID_SN_LIB_ROWAN, Common_Movement_FaceDown
	applymovement LOCALID_SN_LIB_COUNTERPART, Common_Movement_FaceDown
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLOutta, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_LIB_BARRY, CanalaveCity_Library_F3_Movement_SNRunUpTurn
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLDots, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_Text_SNLGetIt, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_FaceUp
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLEveryone, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_LIB_ROWAN, CanalaveCity_Library_F3_Movement_SNRowanPace
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLStudy, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_LIB_ROWAN, CanalaveCity_Library_F3_Movement_SNRowanBack
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLHelp, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_Text_SNLNoDex, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_Text_SNLBolted, MSGBOX_DEFAULT
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, CanalaveCity_Library_F3_EventScript_SNL_CountL
	msgbox CanalaveCity_Library_F3_Text_SNLCountD, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F3_EventScript_SNL_CountN
CanalaveCity_Library_F3_EventScript_SNL_CountL:
	msgbox CanalaveCity_Library_F3_Text_SNLCountL, MSGBOX_DEFAULT
CanalaveCity_Library_F3_EventScript_SNL_CountN:
	msgbox CanalaveCity_Library_F3_Text_SNLIndiv, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_LIB_ROWAN, Common_Movement_FaceLeft
	applymovement LOCALID_SN_LIB_COUNTERPART, Common_Movement_FaceRight
	waitmovement 0
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, CanalaveCity_Library_F3_EventScript_SNL_VerityL
	msgbox CanalaveCity_Library_F3_Text_SNLVerityD, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F3_EventScript_SNL_VerityN
CanalaveCity_Library_F3_EventScript_SNL_VerityL:
	msgbox CanalaveCity_Library_F3_Text_SNLVerityL, MSGBOX_DEFAULT
CanalaveCity_Library_F3_EventScript_SNL_VerityN:
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, CanalaveCity_Library_F3_EventScript_SNL_DoL
	msgbox CanalaveCity_Library_F3_Text_SNLDoD, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F3_EventScript_SNL_DoN
CanalaveCity_Library_F3_EventScript_SNL_DoL:
	msgbox CanalaveCity_Library_F3_Text_SNLDoL, MSGBOX_DEFAULT
CanalaveCity_Library_F3_EventScript_SNL_DoN:
	closemessage
	applymovement LOCALID_SN_LIB_ROWAN, Common_Movement_FaceRight
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_FaceLeft
	applymovement LOCALID_SN_LIB_COUNTERPART, Common_Movement_FaceDown
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLAcuity, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_Text_SNLYeah, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_LIB_ROWAN, Common_Movement_FaceDown
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_FaceUp
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLValor, MSGBOX_DEFAULT
	closemessage
	playse SE_M_EXPLOSION
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 3
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special ShakeCamera
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	msgbox CanalaveCity_Library_F3_Text_SNLBoom, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_Text_SNLUnharmed, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_Text_SNLWhat, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_LIB_BARRY, 8, 4, SN_SPEED_FAST, DIR_NORTH, 0, 0
	waitmovement LOCALID_SN_LIB_BARRY
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLNews, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_LIB_BARRY, Common_Movement_FaceDown
	waitmovement 0
	msgbox CanalaveCity_Library_F3_Text_SNLExplosion, MSGBOX_DEFAULT
	msgbox CanalaveCity_Library_F3_Text_SNLOutside, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_LIB_COUNTERPART, 1, 2, SN_SPEED_NORMAL, 0, 0, 0
	sn_walkto LOCALID_SN_LIB_BARRY, 2, 2, SN_SPEED_FAST, 0, 0, 1
	waitmovement LOCALID_SN_LIB_BARRY
	removeobject LOCALID_SN_LIB_BARRY
	waitmovement LOCALID_SN_LIB_COUNTERPART
	removeobject LOCALID_SN_LIB_COUNTERPART
	sn_walkto LOCALID_SN_LIB_ROWAN, 2, 3, SN_SPEED_NORMAL, DIR_SOUTH, 0, 2
	waitmovement LOCALID_SN_LIB_ROWAN
	sn_playerface LOCALID_SN_LIB_ROWAN, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox CanalaveCity_Library_F3_Text_SNLLeave, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_LIB_ROWAN, 1, 2, SN_SPEED_NORMAL, 0, 0, 2
	waitmovement LOCALID_SN_LIB_ROWAN
	playse SE_EXIT
	removeobject LOCALID_SN_LIB_ROWAN
	setflag FLAG_SN_HIDE_LIB_ROWAN
	setvar VAR_SINNOH_STORY, 31
	setflag FLAG_SN_LAKE_VALOR_EXPLODED
	setflag FLAG_SN_LAKE_VALOR_EXPLODED_2
	setflag FLAG_SN_LAKE_VALOR_EXPLODED_3
	setflag FLAG_SN_LAKE_VALOR_EXPLODED_4
	releaseall
	end

CanalaveCity_Library_F3_Movement_SNRunUpTurn:
	walk_fast_up
	face_down
	step_end

CanalaveCity_Library_F3_Movement_SNRowanPace:
	walk_right
	face_down
	step_end

CanalaveCity_Library_F3_Movement_SNRowanBack:
	walk_left
	face_down
	step_end

CanalaveCity_Library_F3_Text_SNLOverHere:
	.string "{RIVAL}: Hey, {PLAYER}! Over here!\n"
	.string "This way!$"
CanalaveCity_Library_F3_Text_SNLOutta:
	.string "{RIVAL}: OK, gramps! I brought\n"
	.string "{PLAYER} like I said!\p"
	.string "All right, I’ll be outta here!$"
CanalaveCity_Library_F3_Text_SNLDots:
	.string "Rowan: ... ...\p"
	.string "... ...\p"
	.string "... ...$"
CanalaveCity_Library_F3_Text_SNLGetIt:
	.string "{RIVAL}: ...OK... I get it...$"
CanalaveCity_Library_F3_Text_SNLEveryone:
	.string "Rowan: Hm! Everyone’s here finally.\n"
	.string "{PLAYER}, everyone, listen.\p"
	.string "You may have forgotten already, but I\n"
	.string "study the evolution of POKéMON.$"
CanalaveCity_Library_F3_Text_SNLStudy:
	.string "But the more I study, the more\n"
	.string "mysteries appear and multiply.\p"
	.string "POKéMON that evolve, and those that\n"
	.string "don’t...\p"
	.string "What makes them different from each\n"
	.string "other?\p"
	.string "Do those that are immature as living\n"
	.string "beings evolve to ones more mature?\p"
	.string "If so, what do we make of the legendary\n"
	.string "POKéMON that don’t evolve?\p"
	.string "Are we to assume that the legendary\n"
	.string "POKéMON are complete as creatures?$"
CanalaveCity_Library_F3_Text_SNLHelp:
	.string "This is where you three come in.\p"
	.string "In the three lakes of Sinnoh, there are\n"
	.string "said to be mirage POKéMON.\p"
	.string "If we can obtain data on them, it may\n"
	.string "shed some light on how the\p"
	.string "process of POKéMON evolution works.\p"
	.string "I need help from each one of you on\n"
	.string "this grand undertaking.\p"
	.string "Help me find these POKéMON that are\n"
	.string "considered to be mirages.$"
CanalaveCity_Library_F3_Text_SNLNoDex:
	.string "{RIVAL}: What are you saying? I\n"
	.string "didn’t get a POKéDEX!$"
CanalaveCity_Library_F3_Text_SNLBolted:
	.string "Rowan: ...And who was it that bolted\n"
	.string "from the lab before I had a chance\p"
	.string "to give you a POKéDEX?\p"
	.string "But that’s water under the bridge!\p"
	.string "Seeing POKéMON with your own eyes is\n"
	.string "important for you in becoming a better\p"
	.string "Trainer, too.$"
CanalaveCity_Library_F3_Text_SNLCountD:
	.string "Dawn: You can count on me! It will help\n"
	.string "with my POKéDEX, too.\p"
	.string "{PLAYER}, you’ll go, too, won’t you?$"
CanalaveCity_Library_F3_Text_SNLCountL:
	.string "Lucas: You bet, Professor!\p"
	.string "This will add to the POKéDEX database\n"
	.string "and help advance your\p"
	.string "research.$"
CanalaveCity_Library_F3_Text_SNLIndiv:
	.string "Rowan: Hm! I would have made all of you\n"
	.string "go regardless... Anyway.\p"
	.string "Now, there are three lakes.\n"
	.string "Fortuitously, there are three of you.\p"
	.string "You should therefore split up and\n"
	.string "investigate the lakes individually.$"
CanalaveCity_Library_F3_Text_SNLVerityD:
	.string "Rowan: Dawn, you go to Lake Verity.$"
CanalaveCity_Library_F3_Text_SNLVerityL:
	.string "Rowan: Lucas, you go to Lake Verity.$"
CanalaveCity_Library_F3_Text_SNLDoD:
	.string "Dawn: Will do!$"
CanalaveCity_Library_F3_Text_SNLDoL:
	.string "Lucas: Yes, sir!$"
CanalaveCity_Library_F3_Text_SNLAcuity:
	.string "Rowan: {RIVAL}, I want you to\n"
	.string "investigate Lake Acuity.\p"
	.string "That would take you almost to\n"
	.string "Snowpoint City.\p"
	.string "The road there is harsh. I need a tough\n"
	.string "Trainer to go.$"
CanalaveCity_Library_F3_Text_SNLYeah:
	.string "{RIVAL}: Uh... Yeah, of course!\n"
	.string "Gramps, you know how to call it!\p"
	.string "You can tell I’m the hotness!\p"
	.string "And, you know what? I was going to\n"
	.string "catch those legendary POKéMON for\l"
	.string "you.\p"
	.string "You know, as thanks for giving us our\n"
	.string "POKéMON back on Route 201.\p"
	.string "...Even though I forgot completely\n"
	.string "about it until just now.$"
CanalaveCity_Library_F3_Text_SNLValor:
	.string "Rowan: Very well. I’m counting on you.\p"
	.string "And that leaves {PLAYER} with Lake\n"
	.string "Valor.\p"
	.string "The lake is between Veilstone and\n"
	.string "Pastoria, if memory serves...$"
CanalaveCity_Library_F3_Text_SNLBoom:
	.string "DDDOOOMMM!!$"
CanalaveCity_Library_F3_Text_SNLUnharmed:
	.string "Rowan: ... ...Has it stopped?\p"
	.string "Are all of you unharmed?$"
CanalaveCity_Library_F3_Text_SNLWhat:
	.string "{RIVAL}: What was that about?!\p"
	.string "No, wait, I mean, TV! The TV! News!\n"
	.string "Anything!$"
CanalaveCity_Library_F3_Text_SNLNews:
	.string "Announcer: What you’ve just witnessed\n"
	.string "is actual footage from the scene.\p"
	.string "It was taken by a cameraman who\n"
	.string "happened to be there.\p"
	.string "Newscaster: It’s certainly impressive.\p"
	.string "Who knows what the explosion could\n"
	.string "expose at the lake?$"
CanalaveCity_Library_F3_Text_SNLExplosion:
	.string "{RIVAL}: Gramps! They said it was an\n"
	.string "explosion?!$"
CanalaveCity_Library_F3_Text_SNLOutside:
	.string "Rowan: Hmm... But why at Lake Valor...?\p"
	.string "Let’s get outside. I’m concerned about\n"
	.string "the town.\p"
	.string "You kids, be careful going down the\n"
	.string "stairs.$"
CanalaveCity_Library_F3_Text_SNLLeave:
	.string "Rowan: {PLAYER}. You should leave now,\n"
	.string "too.\p"
	.string "...There may be aftershocks, however.\n"
	.string "Be alert always.$"
CanalaveCity_Library_F3_EventScript_SNRowan_T1:
	.string "Rowan: Hm! Everyone’s here finally.\n"
	.string "{PLAYER}, everyone, listen.\p"
	.string "You may have forgotten already, but I\n"
	.string "study the evolution of POKéMON.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T2:
	.string "This is where you three come in.\p"
	.string "In the three lakes of Sinnoh, there are\n"
	.string "said to be mirage POKéMON.\p"
	.string "If we can obtain data on them, it may\n"
	.string "shed some light on how the\p"
	.string "process of POKéMON evolution works.\p"
	.string "I need help from each one of you on\n"
	.string "this grand undertaking.\p"
	.string "Help me find these POKéMON that are\n"
	.string "considered to be mirages.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T3:
	.string "Rowan: Hm! I would have made all of you\n"
	.string "go regardless... Anyway.\p"
	.string "Now, there are three lakes.\n"
	.string "Fortuitously, there are three of you.\p"
	.string "You should therefore split up and\n"
	.string "investigate the lakes individually.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T4:
	.string "Rowan: BARRY, I want you to\n"
	.string "investigate Lake Acuity.\p"
	.string "That would take you almost to\n"
	.string "Snowpoint City.\p"
	.string "The road there is harsh. I need a tough\n"
	.string "Trainer to go.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T5:
	.string "BARRY: Uh... Yeah, of course! Gramps,\n"
	.string "you know how to call it!\p"
	.string "You can tell I’m the hotness!\p"
	.string "And, you know what? I was going to\n"
	.string "catch those legendary POKéMON for\l"
	.string "you.\p"
	.string "You know, as thanks for giving us our\n"
	.string "POKéMON back on Route 201.\p"
	.string "...Even though I forgot completely\n"
	.string "about it until just now.$"

CanalaveCity_Library_F3_EventScript_SNRowan_T6:
	.string "Rowan: Very well. I’m counting on you.\p"
	.string "And that leaves {PLAYER} with Lake\n"
	.string "Valor.\p"
	.string "The lake is between Veilstone and\n"
	.string "Pastoria, if memory serves...$"

CanalaveCity_Library_F3_EventScript_SNRowan_T7:
	.string "DDDOOOMMM!!$"

CanalaveCity_Library_F3_EventScript_SNRowan_T8:
	.string "Rowan: ... ...Has it stopped?\p"
	.string "Are all of you unharmed?$"

CanalaveCity_Library_F3_EventScript_SNRowan_T9:
	.string "BARRY: What was that about?!\p"
	.string "No, wait, I mean, TV! The TV! News!\n"
	.string "Anything!$"

@ Libros de la 3.ª planta (como en Platino)
CanalaveCity_Library_F3_EventScript_SNBookHorrificMyth::
	lockall
	msgbox CanalaveCity_Library_F3_Text_SNAskReadHorrificMyth, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookHorrificMyth_Back
	msgbox CanalaveCity_Library_F3_Text_SNHorrificMyth, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookHorrificMyth_Back:
	msgbox CanalaveCity_Library_F3_Text_SNPutHorrificMythBack, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Library_F3_Text_SNAskReadHorrificMyth:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_Text_SNPutHorrificMythBack:
	.string "{PLAYER} put the book back.$"

CanalaveCity_Library_F3_Text_SNHorrificMyth:
	.string "Look not into the POKéMON’s eyes.\p"
	.string "In but an instant, you’ll have no\n"
	.string "recollection of who you are.\p"
	.string "Return home, but how? When there is\n"
	.string "nothing to remember?\p"
	.string "Dare not touch the POKéMON’s body.\p"
	.string "In but three short days, all emotions\n"
	.string "will drain away.\p"
	.string "Above all, above all, harm not the\n"
	.string "POKéMON.\p"
	.string "In a scant five days, the offender will\n"
	.string "grow immobile in entirety.$"

CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories::
	lockall
	msgbox CanalaveCity_Library_F3_Text_SNSinnohFolkStories, MSGBOX_DEFAULT
	message CanalaveCity_Library_F3_Text_SNReadWhichStory
	waitmessage
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, CanalaveCity_Library_F3_Text_SNPart1, CanalaveCity_Library_F3_Text_SNPart2, CanalaveCity_Library_F3_Text_SNPart3, CanalaveCity_Library_F3_Text_SNExit
	switch VAR_RESULT
	case 0, CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories_1
	case 1, CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories_2
	case 2, CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories_3
	msgbox CanalaveCity_Library_F3_Text_SNPutSinnohFolkStoriesBack, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories_1:
	msgbox CanalaveCity_Library_F3_Text_SNSinnohFolkStory1, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories_2:
	msgbox CanalaveCity_Library_F3_Text_SNSinnohFolkStory2, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookSinnohFolkStories_3:
	msgbox CanalaveCity_Library_F3_Text_SNSinnohFolkStory3, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Library_F3_Text_SNSinnohFolkStories:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_Text_SNReadWhichStory:
	.string "Which story would you like to read?$"

CanalaveCity_Library_F3_Text_SNPutSinnohFolkStoriesBack:
	.string "{PLAYER} put the book back.$"

CanalaveCity_Library_F3_Text_SNSinnohFolkStory1:
	.string "“Sinnoh Folk Story 1”\p"
	.string "Pick clean the bones of POKéMON\n"
	.string "caught in the sea or stream.\p"
	.string "Thank them for the meals they provide,\n"
	.string "and pick their bones clean.\p"
	.string "When the bones are as clean as can be,\n"
	.string "set them free in the water from\p"
	.string "which they came.\p"
	.string "The POKéMON will return, fully fleshed,\n"
	.string "and it begins anew.$"

CanalaveCity_Library_F3_Text_SNSinnohFolkStory2:
	.string "“Sinnoh Folk Story 2”\p"
	.string "There lived a POKéMON in a forest.\p"
	.string "In the forest, the POKéMON shed its\n"
	.string "hide to sleep as a human.\p"
	.string "Awakened, the human dons the POKéMON\n"
	.string "hide to roam villages.$"

CanalaveCity_Library_F3_Text_SNSinnohFolkStory3:
	.string "“Sinnoh Folk Story 3”\p"
	.string "There once were POKéMON that became\n"
	.string "very close to humans.\p"
	.string "There once were humans and POKéMON\n"
	.string "that ate together at the same table.\p"
	.string "It was a time when there existed no\n"
	.string "differences to distinguish the two.$"

CanalaveCity_Library_F3_Text_SNPart1:
	.string "PART 1$"

CanalaveCity_Library_F3_Text_SNPart2:
	.string "PART 2$"

CanalaveCity_Library_F3_Text_SNPart3:
	.string "PART 3$"

CanalaveCity_Library_F3_Text_SNExit:
	.string "EXIT$"

CanalaveCity_Library_F3_EventScript_SNBookSinnohMyth::
	lockall
	msgbox CanalaveCity_Library_F3_Text_SNAskReadSinnohMyth, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookSinnohMyth_Back
	msgbox CanalaveCity_Library_F3_Text_SNSinnohMyth, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookSinnohMyth_Back:
	msgbox CanalaveCity_Library_F3_Text_SNPutSinnohMythBack, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Library_F3_Text_SNAskReadSinnohMyth:
	.string "This book is titled “Sinnoh Myth.” Want\n"
	.string "to read it?$"

CanalaveCity_Library_F3_Text_SNPutSinnohMythBack:
	.string "{PLAYER} put the book back.$"

CanalaveCity_Library_F3_Text_SNSinnohMyth:
	.string "“Sinnoh Myth”\p"
	.string "Betray not your anger, lest ??? will\n"
	.string "come.\p"
	.string "Weep not with sorrow, or ??? will draw\n"
	.string "near.\p"
	.string "When joy and enjoyment come natural\n"
	.string "as the very air, that is happiness.\p"
	.string "Let such be blessed by the hand of\n"
	.string "Master ???.\p"
	.string "Those words were spoken often as\n"
	.string "customary.$"

CanalaveCity_Library_F3_EventScript_SNBookSinnohRegionsMythology::
	lockall
	msgbox CanalaveCity_Library_F3_Text_SNAskReadSinnohRegionsMythology, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookSinnohRegionsMythology_Back
	msgbox CanalaveCity_Library_F3_Text_SNSinnohRegionsMythology, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookSinnohRegionsMythology_Back:
	msgbox CanalaveCity_Library_F3_Text_SNPutSinnohRegionsMythologyBack, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Library_F3_Text_SNAskReadSinnohRegionsMythology:
	.string "This book is titled “Sinnoh Region’s\n"
	.string "Mythology.” Want to read it?$"

CanalaveCity_Library_F3_Text_SNPutSinnohRegionsMythologyBack:
	.string "{PLAYER} put the book back.$"

CanalaveCity_Library_F3_Text_SNSinnohRegionsMythology:
	.string "“Sinnoh Region’s Mythology”\p"
	.string "Long ago, when Sinnoh had just been\n"
	.string "made, POKéMON and humans led\p"
	.string "separate lives.\p"
	.string "That is not to say they did not help\n"
	.string "each other. No, indeed they did.\p"
	.string "They supplied each other with goods,\n"
	.string "and supported each other.\p"
	.string "A POKéMON proposed to the others to\n"
	.string "always be ready to help humans.\p"
	.string "It asked that POKéMON be ready to\n"
	.string "appear before humans always.\p"
	.string "Thus, to this day, POKéMON appear to us\n"
	.string "if we venture into tall grass.$"

CanalaveCity_Library_F3_EventScript_SNBookSinnohsMyth::
	lockall
	msgbox CanalaveCity_Library_F3_Text_SNAskReadSinnohsMyth, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookSinnohsMyth_Back
	msgbox CanalaveCity_Library_F3_Text_SNSinnohsMyth, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookSinnohsMyth_Back:
	msgbox CanalaveCity_Library_F3_Text_SNPutSinnohsMythBack, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Library_F3_Text_SNAskReadSinnohsMyth:
	.string "This book is titled “Sinnoh’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_Text_SNPutSinnohsMythBack:
	.string "{PLAYER} put the book back.$"

CanalaveCity_Library_F3_Text_SNSinnohsMyth:
	.string "“Sinnoh’s Myth”\p"
	.string "Three POKéMON there were.\p"
	.string "Into the lakes they dove. Deep, deep,\n"
	.string "drawing no breath.\p"
	.string "Deeper, deeper they dove. Into\n"
	.string "suffocating depths they dove.\p"
	.string "Deeper, then deepest they alight. From\n"
	.string "the lake floor they rise.\p"
	.string "Bearing with them the power to make\n"
	.string "vast lands, they rise again.$"

CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory::
	lockall
	msgbox CanalaveCity_Library_F3_Text_SNAskReadTheOriginalStory, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory_Back
	msgbox CanalaveCity_Library_F3_Text_SNTheOriginalStory1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory_Back
	msgbox CanalaveCity_Library_F3_Text_SNTheOriginalStory2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory_Back
	msgbox CanalaveCity_Library_F3_Text_SNTheOriginalStory3, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookTheOriginalStory_Back:
	msgbox CanalaveCity_Library_F3_Text_SNPutTheOriginalStoryBack, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Library_F3_Text_SNAskReadTheOriginalStory:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_Text_SNPutTheOriginalStoryBack:
	.string "{PLAYER} put the book back.$"

CanalaveCity_Library_F3_Text_SNTheOriginalStory1:
	.string "In the beginning, there was only a\n"
	.string "churning turmoil of chaos.\p"
	.string "At the heart of chaos, where all things\n"
	.string "became one, appeared an Egg.\p"
	.string "Having tumbled from the vortex, the\n"
	.string "Egg gave rise to the Original One.\p"
	.string "...Would you like to keep reading?$"

CanalaveCity_Library_F3_Text_SNTheOriginalStory2:
	.string "From itself, two beings the Original\n"
	.string "One did make.\p"
	.string "Time started to spin. Space began to\n"
	.string "expand.\p"
	.string "From itself again, three living things\n"
	.string "the Original One did make.\p"
	.string "...Would you like to keep reading?$"

CanalaveCity_Library_F3_Text_SNTheOriginalStory3:
	.string "The two beings wished, and from them,\n"
	.string "matter came to be.\p"
	.string "The three living things wished, and\n"
	.string "from them, spirit came to be.\p"
	.string "The world created, the Original One\n"
	.string "took to unyielding sleep...$"

CanalaveCity_Library_F3_EventScript_SNBookVeilstonesMyth::
	lockall
	msgbox CanalaveCity_Library_F3_Text_SNAskReadVeilstonesMyth, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookVeilstonesMyth_Back
	msgbox CanalaveCity_Library_F3_Text_SNVeilstonesMyth1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookVeilstonesMyth_Back
	msgbox CanalaveCity_Library_F3_Text_SNVeilstonesMyth2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CanalaveCity_Library_F3_EventScript_SNBookVeilstonesMyth_Back
	msgbox CanalaveCity_Library_F3_Text_SNVeilstonesMyth3, MSGBOX_DEFAULT
	releaseall
	end
CanalaveCity_Library_F3_EventScript_SNBookVeilstonesMyth_Back:
	msgbox CanalaveCity_Library_F3_Text_SNPutVeilstonesMythBack, MSGBOX_DEFAULT
	releaseall
	end

CanalaveCity_Library_F3_Text_SNAskReadVeilstonesMyth:
	.string "This book is titled “Veilstone’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_Text_SNPutVeilstonesMythBack:
	.string "{PLAYER} put the book back.$"

CanalaveCity_Library_F3_Text_SNVeilstonesMyth1:
	.string "“Veilstone’s Myth”\p"
	.string "A young man, callow and foolish in\n"
	.string "innocence, came to own a sword.\p"
	.string "With it, he smote POKéMON, which gave\n"
	.string "sustenance, with carefree abandon.\p"
	.string "Those not taken as food, he discarded,\n"
	.string "with no afterthought.\p"
	.string "The following year, no POKéMON\n"
	.string "appeared. Larders grew bare.\p"
	.string "...Would you like to keep reading?$"

CanalaveCity_Library_F3_Text_SNVeilstonesMyth2:
	.string "The young man, seeking the missing\n"
	.string "POKéMON, journeyed afar.\p"
	.string "Long did he search. And far and wide,\n"
	.string "too, until one he did find.\p"
	.string "Asked he, “Why do you hide?” To which\n"
	.string "the POKéMON replied...\p"
	.string "“If you bear your sword to bring harm\n"
	.string "upon us, with claws and\p"
	.string "fangs, we will exact a toll.\p"
	.string "“From your kind we will take our toll,\n"
	.string "for it must be done.\p"
	.string "“Done it must be to guard ourselves\n"
	.string "and for it, I apologize.”\p"
	.string "...Would you like to keep reading?$"

CanalaveCity_Library_F3_Text_SNVeilstonesMyth3:
	.string "To the skies, the young man shouted\n"
	.string "his dismay.\p"
	.string "“In having found the sword, I have\n"
	.string "lost so much.\p"
	.string "“Gorged with power, I grew blind to\n"
	.string "POKéMON being alive.\p"
	.string "“I will never fall savage again. This\n"
	.string "sword I denounce and forsake.\p"
	.string "“I plead for forgiveness, for I was but\n"
	.string "a fool.”\p"
	.string "So saying, the young man hurled the\n"
	.string "sword to the ground, snapping it.\p"
	.string "Seeing this, the POKéMON disappeared\n"
	.string "to a place beyond seeing...$"

