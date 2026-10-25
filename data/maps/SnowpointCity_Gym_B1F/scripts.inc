SnowpointCity_Gym_B1F_MapScripts::
	.byte 0

SnowpointCity_Gym_B1F_Text_ConnieDefeat:
	.string "Oh.\n"
	.string "You're strong.$"

SnowpointCity_Gym_B1F_Text_ConniePostBattle:
	.string "I'll tell you something good.\p"
	.string "If you want to reach JUAN, you\n"
	.string "need to walk on each floor tile once.$"

SnowpointCity_Gym_B1F_Text_BridgetIntro:
	.string "The POKéMON GYM of the highest level\n"
	.string "in the HOENN region…\p"
	.string "That's the SOOTOPOLIS GYM.$"

SnowpointCity_Gym_B1F_Text_BridgetDefeat:
	.string "What a high level you are!$"

SnowpointCity_Gym_B1F_Text_BridgetPostBattle:
	.string "Rather than being satisfied by being\n"
	.string "in a strong GYM, I imagine training in\l"
	.string "other places will make you stronger.\l"
	.string "But above all, it looks more fun.$"

SnowpointCity_Gym_B1F_Text_OliviaIntro:
	.string "I train my POKéMON together with\n"
	.string "JUAN.\p"
	.string "Don't think I'm a pushover.$"

SnowpointCity_Gym_B1F_Text_OliviaDefeat:
	.string "I was beaten…$"

SnowpointCity_Gym_B1F_Text_OliviaPostBattle:
	.string "I think you have potential.\n"
	.string "Why don't you stay and train with us?$"

SnowpointCity_Gym_B1F_Text_TiffanyIntro:
	.string "A graceful glide across the ice while\n"
	.string "crossing no lines…\p"
	.string "A TRAINER putting on that performance\n"
	.string "would be elegantly beautiful!$"

SnowpointCity_Gym_B1F_Text_TiffanyDefeat:
	.string "Well, excuse me?!$"

SnowpointCity_Gym_B1F_Text_TiffanyPostBattle:
	.string "This is really obvious, but how strong\n"
	.string "you are as a TRAINER has nothing to do\l"
	.string "with how young or old you are.$"

SnowpointCity_Gym_B1F_Text_BethanyIntro:
	.string "When I'm with my POKéMON, the time\n"
	.string "flies by before you can say, “Oops!”$"

SnowpointCity_Gym_B1F_Text_BethanyDefeat:
	.string "Oops!$"

SnowpointCity_Gym_B1F_Text_BethanyPostBattle:
	.string "I wish I could forget about lost causes\n"
	.string "before I can manage an “Oops!”$"

SnowpointCity_Gym_B1F_Text_AnnikaIntro:
	.string "I can battle with really rare POKéMON\n"
	.string "if you'd like.$"

SnowpointCity_Gym_B1F_Text_AnnikaDefeat:
	.string "Oh, there now! Did you have a good look\n"
	.string "at my POKéMON?$"

SnowpointCity_Gym_B1F_Text_AnnikaPostBattle:
	.string "I came to this GYM because JUAN\n"
	.string "praised me for my darling POKéMON.\p"
	.string "Oh, if only I'd met JUAN years ago\n"
	.string "when I was younger…$"

SnowpointCity_Gym_B1F_Text_BriannaIntro:
	.string "Giggle…\n"
	.string "Your grim look is so charming.$"

SnowpointCity_Gym_B1F_Text_BriannaDefeat:
	.string "Oh, dear.\n"
	.string "I went much too easy on you.$"

SnowpointCity_Gym_B1F_Text_BriannaPostBattle:
	.string "You couldn't lay a finger on JUAN,\n"
	.string "I'm sure. Giggle…$"

SnowpointCity_Gym_B1F_EventScript_Anton::
	trainerbattle_single TRAINER_ANNA_AND_MEG_1, SnowpointCity_Gym_B1F_Text_AntonIntro, SnowpointCity_Gym_B1F_Text_AntonDefeat
	msgbox SnowpointCity_Gym_B1F_Text_AntonPost, MSGBOX_AUTOCLOSE
	end

SnowpointCity_Gym_B1F_Text_AntonIntro:
	.string "We spend all our time battling in the\n"
	.string "blizzards of Snowpoint City.\p"
	.string "We’ll show you how it’s toughened us\n"
	.string "up!$"

SnowpointCity_Gym_B1F_Text_AntonDefeat:
	.string "What’s with your toughness?!$"

SnowpointCity_Gym_B1F_Text_AntonPost:
	.string "You’ve battled all over, you say? That\n"
	.string "makes you tough, perhaps.$"

SnowpointCity_Gym_B1F_EventScript_Savannah::
	trainerbattle_single TRAINER_ANNA_AND_MEG_2, SnowpointCity_Gym_B1F_Text_SavannahIntro, SnowpointCity_Gym_B1F_Text_SavannahDefeat
	msgbox SnowpointCity_Gym_B1F_Text_SavannahPost, MSGBOX_AUTOCLOSE
	end

SnowpointCity_Gym_B1F_Text_SavannahIntro:
	.string "Is the Gym’s trick floor making you a\n"
	.string "little hot under the collar?\p"
	.string "If you can’t maintain your cool in\n"
	.string "battle, you’ll freeze up.$"

SnowpointCity_Gym_B1F_Text_SavannahDefeat:
	.string "You were surprisingly cool... At least I\n"
	.string "have my warm boots.$"

SnowpointCity_Gym_B1F_Text_SavannahPost:
	.string "Your POKéMON look so hot in battle. So\n"
	.string "hot, they’re cool! Hahah!$"

SnowpointCity_Gym_B1F_EventScript_Alicia::
	trainerbattle_single TRAINER_ANNA_AND_MEG_3, SnowpointCity_Gym_B1F_Text_AliciaIntro, SnowpointCity_Gym_B1F_Text_AliciaDefeat
	msgbox SnowpointCity_Gym_B1F_Text_AliciaPost, MSGBOX_AUTOCLOSE
	end

SnowpointCity_Gym_B1F_Text_AliciaIntro:
	.string "Are you feeling all run-down?\p"
	.string "But a good Trainer is one who wins no\n"
	.string "matter the situation!$"

SnowpointCity_Gym_B1F_Text_AliciaDefeat:
	.string "That’s right. A good Trainer will win, no\n"
	.string "matter what the situation may be.$"

SnowpointCity_Gym_B1F_Text_AliciaPost:
	.string "The Trainer’s feelings... The POKéMON’s\n"
	.string "feelings...\p"
	.string "If they are one and the same, you will\n"
	.string "never lose.$"

SnowpointCity_Gym_B1F_EventScript_Isaiah::
	trainerbattle_single TRAINER_ANNA_AND_MEG_4, SnowpointCity_Gym_B1F_Text_IsaiahIntro, SnowpointCity_Gym_B1F_Text_IsaiahDefeat
	msgbox SnowpointCity_Gym_B1F_Text_IsaiahPost, MSGBOX_AUTOCLOSE
	end

SnowpointCity_Gym_B1F_Text_IsaiahIntro:
	.string "My willpower was shaped and tempered\n"
	.string "by howling blizzards.\p"
	.string "I’ll bring it to bear on you!$"

SnowpointCity_Gym_B1F_Text_IsaiahDefeat:
	.string "You weren’t even fazed...$"

SnowpointCity_Gym_B1F_Text_IsaiahPost:
	.string "I’ve battled countless Trainers and\n"
	.string "many more POKéMON still.\p"
	.string "My spirit has been hardened from all\n"
	.string "the battles I have fought.$"

SnowpointCity_Gym_B1F_EventScript_Brenna::
	trainerbattle_single TRAINER_ANNA_AND_MEG_5, SnowpointCity_Gym_B1F_Text_BrennaIntro, SnowpointCity_Gym_B1F_Text_BrennaDefeat
	msgbox SnowpointCity_Gym_B1F_Text_BrennaPost, MSGBOX_AUTOCLOSE
	end

SnowpointCity_Gym_B1F_Text_BrennaIntro:
	.string "I’ve only been involved with POKéMON\n"
	.string "for a short time.\p"
	.string "I managed to get this far because\n"
	.string "skilled friends toughened me up!$"

SnowpointCity_Gym_B1F_Text_BrennaDefeat:
	.string "I can’t believe how tough you are!$"

SnowpointCity_Gym_B1F_Text_BrennaPost:
	.string "If you have wonderful friends, there is\n"
	.string "no limit to how far you can go.$"

SnowpointCity_Gym_B1F_EventScript_Sergio::
	trainerbattle_single TRAINER_MIGUEL_1, SnowpointCity_Gym_B1F_Text_SergioIntro, SnowpointCity_Gym_B1F_Text_SergioDefeat
	msgbox SnowpointCity_Gym_B1F_Text_SergioPost, MSGBOX_AUTOCLOSE
	end

SnowpointCity_Gym_B1F_Text_SergioIntro:
	.string "...It’s t-too cold. I can’t even feel my\n"
	.string "t-tongue.$"

SnowpointCity_Gym_B1F_Text_SergioDefeat:
	.string "This result... ...It’s cold. Bitter cold.$"

SnowpointCity_Gym_B1F_Text_SergioPost:
	.string "The higher up you slide from, the more\n"
	.string "speed you’ll have to smash\p"
	.string "those big snowballs.$"
