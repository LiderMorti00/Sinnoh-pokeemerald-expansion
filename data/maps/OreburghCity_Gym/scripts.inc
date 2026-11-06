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
	giveitem ITEM_TM76
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
	.string "Welcome! This is the Oreburgh POKéMON\n"
	.string "Gym!\p"
	.string "I’m Roark, the Gym Leader!\p"
	.string "I’m but one Trainer who decided to walk\n"
	.string "proudly with Rock-type POKéMON!\p"
	.string "As the Gym Leader, I need to see your\n"
	.string "potential as a Trainer.\p"
	.string "And, I’ll need to see the toughness of\n"
	.string "the POKéMON that battle with you!$"

OreburghCity_Gym_Text_RoarkDefeat:
	.string "This is embarrassing...\p"
	.string "I went and lost to a Trainer who didn’t\n"
	.string "have a single Gym Badge...\p"
	.string "But that’s tough. You were strong, and\n"
	.string "I was weak. That’s all there is.\p"
	.string "According to POKéMON League rules, I\n"
	.string "have to give you our Gym Badge\p"
	.string "since you’ve beaten me, the Leader.\p"
	.string "Here’s your official POKéMON League\n"
	.string "Coal Badge.$"

OreburghCity_Gym_Text_ReceivedCoalBadge:
	.string "{PLAYER} received the Coal Badge from\n"
	.string "Roark!$"

OreburghCity_Gym_Text_BadgeInfo:
	.string "Having that Coal Badge means your\n"
	.string "POKéMON can now use the hidden move\p"
	.string "Rock Smash outside of battle.\p"
	.string "You should also take this, too.$"

OreburghCity_Gym_Text_ExplainTM:
	.string "That TM76 contains the move STEALTH\n"
	.string "ROCK.\p"
	.string "It’s a move that inflicts damage on\n"
	.string "foes that switch into battle.\p"
	.string "Incidentally, a TM will teach its move\n"
	.string "to a POKéMON instantly.\p"
	.string "But a TM will break when you use it, so\n"
	.string "make certain you want a POKéMON\p"
	.string "to learn that move.$"

OreburghCity_Gym_Text_RoarkPost:
	.string "In this region of Sinnoh, there are\n"
	.string "seven other Gym Leaders.\p"
	.string "I should warn you--they’re a lot\n"
	.string "tougher than I am!$"

OreburghCity_Gym_Text_Guide:
	.string "Howdy! How’s it going, Champ-to-be?\p"
	.string "That’s what I said to a really\n"
	.string "impatient boy earlier, too.\p"
	.string "The Gym Leader is a user of Rock-type\n"
	.string "POKéMON.\p"
	.string "Well, listen. Rock-type POKéMON really\n"
	.string "hate water, all right?\p"
	.string "They’re also weak to Grass-type moves.\p"
	.string "Gee, they sure have weaknesses!\p"
	.string "But don’t think it will be easy.\p"
	.string "You don’t get to be a Gym Leader\n"
	.string "without covering for weaknesses.\p"
	.string "Going after a Rock-type POKéMON with\n"
	.string "a Fire-type POKéMON won’t be\p"
	.string "easy, either.\p"
	.string "That’s all the advice I can give.\n"
	.string "Thanks for listening!$"

OreburghCity_Gym_Text_GuideWon:
	.string "Oh! {PLAYER}! You’ve taken care of the\n"
	.string "Gym Leader!\p"
	.string "So, did my advice come in handy or\n"
	.string "what?\p"
	.string "If my advice was useful, it’d be great\n"
	.string "if you’d become my fan!$"

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
	.string "Oreburgh City POKéMON Gym\n"
	.string "Leader: Roark\p"
	.string "Certified Trainers:\n"
	.string "{RIVAL}$"

OreburghCity_Gym_Text_GymStatuePlayerWon:
	.string "Oreburgh City POKéMON Gym\n"
	.string "Leader: Roark\p"
	.string "Certified Trainers:\n"
	.string "{RIVAL}\n"
	.string "{PLAYER}$"

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
