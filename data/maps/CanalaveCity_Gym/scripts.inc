CanalaveCity_Gym_MapScripts::
	.byte 0



CanalaveCity_Gym_EventScript_David::
	trainerbattle_single TRAINER_JERRY_3, CanalaveCity_Gym_Text_DavidIntro, CanalaveCity_Gym_Text_DavidDefeat
	msgbox CanalaveCity_Gym_Text_DavidPost, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_Text_DavidIntro:
	.string "Aiyaah! We’re coming out swinging with\n"
	.string "super-heavy judo chops!$"

CanalaveCity_Gym_Text_DavidDefeat:
	.string "That was... A complete trashing!$"

CanalaveCity_Gym_Text_DavidPost:
	.string "I must rededicate myself to training.\n"
	.string "The road extends into infinity...$"

CanalaveCity_Gym_EventScript_Jackson::
	trainerbattle_single TRAINER_JERRY_4, CanalaveCity_Gym_Text_JacksonIntro, CanalaveCity_Gym_Text_JacksonDefeat
	msgbox CanalaveCity_Gym_Text_JacksonPost, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_Text_JacksonIntro:
	.string "Up and down you go on the lifts. Me? I\n"
	.string "like to battle!$"

CanalaveCity_Gym_Text_JacksonDefeat:
	.string "You’ve got me feeling down!$"

CanalaveCity_Gym_Text_JacksonPost:
	.string "I can’t keep this up! I’ll go back to\n"
	.string "working on the lifts.$"

CanalaveCity_Gym_EventScript_Gary::
	trainerbattle_single TRAINER_JERRY_5, CanalaveCity_Gym_Text_GaryIntro, CanalaveCity_Gym_Text_GaryDefeat
	msgbox CanalaveCity_Gym_Text_GaryPost, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_Text_GaryIntro:
	.string "A POKéMON Gym isn’t only about seeing\n"
	.string "how tough your POKéMON happen to be.\p"
	.string "It’s so much deeper than just that.\n"
	.string "It’s a test of you as a person.$"

CanalaveCity_Gym_Text_GaryDefeat:
	.string "That move was devastating!$"

CanalaveCity_Gym_Text_GaryPost:
	.string "I get to work all day with my POKéMON,\n"
	.string "and even battle sometimes.\p"
	.string "I get all the fun I need every day!$"

CanalaveCity_Gym_EventScript_Ricky::
	trainerbattle_single TRAINER_KAREN_1, CanalaveCity_Gym_Text_RickyIntro, CanalaveCity_Gym_Text_RickyDefeat
	msgbox CanalaveCity_Gym_Text_RickyPost, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_Text_RickyIntro:
	.string "Steel represents an unbending spirit!\p"
	.string "If one refuses to accept defeat, the\n"
	.string "path to victory reveals itself!$"

CanalaveCity_Gym_Text_RickyDefeat:
	.string "I never gave up, but still I failed to\n"
	.string "win...$"

CanalaveCity_Gym_Text_RickyPost:
	.string "If you give up, well, that’s when\n"
	.string "everything ends for you!$"

CanalaveCity_Gym_EventScript_Cesar::
	trainerbattle_single TRAINER_KAREN_2, CanalaveCity_Gym_Text_CesarIntro, CanalaveCity_Gym_Text_CesarDefeat
	msgbox CanalaveCity_Gym_Text_CesarPost, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_Text_CesarIntro:
	.string "An ace has the knowledge and\n"
	.string "experience of battling at high levels.\p"
	.string "I’ll demonstrate what that means to a\n"
	.string "noob like you!$"

CanalaveCity_Gym_Text_CesarDefeat:
	.string "Wow... I’m in the mood to sing a lullaby...$"

CanalaveCity_Gym_Text_CesarPost:
	.string "Your earnest enthusiasm... I guess\n"
	.string "that kinda makes you an ace.\p"
	.string "Maybe you’re a Trainer who has the\n"
	.string "potential to surpass aces!$"

CanalaveCity_Gym_EventScript_Gerardo::
	trainerbattle_single TRAINER_KAREN_3, CanalaveCity_Gym_Text_GerardoIntro, CanalaveCity_Gym_Text_GerardoDefeat
	msgbox CanalaveCity_Gym_Text_GerardoPost, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_Text_GerardoIntro:
	.string "POKéMON and people have worked\n"
	.string "together for many years.\p"
	.string "Let us show you an example of that\n"
	.string "history!$"

CanalaveCity_Gym_Text_GerardoDefeat:
	.string "A spectacular loss! But it’s still a\n"
	.string "loss!$"

CanalaveCity_Gym_Text_GerardoPost:
	.string "The way you helped each other... That\n"
	.string "is what made you prevail!$"

CanalaveCity_Gym_EventScript_Breanna::
	trainerbattle_single TRAINER_KAREN_4, CanalaveCity_Gym_Text_BreannaIntro, CanalaveCity_Gym_Text_BreannaDefeat
	msgbox CanalaveCity_Gym_Text_BreannaPost, MSGBOX_AUTOCLOSE
	end

CanalaveCity_Gym_Text_BreannaIntro:
	.string "By focusing on only one type, you can\n"
	.string "really see the strengths and\p"
	.string "weaknesses of that POKéMON.$"

CanalaveCity_Gym_Text_BreannaDefeat:
	.string "My focus was too narrow minded...$"

CanalaveCity_Gym_Text_BreannaPost:
	.string "Start by becoming friendly with your\n"
	.string "POKéMON. I mean really friendly.\p"
	.string "If you do that, you’ll learn naturally\n"
	.string "how you should battle with it.$"

CanalaveCity_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_JERRY_2, CanalaveCity_Gym_Text_LeaderIntro, CanalaveCity_Gym_Text_LeaderDefeat, CanalaveCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_ITEM_TM91_FROM_BYRON, CanalaveCity_Gym_EventScript_GiveTM
	msgbox CanalaveCity_Gym_Text_LeaderPostBattle, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_LeaderDefeated::
	message CanalaveCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CanalaveCity_Gym_Text_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE06_GET
	settrainerflag TRAINER_JERRY_3
	settrainerflag TRAINER_JERRY_4
	settrainerflag TRAINER_JERRY_5
	settrainerflag TRAINER_KAREN_1
	settrainerflag TRAINER_KAREN_2
	settrainerflag TRAINER_KAREN_3
	settrainerflag TRAINER_KAREN_4
	goto CanalaveCity_Gym_EventScript_GiveTM

CanalaveCity_Gym_EventScript_GiveTM::
	giveitem ITEM_TM91
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ITEM_TM91_FROM_BYRON
	msgbox CanalaveCity_Gym_Text_ExplainTM, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_PtGymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE06_GET, CanalaveCity_Gym_EventScript_PtGymGuideAfter
	msgbox CanalaveCity_Gym_Text_PtGymGuide, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_PtGymGuideAfter::
	msgbox CanalaveCity_Gym_Text_PtGymGuideAfter, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Gym_EventScript_PtGymStatue::
	msgbox CanalaveCity_Gym_Text_PtGymStatue, MSGBOX_SIGN
	end


CanalaveCity_Gym_Text_LeaderIntro:
	.string "Ah! That’s Oreburgh’s Gym Badge!\p"
	.string "I see, I see! You’ve defeated my son.\p"
	.string "But that’s no surprise. He still has\n"
	.string "much to learn.\p"
	.string "In place of my son Roark, I, Byron, will\n"
	.string "take your challenge!$"

CanalaveCity_Gym_Text_LeaderDefeat:
	.string "You were strong enough to take down\n"
	.string "my prized team of POKéMON.\p"
	.string "In recognition of that power, I give\n"
	.string "you this: the Mine Badge!$"

CanalaveCity_Gym_Text_LeaderPostBattle:
	.string "Gwahahahaha! The Sinnoh region is\n"
	.string "vast!\p"
	.string "Tough Trainers like you and {PLAYER}\n"
	.string "crop up constantly\p"
	.string "to challenge the old guard!\p"
	.string "With more young Trainers like my son\n"
	.string "and you two taking charge, the\p"
	.string "future of POKéMON is bright!\p"
	.string "But I’m not stepping aside just yet!\p"
	.string "I merely need to rededicate myself to\n"
	.string "training on Iron Island.$"

CanalaveCity_Gym_Text_ReceivedBadge:
	.string "{PLAYER} received the Mine Badge from\n"
	.string "Byron!$"

CanalaveCity_Gym_Text_ExplainBadge:
	.string "Having the Mine Badge enables you to\n"
	.string "use the hidden move Strength anytime\p"
	.string "outside of battle.\p"
	.string "And you now have six Gym Badges.\p"
	.string "That means all POKéMON up to Lv. 70 will\n"
	.string "obey you without question.\p"
	.string "Here! Take this, too!$"

CanalaveCity_Gym_Text_ExplainTM:
	.string "That TM91 contains the move FLASH\n"
	.string "CANNON.\p"
	.string "If it hits, it may also lower the\n"
	.string "target’s Special Defense.$"

CanalaveCity_Gym_Text_PtGymGuide:
	.string "Hey, there! Champ-to-be!\p"
	.string "The Gym Leader here uses Steel-type\n"
	.string "POKéMON.\p"
	.string "Steel-type POKéMON have high Defense,\n"
	.string "so you’d have to hit them hard!$"

CanalaveCity_Gym_Text_PtGymGuideAfter:
	.string "Oh! {PLAYER}! You’ve beaten the Gym\n"
	.string "Leader!\p"
	.string "Good going! That makes it six Gym\n"
	.string "Badges!\p"
	.string "I tell you what, you’re really turning\n"
	.string "into one fine Trainer.\p"
	.string "If you were to say you’re going to try\n"
	.string "to become the POKéMON Champ...\p"
	.string "No one’d laugh at you now! I’m in your\n"
	.string "corner, kiddo!$"

CanalaveCity_Gym_Text_PtGymStatue:
	.string "Canalave City POKéMON Gym Leader:\n"
	.string "Byron\p"
	.string "Certified Trainers: {PLAYER}$"
