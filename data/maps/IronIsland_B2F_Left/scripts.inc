IronIsland_B2F_Left_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IronIsland_B2F_Left_OnTransitionSN
	.byte 0

IronIsland_B2F_Left_EventScript_Damon::
	trainerbattle_single TRAINER_ROSE_5, IronIsland_B2F_Left_Text_DamonIntro, IronIsland_B2F_Left_Text_DamonDefeat
	msgbox IronIsland_B2F_Left_Text_DamonPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_DamonIntro:
	.string "Every good Hiker gets a boost of\n"
	.string "energy when surrounded by boulders!\p"
	.string "Wrooooar! Coming at you! Let me blow\n"
	.string "off some steam!$"

IronIsland_B2F_Left_Text_DamonDefeat:
	.string "Whew... Crazy, delicious sugar! I think\n"
	.string "I’ve calmed down now...$"

IronIsland_B2F_Left_Text_DamonPost:
	.string "If it’s called a mountain, you can be\n"
	.string "sure I’ll be climbing it.\p"
	.string "Even if it’s a mountain of food, I’ll\n"
	.string "still be stickin’ my flag on top!$"

IronIsland_B2F_Left_EventScript_Maurice::
	trainerbattle_single TRAINER_DUSTY_1, IronIsland_B2F_Left_Text_MauriceIntro, IronIsland_B2F_Left_Text_MauriceDefeat
	msgbox IronIsland_B2F_Left_Text_MauricePost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_MauriceIntro:
	.string "When you’re up in the mountains, a\n"
	.string "battle’d do for a proper greeting!$"

IronIsland_B2F_Left_Text_MauriceDefeat:
	.string "Yahoo!$"

IronIsland_B2F_Left_Text_MauricePost:
	.string "Actually, when you’re up in the\n"
	.string "mountains, a simple hi’d do if\p"
	.string "you walk past someone.\p"
	.string "Oh, and this isn’t the mountains.$"

IronIsland_B2F_Left_EventScript_Kendal::
	trainerbattle_single TRAINER_DUSTY_2, IronIsland_B2F_Left_Text_KendalIntro, IronIsland_B2F_Left_Text_KendalDefeat
	msgbox IronIsland_B2F_Left_Text_KendalPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_KendalIntro:
	.string "I’ll pound the fear of my fists into you\n"
	.string "all karate style, punk!$"

IronIsland_B2F_Left_Text_KendalDefeat:
	.string "I’m so sorry... I got a bit mouthy there,\n"
	.string "didn’t I?$"

IronIsland_B2F_Left_Text_KendalPost:
	.string "So, I’m gonna try and shatter steel!\p"
	.string "I wonder how many more years it would\n"
	.string "take for me to do that?$"

IronIsland_B2F_Left_EventScript_Tyler::
	trainerbattle_single TRAINER_DUSTY_3, IronIsland_B2F_Left_Text_TylerIntro, IronIsland_B2F_Left_Text_TylerDefeat
	msgbox IronIsland_B2F_Left_Text_TylerPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_TylerIntro:
	.string "Beating you would be my 100th straight\n"
	.string "win! Here’s to a fun battle!$"

IronIsland_B2F_Left_Text_TylerDefeat:
	.string "How could I lose now?! This is beyond\n"
	.string "aggravating!$"

IronIsland_B2F_Left_Text_TylerPost:
	.string "I wish I could beat Maylene in\n"
	.string "Veilstone City one day...$"

IronIsland_B2F_Left_EventScript_Brendon::
	trainerbattle_single TRAINER_DUSTY_4, IronIsland_B2F_Left_Text_BrendonIntro, IronIsland_B2F_Left_Text_BrendonDefeat
	msgbox IronIsland_B2F_Left_Text_BrendonPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_BrendonIntro:
	.string "Hey! This is no playground! If you’re\n"
	.string "gonna play, battle me!$"

IronIsland_B2F_Left_Text_BrendonDefeat:
	.string "You played me like an amateur!$"

IronIsland_B2F_Left_Text_BrendonPost:
	.string "They were going to close this place up\n"
	.string "so no one could get in.\p"
	.string "But, they left it open so people and\n"
	.string "POKéMON can get together here.$"

IronIsland_B2F_Left_EventScript_Quentin::
	trainerbattle_single TRAINER_DUSTY_5, IronIsland_B2F_Left_Text_QuentinIntro, IronIsland_B2F_Left_Text_QuentinDefeat
	msgbox IronIsland_B2F_Left_Text_QuentinPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_QuentinIntro:
	.string "The Canalave Gym folks use this place\n"
	.string "as their training grounds.$"

IronIsland_B2F_Left_Text_QuentinDefeat:
	.string "Maybe I should head to the Gym and\n"
	.string "work out there...$"

IronIsland_B2F_Left_Text_QuentinPost:
	.string "Roark spent his childhood playing here,\n"
	.string "I think...$"

IronIsland_B2F_Left_EventScript_Jonah::
	trainerbattle_single TRAINER_LOLA_1, IronIsland_B2F_Left_Text_JonahIntro, IronIsland_B2F_Left_Text_JonahDefeat
	msgbox IronIsland_B2F_Left_Text_JonahPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_JonahIntro:
	.string "If we were to battle, your POKéMON\n"
	.string "would become tougher.\p"
	.string "Likewise, my POKéMON would also become\n"
	.string "tougher.\p"
	.string "It’s all good. This calls for a battle!$"

IronIsland_B2F_Left_Text_JonahDefeat:
	.string "You know, I would have really enjoyed a\n"
	.string "win there. Would’ve been real nice.$"

IronIsland_B2F_Left_Text_JonahPost:
	.string "This mine’s been abandoned, but now\n"
	.string "it’s home to many POKéMON.\p"
	.string "I guess everything finds a place to\n"
	.string "call home someday...$"

IronIsland_B2F_Left_EventScript_Brenda::
	trainerbattle_single TRAINER_LOLA_2, IronIsland_B2F_Left_Text_BrendaIntro, IronIsland_B2F_Left_Text_BrendaDefeat
	msgbox IronIsland_B2F_Left_Text_BrendaPost, MSGBOX_AUTOCLOSE
	end

IronIsland_B2F_Left_Text_BrendaIntro:
	.string "Tough POKéMON... Tough Trainers...\p"
	.string "You tell me, where else can I find a\n"
	.string "place as good as this to train?$"

IronIsland_B2F_Left_Text_BrendaDefeat:
	.string "That was good. You’ve bonded well with\n"
	.string "your POKéMON.$"

IronIsland_B2F_Left_Text_BrendaPost:
	.string "Tough POKéMON... Tough Trainers...\p"
	.string "Their strength comes from their bond.\n"
	.string "And that’s something that can be\p"
	.string "made stronger anywhere.$"

IronIsland_B2F_Left_Text_PtNpc1:
	.string "Riley: I get it now. You’re responsible\n"
	.string "for agitating the POKéMON.\p"
	.string "I don’t care what good reason you may\n"
	.string "have, but I don’t want you bringing\p"
	.string "any trouble into the mine.$"

IronIsland_B2F_Left_EventScript_PtNpc1::
	msgbox IronIsland_B2F_Left_Text_PtNpc1, MSGBOX_NPC
	end

IronIsland_B2F_Left_Text_PtNpc2:
	.string "Riley: I get it now. You’re responsible\n"
	.string "for agitating the POKéMON.\p"
	.string "I don’t care what good reason you may\n"
	.string "have, but I don’t want you bringing\p"
	.string "any trouble into the mine.$"

IronIsland_B2F_Left_EventScript_PtNpc2::
	msgbox IronIsland_B2F_Left_Text_PtNpc2, MSGBOX_NPC
	end

IronIsland_B2F_Left_OnTransitionSN:
	call IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT1
	call IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT2
	call IronIsland_B2F_Left_EventScript_SNVis_IRON_RILEY_B2F
	end

IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT1:
	setflag FLAG_SN_HIDE_IRON_GRUNT1
	goto_if_defeated TRAINER_ELLIOT_3, IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT1_End
	clearflag FLAG_SN_HIDE_IRON_GRUNT1
IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT1_End:
	return

IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT2:
	setflag FLAG_SN_HIDE_IRON_GRUNT2
	goto_if_defeated TRAINER_ELLIOT_4, IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT2_End
	clearflag FLAG_SN_HIDE_IRON_GRUNT2
IronIsland_B2F_Left_EventScript_SNVis_IRON_GRUNT2_End:
	return

IronIsland_B2F_Left_EventScript_SNVis_IRON_RILEY_B2F:
	setflag FLAG_SN_HIDE_IRON_RILEY_B2F
	checkfollowernpc
	goto_if_eq VAR_RESULT, TRUE, IronIsland_B2F_Left_EventScript_SNVis_IRON_RILEY_B2F_End
	goto_if_unset FLAG_SN_RECEIVED_HM_STRENGTH, IronIsland_B2F_Left_EventScript_SNVis_IRON_RILEY_B2F_End
	goto_if_set FLAG_SN_RECEIVED_RIOLU_EGG, IronIsland_B2F_Left_EventScript_SNVis_IRON_RILEY_B2F_End
	clearflag FLAG_SN_HIDE_IRON_RILEY_B2F
IronIsland_B2F_Left_EventScript_SNVis_IRON_RILEY_B2F_End:
	return

IronIsland_B2F_Left_EventScript_SNIronGrunts::
	goto_if_set FLAG_SN_HIDE_IRON_GRUNT1, IronIsland_B2F_Left_EventScript_SNIronGrunts_End
	lockall
	setvar VAR_TEMP_E, 1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	applymovement LOCALID_SN_IRON_GRUNT1, Common_Movement_ExclamationMark
	applymovement LOCALID_SN_IRON_GRUNT2, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SN_IRON_GRUNT1, Common_Movement_FaceRight
	applymovement LOCALID_SN_IRON_GRUNT2, Common_Movement_FaceRight
	waitmovement 0
	msgbox IronIsland_B2F_Left_Text_SNG1, MSGBOX_DEFAULT
	msgbox IronIsland_B2F_Left_Text_SNG2, MSGBOX_DEFAULT
	checkfollowernpc
	goto_if_eq VAR_RESULT, FALSE, IronIsland_B2F_Left_EventScript_SNIronGrunts_Battle
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_Ethics, MSGBOX_DEFAULT
IronIsland_B2F_Left_EventScript_SNIronGrunts_Battle:
	closemessage
	trainerbattle_two_trainers_sn TRAINER_ELLIOT_3, IronIsland_B2F_Left_EventScript_SNIronGrunts_DA, TRAINER_ELLIOT_4, IronIsland_B2F_Left_EventScript_SNIronGrunts_DB
	msgbox IronIsland_B2F_Left_EventScript_SNIronGrunts_Post1, MSGBOX_DEFAULT
	msgbox IronIsland_B2F_Left_EventScript_SNIronGrunts_After, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_IRON_GRUNT1
	removeobject LOCALID_SN_IRON_GRUNT2
	setflag FLAG_SN_HIDE_IRON_GRUNT1
	setflag FLAG_SN_HIDE_IRON_GRUNT2
	fadescreen FADE_FROM_BLACK
	checkfollowernpc
	goto_if_eq VAR_RESULT, FALSE, IronIsland_B2F_Left_EventScript_SNIronGrunts_Done
	facefollowernpc
	call IronIsland_B2F_Left_EventScript_SNRiley_GiveEgg
IronIsland_B2F_Left_EventScript_SNIronGrunts_Done:
	releaseall
IronIsland_B2F_Left_EventScript_SNIronGrunts_End:
	end

@ Riley quieto (antes de unirse o esperando para dar el Huevo)
IronIsland_B2F_Left_EventScript_SNRiley::
	lock
	faceplayer
IronIsland_B2F_Left_EventScript_SNRiley_Main:
	goto_if_set FLAG_SN_HIDE_IRON_GRUNT1, IronIsland_B2F_Left_EventScript_SNRiley_EggTalk
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_Team, MSGBOX_DEFAULT
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_Decided, MSGBOX_DEFAULT
	closemessage
	special HealPlayerParty
	setfollowernpc LOCALID_SN_IRON_RILEY_B2F, FNPC_ALL_LAND, IronIsland_B2F_Left_EventScript_SNRiley_Heal, PARTNER_RILEY
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_HealInfo, MSGBOX_DEFAULT
	release
	end
IronIsland_B2F_Left_EventScript_SNRiley_EggTalk:
	call IronIsland_B2F_Left_EventScript_SNRiley_GiveEgg
	release
	end

@ Riley como acompañante
IronIsland_B2F_Left_EventScript_SNRiley_Heal::
	lock
	random 5
	switch VAR_RESULT
	case 0, IronIsland_B2F_Left_EventScript_SNRileyChat0
	case 1, IronIsland_B2F_Left_EventScript_SNRileyChat1
	case 2, IronIsland_B2F_Left_EventScript_SNRileyChat2
	case 3, IronIsland_B2F_Left_EventScript_SNRileyChat3
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_Restless, MSGBOX_DEFAULT
IronIsland_B2F_Left_EventScript_SNRileyHealNow:
	special HealPlayerParty
	playfanfare MUS_HEAL
	waitfanfare
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_HealInfo, MSGBOX_DEFAULT
	release
	end

IronIsland_B2F_Left_EventScript_SNRiley_GiveEgg:
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_Egg, MSGBOX_DEFAULT
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, IronIsland_B2F_Left_EventScript_SNRiley_NoRoom
	giveegg SPECIES_RIOLU
	playfanfare MUS_OBTAIN_ITEM
	message IronIsland_B2F_Left_EventScript_SNRiley_GotEgg
	waitfanfare
	waitmessage
	setflag FLAG_SN_RECEIVED_RIOLU_EGG
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_Places, MSGBOX_DEFAULT
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_Bye, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	destroyfollowernpc
	removeobject LOCALID_SN_IRON_RILEY_B2F
	setflag FLAG_SN_HIDE_IRON_RILEY_B2F
	fadescreen FADE_FROM_BLACK
	return
IronIsland_B2F_Left_EventScript_SNRiley_NoRoom:
	msgbox IronIsland_B2F_Left_EventScript_SNRiley_NoRoomT, MSGBOX_DEFAULT
	closemessage
	checkfollowernpc
	goto_if_eq VAR_RESULT, FALSE, IronIsland_B2F_Left_EventScript_SNRiley_NoRoomEnd
	@ deja de seguirnos y espera aquí
	getplayerxy VAR_0x8004, VAR_0x8005
	fadescreen FADE_TO_BLACK
	destroyfollowernpc
	addvar VAR_0x8004, 1
	setobjectxyperm LOCALID_SN_IRON_RILEY_B2F, VAR_0x8004, VAR_0x8005
	clearflag FLAG_SN_HIDE_IRON_RILEY_B2F
	addobject LOCALID_SN_IRON_RILEY_B2F
	fadescreen FADE_FROM_BLACK
IronIsland_B2F_Left_EventScript_SNRiley_NoRoomEnd:
	return

IronIsland_B2F_Left_EventScript_SNRiley_Team:
	.string "Riley: {PLAYER}, I’m glad to see you\n"
	.string "here.\p"
	.string "If you don’t mind, let’s team up. The\n"
	.string "POKéMON seem to be restless.$"

IronIsland_B2F_Left_EventScript_SNRiley_Decided:
	.string "{PLAYER} decided to go with Riley!$"

IronIsland_B2F_Left_EventScript_SNRiley_HealInfo:
	.string "Riley: If your POKéMON get hurt, I’ll\n"
	.string "heal them up.$"

IronIsland_B2F_Left_EventScript_SNRiley_Restless:
	.string "Riley: What’s going on here, though?\n"
	.string "The native POKéMON are restless...\p"
	.string "I don’t like this... Let’s hurry.$"

IronIsland_B2F_Left_EventScript_SNRiley_Ethics:
	.string "Riley: To share in all the joys and all\n"
	.string "the sorrows...\p"
	.string "That is how all the Trainers and\n"
	.string "POKéMON live in Sinnoh!\p"
	.string "I won’t allow anyone to defy that code\n"
	.string "of ethics!\p"
	.string "Come on, {PLAYER}! This is one battle we\n"
	.string "can’t lose!$"

IronIsland_B2F_Left_EventScript_SNIronGrunts_Post1:
	.string "Grunt 1: Stop! I said stop! Your\n"
	.string "combination is so sick!\p"
	.string "The both of you, and your POKéMON...\p"
	.string "Let’s beat it, partner!$"

IronIsland_B2F_Left_EventScript_SNRiley_Egg:
	.string "Riley: Thanks. You really helped me out.\p"
	.string "Listen, I have a POKéMON Egg here.\p"
	.string "Would you take it with you?$"

IronIsland_B2F_Left_EventScript_SNRiley_GotEgg:
	.string "{PLAYER} received an Egg from Riley!$"

IronIsland_B2F_Left_EventScript_SNRiley_Places:
	.string "Riley: Thanks!\p"
	.string "I’d like you to show the POKéMON that’s\n"
	.string "inside the Egg all sorts\p"
	.string "of new places.$"

IronIsland_B2F_Left_EventScript_SNRiley_NoRoomT:
	.string "Riley: Thank you...\p"
	.string "But you don’t have room to take\n"
	.string "another POKéMON.\p"
	.string "All right, then. I’ll wait here for you.$"

IronIsland_B2F_Left_EventScript_SNRiley_Bye:
	.string "Riley: Spending time with you was very\n"
	.string "enjoyable.\p"
	.string "I intend to test my skills in other\n"
	.string "places from now on.\p"
	.string "Let’s meet again! Take care on the way\n"
	.string "out.$"
IronIsland_B2F_Left_Text_SNG1:
	.string "Grunt 1: We’re Team Galactic! We’ll take\n"
	.string "all the POKéMON we want!\p"
	.string "Isn’t that right, partner?$"

IronIsland_B2F_Left_Text_SNG2:
	.string "Grunt 2: You said it, brother! So that’s\n"
	.string "what we’re gonna do!\p"
	.string "We’re abducting all the POKéMON from\n"
	.string "this rusted-out Iron Island!$"

IronIsland_B2F_Left_EventScript_SNIronGrunts_DA:
	.string "Grunt 1: Stop! I said stop!$"

IronIsland_B2F_Left_EventScript_SNIronGrunts_DB:
	.string "Grunt 2: You said it, brother!$"

IronIsland_B2F_Left_EventScript_SNIronGrunts_After:
	.string "Grunt 2: You said it, brother!\p"
	.string "We don’t even know what Team\n"
	.string "Galactic’s big plan is anyway!$"

IronIsland_B2F_Left_EventScript_SNRileyMeetLow::
	call IronIsland_B2F_Left_EventScript_SNRileyMeet_Check
	lockall
	applymovement LOCALID_SN_IRON_RILEY_B2F, IronIsland_B2F_Left_EventScript_SNRileyMeet_ML
	waitmovement 0
	goto IronIsland_B2F_Left_EventScript_SNRileyMeet_Go
IronIsland_B2F_Left_EventScript_SNRileyMeetHigh::
	call IronIsland_B2F_Left_EventScript_SNRileyMeet_Check
	lockall
	applymovement LOCALID_SN_IRON_RILEY_B2F, IronIsland_B2F_Left_EventScript_SNRileyMeet_MH
	waitmovement 0
IronIsland_B2F_Left_EventScript_SNRileyMeet_Go:
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	setvar VAR_TEMP_F, 1
	goto IronIsland_B2F_Left_EventScript_SNRiley_Main
IronIsland_B2F_Left_EventScript_SNRileyMeet_Check:
	goto_if_set FLAG_SN_HIDE_IRON_RILEY_B2F, IronIsland_B2F_Left_EventScript_SNRileyMeet_Stop
	goto_if_set FLAG_SN_HIDE_IRON_GRUNT1, IronIsland_B2F_Left_EventScript_SNRileyMeet_Stop
	checkfollowernpc
	goto_if_eq VAR_RESULT, TRUE, IronIsland_B2F_Left_EventScript_SNRileyMeet_Stop
	return
IronIsland_B2F_Left_EventScript_SNRileyMeet_Stop:
	setvar VAR_TEMP_F, 1
	end
IronIsland_B2F_Left_EventScript_SNRileyMeet_ML:
	emote_exclamation_mark
	walk_right
	step_end
IronIsland_B2F_Left_EventScript_SNRileyMeet_MH:
	emote_exclamation_mark
	walk_up
	walk_right
	step_end

IronIsland_B2F_Left_EventScript_SNRileyChat0:
	msgbox IronIsland_B2F_Left_Text_SNRileyChat0, MSGBOX_DEFAULT
	goto IronIsland_B2F_Left_EventScript_SNRileyHealNow

IronIsland_B2F_Left_EventScript_SNRileyChat1:
	msgbox IronIsland_B2F_Left_Text_SNRileyChat1, MSGBOX_DEFAULT
	goto IronIsland_B2F_Left_EventScript_SNRileyHealNow

IronIsland_B2F_Left_EventScript_SNRileyChat2:
	msgbox IronIsland_B2F_Left_Text_SNRileyChat2, MSGBOX_DEFAULT
	goto IronIsland_B2F_Left_EventScript_SNRileyHealNow

IronIsland_B2F_Left_EventScript_SNRileyChat3:
	msgbox IronIsland_B2F_Left_Text_SNRileyChat3, MSGBOX_DEFAULT
	goto IronIsland_B2F_Left_EventScript_SNRileyHealNow

IronIsland_B2F_Left_Text_SNRileyChat0:
	.string "Riley: Haha, I’d have to agree.\p"
	.string "People training here would be those\n"
	.string "with too much time on their hands.$"

IronIsland_B2F_Left_Text_SNRileyChat1:
	.string "Riley: This used to be a fairly thriving\n"
	.string "ore mine once upon a time.\p"
	.string "I guess the steel ore’s played out.\n"
	.string "There’s only POKéMON here now.$"

IronIsland_B2F_Left_Text_SNRileyChat2:
	.string "Riley: Have you met Byron? The Leader\n"
	.string "of Canalave Gym?\p"
	.string "He’s asked me to become a Gym Leader,\n"
	.string "but there’s his son Roark\p"
	.string "to consider as well.$"

IronIsland_B2F_Left_Text_SNRileyChat3:
	.string "Riley: Imagine what it would be like for\n"
	.string "a Steel-type POKéMON user to\p"
	.string "battle a Steel type.\p"
	.string "Would that be like battling yourself, I\n"
	.string "wonder?\p"
	.string "I mean, it’s a lot harder to defeat\n"
	.string "one’s self than anyone else.$"
