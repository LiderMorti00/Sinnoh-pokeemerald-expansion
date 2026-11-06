EternaCity_GalacticBuilding_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EternaCity_GalacticBuilding_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EternaCity_GalacticBuilding_1F_OnFrame
	.byte 0

EternaCity_GalacticBuilding_1F_OnTransition:
	setflag FLAG_SN_HIDE_ETERNA_GRUNT_LOOKER
	setflag FLAG_SN_HIDE_ETERNA_LOOKER
	setvar VAR_TEMP_3, 1
	goto_if_set FLAG_HIDE_ETERNA_GALACTIC, EternaCity_GalacticBuilding_1F_OnTransition_End
	goto_if_set FLAG_SN_ETERNA_LOOKER_MET, EternaCity_GalacticBuilding_1F_OnTransition_Met
	clearflag FLAG_SN_HIDE_ETERNA_GRUNT_LOOKER
	setvar VAR_TEMP_3, 0
	end
EternaCity_GalacticBuilding_1F_OnTransition_Met:
	clearflag FLAG_SN_HIDE_ETERNA_LOOKER
EternaCity_GalacticBuilding_1F_OnTransition_End:
	end

EternaCity_GalacticBuilding_1F_OnFrame:
	map_script_2 VAR_TEMP_3, 0, EternaCity_GalacticBuilding_1F_EventScript_SNLookerScene
	.2byte 0

EternaCity_GalacticBuilding_1F_EventScript_SNLookerScene::
	lockall
	setvar VAR_TEMP_3, 1
	applymovement LOCALID_SN_ETERNA_GRUNT_LOOKER, EternaCity_GalacticBuilding_1F_Movement_SNNotice
	waitmovement 0
	sn_walktoplayer LOCALID_SN_ETERNA_GRUNT_LOOKER, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_SN_ETERNA_GRUNT_LOOKER
	sn_playerface LOCALID_SN_ETERNA_GRUNT_LOOKER, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox EternaCity_GalacticBuilding_1F_Text_SNHelloItIsMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_ETERNA_GRUNT_LOOKER, EternaCity_GalacticBuilding_1F_Movement_SNSpin
	waitmovement 0
	setvar VAR_0x8004, LOCALID_SN_ETERNA_GRUNT_LOOKER
	special SinnohGetObjectPos
	setobjectxyperm LOCALID_SN_ETERNA_LOOKER, VAR_0x8008, VAR_0x8009
	removeobject LOCALID_SN_ETERNA_GRUNT_LOOKER
	clearflag FLAG_SN_HIDE_ETERNA_LOOKER
	addobject LOCALID_SN_ETERNA_LOOKER
	applymovement LOCALID_SN_ETERNA_LOOKER, Common_Movement_FacePlayer
	waitmovement 0
	setflag FLAG_SN_ETERNA_LOOKER_MET
	msgbox EternaCity_GalacticBuilding_1F_Text_SNFirstRate, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_ETERNA_LOOKER, EternaCity_GalacticBuilding_1F_Movement_SNSpin
	waitmovement 0
	releaseall
	end

EternaCity_GalacticBuilding_1F_EventScript_SNLooker::
	msgbox EternaCity_GalacticBuilding_1F_Text_SNFirstRate, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_1F_Movement_SNNotice:
	face_left
	emote_exclamation_mark
	step_end

EternaCity_GalacticBuilding_1F_Movement_SNSpin:
	face_down
	delay_4
	face_right
	delay_4
	face_up
	delay_4
	face_left
	delay_4
	face_down
	step_end

EternaCity_GalacticBuilding_1F_EventScript_GruntWelcome::
	msgbox EternaCity_GalacticBuilding_1F_Text_GruntWelcome, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_1F_Text_GruntWelcome:
	.string "Welcome to TEAM GALACTIC. Are you\n"
	.string "here to donate your POKéMON?\p"
	.string "What? You're not? Then kindly get off\n"
	.string "our property!\p"
	.string "Do we have to bring the pain like we\n"
	.string "did with the Cycle Shop manager?$"


EternaCity_GalacticBuilding_1F_EventScript_GruntStars::
	msgbox EternaCity_GalacticBuilding_1F_Text_GruntStars, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_1F_Text_GruntStars:
	.string "As a group, TEAM GALACTIC has its\n"
	.string "sights set on the stars, not on this\l"
	.string "world!$"


EternaCity_GalacticBuilding_1F_EventScript_Grunt::
	trainerbattle_single TRAINER_CLARENCE, EternaCity_GalacticBuilding_1F_Text_GruntIntro, EternaCity_GalacticBuilding_1F_Text_GruntDefeat
	msgbox EternaCity_GalacticBuilding_1F_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_1F_Text_GruntIntro:
	.string "We are acquiring POKéMON for a most\n"
	.string "astonishing undertaking!\p"
	.string "Your meddling won't be tolerated!$"

EternaCity_GalacticBuilding_1F_Text_GruntDefeat:
	.string "I feel like I got meddled with...$"

EternaCity_GalacticBuilding_1F_Text_GruntPost:
	.string "Our astonishing undertaking is most\n"
	.string "certainly breathtaking.\p"
	.string "If you ever hope to see its glorious\n"
	.string "unveiling, then don't meddle with us!$"


EternaCity_GalacticBuilding_1F_EventScript_Grunt2::
	trainerbattle_single TRAINER_TERRY, EternaCity_GalacticBuilding_1F_Text_Grunt2Intro, EternaCity_GalacticBuilding_1F_Text_Grunt2Defeat
	msgbox EternaCity_GalacticBuilding_1F_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

EternaCity_GalacticBuilding_1F_Text_Grunt2Intro:
	.string "So sorry, sweetie. TEAM GALACTIC has\n"
	.string "no room for kiddies!$"

EternaCity_GalacticBuilding_1F_Text_Grunt2Defeat:
	.string "B-but, deary, you're just a kid!$"

EternaCity_GalacticBuilding_1F_Text_Grunt2Post:
	.string "You wanted to go up? Well, why didn't\n"
	.string "you?$"

EternaCity_GalacticBuilding_1F_Text_SNHelloItIsMe:
	.string "Looker: Hello! It is me! Me! Hahaha! I\n"
	.string "have startled you, yes?\p"
	.string "I am, after all, an officer of the\n"
	.string "International Police.\p"
	.string "It is only natural that I be a master\n"
	.string "of disguise.$"

EternaCity_GalacticBuilding_1F_Text_SNFirstRate:
	.string "...Incidentally, you are a first-rate\n"
	.string "Trainer. Of that, I am very aware.\p"
	.string "I therefore think you will be OK, but I\n"
	.string "must warn you to be careful anyway.\p"
	.string "Also, a word of advice.\p"
	.string "This building, it has two stairs. One of\n"
	.string "them, a trap it must be.\p"
	.string "But the crooks of Team Galactic, they\n"
	.string "do not appear, how shall I say, smart.\p"
	.string "There should be an easy way to tell the\n"
	.string "stairs apart!$"
