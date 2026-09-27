EternaCity_Gym_MapScripts::
	.byte 0

EternaCity_Gym_EventScript_Gardenia::
	trainerbattle_single TRAINER_ALEXIA, EternaCity_Gym_Text_GardeniaIntro, EternaCity_Gym_Text_GardeniaDefeat, EternaCity_Gym_EventScript_GardeniaDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM_GIGA_DRAIN, EternaCity_Gym_EventScript_GiveTM
	msgbox EternaCity_Gym_Text_GardeniaPost, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_GardeniaDefeated::
	message EternaCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_BADGE02_GET
	setvar VAR_SINNOH_STORY, 27
	goto EternaCity_Gym_EventScript_GiveTM
	end

EternaCity_Gym_EventScript_GiveTM::
	msgbox EternaCity_Gym_Text_GiveTM, MSGBOX_DEFAULT
	giveitem ITEM_TM_GIGA_DRAIN
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_GIGA_DRAIN
	msgbox EternaCity_Gym_Text_TMInfo, MSGBOX_DEFAULT
	release
	end

EternaCity_Gym_EventScript_Guide::
	msgbox EternaCity_Gym_Text_Guide, MSGBOX_NPC
	end

EternaCity_Gym_Text_GardeniaIntro:
	.string "GARDENIA: Hi there! I'm GARDENIA,\n"
	.string "the ETERNA GYM LEADER! I love\l"
	.string "GRASS-type POKéMON!\p"
	.string "Let's see if you can handle my\n"
	.string "beautiful POKéMON!$"

EternaCity_Gym_Text_GardeniaDefeat:
	.string "Amazing! You're really strong!\n"
	.string "Here, take the FOREST BADGE!$"

EternaCity_Gym_Text_ReceivedBadge:
	.string "{PLAYER} received the FOREST BADGE\n"
	.string "from GARDENIA.$"

EternaCity_Gym_Text_GiveTM:
	.string "GARDENIA: And this TM is yours,\n"
	.string "too!$"

EternaCity_Gym_Text_TMInfo:
	.string "GARDENIA: It drains HP from the\n"
	.string "target and heals your POKéMON.\l"
	.string "Isn't that clever?$"

EternaCity_Gym_Text_GardeniaPost:
	.string "GARDENIA: GRASS POKéMON are strong\n"
	.string "and gentle. I hope you grow to\l"
	.string "love them too!$"

EternaCity_Gym_Text_Guide:
	.string "Hey, champ in the making! GARDENIA\n"
	.string "uses GRASS-type POKéMON. FIRE and\l"
	.string "FLYING moves are your best bet!$"

EternaCity_Gym_EventScript_Caroline::
	trainerbattle_single TRAINER_VITO, EternaCity_Gym_Text_CarolineIntro, EternaCity_Gym_Text_CarolineDefeat
	msgbox EternaCity_Gym_Text_CarolinePost, MSGBOX_AUTOCLOSE
	end

EternaCity_Gym_Text_CarolineIntro:
	.string "GARDENIA's GYM is full of\n"
	.string "beautiful flowers. Just like my\l"
	.string "POKéMON!$"

EternaCity_Gym_Text_CarolineDefeat:
	.string "My petals fell...$"

EternaCity_Gym_Text_CarolinePost:
	.string "GARDENIA loves GRASS-type POKéMON\n"
	.string "more than anything.$"

EternaCity_Gym_EventScript_Jenna::
	trainerbattle_single TRAINER_OWEN, EternaCity_Gym_Text_JennaIntro, EternaCity_Gym_Text_JennaDefeat
	msgbox EternaCity_Gym_Text_JennaPost, MSGBOX_AUTOCLOSE
	end

EternaCity_Gym_Text_JennaIntro:
	.string "My BUDEW trio will bloom\n"
	.string "beautifully!$"

EternaCity_Gym_Text_JennaDefeat:
	.string "Wilted...$"

EternaCity_Gym_Text_JennaPost:
	.string "FIRE and FLYING moves are strong\n"
	.string "against GRASS POKéMON.$"

EternaCity_Gym_EventScript_Angela::
	trainerbattle_single TRAINER_WARREN, EternaCity_Gym_Text_AngelaIntro, EternaCity_Gym_Text_AngelaDefeat
	msgbox EternaCity_Gym_Text_AngelaPost, MSGBOX_AUTOCLOSE
	end

EternaCity_Gym_Text_AngelaIntro:
	.string "Before you face GARDENIA, you face\n"
	.string "me!$"

EternaCity_Gym_Text_AngelaDefeat:
	.string "You're really strong!$"

EternaCity_Gym_Text_AngelaPost:
	.string "GARDENIA's ROSERADE is her\n"
	.string "strongest POKéMON.$"
