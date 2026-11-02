OreburghCity_Gym_MapScripts::
	.byte 0

OreburghCity_Gym_EventScript_Roark::
	goto_if_set FLAG_SYS_GAME_CLEAR, OreburghCity_Gym_EventScript_SNRematch
	trainerbattle_single TRAINER_ROARK_1, OreburghCity_Gym_Text_RoarkIntro, OreburghCity_Gym_Text_RoarkDefeat, OreburghCity_Gym_EventScript_RoarkDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, OreburghCity_Gym_EventScript_GiveTM
	msgbox OreburghCity_Gym_Text_RoarkPost, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_RoarkDefeated::
	message OreburghCity_Gym_Text_ReceivedCoalBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox OreburghCity_Gym_Text_BadgeInfo, MSGBOX_DEFAULT
	setflag FLAG_BADGE01_GET
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	setvar VAR_SINNOH_STORY, 19
	clearflag FLAG_HIDE_JUBILIFE_GRUNTS
	goto OreburghCity_Gym_EventScript_GiveTM
	end

OreburghCity_Gym_EventScript_GiveTM::
	giveitem ITEM_TM_ROCK_TOMB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	msgbox OreburghCity_Gym_Text_ExplainTM, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_Guide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE01_GET, OreburghCity_Gym_EventScript_GuideWon
	msgbox OreburghCity_Gym_Text_Guide, MSGBOX_DEFAULT
	msgbox OreburghCity_Gym_Text_SNGuideInfo, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_EventScript_GuideWon::
	msgbox OreburghCity_Gym_Text_GuideWon, MSGBOX_DEFAULT
	release
	end

OreburghCity_Gym_Text_RoarkIntro:
	.string "ROARK: So you made it! This GYM is\n"
	.string "where I test Trainers with\l"
	.string "ROCK-type POKéMON.\p"
	.string "My POKéMON are as tough as the\n"
	.string "stone they're named after. Show me\l"
	.string "what you've got!$"

OreburghCity_Gym_Text_RoarkDefeat:
	.string "This is... unexpected. You beat me\n"
	.string "fair and square. Take the COAL\l"
	.string "BADGE!$"

OreburghCity_Gym_Text_ReceivedCoalBadge:
	.string "{PLAYER} received the COAL BADGE\n"
	.string "from ROARK.$"

OreburghCity_Gym_Text_BadgeInfo:
	.string "ROARK: That BADGE proves you've\n"
	.string "got real skill. Take this TM as\l"
	.string "well.$"

OreburghCity_Gym_Text_ExplainTM:
	.string "ROARK: That TM teaches ROCK TOMB.\n"
	.string "It hurls boulders and slows the\l"
	.string "target down.\p"
	.string "The next GYM is in ETERNA CITY.\n"
	.string "Good luck out there!$"

OreburghCity_Gym_Text_RoarkPost:
	.string "ROARK: I'll be training hard. Next\n"
	.string "time, I won't lose!$"

OreburghCity_Gym_Text_Guide:
	.string "Hey, future champ! ROARK uses\n"
	.string "ROCK-type POKéMON.\p"
	.string "WATER and GRASS-type moves hit\n"
	.string "them hard. Good luck!$"

OreburghCity_Gym_Text_GuideWon:
	.string "You beat ROARK! That was a\n"
	.string "rock-solid battle!$"

OreburghCity_Gym_EventScript_Jonathon::
	trainerbattle_single TRAINER_JOSH, OreburghCity_Gym_Text_JonathonIntro, OreburghCity_Gym_Text_JonathonDefeat
	msgbox OreburghCity_Gym_Text_JonathonPost, MSGBOX_AUTOCLOSE
	end

OreburghCity_Gym_Text_JonathonIntro:
	.string "You avoided the long way around?\n"
	.string "Let's see why you'd do that!$"

OreburghCity_Gym_Text_JonathonDefeat:
	.string "Now I understand why you decided to\n"
	.string "battle with me.$"

OreburghCity_Gym_Text_JonathonPost:
	.string "You should go whichever way you want,\n"
	.string "shortcut or the long way!$"

OreburghCity_Gym_EventScript_Darius::
	trainerbattle_single TRAINER_TOMMY, OreburghCity_Gym_Text_DariusIntro, OreburghCity_Gym_Text_DariusDefeat
	msgbox OreburghCity_Gym_Text_DariusPost, MSGBOX_AUTOCLOSE
	end

OreburghCity_Gym_Text_DariusIntro:
	.string "Only those who want to win can\n"
	.string "challenge a POKéMON Gym!$"

OreburghCity_Gym_Text_DariusDefeat:
	.string "Gggh... This is humiliating!$"

OreburghCity_Gym_Text_DariusPost:
	.string "One day, I'm going to become a tough\n"
	.string "Trainer like you.$"

OreburghCity_Gym_EventScript_GymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, OreburghCity_Gym_EventScript_GymStatuePostVictory
	msgbox OreburghCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

OreburghCity_Gym_EventScript_GymStatuePostVictory::
	msgbox OreburghCity_Gym_Text_GymStatuePlayerWon, MSGBOX_DEFAULT
	releaseall
	end

OreburghCity_Gym_Text_GymStatue:
	.string "OREBURGH POKéMON GYM\n"
	.string "LEADER: ROARK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

OreburghCity_Gym_Text_GymStatuePlayerWon:
	.string "OREBURGH POKéMON GYM\n"
	.string "LEADER: ROARK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

OreburghCity_Gym_EventScript_SNRematch::
	lock
	faceplayer
	msgbox OreburghCity_Gym_EventScript_SNRematch_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, OreburghCity_Gym_EventScript_SNRematch_No
	msgbox OreburghCity_Gym_EventScript_SNRematch_Go, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_ISAIAH_4, OreburghCity_Gym_EventScript_SNRematch_Defeat
	msgbox OreburghCity_Gym_EventScript_SNRematch_After, MSGBOX_DEFAULT
	release
	end
OreburghCity_Gym_EventScript_SNRematch_No:
	msgbox OreburghCity_Gym_EventScript_SNRematch_NoT, MSGBOX_DEFAULT
	release
	end
OreburghCity_Gym_EventScript_SNRematch_Ask:
	.string "Roark: You became the Champion!\n"
	.string "Welcome back!\p"
	.string "I’ve been training even harder since\n"
	.string "our last battle.\p"
	.string "Will you battle me again?$"

OreburghCity_Gym_EventScript_SNRematch_Go:
	.string "Then I won’t hold back this time!$"

OreburghCity_Gym_EventScript_SNRematch_Defeat:
	.string "Amazing... You really are the Champion!$"

OreburghCity_Gym_EventScript_SNRematch_After:
	.string "That was a great battle! Come back\n"
	.string "anytime for another match!$"

OreburghCity_Gym_EventScript_SNRematch_NoT:
	.string "Come back whenever you’re ready!$"

OreburghCity_Gym_Text_SNGuideInfo:
	.string "Let me tell you about this Gym!\p"
	.string "The Gym Leader is ROARK, the\n"
	.string "Rock-Loving Honor Student. He is also\l"
	.string "the young boss of the Oreburgh Mine.\p"
	.string "He uses Rock-type POKéMON like\n"
	.string "GEODUDE, ONIX and his partner\l"
	.string "CRANIDOS.\p"
	.string "Rock types are weak to Water, Grass,\n"
	.string "Fighting, Ground and Steel moves!\p"
	.string "His Trainers wait along the path. Beat\n"
	.string "them and you can walk right up to\l"
	.string "ROARK. Go for it!$"

