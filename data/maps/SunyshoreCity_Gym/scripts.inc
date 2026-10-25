SunyshoreCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, SunyshoreCity_Gym_OnLoad
	.byte 0

SunyshoreCity_Gym_OnLoad:
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, SunyshoreCity_Gym_EventScript_DeactivatePuzzle
	switch VAR_MAUVILLE_GYM_STATE
	case 0, SunyshoreCity_Gym_EventScript_UpdateBarriers
	case 1, SunyshoreCity_Gym_EventScript_Switch1Pressed
	case 2, SunyshoreCity_Gym_EventScript_Switch2Pressed
	case 3, SunyshoreCity_Gym_EventScript_Switch3Pressed
	case 4, SunyshoreCity_Gym_EventScript_Switch4Pressed
	end

SunyshoreCity_Gym_EventScript_UpdateBarriers::
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, SunyshoreCity_Gym_EventScript_SetAltBarriers
	end

SunyshoreCity_Gym_EventScript_SetAltBarriers::
	setmetatile 3, 11, METATILE_MauvilleGym_RedBeamV1_On, TRUE
	setmetatile 3, 12, METATILE_MauvilleGym_RedBeamV2_On, TRUE
	setmetatile 3, 13, METATILE_MauvilleGym_PoleTop_On, TRUE
	setmetatile 4, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
	setmetatile 5, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
	setmetatile 4, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
	setmetatile 5, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
	setmetatile 7, 10, METATILE_MauvilleGym_RedBeamH1_On, FALSE
	setmetatile 8, 10, METATILE_MauvilleGym_RedBeamH2_On, FALSE
	setmetatile 7, 11, METATILE_MauvilleGym_RedBeamH3_On, TRUE
	setmetatile 8, 11, METATILE_MauvilleGym_RedBeamH4_On, TRUE
	setmetatile 4, 13, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 13, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 4, 14, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 5, 14, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	setmetatile 1, 10, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 2, 10, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 1, 11, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 2, 11, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	setmetatile 6, 8, METATILE_MauvilleGym_PoleBottom_On, TRUE
	setmetatile 6, 9, METATILE_MauvilleGym_FloorTile, FALSE
	setmetatile 6, 10, METATILE_MauvilleGym_PoleTop_Off, FALSE
	setmetatile 4, 6, METATILE_MauvilleGym_GreenBeamH1_Off, FALSE
	setmetatile 5, 6, METATILE_MauvilleGym_GreenBeamH2_Off, FALSE
	setmetatile 4, 7, METATILE_MauvilleGym_GreenBeamH3_Off, FALSE
	setmetatile 5, 7, METATILE_MauvilleGym_GreenBeamH4_Off, FALSE
	end

SunyshoreCity_Gym_EventScript_Switch1Pressed::
	setvar VAR_0x8004, 0
	special MauvilleGymPressSwitch
	goto SunyshoreCity_Gym_EventScript_UpdateBarriers
	end

SunyshoreCity_Gym_EventScript_Switch2Pressed::
	setvar VAR_0x8004, 1
	special MauvilleGymPressSwitch
	goto SunyshoreCity_Gym_EventScript_UpdateBarriers
	end

SunyshoreCity_Gym_EventScript_Switch3Pressed::
	setvar VAR_0x8004, 2
	special MauvilleGymPressSwitch
	goto SunyshoreCity_Gym_EventScript_UpdateBarriers
	end

SunyshoreCity_Gym_EventScript_Switch4Pressed::
	setvar VAR_0x8004, 3
	special MauvilleGymPressSwitch
	goto SunyshoreCity_Gym_EventScript_UpdateBarriers
	end

SunyshoreCity_Gym_EventScript_DeactivatePuzzle::
	special MauvilleGymDeactivatePuzzle
	end

SunyshoreCity_Gym_EventScript_Switch1::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 1, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 1
	setvar VAR_0x8004, 0
	goto SunyshoreCity_Gym_EventScript_PressFloorSwitch
	end

SunyshoreCity_Gym_EventScript_Switch2::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 2, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 2
	setvar VAR_0x8004, 1
	goto SunyshoreCity_Gym_EventScript_PressFloorSwitch
	end

SunyshoreCity_Gym_EventScript_Switch3::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 3, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 3
	setvar VAR_0x8004, 2
	goto SunyshoreCity_Gym_EventScript_PressFloorSwitch
	end

SunyshoreCity_Gym_EventScript_Switch4::
	lockall
	goto_if_set FLAG_DEFEATED_MAUVILLE_GYM, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	goto_if_eq VAR_MAUVILLE_GYM_STATE, 4, SunyshoreCity_Gym_EventScript_SwitchDoNothing
	setvar VAR_MAUVILLE_GYM_STATE, 4
	setvar VAR_0x8004, 3
	goto SunyshoreCity_Gym_EventScript_PressFloorSwitch
	end

SunyshoreCity_Gym_EventScript_PressFloorSwitch::
	special MauvilleGymSetDefaultBarriers
	special MauvilleGymPressSwitch
	special DrawWholeMapView
	playse SE_UNLOCK
	goto_if_set FLAG_MAUVILLE_GYM_BARRIERS_STATE, SunyshoreCity_Gym_EventScript_ClearBarriersAltState
	goto_if_unset FLAG_MAUVILLE_GYM_BARRIERS_STATE, SunyshoreCity_Gym_EventScript_SetBarriersAltState
	releaseall
	end

SunyshoreCity_Gym_EventScript_SwitchDoNothing::
	releaseall
	end

SunyshoreCity_Gym_EventScript_SetBarriersAltState::
	setflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

SunyshoreCity_Gym_EventScript_ClearBarriersAltState::
	clearflag FLAG_MAUVILLE_GYM_BARRIERS_STATE
	releaseall
	end

SunyshoreCity_Gym_Text_KirkDefeat:
	.string "That was plugged in, amped up,\n"
	.string "over-driven electric, man!$"

SunyshoreCity_Gym_Text_KirkPostBattle:
	.string "POKéMON and rock, it's all about heart,\n"
	.string "whoa-yeah!$"

SunyshoreCity_Gym_Text_ShawnIntro:
	.string "I trained under WATTSON!\n"
	.string "There ain't no way I'll lose easily!$"

SunyshoreCity_Gym_Text_ShawnDefeat:
	.string "Unplugged and turned off…$"

SunyshoreCity_Gym_Text_ShawnPostBattle:
	.string "WATTSON, our GYM LEADER, has been\n"
	.string "around for a long, long time.\p"
	.string "He was battling even before your\n"
	.string "daddy was born, that tough coot.$"

SunyshoreCity_Gym_Text_BenIntro:
	.string "This GYM's got puzzles!\n"
	.string "Isn't it fun?$"

SunyshoreCity_Gym_Text_BenDefeat:
	.string "It's no fun to lose…$"

SunyshoreCity_Gym_Text_BenPostBattle:
	.string "WATTSON says he likes setting up\n"
	.string "little traps with switches.$"

SunyshoreCity_Gym_Text_VivianIntro:
	.string "With my charm and my POKéMON's moves,\n"
	.string "you'll be shocked!$"

SunyshoreCity_Gym_Text_VivianDefeat:
	.string "I'm shocked by your power!$"

SunyshoreCity_Gym_Text_VivianPostBattle:
	.string "I've heard that MAUVILLE was founded\n"
	.string "by WATTSON.\p"
	.string "He was a TRAINER long before we\n"
	.string "became TRAINERS.\l"
	.string "He must know all sorts of things!$"

SunyshoreCity_Gym_Text_AngeloIntro:
	.string "I love shiny things!$"

SunyshoreCity_Gym_Text_AngeloDefeat:
	.string "Oh…\n"
	.string "My eyes are frazzled…$"

SunyshoreCity_Gym_Text_AngeloPostBattle:
	.string "MAUVILLE GYM's WATTSON has a shiny\n"
	.string "forehead. It makes me happy!$"

SunyshoreCity_Gym_Text_WattsonIntro:
	.string "I've given up on my plans to convert\n"
	.string "the city, I have.\p"
	.string "And so, I put my time into making\n"
	.string "door traps in my GYM.\p"
	.string "Oh? Now, what are you doing here?\p"
	.string "What's that? You say you've gotten\n"
	.string "past all my rigged doors?\p"
	.string "Wahahahah!\n"
	.string "Now, that is amusing!\p"
	.string "Then, I, WATTSON, the LEADER of\n"
	.string "MAUVILLE GYM, shall electrify you!$"

SunyshoreCity_Gym_Text_WattsonDefeat:
	.string "Wahahahah!\n"
	.string "Fine, I lost!\p"
	.string "You ended up giving me a thrill!\n"
	.string "Take this BADGE!$"

SunyshoreCity_Gym_Text_ReceivedDynamoBadge:
	.string "{PLAYER} received the DYNAMO BADGE\n"
	.string "from WATTSON.$"

SunyshoreCity_Gym_Text_ExplainDynamoBadgeTakeThis:
	.string "With the DYNAMO BADGE, POKéMON can\n"
	.string "use ROCK SMASH out of battle.\p"
	.string "And, it will make your POKéMON a little\n"
	.string "bit faster, too.\p"
	.string "Hmm…\n"
	.string "You should take this, too!$"

SunyshoreCity_Gym_Text_ExplainShockWave:
	.string "That TM34 there contains SHOCK WAVE.\p"
	.string "It's a trustworthy move that never\n"
	.string "misses! You can count on it!\p"
	.string "… … … … … …$"

SunyshoreCity_Gym_Text_RegisteredWattson:
	.string "Registered GYM LEADER WATTSON\n"
	.string "in the POKéNAV.$"

SunyshoreCity_Gym_Text_WattsonPostBattle:
	.string "I swell with optimism, seeing a promising\n"
	.string "young TRAINER like you!$"

SunyshoreCity_Gym_Text_WattsonGoForthAndEndeavor:
	.string "Wahahahah!\n"
	.string "Go forth and endeavor, youngster!$"

SunyshoreCity_Gym_Text_GymStatue:
	.string "MAUVILLE CITY POKéMON GYM$"

SunyshoreCity_Gym_Text_GymStatueCertified:
	.string "MAUVILLE CITY POKéMON GYM\p"
	.string "WATTSON'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

SunyshoreCity_Gym_Text_WattsonPreRematch:
	.string "WATTSON: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my POKéMON!\p"
	.string "Wahahahaha!\p"
	.string "I'll make sparks fly from you!\n"
	.string "Don't say I didn't warn you!$"

SunyshoreCity_Gym_Text_WattsonRematchDefeat:
	.string "Oof…\n"
	.string "Our batteries ran dry…$"

SunyshoreCity_Gym_Text_WattsonPostRematch:
	.string "WATTSON: We'll have to recharge our\n"
	.string "batteries again.\p"
	.string "When we're fully charged up, we'll\n"
	.string "gladly accept your challenge.\p"
	.string "So, come back again sometime,\n"
	.string "won't you?$"

SunyshoreCity_Gym_Text_WattsonRematchNeedTwoMons:
	.string "WATTSON: Ah-ha! Here at last!\n"
	.string "I know what you want.\l"
	.string "You want to battle my POKéMON!\p"
	.string "Wahahahaha!\p"
	.string "Oops! Wait!\n"
	.string "You've only one POKéMON with you!\p"
	.string "Come see me with two or more\n"
	.string "POKéMON, all right?$"

SunyshoreCity_Gym_EventScript_Tiera::
	trainerbattle_single TRAINER_MIGUEL_3, SunyshoreCity_Gym_Text_TieraIntro, SunyshoreCity_Gym_Text_TieraDefeat
	msgbox SunyshoreCity_Gym_Text_TieraPost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_TieraIntro:
	.string "Can you make it to the Gym Leader? You\n"
	.string "sure now?$"

SunyshoreCity_Gym_Text_TieraDefeat:
	.string "The gears spin round and round... I spin\n"
	.string "down and out...$"

SunyshoreCity_Gym_Text_TieraPost:
	.string "Our Gym’s trick walkways are sure to\n"
	.string "make your head spin!$"

SunyshoreCity_Gym_EventScript_Forrest::
	trainerbattle_single TRAINER_MIGUEL_4, SunyshoreCity_Gym_Text_ForrestIntro, SunyshoreCity_Gym_Text_ForrestDefeat
	msgbox SunyshoreCity_Gym_Text_ForrestPost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_ForrestIntro:
	.string "This is the toughest Gym in Sinnoh.\p"
	.string "That’s why I’m here--to learn the best\n"
	.string "battle techniques around!$"

SunyshoreCity_Gym_Text_ForrestDefeat:
	.string "...You’re tough.$"

SunyshoreCity_Gym_Text_ForrestPost:
	.string "You just showed me that there’s still\n"
	.string "lots I need to learn.\p"
	.string "The world of POKéMON is deep!$"

SunyshoreCity_Gym_EventScript_Jerry::
	trainerbattle_single TRAINER_MIGUEL_5, SunyshoreCity_Gym_Text_JerryIntro, SunyshoreCity_Gym_Text_JerryDefeat
	msgbox SunyshoreCity_Gym_Text_JerryPost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_JerryIntro:
	.string "I want to win! That desire I pour into\n"
	.string "my guitar!\p"
	.string "I want to win! That passion compels my\n"
	.string "POKéMON!$"

SunyshoreCity_Gym_Text_JerryDefeat:
	.string "We couldn’t win... No encores for us...$"

SunyshoreCity_Gym_Text_JerryPost:
	.string "The Trainer’s desire to win!\p"
	.string "If you don’t lose that, there’s no limit\n"
	.string "on what you can become!$"

SunyshoreCity_Gym_EventScript_Meghan::
	trainerbattle_single TRAINER_ISABEL_1, SunyshoreCity_Gym_Text_MeghanIntro, SunyshoreCity_Gym_Text_MeghanDefeat
	msgbox SunyshoreCity_Gym_Text_MeghanPost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_MeghanIntro:
	.string "Look at the way I’m dressed. Can’t you\n"
	.string "see that I’m hardcore?$"

SunyshoreCity_Gym_Text_MeghanDefeat:
	.string "I was being serious! Don’t laugh at me!\n"
	.string "I mean it!$"

SunyshoreCity_Gym_Text_MeghanPost:
	.string "I dress this way so I can get a feel for\n"
	.string "how electric POKéMON think.\p"
	.string "Would you like to try, too?$"

SunyshoreCity_Gym_EventScript_Destiny::
	trainerbattle_single TRAINER_ISABEL_2, SunyshoreCity_Gym_Text_DestinyIntro, SunyshoreCity_Gym_Text_DestinyDefeat
	msgbox SunyshoreCity_Gym_Text_DestinyPost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_DestinyIntro:
	.string "I’m not just looking for tough Trainers\n"
	.string "to battle.\p"
	.string "I’ve been battling here because I want\n"
	.string "to feel the rush!$"

SunyshoreCity_Gym_Text_DestinyDefeat:
	.string "Your power is thrilling... I’m thrilled\n"
	.string "down to my toes!$"

SunyshoreCity_Gym_Text_DestinyPost:
	.string "I’m so glad that there are POKéMON!\p"
	.string "There isn’t much else that gives me the\n"
	.string "thrill that POKéMON do!$"

SunyshoreCity_Gym_EventScript_Preston::
	trainerbattle_single TRAINER_ISABEL_3, SunyshoreCity_Gym_Text_PrestonIntro, SunyshoreCity_Gym_Text_PrestonDefeat
	msgbox SunyshoreCity_Gym_Text_PrestonPost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_PrestonIntro:
	.string "Spark!\p"
	.string "This is what our Gym Leader did to the\n"
	.string "Gym out of boredom!$"

SunyshoreCity_Gym_Text_PrestonDefeat:
	.string "Spark...$"

SunyshoreCity_Gym_Text_PrestonPost:
	.string "We were lacking energy...\p"
	.string "No, we lacked more than that. We didn’t\n"
	.string "want the win enough.$"

SunyshoreCity_Gym_EventScript_Lonnie::
	trainerbattle_single TRAINER_ISABEL_4, SunyshoreCity_Gym_Text_LonnieIntro, SunyshoreCity_Gym_Text_LonnieDefeat
	msgbox SunyshoreCity_Gym_Text_LonniePost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_LonnieIntro:
	.string "Whether you’re a Trainer or a Guitarist,\n"
	.string "it takes dedication to\p"
	.string "improve your mad skills!$"

SunyshoreCity_Gym_Text_LonnieDefeat:
	.string "My skills seem to have let me down. I\n"
	.string "must have been out of tune!$"

SunyshoreCity_Gym_Text_LonniePost:
	.string "The way you battle, I can feel the very\n"
	.string "heart of rock and roll.\p"
	.string "Tell me, are you maybe a fan of rocking\n"
	.string "out?$"

SunyshoreCity_Gym_EventScript_Zachery::
	trainerbattle_single TRAINER_ISABEL_5, SunyshoreCity_Gym_Text_ZacheryIntro, SunyshoreCity_Gym_Text_ZacheryDefeat
	msgbox SunyshoreCity_Gym_Text_ZacheryPost, MSGBOX_AUTOCLOSE
	end

SunyshoreCity_Gym_Text_ZacheryIntro:
	.string "Wow! I’m surprised you’ve come this far,\n"
	.string "but you’ll have to turn back.\p"
	.string "There isn’t any chance that you could\n"
	.string "ever beat me!$"

SunyshoreCity_Gym_Text_ZacheryDefeat:
	.string "What makes your POKéMON so special?$"

SunyshoreCity_Gym_Text_ZacheryPost:
	.string "As a challenger, you’re one tough\n"
	.string "Trainer.$"

SunyshoreCity_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_MIGUEL_2, SunyshoreCity_Gym_Text_LeaderIntro, SunyshoreCity_Gym_Text_LeaderDefeat, SunyshoreCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_ITEM_TM57_FROM_VOLKNER, SunyshoreCity_Gym_EventScript_GiveTM
	msgbox SunyshoreCity_Gym_Text_LeaderPostBattle, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_LeaderDefeated::
	setflag FLAG_DEFEATED_MAUVILLE_GYM
	special MauvilleGymDeactivatePuzzle
	special DrawWholeMapView
	playse SE_UNLOCK
	message SunyshoreCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SunyshoreCity_Gym_Text_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE08_GET
	settrainerflag TRAINER_MIGUEL_3
	settrainerflag TRAINER_MIGUEL_4
	settrainerflag TRAINER_MIGUEL_5
	settrainerflag TRAINER_ISABEL_1
	settrainerflag TRAINER_ISABEL_2
	settrainerflag TRAINER_ISABEL_3
	settrainerflag TRAINER_ISABEL_4
	settrainerflag TRAINER_ISABEL_5
	goto SunyshoreCity_Gym_EventScript_GiveTM

SunyshoreCity_Gym_EventScript_GiveTM::
	giveitem ITEM_TM57
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ITEM_TM57_FROM_VOLKNER
	msgbox SunyshoreCity_Gym_Text_ExplainTM, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_PtGymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE08_GET, SunyshoreCity_Gym_EventScript_PtGymGuideAfter
	msgbox SunyshoreCity_Gym_Text_PtGymGuide, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_PtGymGuideAfter::
	msgbox SunyshoreCity_Gym_Text_PtGymGuideAfter, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_Gym_EventScript_PtGymStatue::
	msgbox SunyshoreCity_Gym_Text_PtGymStatue, MSGBOX_SIGN
	end


SunyshoreCity_Gym_Text_LeaderIntro:
	.string "...All right, challenger.\p"
	.string "It’s not often, but some Trainers\n"
	.string "manage to come and challenge me.\p"
	.string "But they’ve all been boring battles. I\n"
	.string "didn’t break a sweat beating them.\p"
	.string "...Sigh... I’m Volkner, the Gym Leader.\p"
	.string "They say I’m the top Gym Leader in\n"
	.string "Sinnoh, but...\p"
	.string "Anyway, I guess we’d better get this\n"
	.string "done.\p"
	.string "I hope you’re the Trainer who’ll make me\n"
	.string "remember how fun it is to battle!$"

SunyshoreCity_Gym_Text_LeaderDefeat:
	.string "...Hehehe.\p"
	.string "Hahahah!\p"
	.string "...That was the most fun I’ve had in a\n"
	.string "battle since...I don’t know when!\p"
	.string "It’s also made me excited to know you\n"
	.string "and your team will keep battling\p"
	.string "to greater heights!\p"
	.string "This is your eighth Gym Badge. You’ve\n"
	.string "earned this!$"

SunyshoreCity_Gym_Text_LeaderPostBattle:
	.string "Your next step is the POKéMON League\n"
	.string "challenge.\p"
	.string "It’s time for you to cross the sea and\n"
	.string "win your way through the\p"
	.string "gauntlet that is Victory Road.\p"
	.string "Demonstrate to the POKéMON League\n"
	.string "your mastery of your team.\p"
	.string "Against you, even the Elite Four will be\n"
	.string "pushed to fend off your challenge!$"

SunyshoreCity_Gym_Text_ReceivedBadge:
	.string "{PLAYER} received the Beacon Badge\n"
	.string "from Volkner.$"

SunyshoreCity_Gym_Text_ExplainBadge:
	.string "That Beacon Badge lets you use the\n"
	.string "hidden move Waterfall even when\p"
	.string "you’re not in a battle.\p"
	.string "Waterfall happens to be key if you’re\n"
	.string "going to the POKéMON League.\p"
	.string "Also, because you’ve collected all\n"
	.string "eight Badges, any POKéMON at any\p"
	.string "level will now obey you without fail.\p"
	.string "I want you to take this, too.$"

SunyshoreCity_Gym_Text_ExplainTM:
	.string "What’s inside that TM57 is the move\n"
	.string "CHARGE BEAM.\p"
	.string "It may raise Special Attack if it lands.\n"
	.string "It’s electrifying!$"

SunyshoreCity_Gym_Text_PtGymGuide:
	.string "Hey, Champ-to-be! Go for it!$"

SunyshoreCity_Gym_Text_PtGymGuideAfter:
	.string "Oh! {PLAYER}! Did you beat the Gym\n"
	.string "Leader?\p"
	.string "Well, of course you did!\p"
	.string "But, you know what? You haven’t made\n"
	.string "it in my mind yet!\p"
	.string "Do you know why?\p"
	.string "Because you and your POKéMON are\n"
	.string "capable of achieving so much more!\p"
	.string "But, I am proud of you! Eight Sinnoh\n"
	.string "Badges!\p"
	.string "Way to go, kiddo!$"

SunyshoreCity_Gym_Text_PtGymStatue:
	.string "Sunyshore City POKéMON Gym\p"
	.string "Leader: Volkner$"
