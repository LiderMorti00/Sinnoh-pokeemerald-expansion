SnowpointCity_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SnowpointCity_Gym_1F_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, SnowpointCity_Gym_1F_OnResume
	map_script MAP_SCRIPT_ON_LOAD, SnowpointCity_Gym_1F_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, SnowpointCity_Gym_1F_OnTransition
	.byte 0

SnowpointCity_Gym_1F_OnTransition:
	setvar VAR_ICE_STEP_COUNT, 1
	end

SnowpointCity_Gym_1F_OnResume:
	setstepcallback STEP_CB_SOOTOPOLIS_ICE
	end

SnowpointCity_Gym_1F_OnLoad:
	call SnowpointCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special SetSootopolisGymCrackedIceMetatiles
	end

SnowpointCity_Gym_1F_EventScript_CheckSetStairMetatiles::
	goto_if_lt VAR_ICE_STEP_COUNT, 8, SnowpointCity_Gym_1F_EventScript_StopCheckingStairs  @ All stairs ice
	goto_if_lt VAR_ICE_STEP_COUNT, 28, SnowpointCity_Gym_1F_EventScript_OpenFirstStairs
	goto_if_lt VAR_ICE_STEP_COUNT, 67, SnowpointCity_Gym_1F_EventScript_OpenFirstAndSecondStairs
	setmetatile 8, 4, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 5, METATILE_SootopolisGym_Stairs, FALSE
SnowpointCity_Gym_1F_EventScript_OpenFirstAndSecondStairs::
	setmetatile 8, 10, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 11, METATILE_SootopolisGym_Stairs, FALSE
SnowpointCity_Gym_1F_EventScript_OpenFirstStairs::
	setmetatile 8, 15, METATILE_SootopolisGym_Stairs, FALSE
	setmetatile 8, 16, METATILE_SootopolisGym_Stairs, FALSE
SnowpointCity_Gym_1F_EventScript_StopCheckingStairs::
	return

SnowpointCity_Gym_1F_OnFrame:
	map_script_2 VAR_ICE_STEP_COUNT, 8, SnowpointCity_Gym_1F_EventScript_UnlockFirstStairs
	map_script_2 VAR_ICE_STEP_COUNT, 28, SnowpointCity_Gym_1F_EventScript_UnlockSecondStairs
	map_script_2 VAR_ICE_STEP_COUNT, 67, SnowpointCity_Gym_1F_EventScript_UnlockThirdStairs
	map_script_2 VAR_ICE_STEP_COUNT, 0, SnowpointCity_Gym_1F_EventScript_FallThroughIce
	.2byte 0

SnowpointCity_Gym_1F_EventScript_UnlockFirstStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SnowpointCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SnowpointCity_Gym_1F_EventScript_UnlockSecondStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SnowpointCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SnowpointCity_Gym_1F_EventScript_UnlockThirdStairs::
	addvar VAR_ICE_STEP_COUNT, 1
	delay 40
	playse SE_ICE_STAIRS
	call SnowpointCity_Gym_1F_EventScript_CheckSetStairMetatiles
	special DrawWholeMapView
	end

SnowpointCity_Gym_1F_EventScript_FallThroughIce::
	lockall
	delay 20
	applymovement LOCALID_PLAYER, SnowpointCity_Gym_1F_Movement_FallThroughIce
	waitmovement 0
	playse SE_FALL
	delay 60
	warphole MAP_SOOTOPOLIS_CITY_GYM_B1F
	waitstate
	end

SnowpointCity_Gym_1F_Movement_FallThroughIce:
	set_invisible
	step_end

SnowpointCity_Gym_1F_Text_JuanPostBattle:
	.string "The TRAINERS who have gathered all\n"
	.string "the GYM BADGES of HOENN should make\l"
	.string "way to the ultimate destination.\p"
	.string "The POKéMON LEAGUE.\p"
	.string "Travel to the easternmost reaches\n"
	.string "of HOENN, to the island EVER GRANDE.\p"
	.string "There, you shall find the POKéMON\n"
	.string "LEAGUE.$"

SnowpointCity_Gym_1F_Text_GoGetFortreeBadge:
	.string "There remains but one BADGE to\n"
	.string "obtain in HOENN.\p"
	.string "If you wish to challenge the POKéMON\n"
	.string "LEAGUE, you must obtain the last\l"
	.string "BADGE from the GYM in FORTREE.$"

SnowpointCity_Gym_1F_Text_GymStatue:
	.string "SOOTOPOLIS CITY POKéMON GYM$"

SnowpointCity_Gym_1F_Text_GymStatueCertified:
	.string "SOOTOPOLIS CITY POKéMON GYM\p"
	.string "JUAN'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

SnowpointCity_Gym_1F_Text_JuanPreRematch:
	.string "JUAN: Ah, this GYM had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\p"
	.string "I shall be delighted to dance with you\n"
	.string "as often as you wish!$"

SnowpointCity_Gym_1F_Text_JuanRematchDefeat:
	.string "Ahahaha, you are the winner!\n"
	.string "You have defeated me again!$"

SnowpointCity_Gym_1F_Text_JuanPostRematch:
	.string "JUAN: If I told you to become my\n"
	.string "apprentice, you will refuse, I am sure.\p"
	.string "I would like to make a gift of my coat\n"
	.string "to you.\p"
	.string "But again, you will refuse.\n"
	.string "I imagine that to be so.\p"
	.string "And that, my friend, is a certain sign\n"
	.string "of nobility!$"

SnowpointCity_Gym_1F_Text_JuanRematchNeedTwoMons:
	.string "JUAN: Ah, this GYM had returned to its\n"
	.string "usual state of serenity…\p"
	.string "But our young typhoon has returned\n"
	.string "to put us to the test again!\p"
	.string "Well, my friend, most certainly!\n"
	.string "I shall be delighted to dance with you…\p"
	.string "Ah, no, no, no.\n"
	.string "You have with you but one POKéMON.\p"
	.string "I wish that you would return with\n"
	.string "two, perhaps more, POKéMON, please.$"

SnowpointCity_Gym_1F_EventScript_Leader::
	trainerbattle_single TRAINER_KAREN_5, SnowpointCity_Gym_1F_Text_LeaderIntro, SnowpointCity_Gym_1F_Text_LeaderDefeat, SnowpointCity_Gym_1F_EventScript_LeaderDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_ITEM_TM72_FROM_CANDICE, SnowpointCity_Gym_1F_EventScript_GiveTM
	msgbox SnowpointCity_Gym_1F_Text_LeaderPostBattle, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_1F_EventScript_LeaderDefeated::
	setflag FLAG_DEFEATED_SOOTOPOLIS_GYM
	message SnowpointCity_Gym_1F_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SnowpointCity_Gym_1F_Text_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE07_GET
	settrainerflag TRAINER_ANNA_AND_MEG_1
	settrainerflag TRAINER_ANNA_AND_MEG_2
	settrainerflag TRAINER_ANNA_AND_MEG_3
	settrainerflag TRAINER_ANNA_AND_MEG_4
	settrainerflag TRAINER_ANNA_AND_MEG_5
	settrainerflag TRAINER_MIGUEL_1
	goto SnowpointCity_Gym_1F_EventScript_GiveTM

SnowpointCity_Gym_1F_EventScript_GiveTM::
	giveitem ITEM_TM72
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ITEM_TM72_FROM_CANDICE
	msgbox SnowpointCity_Gym_1F_Text_ExplainTM, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_1F_EventScript_PtGymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE07_GET, SnowpointCity_Gym_1F_EventScript_PtGymGuideAfter
	msgbox SnowpointCity_Gym_1F_Text_PtGymGuide, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_1F_EventScript_PtGymGuideAfter::
	msgbox SnowpointCity_Gym_1F_Text_PtGymGuideAfter, MSGBOX_DEFAULT
	release
	end

SnowpointCity_Gym_1F_EventScript_PtGymStatue::
	msgbox SnowpointCity_Gym_1F_Text_PtGymStatue, MSGBOX_SIGN
	end


SnowpointCity_Gym_1F_Text_LeaderIntro:
	.string "You want to challenge Candice?\p"
	.string "Sure thing! I was waiting for someone\n"
	.string "tough!\p"
	.string "But I should tell you, I’m tough\n"
	.string "because I know how to focus.\p"
	.string "POKéMON, fashion, romance... It’s all\n"
	.string "about focus!\p"
	.string "I’ll show you just what I mean. Get\n"
	.string "ready to lose!$"

SnowpointCity_Gym_1F_Text_LeaderDefeat:
	.string "Wow! You’re great! You’ve earned my\n"
	.string "respect!\p"
	.string "I think your focus and will bowled us\n"
	.string "over totally.\p"
	.string "Oh, that’s right! I’m supposed to give\n"
	.string "you this!$"

SnowpointCity_Gym_1F_Text_LeaderPostBattle:
	.string "Do you think I should try to act more\n"
	.string "like an Ice-type Gym Leader?\p"
	.string "Like, do you think I should be more cool\n"
	.string "and distant?\p"
	.string "That sort of thing I have trouble with.$"

SnowpointCity_Gym_1F_Text_ReceivedBadge:
	.string "{PLAYER} received the Icicle Badge\n"
	.string "from Candice.$"

SnowpointCity_Gym_1F_Text_ExplainBadge:
	.string "That Icicle Badge I just gave you?\p"
	.string "Because you have it, you can use the\n"
	.string "hidden move Rock Climb anytime, even\p"
	.string "when you’re not in a battle.\p"
	.string "Oh, and take this, too.$"

SnowpointCity_Gym_1F_Text_ExplainTM:
	.string "TM72 contains the move AVALANCHE.\p"
	.string "If the user takes damage, the move’s\n"
	.string "power is doubled!\p"
	.string "Can you imagine what sort of focus\n"
	.string "you’d need to pull it off?$"

SnowpointCity_Gym_1F_Text_PtGymGuide:
	.string "Hey, there! How’s it going,\n"
	.string "Champ-to-be?\p"
	.string "Do you see the big snowballs placed\n"
	.string "here and there?\p"
	.string "You need to slide on the ice with\n"
	.string "enough momentum to crush them.\p"
	.string "The Gym Leader is a user of Ice-type\n"
	.string "POKéMON.\p"
	.string "Melt her defenses with scorching- hot\n"
	.string "Fire-type moves!\p"
	.string "It’s all about focus with this Gym. Bear\n"
	.string "down and focus!$"

SnowpointCity_Gym_1F_Text_PtGymGuideAfter:
	.string "Oh! {PLAYER}! You’ve beaten the Gym\n"
	.string "Leader!\p"
	.string "You were more focused than her, and\n"
	.string "your POKéMON picked up on it!$"

SnowpointCity_Gym_1F_Text_PtGymStatue:
	.string "Snowpoint City POKéMON Gym Leader:\n"
	.string "Candice\p"
	.string "Certified Trainers: {PLAYER}$"
