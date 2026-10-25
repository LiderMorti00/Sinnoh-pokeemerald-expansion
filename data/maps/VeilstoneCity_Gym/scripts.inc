VeilstoneCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VeilstoneCity_Gym_OnTransition
	.byte 0

VeilstoneCity_Gym_OnTransition:
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	end

VeilstoneCity_Gym_EventScript_SetFlashLevel::
	goto_if_defeated TRAINER_CAMERON_5, VeilstoneCity_Gym_EventScript_SetLightsOn
	call VeilstoneCity_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 0, VeilstoneCity_Gym_EventScript_SetFlashLevel7
	goto_if_eq VAR_0x8000, 1, VeilstoneCity_Gym_EventScript_SetFlashLevel6
	goto_if_eq VAR_0x8000, 2, VeilstoneCity_Gym_EventScript_SetFlashLevel5
	goto_if_eq VAR_0x8000, 3, VeilstoneCity_Gym_EventScript_SetFlashLevel4
	goto_if_eq VAR_0x8000, 4, VeilstoneCity_Gym_EventScript_SetFlashLevel3
	goto_if_eq VAR_0x8000, 5, VeilstoneCity_Gym_EventScript_SetFlashLevel2
	goto VeilstoneCity_Gym_EventScript_SetFlashLevel1

VeilstoneCity_Gym_EventScript_SetLightsOn::
	setflashlevel 0
	return

@ Brightest
VeilstoneCity_Gym_EventScript_SetFlashLevel1::
	setflashlevel 1
	return

VeilstoneCity_Gym_EventScript_SetFlashLevel2::
	setflashlevel 2
	return

VeilstoneCity_Gym_EventScript_SetFlashLevel3::
	setflashlevel 3
	return

VeilstoneCity_Gym_EventScript_SetFlashLevel4::
	setflashlevel 4
	return

VeilstoneCity_Gym_EventScript_SetFlashLevel5::
	setflashlevel 5
	return

VeilstoneCity_Gym_EventScript_SetFlashLevel6::
	setflashlevel 6
	return

@ Darkest
VeilstoneCity_Gym_EventScript_SetFlashLevel7::
	setflashlevel 7
	return

VeilstoneCity_Gym_EventScript_BrightenRoom::
	call VeilstoneCity_Gym_EventScript_CountTrainersDefeated
	nop1
	goto_if_eq VAR_0x8000, VAR_0x8001, VeilstoneCity_Gym_EventScript_NoLightChange
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 1, VeilstoneCity_Gym_EventScript_AnimateFlash1Trainer
	goto_if_eq VAR_0x8000, 2, VeilstoneCity_Gym_EventScript_AnimateFlash2Trainers
	goto_if_eq VAR_0x8000, 3, VeilstoneCity_Gym_EventScript_AnimateFlash3Trainers
	goto_if_eq VAR_0x8000, 4, VeilstoneCity_Gym_EventScript_AnimateFlash4Trainers
	goto_if_eq VAR_0x8000, 5, VeilstoneCity_Gym_EventScript_AnimateFlash5Trainers
	goto_if_eq VAR_0x8000, 6, VeilstoneCity_Gym_EventScript_AnimateFlash6Trainers

VeilstoneCity_Gym_EventScript_NoLightChange::
	return

@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
VeilstoneCity_Gym_EventScript_AnimateFlash1Trainer::
	playse SE_SWITCH
	animateflash 6
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	return

VeilstoneCity_Gym_EventScript_AnimateFlash2Trainers::
	playse SE_SWITCH
	animateflash 5
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	return

VeilstoneCity_Gym_EventScript_AnimateFlash3Trainers::
	playse SE_SWITCH
	animateflash 4
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	return

VeilstoneCity_Gym_EventScript_AnimateFlash4Trainers::
	playse SE_SWITCH
	animateflash 3
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	return

VeilstoneCity_Gym_EventScript_AnimateFlash5Trainers::
	playse SE_SWITCH
	animateflash 2
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	return

VeilstoneCity_Gym_EventScript_AnimateFlash6Trainers::
	playse SE_SWITCH
	animateflash 1
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	return

VeilstoneCity_Gym_EventScript_AnimateFlashFullBrightness::
	playse SE_SWITCH
	animateflash 0
	call VeilstoneCity_Gym_EventScript_SetFlashLevel
	return

VeilstoneCity_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_JACKI_1, VeilstoneCity_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
VeilstoneCity_Gym_EventScript_CheckJocelyn::
	goto_if_not_defeated TRAINER_JACKI_2, VeilstoneCity_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
VeilstoneCity_Gym_EventScript_CheckLaura::
	goto_if_not_defeated TRAINER_JACKI_3, VeilstoneCity_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
VeilstoneCity_Gym_EventScript_CheckBrenden::
	goto_if_not_defeated TRAINER_BRENDEN, VeilstoneCity_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
VeilstoneCity_Gym_EventScript_CheckCristian::
	goto_if_not_defeated TRAINER_JACKI_4, VeilstoneCity_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
VeilstoneCity_Gym_EventScript_CheckLilith::
	goto_if_not_defeated TRAINER_LILITH, VeilstoneCity_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
VeilstoneCity_Gym_EventScript_StopCountingTrainers::
	return

VeilstoneCity_Gym_EventScript_TakaoBrightenRoom::
	call VeilstoneCity_Gym_EventScript_BrightenRoom
	release
	end

VeilstoneCity_Gym_EventScript_JocelynBrightenRoom::
	call VeilstoneCity_Gym_EventScript_BrightenRoom
	release
	end

VeilstoneCity_Gym_EventScript_LauraBrightenRoom::
	call VeilstoneCity_Gym_EventScript_BrightenRoom
	release
	end

VeilstoneCity_Gym_EventScript_CristianBrightenRoom::
	call VeilstoneCity_Gym_EventScript_BrightenRoom
	release
	end

VeilstoneCity_Gym_Text_GymGuidePostVictory:
	.string "Whoah! It's turned too bright in here!\p"
	.string "Your future is bright, too!$"

VeilstoneCity_Gym_Text_TakaoIntro:
	.string "Might is right!\n"
	.string "Come on!$"

VeilstoneCity_Gym_Text_TakaoDefeat:
	.string "Not enough power…$"

VeilstoneCity_Gym_Text_TakaoPostBattle:
	.string "Your skill overcame my strength!\n"
	.string "Your technique is commendable!$"

VeilstoneCity_Gym_Text_JocelynIntro:
	.string "There's no need for BRAWLY to be\n"
	.string "involved!\p"
	.string "I'll crush you!$"

VeilstoneCity_Gym_Text_JocelynDefeat:
	.string "But… How?\n"
	.string "How could I lose so easily?$"

VeilstoneCity_Gym_Text_JocelynPostBattle:
	.string "I'm not going to waste this loss.\n"
	.string "I'll use it to motivate me to train!\p"
	.string "One day I'll become a GYM LEADER…\p"
	.string "No, I'll become the POKéMON LEAGUE\n"
	.string "CHAMPION!$"

VeilstoneCity_Gym_Text_LauraIntro:
	.string "Don't you dare brush me off!\n"
	.string "It's not my fault if you cry!$"

VeilstoneCity_Gym_Text_LauraDefeat:
	.string "Waaaaaaah!\n"
	.string "I lost!$"

VeilstoneCity_Gym_Text_LauraPostBattle:
	.string "I battle in the dark to make my heart\n"
	.string "stronger.\p"
	.string "But because it's so dark, I can never\n"
	.string "see BRAWLY's face…$"

VeilstoneCity_Gym_Text_LilithIntro:
	.string "Ufufu…\n"
	.string "Are you stumbling around in the dark?$"

VeilstoneCity_Gym_Text_LilithDefeat:
	.string "Oh, you…\n"
	.string "I don't want to know you!$"

VeilstoneCity_Gym_Text_LilithPostBattle:
	.string "You deserve to stay lost and end up\n"
	.string "back at the entrance again!$"

VeilstoneCity_Gym_Text_BrendenIntro:
	.string "I'll show you the gumption of\n"
	.string "a sailing man!$"

VeilstoneCity_Gym_Text_BrendenDefeat:
	.string "How'd this happen?\n"
	.string "It's not like me to lose this way!$"

VeilstoneCity_Gym_Text_BrendenPostBattle:
	.string "Oh, aye! You're worthy of seeing\n"
	.string "our GYM LEADER.$"

VeilstoneCity_Gym_Text_CristianIntro:
	.string "If you mean to pass, it has to be\n"
	.string "through me!$"

VeilstoneCity_Gym_Text_CristianDefeat:
	.string "Grrrrr!\n"
	.string "Vastly overpowered!$"

VeilstoneCity_Gym_Text_CristianPostBattle:
	.string "You win!\n"
	.string "Go after that BADGE!$"

VeilstoneCity_Gym_Text_BrawlyIntro:
	.string "I'm BRAWLY!\n"
	.string "DEWFORD's GYM LEADER!\p"
	.string "I've been churned in the rough waves\n"
	.string "of these parts, and I've grown tough\l"
	.string "in the pitch-black cave!\p"
	.string "So you wanted to challenge me?\n"
	.string "Let me see what you're made of!$"

VeilstoneCity_Gym_Text_BrawlyDefeat:
	.string "Whoah, wow! You made a much bigger\n"
	.string "splash than I expected!\p"
	.string "You swamped me!\p"
	.string "Okay, you've got me.\n"
	.string "Take this GYM BADGE!$"

VeilstoneCity_Gym_Text_ReceivedKnuckleBadge:
	.string "{PLAYER} received the KNUCKLE BADGE\n"
	.string "from BRAWLY.$"

VeilstoneCity_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "The KNUCKLE BADGE makes all POKéMON\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

VeilstoneCity_Gym_Text_ExplainBulkUp:
	.string "That TM08 contains BULK UP.\p"
	.string "It's a move that raises both ATTACK\n"
	.string "and DEFENSE stats.\p"
	.string "… … … … … …$"

VeilstoneCity_Gym_Text_RegisteredBrawly:
	.string "Registered GYM LEADER BRAWLY\n"
	.string "in the POKéNAV.$"

VeilstoneCity_Gym_Text_BrawlyPostBattle:
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among TRAINERS one day!$"

VeilstoneCity_Gym_Text_GymStatue:
	.string "DEWFORD TOWN POKéMON GYM$"

VeilstoneCity_Gym_Text_GymStatueCertified:
	.string "DEWFORD TOWN POKéMON GYM\p"
	.string "BRAWLY'S CERTIFIED TRAINERS:\n"
	.string "{PLAYER}$"

VeilstoneCity_Gym_Text_BrawlyPreRematch:
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

VeilstoneCity_Gym_Text_BrawlyRematchDefeat:
	.string "Wow!\n"
	.string "Swamped again!$"

VeilstoneCity_Gym_Text_BrawlyPostRematch:
	.string "BRAWLY: Battling is vast and it's deep.\n"
	.string "You can't see the bottom.\l"
	.string "It's just like the sea of HOENN!$"

VeilstoneCity_Gym_Text_BrawlyRematchNeedTwoMons:
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one POKéMON\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two POKéMON.$"

VeilstoneCity_Gym_EventScript_Colby::
	trainerbattle_single TRAINER_JACKI_1, VeilstoneCity_Gym_Text_ColbyIntro, VeilstoneCity_Gym_Text_ColbyDefeat, VeilstoneCity_Gym_EventScript_TakaoBrightenRoom
	msgbox VeilstoneCity_Gym_Text_ColbyPost, MSGBOX_AUTOCLOSE
	end

VeilstoneCity_Gym_Text_ColbyIntro:
	.string "We’re the Karate Quads!\p"
	.string "I will strike a blow for love with my\n"
	.string "fist! Hiyah, looooooooove!$"

VeilstoneCity_Gym_Text_ColbyDefeat:
	.string "Argh! Crunched!$"

VeilstoneCity_Gym_Text_ColbyPost:
	.string "Your POKéMON sure are tough!\p"
	.string "But our Gym Leader Maylene will break\n"
	.string "you like a stack of bricks!$"

VeilstoneCity_Gym_EventScript_Darren::
	trainerbattle_single TRAINER_JACKI_2, VeilstoneCity_Gym_Text_DarrenIntro, VeilstoneCity_Gym_Text_DarrenDefeat, VeilstoneCity_Gym_EventScript_JocelynBrightenRoom
	msgbox VeilstoneCity_Gym_Text_DarrenPost, MSGBOX_AUTOCLOSE
	end

VeilstoneCity_Gym_Text_DarrenIntro:
	.string "We’re the Karate Quads!\p"
	.string "I will strike a blow for courage with my\n"
	.string "fist! Hiyah, couraaaaaaaaaaage!$"

VeilstoneCity_Gym_Text_DarrenDefeat:
	.string "I couldn’t force my way to victory...$"

VeilstoneCity_Gym_Text_DarrenPost:
	.string "To overwhelm by force... That is my\n"
	.string "ideal beat-down style.\p"
	.string "It doesn’t seem to work that way with\n"
	.string "POKéMON, however.$"

VeilstoneCity_Gym_EventScript_Jeffery::
	trainerbattle_single TRAINER_JACKI_3, VeilstoneCity_Gym_Text_JefferyIntro, VeilstoneCity_Gym_Text_JefferyDefeat, VeilstoneCity_Gym_EventScript_LauraBrightenRoom
	msgbox VeilstoneCity_Gym_Text_JefferyPost, MSGBOX_AUTOCLOSE
	end

VeilstoneCity_Gym_Text_JefferyIntro:
	.string "We’re the Karate Quads!\p"
	.string "I will strike a blow for tears with my\n"
	.string "fist! Hiyah, teeeeeeaaaaaaaaars!$"

VeilstoneCity_Gym_Text_JefferyDefeat:
	.string "I’m so hungry, kid... I don’t have any\n"
	.string "strength left...$"

VeilstoneCity_Gym_Text_JefferyPost:
	.string "I lost because I didn’t eat enough\n"
	.string "pizza.\p"
	.string "...No. Anything I say will sound like I’m\n"
	.string "making excuses.$"

VeilstoneCity_Gym_EventScript_Rafael::
	trainerbattle_single TRAINER_JACKI_4, VeilstoneCity_Gym_Text_RafaelIntro, VeilstoneCity_Gym_Text_RafaelDefeat, VeilstoneCity_Gym_EventScript_CristianBrightenRoom
	msgbox VeilstoneCity_Gym_Text_RafaelPost, MSGBOX_AUTOCLOSE
	end

VeilstoneCity_Gym_Text_RafaelIntro:
	.string "We’re the Karate Quads!\p"
	.string "I will strike a blow for hope with my\n"
	.string "fist! Hiyah, hoooooooooooooope!$"

VeilstoneCity_Gym_Text_RafaelDefeat:
	.string "We came up short, but not by much.$"

VeilstoneCity_Gym_Text_RafaelPost:
	.string "I’ll have to redo my training, though.\n"
	.string "Maylene’s gonna trample me again...$"

VeilstoneCity_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_CAMERON_5, VeilstoneCity_Gym_Text_LeaderIntro, VeilstoneCity_Gym_Text_LeaderDefeat, VeilstoneCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_ITEM_TM60_FROM_MAYLENE, VeilstoneCity_Gym_EventScript_GiveTM
	msgbox VeilstoneCity_Gym_Text_LeaderPostBattle, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_LeaderDefeated::
	call VeilstoneCity_Gym_EventScript_AnimateFlashFullBrightness
	setflag FLAG_DEFEATED_DEWFORD_GYM
	message VeilstoneCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox VeilstoneCity_Gym_Text_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE04_GET
	settrainerflag TRAINER_JACKI_1
	settrainerflag TRAINER_JACKI_2
	settrainerflag TRAINER_JACKI_3
	settrainerflag TRAINER_JACKI_4
	goto VeilstoneCity_Gym_EventScript_GiveTM

VeilstoneCity_Gym_EventScript_GiveTM::
	giveitem ITEM_TM60
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ITEM_TM60_FROM_MAYLENE
	msgbox VeilstoneCity_Gym_Text_ExplainTM, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_PtGymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE04_GET, VeilstoneCity_Gym_EventScript_PtGymGuideAfter
	msgbox VeilstoneCity_Gym_Text_PtGymGuide, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_PtGymGuideAfter::
	msgbox VeilstoneCity_Gym_Text_PtGymGuideAfter, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Gym_EventScript_PtGymStatue::
	msgbox VeilstoneCity_Gym_Text_PtGymStatue, MSGBOX_SIGN
	end


VeilstoneCity_Gym_Text_LeaderIntro:
	.string "Hello. I’m pleased to meet you.\p"
	.string "I’m Maylene, and I’m the Gym Leader.\p"
	.string "I don’t really know what it means to be\n"
	.string "strong, or how I got to be the\p"
	.string "Gym Leader.\p"
	.string "But I will do the best I can as the Gym\n"
	.string "Leader.\p"
	.string "I take battling very seriously.\n"
	.string "Whenever you’re ready!$"

VeilstoneCity_Gym_Text_LeaderDefeat:
	.string "...OK. You win.\p"
	.string "That was a tough loss. I learned a lot\n"
	.string "from it.\p"
	.string "Please, accept this Gym Badge.$"

VeilstoneCity_Gym_Text_LeaderPostBattle:
	.string "Gee, I’m hungry...\p"
	.string "Oh, sorry, it’s nothing. I didn’t say\n"
	.string "anything.\p"
	.string "{PLAYER}, I can’t explain what it means\n"
	.string "to be strong.\p"
	.string "I don’t know how much effort goes into\n"
	.string "being strong...\p"
	.string "But being with POKéMON lets us keep\n"
	.string "making the effort, doesn’t it?$"

VeilstoneCity_Gym_Text_ReceivedBadge:
	.string "{PLAYER} received the Cobble Badge\n"
	.string "from Maylene.$"

VeilstoneCity_Gym_Text_ExplainBadge:
	.string "Um... I should explain about that\n"
	.string "official POKéMON League Gym Badge.\p"
	.string "With it, you can use the hidden move\n"
	.string "Fly outside of battle.\p"
	.string "Oh, and since you now have four Gym\n"
	.string "Badges, POKéMON obtained in trades\p"
	.string "will obey you up to Lv. 50.\p"
	.string "Oh, and please take this as well.$"

VeilstoneCity_Gym_Text_ExplainTM:
	.string "That TM60 contains the move DRAIN\n"
	.string "PUNCH.\p"
	.string "Um... That move inflicts damage, and it\n"
	.string "robs the target’s HP.$"

VeilstoneCity_Gym_Text_PtGymGuide:
	.string "Hey, there! How’s it going,\n"
	.string "Champ-to-be?\p"
	.string "The Gym Leader is a user of\n"
	.string "Fighting-type POKéMON.\p"
	.string "She’d be a terror against Normal-type\n"
	.string "POKéMON.\p"
	.string "But! And it’s a big but! Just between\n"
	.string "you and me...\p"
	.string "Maylene, the Gym Leader, said Flying-\n"
	.string "and Psychic-type POKéMON could be\p"
	.string "real trouble for her!\p"
	.string "If you want to battle her, smack the\n"
	.string "punching bags along the rails.\p"
	.string "You have to hit those bags hard!$"

VeilstoneCity_Gym_Text_PtGymGuideAfter:
	.string "Oh! {PLAYER}! You’ve beaten the Gym\n"
	.string "Leader!\p"
	.string "Of course, I thought you’d win.$"

VeilstoneCity_Gym_Text_PtGymStatue:
	.string "Veilstone City POKéMON Gym Leader:\n"
	.string "Maylene\p"
	.string "Certified Trainers: {PLAYER}$"
