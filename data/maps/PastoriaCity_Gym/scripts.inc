PastoriaCity_Gym_MapScripts::
	.byte 0



PastoriaCity_Gym_EventScript_Jacky::
	trainerbattle_single TRAINER_WALTER_1, PastoriaCity_Gym_Text_JackyIntro, PastoriaCity_Gym_Text_JackyDefeat
	msgbox PastoriaCity_Gym_Text_JackyPost, MSGBOX_AUTOCLOSE
	end

PastoriaCity_Gym_Text_JackyIntro:
	.string "My body isn’t the only thing I work on\n"
	.string "toughening up here.\p"
	.string "I also work on my POKéMON and my\n"
	.string "spirit!$"

PastoriaCity_Gym_Text_JackyDefeat:
	.string "Wow, Trainer! You just might be tougher\n"
	.string "than our Gym Leader!$"

PastoriaCity_Gym_Text_JackyPost:
	.string "Maybe I’ll do like Wake,\p"
	.string "I mean, Crasher Wake, and wear the same\n"
	.string "kind of mask.$"

PastoriaCity_Gym_EventScript_Damian::
	trainerbattle_single TRAINER_WALTER_2, PastoriaCity_Gym_Text_DamianIntro, PastoriaCity_Gym_Text_DamianDefeat
	msgbox PastoriaCity_Gym_Text_DamianPost, MSGBOX_AUTOCLOSE
	end

PastoriaCity_Gym_Text_DamianIntro:
	.string "I’ve been around the world, going from\n"
	.string "place to place training POKéMON.\p"
	.string "It’s this Gym I’ve chosen to make my\n"
	.string "home!\p"
	.string "You can bet it’s tough!$"

PastoriaCity_Gym_Text_DamianDefeat:
	.string "You! You’re truly top-class tough!$"

PastoriaCity_Gym_Text_DamianPost:
	.string "If you were to go around the world, I’m\n"
	.string "sure you’d meet tougher POKéMON.$"

PastoriaCity_Gym_EventScript_Caitlyn::
	trainerbattle_single TRAINER_WALTER_3, PastoriaCity_Gym_Text_CaitlynIntro, PastoriaCity_Gym_Text_CaitlynDefeat
	msgbox PastoriaCity_Gym_Text_CaitlynPost, MSGBOX_AUTOCLOSE
	end

PastoriaCity_Gym_Text_CaitlynIntro:
	.string "I want to become a strong Trainer like\n"
	.string "Crasher Wake!$"

PastoriaCity_Gym_Text_CaitlynDefeat:
	.string "Groan... You’re too much.$"

PastoriaCity_Gym_Text_CaitlynPost:
	.string "Maybe I’ll do like Wake...\p"
	.string "I mean, Crasher Wake, and use the same\n"
	.string "kinds of POKéMON.$"

PastoriaCity_Gym_EventScript_Samson::
	trainerbattle_single TRAINER_WALTER_4, PastoriaCity_Gym_Text_SamsonIntro, PastoriaCity_Gym_Text_SamsonDefeat
	msgbox PastoriaCity_Gym_Text_SamsonPost, MSGBOX_AUTOCLOSE
	end

PastoriaCity_Gym_Text_SamsonIntro:
	.string "Like the raging sea, I crash down and\n"
	.string "wash away everything before me!\p"
	.string "That’s just how I roll!$"

PastoriaCity_Gym_Text_SamsonDefeat:
	.string "That wave didn’t even wash my hands...$"

PastoriaCity_Gym_Text_SamsonPost:
	.string "I’m now becalmed like a waveless sea...$"

PastoriaCity_Gym_EventScript_Erick::
	trainerbattle_single TRAINER_WALTER_5, PastoriaCity_Gym_Text_ErickIntro, PastoriaCity_Gym_Text_ErickDefeat
	msgbox PastoriaCity_Gym_Text_ErickPost, MSGBOX_AUTOCLOSE
	end

PastoriaCity_Gym_Text_ErickIntro:
	.string "I’ve landed the most fish POKéMON in\n"
	.string "the world. I’m next!$"

PastoriaCity_Gym_Text_ErickDefeat:
	.string "Being number one in the world doesn’t\n"
	.string "mean a thing...$"

PastoriaCity_Gym_Text_ErickPost:
	.string "I figure I got too wrapped up in\n"
	.string "fishing and neglected training.$"

PastoriaCity_Gym_EventScript_Walter::
	trainerbattle_single TRAINER_JERRY_1, PastoriaCity_Gym_Text_WalterIntro, PastoriaCity_Gym_Text_WalterDefeat
	msgbox PastoriaCity_Gym_Text_WalterPost, MSGBOX_AUTOCLOSE
	end

PastoriaCity_Gym_Text_WalterIntro:
	.string "I wield the stupendous power of water!\n"
	.string "Don’t think you can win!$"

PastoriaCity_Gym_Text_WalterDefeat:
	.string "But the kid wins anyway! I’m just\n"
	.string "bowled over!$"

PastoriaCity_Gym_Text_WalterPost:
	.string "The water rising and falling is tricky,\n"
	.string "but don’t let it annoy you.\p"
	.string "If you lose sight of yourself, that’s\n"
	.string "when you’re set to lose.$"

PastoriaCity_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_JACKI_5, PastoriaCity_Gym_Text_LeaderIntro, PastoriaCity_Gym_Text_LeaderDefeat, PastoriaCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_ITEM_TM55_FROM_WAKE, PastoriaCity_Gym_EventScript_GiveTM
	msgbox PastoriaCity_Gym_Text_LeaderPostBattle, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_LeaderDefeated::
	message PastoriaCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox PastoriaCity_Gym_Text_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE05_GET
	settrainerflag TRAINER_WALTER_1
	settrainerflag TRAINER_WALTER_2
	settrainerflag TRAINER_WALTER_3
	settrainerflag TRAINER_WALTER_4
	settrainerflag TRAINER_WALTER_5
	settrainerflag TRAINER_JERRY_1
	goto PastoriaCity_Gym_EventScript_GiveTM

PastoriaCity_Gym_EventScript_GiveTM::
	giveitem ITEM_TM55
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ITEM_TM55_FROM_WAKE
	msgbox PastoriaCity_Gym_Text_ExplainTM, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_PtGymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE05_GET, PastoriaCity_Gym_EventScript_PtGymGuideAfter
	msgbox PastoriaCity_Gym_Text_PtGymGuide, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_PtGymGuideAfter::
	msgbox PastoriaCity_Gym_Text_PtGymGuideAfter, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Gym_EventScript_PtGymStatue::
	msgbox PastoriaCity_Gym_Text_PtGymStatue, MSGBOX_SIGN
	end


PastoriaCity_Gym_Text_LeaderIntro:
	.string "Welcome! I don’t get challenged very\n"
	.string "often!\p"
	.string "The glory you are now beholding is the\n"
	.string "Pastoria Gym Leader!\p"
	.string "That’s right, I’m Crasher Wake!\p"
	.string "My POKéMON were toughened up by\n"
	.string "stormy white waters!\p"
	.string "They’ll take everything you can throw\n"
	.string "at them and then pull you under!\p"
	.string "Victory will be ours! Come on, let’s get\n"
	.string "it done!$"

PastoriaCity_Gym_Text_LeaderDefeat:
	.string "It seems the undertow pulled me\n"
	.string "under...\p"
	.string "But I had a great time battling with\n"
	.string "you!\p"
	.string "You’ve earned this!$"

PastoriaCity_Gym_Text_LeaderPostBattle:
	.string "The styles of battling and winning are\n"
	.string "as widely varied as Trainers are.\p"
	.string "Do you want to know how I battle? I\n"
	.string "battle so I can say I had fun at\p"
	.string "the end, whether I win or lose!$"

PastoriaCity_Gym_Text_ReceivedBadge:
	.string "{PLAYER} received the Fen Badge from\n"
	.string "Wake!$"

PastoriaCity_Gym_Text_ExplainBadge:
	.string "You need that Fen Badge to use the\n"
	.string "hidden move Surf outside of battle.\p"
	.string "This is a special reward from me in\n"
	.string "recognition of your team’s power.$"

PastoriaCity_Gym_Text_ExplainTM:
	.string "That TM55 contains the move BRINE.\p"
	.string "It inflicts double the damage on\n"
	.string "targets with less than half their\p"
	.string "HP left.\p"
	.string "Use it to end battles decisively!$"

PastoriaCity_Gym_Text_PtGymGuide:
	.string "The Gym Leader Wake... Uh, I mean\n"
	.string "Crasher Wake, is a master of\p"
	.string "Water-type POKéMON.\p"
	.string "I’d say you’ve got guts if you try to\n"
	.string "face down Water types with Fire-\p"
	.string "or Ground-type POKéMON!\p"
	.string "But that part I’ll leave up to you! Go\n"
	.string "and have some good battles!$"

PastoriaCity_Gym_Text_PtGymGuideAfter:
	.string "Oh! {PLAYER}! You’ve beaten the Gym\n"
	.string "Leader!\p"
	.string "So, how was it?\p"
	.string "Did you enjoy your battle against\n"
	.string "Wake... I mean Crasher Wake?\p"
	.string "Sure, winning is important, but don’t\n"
	.string "forget to have fun, too!\p"
	.string "I think Wake... I mean Crasher Wake,\n"
	.string "showed you what I mean by fun.$"

PastoriaCity_Gym_Text_PtGymStatue:
	.string "Pastoria City POKéMON Gym Leader:\n"
	.string "Crasher Wake\p"
	.string "Certified Trainers: {PLAYER}$"
