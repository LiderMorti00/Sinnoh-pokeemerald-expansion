OreburghCity_Gym_MapScripts::
	.byte 0

OreburghCity_Gym_EventScript_Roark::
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
