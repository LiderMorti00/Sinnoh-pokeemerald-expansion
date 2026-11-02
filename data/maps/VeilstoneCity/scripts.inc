VeilstoneCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, VeilstoneCity_OnTransitionSN
	.byte 0

VeilstoneCity_EventScript_PtNpc1::
	msgbox VeilstoneCity_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc1:
	.string "Yeah, TEAM GALACTIC is hiding all\n"
	.string "sorts of good stuff in their\l"
	.string "warehouse.\p"
	.string "I hear they even have a Hidden\n"
	.string "Machine in there!$"

VeilstoneCity_EventScript_PtNpc2::
	msgbox VeilstoneCity_Text_PtNpc2, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc2:
	.string "The Game Corner is dangerous!\p"
	.string "Why is it dangerous? It's so fun, I\n"
	.string "lose track of time!$"

VeilstoneCity_EventScript_PtNpc3::
	msgbox VeilstoneCity_Text_PtNpc3, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc3:
	.string "I got a TM as a prize from the Game\n"
	.string "Corner.\p"
	.string "I used it on my POKéMON right away!$"

VeilstoneCity_EventScript_PtNpc4::
	msgbox VeilstoneCity_Text_PtNpc4, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc4:
	.string "I came to this city just so I could go\n"
	.string "shopping at the department store.\p"
	.string "But with all these rock walls around,\n"
	.string "this place feels kind of cold.$"

VeilstoneCity_EventScript_PtNpc5::
	msgbox VeilstoneCity_Text_PtNpc5, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc5:
	.string "I bought a new parasol.\p"
	.string "But I don't want it to get rained on,\n"
	.string "so I watch the TV weather reports.$"

VeilstoneCity_EventScript_PtNpc6::
	msgbox VeilstoneCity_Text_PtNpc6, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc6:
	.string "MAYLENE is VEILSTONE's Gym Leader.\n"
	.string "Then, there's Wake in PASTORIA...\p"
	.string "They're way too tough for me. I can't\n"
	.string "even come close to them.$"

VeilstoneCity_EventScript_PtNpc7::
	msgbox VeilstoneCity_Text_PtNpc7, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc7:
	.string "Do you know where one might find a\n"
	.string "Coin Case?\p"
	.string "I heard that there's a clown giving 'em\n"
	.string "away, but...$"

VeilstoneCity_EventScript_PtNpc8::
	msgbox VeilstoneCity_Text_PtNpc8, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc8:
	.string "A man spoke to me in a foreign\n"
	.string "language. He really surprised me!\p"
	.string "I think he was asking if I liked\n"
	.string "POKéMON or something.$"

VeilstoneCity_EventScript_PtNpc9::
	lock
	faceplayer
	msgbox VeilstoneCity_Text_PtNpc9, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VeilstoneCity_EventScript_PtNpc9_No
	msgbox VeilstoneCity_Text_PtNpc9_Yes, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_EventScript_PtNpc9_No:
	msgbox VeilstoneCity_Text_PtNpc9_No, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Text_PtNpc9:
	.string "Salut, Trainer! Tu aimes les POKéMON?$"

VeilstoneCity_Text_PtNpc9_Yes:
	.string "Moi aussi! C'est génial!$"

VeilstoneCity_Text_PtNpc9_No:
	.string "J'ai du mal à te croire... Il n'y a qu'à\n"
	.string "vous regarder!$"

VeilstoneCity_EventScript_PtSign1::
	msgbox VeilstoneCity_Text_PtSign1, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign1:
	.string "VEILSTONE CITY Hewn from Rock$"

VeilstoneCity_EventScript_PtSign2::
	msgbox VeilstoneCity_Text_PtSign2, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign2:
	.string "GALACTIC Warehouse NO TRESPASSING!$"

VeilstoneCity_EventScript_PtSign3::
	msgbox VeilstoneCity_Text_PtSign3, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign3:
	.string "GALACTIC VEILSTONE Building We Dream\n"
	.string "of the Universe!$"

VeilstoneCity_EventScript_PtSign4::
	msgbox VeilstoneCity_Text_PtSign4, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign4:
	.string "VEILSTONE Department Store A Shop\n"
	.string "Full of Dreams!$"

VeilstoneCity_EventScript_PtSign5::
	msgbox VeilstoneCity_Text_PtSign5, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign5:
	.string "VEILSTONE CITY POKéMON Gym Leader:\n"
	.string "MAYLENE The Barefoot, Fighting\l"
	.string "Genius!$"

VeilstoneCity_EventScript_PtSign6::
	msgbox VeilstoneCity_Text_PtSign6, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign6:
	.string "VEILSTONE Game Corner Aim for an\n"
	.string "Explosion of Luck!$"

VeilstoneCity_EventScript_PtSign7::
	msgbox VeilstoneCity_Text_PtSign7, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign7:
	.string "Prize Exchange Coins Exchanged for\n"
	.string "Prizes!$"

VeilstoneCity_EventScript_PtSign8::
	msgbox VeilstoneCity_Text_PtSign8, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign8:
	.string "Visit Beautiful LAKE VALOR! Right off\n"
	.string "Rt. 214!$"

VeilstoneCity_Text_PtNpc10_0:
	.string "Veilstone is the city of stone. We even\n"
	.string "have meteorites!\p"
	.string "This has nothing to do with anything,\n"
	.string "but take this Technical Machine!$"

VeilstoneCity_Text_PtNpc10_1:
	.string "If someone uses Embargo on your\n"
	.string "POKéMON, it becomes impossible to\p"
	.string "use any items on it.\p"
	.string "Anyway, enjoy your visit to Veilstone,\n"
	.string "the city of...well, stone.$"

VeilstoneCity_EventScript_PtNpc10::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_VEILSTONE_CITY_TM63, VeilstoneCity_EventScript_PtNpc10_EmbargoMakesItemsUnusable
	msgbox VeilstoneCity_Text_PtNpc10_0, MSGBOX_DEFAULT
	giveitem ITEM_TM63, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_VEILSTONE_CITY_TM63
	goto VeilstoneCity_EventScript_PtNpc10_EmbargoMakesItemsUnusable

VeilstoneCity_EventScript_PtNpc10_EmbargoMakesItemsUnusable:
	msgbox VeilstoneCity_Text_PtNpc10_1, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_EventScript_PtNpc10_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end

VeilstoneCity_EventScript_SNHQLocked::
	checkitem ITEM_GALACTIC_KEY
	goto_if_eq VAR_RESULT, TRUE, VeilstoneCity_EventScript_SNHQOpen
	lockall
	msgbox VeilstoneCity_Text_SNHQLocked, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, VeilstoneCity_Movement_SNPushBack
	waitmovement 0
	releaseall
VeilstoneCity_EventScript_SNHQOpen:
	end

VeilstoneCity_Movement_SNPushBack:
	walk_down
	step_end
VeilstoneCity_Text_SNHQLocked:
	.string "The door is locked tight. It seems to\n"
	.string "need some sort of key.$"

VeilstoneCity_OnTransitionSN:
	call VeilstoneCity_EventScript_SNVis_GYM_CP
	call VeilstoneCity_EventScript_SNVis_GYM_WAKE
	call VeilstoneCity_EventScript_SNVis_WH_GRUNTS
	call VeilstoneCity_EventScript_SNVis_WH_CP
	call VeilstoneCity_EventScript_SNVis_WH_LOOKER
	call VeilstoneCity_EventScript_SNVis_KEY_GRUNT
	end

VeilstoneCity_EventScript_SNVis_GYM_CP:
	setflag FLAG_SN_HIDE_GYM_CP
	call VeilstoneCity_EventScript_SNCPGfx
	goto_if_set FLAG_BADGE04_GET, VeilstoneCity_EventScript_SNVis_GYM_CP_End
	clearflag FLAG_SN_HIDE_GYM_CP
VeilstoneCity_EventScript_SNVis_GYM_CP_End:
	return

VeilstoneCity_EventScript_SNVis_GYM_WAKE:
	setflag FLAG_SN_HIDE_GYM_WAKE
	goto_if_set FLAG_BADGE04_GET, VeilstoneCity_EventScript_SNVis_GYM_WAKE_End
	clearflag FLAG_SN_HIDE_GYM_WAKE
VeilstoneCity_EventScript_SNVis_GYM_WAKE_End:
	return

VeilstoneCity_EventScript_SNVis_WH_GRUNTS:
	setflag FLAG_SN_HIDE_WH_GRUNTS
	goto_if_set FLAG_SN_VEIL_WAREHOUSE_DONE, VeilstoneCity_EventScript_SNVis_WH_GRUNTS_End
	clearflag FLAG_SN_HIDE_WH_GRUNTS
VeilstoneCity_EventScript_SNVis_WH_GRUNTS_End:
	return

VeilstoneCity_EventScript_SNVis_WH_CP:
	setflag FLAG_SN_HIDE_WH_CP
	call VeilstoneCity_EventScript_SNCPGfx
	goto_if_unset FLAG_BADGE04_GET, VeilstoneCity_EventScript_SNVis_WH_CP_End
	goto_if_set FLAG_SN_VEIL_WAREHOUSE_DONE, VeilstoneCity_EventScript_SNVis_WH_CP_End
	clearflag FLAG_SN_HIDE_WH_CP
VeilstoneCity_EventScript_SNVis_WH_CP_End:
	return

VeilstoneCity_EventScript_SNVis_WH_LOOKER:
	setflag FLAG_SN_HIDE_WH_LOOKER
	goto VeilstoneCity_EventScript_SNVis_WH_LOOKER_End
	clearflag FLAG_SN_HIDE_WH_LOOKER
VeilstoneCity_EventScript_SNVis_WH_LOOKER_End:
	return

VeilstoneCity_EventScript_SNVis_KEY_GRUNT:
	setflag FLAG_SN_HIDE_KEY_GRUNT
	goto_if_unset FLAG_SN_RECEIVED_GALACTIC_KEY, VeilstoneCity_EventScript_SNVis_KEY_GRUNT_End
	goto_if_set FLAG_SN_VEIL_STORAGE_OPEN, VeilstoneCity_EventScript_SNVis_KEY_GRUNT_End
	goto_if_ge VAR_SINNOH_STORY, 32, VeilstoneCity_EventScript_SNVis_KEY_GRUNT_End
	clearflag FLAG_SN_HIDE_KEY_GRUNT
VeilstoneCity_EventScript_SNVis_KEY_GRUNT_End:
	return

VeilstoneCity_EventScript_SNCPGfx::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNCPGfx_L
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	return
VeilstoneCity_EventScript_SNCPGfx_L:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	return

VeilstoneCity_EventScript_SNGymCP::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNGymCP_A_L
	msgbox VeilstoneCity_EventScript_SNGymCP_A_D, MSGBOX_DEFAULT
	goto VeilstoneCity_EventScript_SNGymCP_A_N
VeilstoneCity_EventScript_SNGymCP_A_L:
	msgbox VeilstoneCity_EventScript_SNGymCP_A_Lu, MSGBOX_DEFAULT
VeilstoneCity_EventScript_SNGymCP_A_N:
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNGymCP_B_L
	msgbox VeilstoneCity_EventScript_SNGymCP_B_D, MSGBOX_DEFAULT
	goto VeilstoneCity_EventScript_SNGymCP_B_N
VeilstoneCity_EventScript_SNGymCP_B_L:
	msgbox VeilstoneCity_EventScript_SNGymCP_B_Lu, MSGBOX_DEFAULT
VeilstoneCity_EventScript_SNGymCP_B_N:
	release
	end

VeilstoneCity_EventScript_SNGymCP_A_D:
	.string "Dawn: {PLAYER}, are you going to take\n"
	.string "the Gym challenge?\p"
	.string "Gee, you keep getting tougher and\n"
	.string "tougher, don’t you?\p"
	.string "Me? Well, I went shopping at the\n"
	.string "department store, and...\p"
	.string "I mean, well, of course I’ve been\n"
	.string "working on my POKéDEX, but...$"

VeilstoneCity_EventScript_SNGymCP_A_Lu:
	.string "Lucas: Hey! {PLAYER}, are you going to\n"
	.string "take on the Gym Leader?\p"
	.string "Wow, you just keep getting tougher and\n"
	.string "tougher.\p"
	.string "Me? Well, I took a look in the Game\n"
	.string "Corner, and...\p"
	.string "I mean, yeah, of course I’ve been\n"
	.string "working on my POKéDEX, but...\p"
	.string "Anyway, keep it up!$"

VeilstoneCity_EventScript_SNGymCP_B_D:
	.string "So, uh, {PLAYER}. Good luck on your Gym\n"
	.string "challenge.$"

VeilstoneCity_EventScript_SNGymCP_B_Lu:
	.string "So, uh, yeah, {PLAYER}. Good luck with\n"
	.string "the POKéMON Gym.$"

VeilstoneCity_EventScript_SNGymWake::
	lock
	faceplayer
	msgbox VeilstoneCity_EventScript_SNGymWake_T1, MSGBOX_DEFAULT
	msgbox VeilstoneCity_EventScript_SNGymWake_T2, MSGBOX_DEFAULT
	msgbox VeilstoneCity_EventScript_SNGymWake_T3, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_EventScript_SNGymWake_T1:
	.string "The ring is my roiling sea. ? The\n"
	.string "towering waves shaped me.\p"
	.string "Crash! Crash! Crasher Wake! Crash!\n"
	.string "Crash! Crasher Wake!\p"
	.string "I’m the tidal wave of power to wash you\n"
	.string "away!\p"
	.string "Put out the fire, Crasher Wake! Run\n"
	.string "from electricity, Crasher Wake!\p"
	.string "Ah, ah, aaaah! The ring is my sea. ?$"

VeilstoneCity_EventScript_SNGymWake_T2:
	.string "Hello, dude and young lady! You’re\n"
	.string "challenging the Gym Leader,\p"
	.string "are you?\p"
	.string "Let me tell you now, she’s young, but\n"
	.string "she’s a born genius.\p"
	.string "I tried training with her, and I was\n"
	.string "stunned by how tough she was!$"

VeilstoneCity_EventScript_SNGymWake_T3:
	.string "Whoops! I’d better tell you who I am!\p"
	.string "I’m the triple-threat Gym Leader in\n"
	.string "POKéMON, wrestling, and song.\p"
	.string "I’m Crasher Wake of Pastoria Gym! We’ll\n"
	.string "meet again!$"

VeilstoneCity_EventScript_SNWHGrunt0::
	msgbox VeilstoneCity_EventScript_SNWHGrunt0_T, MSGBOX_NPC
	end

VeilstoneCity_EventScript_SNWHGrunt0_T:
	.string "Grunt 1: Hey, you! Yeah, you!\p"
	.string "This is Team Galactic’s warehouse! It\n"
	.string "ain’t no playground for kids!$"

VeilstoneCity_EventScript_SNWHGrunt1::
	msgbox VeilstoneCity_EventScript_SNWHGrunt1_T, MSGBOX_NPC
	end

VeilstoneCity_EventScript_SNWHGrunt1_T:
	.string "Grunt 2: This is the awesome Team\n"
	.string "Galactic’s awesome warehouse!\p"
	.string "A little kid like you should be playing\n"
	.string "at the POKéMON Gym.\p"
	.string "After all, the Gym Leader happens to be\n"
	.string "a kid just like you!$"

VeilstoneCity_EventScript_SNWHCP::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNWHCP_Ask_L
	msgbox VeilstoneCity_EventScript_SNWHCP_Ask_D, MSGBOX_DEFAULT
	goto VeilstoneCity_EventScript_SNWHCP_Ask_N
VeilstoneCity_EventScript_SNWHCP_Ask_L:
	msgbox VeilstoneCity_EventScript_SNWHCP_Ask_Lu, MSGBOX_DEFAULT
VeilstoneCity_EventScript_SNWHCP_Ask_N:
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNWHCP_Team_L
	msgbox VeilstoneCity_EventScript_SNWHCP_Team_D, MSGBOX_DEFAULT
	goto VeilstoneCity_EventScript_SNWHCP_Team_N
VeilstoneCity_EventScript_SNWHCP_Team_L:
	msgbox VeilstoneCity_EventScript_SNWHCP_Team_Lu, MSGBOX_DEFAULT
VeilstoneCity_EventScript_SNWHCP_Team_N:
	closemessage
	applymovement LOCALID_SN_WH_GRUNT0, Common_Movement_ExclamationMark
	applymovement LOCALID_SN_WH_GRUNT1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox VeilstoneCity_EventScript_SNWHCP_G1, MSGBOX_DEFAULT
	msgbox VeilstoneCity_EventScript_SNWHCP_G2, MSGBOX_DEFAULT
	closemessage
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNWHCP_PL
	switch VAR_STARTER_MON
	case 0, VeilstoneCity_EventScript_SNWHCP_PD0
	case 1, VeilstoneCity_EventScript_SNWHCP_PD1
	case 2, VeilstoneCity_EventScript_SNWHCP_PD2
VeilstoneCity_EventScript_SNWHCP_PD0:
	setfollowernpc LOCALID_SN_WH_CP, FNPC_ALL_LAND, 0, PARTNER_DAWN_TURTWIG
	goto VeilstoneCity_EventScript_SNWHCP_Battle
VeilstoneCity_EventScript_SNWHCP_PD1:
	setfollowernpc LOCALID_SN_WH_CP, FNPC_ALL_LAND, 0, PARTNER_DAWN_CHIMCHAR
	goto VeilstoneCity_EventScript_SNWHCP_Battle
VeilstoneCity_EventScript_SNWHCP_PD2:
	setfollowernpc LOCALID_SN_WH_CP, FNPC_ALL_LAND, 0, PARTNER_DAWN_PIPLUP
	goto VeilstoneCity_EventScript_SNWHCP_Battle
VeilstoneCity_EventScript_SNWHCP_PL:
	switch VAR_STARTER_MON
	case 0, VeilstoneCity_EventScript_SNWHCP_PL0
	case 1, VeilstoneCity_EventScript_SNWHCP_PL1
	case 2, VeilstoneCity_EventScript_SNWHCP_PL2
VeilstoneCity_EventScript_SNWHCP_PL0:
	setfollowernpc LOCALID_SN_WH_CP, FNPC_ALL_LAND, 0, PARTNER_LUCAS_TURTWIG
	goto VeilstoneCity_EventScript_SNWHCP_Battle
VeilstoneCity_EventScript_SNWHCP_PL1:
	setfollowernpc LOCALID_SN_WH_CP, FNPC_ALL_LAND, 0, PARTNER_LUCAS_CHIMCHAR
	goto VeilstoneCity_EventScript_SNWHCP_Battle
VeilstoneCity_EventScript_SNWHCP_PL2:
	setfollowernpc LOCALID_SN_WH_CP, FNPC_ALL_LAND, 0, PARTNER_LUCAS_PIPLUP
	goto VeilstoneCity_EventScript_SNWHCP_Battle
VeilstoneCity_EventScript_SNWHCP_Battle:
	trainerbattle_two_trainers_sn TRAINER_LAWRENCE, VeilstoneCity_EventScript_SNWHCP_DA, TRAINER_WYATT, VeilstoneCity_EventScript_SNWHCP_DB
	destroyfollowernpc
	setobjectxyperm LOCALID_SN_WH_CP, 24, 21
	clearflag FLAG_SN_HIDE_WH_CP
	addobject LOCALID_SN_WH_CP
	msgbox VeilstoneCity_EventScript_SNWHCP_G3, MSGBOX_DEFAULT
	msgbox VeilstoneCity_EventScript_SNWHCP_G4, MSGBOX_DEFAULT
	msgbox VeilstoneCity_EventScript_SNWHCP_G5, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_WH_GRUNT0
	removeobject LOCALID_SN_WH_GRUNT1
	setflag FLAG_SN_HIDE_WH_GRUNTS
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_SN_WH_CP, Common_Movement_FacePlayer
	waitmovement 0
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNWHCP_Thanks_L
	msgbox VeilstoneCity_EventScript_SNWHCP_Thanks_D, MSGBOX_DEFAULT
	goto VeilstoneCity_EventScript_SNWHCP_Thanks_N
VeilstoneCity_EventScript_SNWHCP_Thanks_L:
	msgbox VeilstoneCity_EventScript_SNWHCP_Thanks_Lu, MSGBOX_DEFAULT
VeilstoneCity_EventScript_SNWHCP_Thanks_N:
	closemessage
	clearflag FLAG_SN_HIDE_WH_LOOKER
	addobject LOCALID_SN_WH_LOOKER
	applymovement LOCALID_SN_WH_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox VeilstoneCity_EventScript_SNWHCP_L1, MSGBOX_DEFAULT
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNWHCP_Funny_L
	msgbox VeilstoneCity_EventScript_SNWHCP_Funny_D, MSGBOX_DEFAULT
	goto VeilstoneCity_EventScript_SNWHCP_Funny_N
VeilstoneCity_EventScript_SNWHCP_Funny_L:
	msgbox VeilstoneCity_EventScript_SNWHCP_Funny_Lu, MSGBOX_DEFAULT
VeilstoneCity_EventScript_SNWHCP_Funny_N:
	msgbox VeilstoneCity_EventScript_SNWHCP_L2, MSGBOX_DEFAULT
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, VeilstoneCity_EventScript_SNWHCP_Bye_L
	msgbox VeilstoneCity_EventScript_SNWHCP_Bye_D, MSGBOX_DEFAULT
	goto VeilstoneCity_EventScript_SNWHCP_Bye_N
VeilstoneCity_EventScript_SNWHCP_Bye_L:
	msgbox VeilstoneCity_EventScript_SNWHCP_Bye_Lu, MSGBOX_DEFAULT
VeilstoneCity_EventScript_SNWHCP_Bye_N:
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_WH_CP
	setflag FLAG_SN_HIDE_WH_CP
	fadescreen FADE_FROM_BLACK
	msgbox VeilstoneCity_EventScript_SNWHCP_L3, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_VEIL_WAREHOUSE_DONE
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_WH_LOOKER
	setflag FLAG_SN_HIDE_WH_LOOKER
	fadescreen FADE_FROM_BLACK
	release
	end

VeilstoneCity_EventScript_SNWHLookerTalk::
	msgbox VeilstoneCity_EventScript_SNWHCP_L3, MSGBOX_NPC
	end

VeilstoneCity_EventScript_SNWHCP_Ask_D:
	.string "Dawn: Hi, {PLAYER}! Please, can you help\n"
	.string "me?\p"
	.string "Do you remember Team Galactic? Those\n"
	.string "horrible people?\p"
	.string "They tried to steal Prof. Rowan’s\n"
	.string "research results in Jubilife, remember?\p"
	.string "I ran into them, and they took away my\n"
	.string "POKéDEX.\p"
	.string "Please, I need your help. Team up and\n"
	.string "battle with me!$"

VeilstoneCity_EventScript_SNWHCP_Ask_Lu:
	.string "Lucas: Hey! {PLAYER}! Listen, I need\n"
	.string "your help...\p"
	.string "Remember those Team Galactic goons?\p"
	.string "The guys who tried to take Prof.\n"
	.string "Rowan’s research results in Jubilife?\p"
	.string "I ran into them, and they ripped off my\n"
	.string "POKéDEX!\p"
	.string "Will you team up with me to take them\n"
	.string "on?$"

VeilstoneCity_EventScript_SNWHCP_Team_D:
	.string "Dawn: You and your POKéMON together\n"
	.string "with me and my POKéMON...\p"
	.string "United like this, our dream team has no\n"
	.string "chance of losing!\p"
	.string "I’m not letting those bad people get\n"
	.string "away with their dirty deeds!$"

VeilstoneCity_EventScript_SNWHCP_Team_Lu:
	.string "Lucas: You and your POKéMON together\n"
	.string "with me and my POKéMON...\p"
	.string "Our dream team’s not going to lose. Not\n"
	.string "with the way we work together!\p"
	.string "I’m not letting those criminals get\n"
	.string "away with this!$"

VeilstoneCity_EventScript_SNWHCP_Thanks_D:
	.string "Dawn: {PLAYER}, thank you, sincerely.\p"
	.string "I would’ve been lost without my\n"
	.string "POKéDEX.\p"
	.string "It’s indispensable for helping Prof.\n"
	.string "Rowan with his studies.\p"
	.string "So, {PLAYER}, what are you going to do\n"
	.string "now?\p"
	.string "I’m thinking of going to the POKéMON\n"
	.string "Mansion on Route 212.\p"
	.string "I hear they show rare POKéMON to\n"
	.string "visitors there.$"

VeilstoneCity_EventScript_SNWHCP_Thanks_Lu:
	.string "Lucas: {PLAYER}, thanks, honestly.\p"
	.string "I’m useless without my POKéDEX.\p"
	.string "I have to have it for helping Prof.\n"
	.string "Rowan with his studies.\p"
	.string "So, {PLAYER}, what are your plans now?\p"
	.string "I think I’m off to the POKéMON Mansion\n"
	.string "on Route 212.\p"
	.string "They say they show off rare POKéMON\n"
	.string "to visitors.$"

VeilstoneCity_EventScript_SNWHCP_Funny_D:
	.string "Dawn: Oh... It’s that funny man from\n"
	.string "Jubilife...$"

VeilstoneCity_EventScript_SNWHCP_Funny_Lu:
	.string "Lucas: Hey... It’s that weirdo from\n"
	.string "Jubilife.$"

VeilstoneCity_EventScript_SNWHCP_Bye_D:
	.string "Dawn: I’m terribly sorry.\p"
	.string "Team Galactic took my POKéDEX, so I\n"
	.string "was very irritated...\p"
	.string "I just blurted it out...\p"
	.string "...I should be going now. Be wary of\n"
	.string "Team Galactic.$"

VeilstoneCity_EventScript_SNWHCP_Bye_Lu:
	.string "Lucas: Oh, sorry. Honestly.\p"
	.string "I was upset from having my POKéDEX\n"
	.string "ripped off by Team Galactic.\p"
	.string "I didn’t even think when I spoke up.\p"
	.string "I’ll be going now. Uh... Watch out for\n"
	.string "Team Galactic.$"

VeilstoneCity_EventScript_SNWHCP_G1:
	.string "Grunt 1: What? Now you’ve brought your\n"
	.string "buddy along so you can get your\p"
	.string "POKéDEX back?\p"
	.string "We’ll be just as happy to send both of\n"
	.string "you crying home to your mommies!$"

VeilstoneCity_EventScript_SNWHCP_G2:
	.string "Grunt 2: You’re trying to get the\n"
	.string "POKéDEX back from us?\p"
	.string "Not when we, Team Galactic, can make so\n"
	.string "much better use of it!\p"
	.string "But, OK, guarding the warehouse does\n"
	.string "get boring!\p"
	.string "We’ll take you on two-on-two!$"

VeilstoneCity_EventScript_SNWHCP_DA:
	.string "GRUNT: Not good!$"

VeilstoneCity_EventScript_SNWHCP_DB:
	.string "GRUNT: Aww...$"

VeilstoneCity_EventScript_SNWHCP_G3:
	.string "Grunt 1: Aww, that stinks! Our POKéMON\n"
	.string "are chumps!\p"
	.string "We should get new ones from\n"
	.string "headquarters.\p"
	.string "Humph! Who cares about some POKéDEX\n"
	.string "anyway?\p"
	.string "Team Galactic’s going to own all the\n"
	.string "POKéMON in the world...\p"
	.string "No, in the universe!$"

VeilstoneCity_EventScript_SNWHCP_G4:
	.string "There! Take it! Take your POKéDEX!$"

VeilstoneCity_EventScript_SNWHCP_G5:
	.string "Grunt 2: Those things we had in the\n"
	.string "warehouse’ve already been moved\p"
	.string "to Pastoria City anyway...\p"
	.string "So, we’ll say “You’ll get yours!” And run\n"
	.string "like the grunts we are.$"

VeilstoneCity_EventScript_SNWHCP_L1:
	.string "Looker: Have no fear, I have come\n"
	.string "running.\p"
	.string "I heard of children feuding with the\n"
	.string "Team Galactic.\p"
	.string "It turns out, of course, to be you.$"

VeilstoneCity_EventScript_SNWHCP_L2:
	.string "Looker: You insult me to my face? How\n"
	.string "very uncouth of you.$"

VeilstoneCity_EventScript_SNWHCP_L3:
	.string "Looker: It is of no matter.\p"
	.string "Of more interest is the criminal\n"
	.string "behavior of the Team Galactic.\p"
	.string "They attempt to steal the belongings\n"
	.string "of a child?\p"
	.string "The scale of their criminality, it seems\n"
	.string "rather minuscule.\p"
	.string "The triviality of their action makes\n"
	.string "them more sinister, perhaps.\p"
	.string "Their warehouse needs investigation.\n"
	.string "Come with me, and we’ll take a look!$"

VeilstoneCity_EventScript_SNKeyGrunt::
	msgbox VeilstoneCity_EventScript_SNKeyGrunt_T, MSGBOX_NPC
	end

VeilstoneCity_EventScript_SNKeyGrunt_Looker::
	lock
	faceplayer
	msgbox VeilstoneCity_EventScript_SNKeyGrunt_L1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VeilstoneCity_EventScript_SNKeyGrunt_No
	msgbox VeilstoneCity_EventScript_SNKeyGrunt_L2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_VEIL_STORAGE_OPEN
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_KEY_GRUNT
	removeobject LOCALID_SN_KEY_LOOKER
	setflag FLAG_SN_HIDE_KEY_GRUNT
	fadescreen FADE_FROM_BLACK
	release
	end
VeilstoneCity_EventScript_SNKeyGrunt_No:
	msgbox VeilstoneCity_EventScript_SNKeyGrunt_L3, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_EventScript_SNKeyGrunt_T:
	.string "Hey! It’s you!\p"
	.string "I bet you don’t remember me, but I sure\n"
	.string "remember you!\p"
	.string "Because of you, they took my CLEFAIRY\n"
	.string "away...\p"
	.string "My partner called it quits and went\n"
	.string "back to his old country...\p"
	.string "Waah! I know nothing! I don’t know\n"
	.string "anything about any Storage Key!$"

VeilstoneCity_EventScript_SNKeyGrunt_L1:
	.string "Ah-hah! You leave this to me!\p"
	.string "The Storage Key for entering the Team\n"
	.string "Galactic hideout, I have right here.\p"
	.string "A frontal assault, it is not possible.\n"
	.string "But we can enter their hideout.\p"
	.string "Well? Will you enter the hideout? You\n"
	.string "have your reasons, yes?$"

VeilstoneCity_EventScript_SNKeyGrunt_L2:
	.string "Very well. Inside the Team Galactic\n"
	.string "warehouse.\p"
	.string "We will meet there.\p"
	.string "Prepare the best you can. I shall join\n"
	.string "you shortly.$"

VeilstoneCity_EventScript_SNKeyGrunt_L3:
	.string "Looker: ...Yes, I see your point.\p"
	.string "Sneaking into the hideout of the Team\n"
	.string "Galactic...it is daunting.$"
