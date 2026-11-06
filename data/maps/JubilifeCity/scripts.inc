JubilifeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, JubilifeCity_OnFrame
	.byte 0

JubilifeCity_OnTransition:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, JubilifeCity_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

JubilifeCity_EventScript_SetDawnGfx::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, JubilifeCity_EventScript_SetLucasGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	end
JubilifeCity_EventScript_SetLucasGfx:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

JubilifeCity_EventScript_Sign10::
	msgbox JubilifeCity_Text_Sign10, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign10:
	.string "JUBILIFE CITY\p"
	.string "The most modern city in Sinnoh.$"

JubilifeCity_EventScript_Sign8::
	msgbox JubilifeCity_Text_Sign8, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign8:
	.string "TRAINERS' SCHOOL\p"
	.string "Learn the basics of POKéMON\n"
	.string "battling!$"

JubilifeCity_EventScript_Sign2::
	msgbox JubilifeCity_Text_Sign2, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign2:
	.string "POKéNAV COMPANY\p"
	.string "Making life easier for Trainers\n"
	.string "everywhere.$"

JubilifeCity_EventScript_Sign3::
	msgbox JubilifeCity_Text_Sign3, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign3:
	.string "JUBILIFE TV\p"
	.string "Broadcasting across all of Sinnoh.$"

JubilifeCity_EventScript_PtNpc1::
	msgbox JubilifeCity_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc1:
	.string "When you walk with your POKéMON, they\n"
	.string "gradually grow friendlier.$"

JubilifeCity_EventScript_PtNpc2::
	msgbox JubilifeCity_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc2:
	.string "Hiya, where'd you come from?\p"
	.string "...\p"
	.string "TWINLEAF TOWN, huh... It's a nice place.\n"
	.string "Quiet and all.\p"
	.string "JUBILIFE CITY is a big place, so it\n"
	.string "might be a bit of a shock to you.$"

JubilifeCity_EventScript_PtNpc3::
	msgbox JubilifeCity_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc3:
	.string "The TRAINERS' SCHOOL is where I\n"
	.string "learned everything I know!$"

JubilifeCity_EventScript_PtNpc4::
	msgbox JubilifeCity_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc4:
	.string "Did you see me on TV? I was in an\n"
	.string "interview!$"

JubilifeCity_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox JubilifeCity_Text_PtNpc5, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_EventScript_PtNpc5_No
	msgbox JubilifeCity_Text_PtNpc5_Yes, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_PtNpc5_No:
	msgbox JubilifeCity_Text_PtNpc5_No, MSGBOX_DEFAULT
	release
	end

JubilifeCity_Text_PtNpc5:
	.string "Hello, Trainer! Do you know much about\n"
	.string "POKéMON?$"

JubilifeCity_EventScript_PtNpc6::
	msgbox JubilifeCity_Text_PtNpc6, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc6:
	.string "OK, set six POKé BALLS in my belt...\p"
	.string "Yeah, that'll do it. At most, you can\n"
	.string "have six POKéMON with you.$"

JubilifeCity_EventScript_PtNpc7::
	msgbox JubilifeCity_Text_PtNpc7, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc7:
	.string "JUBILIFE CITY's built on land they\n"
	.string "carved out of a mountain.\p"
	.string "The people and POKéMON of OREBURGH\n"
	.string "CITY helped out with that\l"
	.string "undertaking.$"

JubilifeCity_EventScript_PtNpc8::
	msgbox JubilifeCity_Text_PtNpc8, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc8:
	.string "Want to battle? Just kidding! I'm\n"
	.string "waiting for a friend.$"

JubilifeCity_EventScript_PtNpc9::
	msgbox JubilifeCity_Text_PtNpc9, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc9:
	.string "Trading POKéMON means connecting\n"
	.string "with friends, both old and new.\p"
	.string "That's awesome!$"

JubilifeCity_EventScript_PtNpc10::
	msgbox JubilifeCity_Text_PtNpc10, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc10:
	.string "I'm trading POKéMON with my buddy!$"

JubilifeCity_EventScript_PtNpc11::
	msgbox JubilifeCity_Text_PtNpc11, MSGBOX_NPC
	end

JubilifeCity_Text_PtNpc11:
	.string "I made my POKéMON hold an item before\n"
	.string "trading it.\p"
	.string "That will make the other Trainer\n"
	.string "double happy!$"

JubilifeCity_EventScript_Dawn::
	msgbox JubilifeCity_Text_SNJFollowD, MSGBOX_NPC
	end

JubilifeCity_EventScript_DawnScene::
	lockall
	applymovement LOCALID_JUBILIFE_DAWN, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_JUBILIFE_DAWN, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_JUBILIFE_DAWN
	sn_playerface LOCALID_JUBILIFE_DAWN, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJAskD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJAskL_Call
	getpartysize
	buffernumberstring STR_VAR_1, VAR_RESULT
	goto_if_ge VAR_RESULT, 4, JubilifeCity_EventScript_SNJMany
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJFewD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJFewL_Call
	goto JubilifeCity_EventScript_SNJFollow
JubilifeCity_EventScript_SNJMany:
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJManyD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJManyL_Call
JubilifeCity_EventScript_SNJFollow:
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJFollowD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJFollowL_Call
	closemessage
	sn_walkto LOCALID_JUBILIFE_DAWN, 46, 40, SN_SPEED_NORMAL, DIR_NORTH, 0, 0
	sn_walkto OBJ_EVENT_ID_PLAYER, 47, 40, SN_SPEED_NORMAL, DIR_NORTH, 0, 1
	waitmovement LOCALID_JUBILIFE_DAWN
	waitmovement OBJ_EVENT_ID_PLAYER
	setobjectxyperm LOCALID_JUBILIFE_LOOKER, 47, 33
	clearflag FLAG_HIDE_JUBILIFE_LOOKER
	addobject LOCALID_JUBILIFE_LOOKER
	sn_walkto LOCALID_JUBILIFE_LOOKER, 47, 37, SN_SPEED_NORMAL, DIR_SOUTH, 0, 2
	waitmovement LOCALID_JUBILIFE_LOOKER
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJWhatD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJWhatL_Call
	closemessage
	applymovement LOCALID_JUBILIFE_LOOKER, JubilifeCity_Movement_SNJLookerSearch
	waitmovement 0
	sn_walkto LOCALID_JUBILIFE_DAWN, 46, 38, SN_SPEED_NORMAL, DIR_EAST, 0, 0
	sn_walkto OBJ_EVENT_ID_PLAYER, 47, 38, SN_SPEED_NORMAL, DIR_NORTH, 0, 1
	waitmovement LOCALID_JUBILIFE_DAWN
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJUmD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJUmL_Call
	closemessage
	applymovement LOCALID_JUBILIFE_LOOKER, JubilifeCity_Movement_SNJLookerNotice
	waitmovement 0
	msgbox JubilifeCity_Text_SNJWHAAAT, MSGBOX_DEFAULT
	msgbox JubilifeCity_Text_SNJHowDidYouUnmaskMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_JUBILIFE_DAWN, Common_Movement_FaceUp
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJSmallD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJSmallL_Call
	msgbox JubilifeCity_Text_SNJIKnowBetter, MSGBOX_DEFAULT
	msgbox JubilifeCity_Text_SNJIsSayingFamiliarToYou, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_EventScript_SNJNo
	msgbox JubilifeCity_Text_SNJTakingFromOthersIsWrong, MSGBOX_DEFAULT
	goto JubilifeCity_EventScript_SNJRecorder
JubilifeCity_EventScript_SNJNo:
	msgbox JubilifeCity_Text_SNJYouClaimToNotKnowIt, MSGBOX_DEFAULT
JubilifeCity_EventScript_SNJRecorder:
	msgbox JubilifeCity_Text_SNJPerhapsYouCanUseThis, MSGBOX_DEFAULT
	giveitem ITEM_VS_RECORDER
	msgbox JubilifeCity_Text_SNJDeviceForRecordingAMatch, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_JUBILIFE_LOOKER, JubilifeCity_Movement_SNJLookerLookAround
	waitmovement 0
	msgbox JubilifeCity_Text_SNJInformMeOfAnyHappenings, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_JUBILIFE_LOOKER, 49, 32, SN_SPEED_FAST, 0, 0, 2
	waitmovement LOCALID_JUBILIFE_LOOKER
	removeobject LOCALID_JUBILIFE_LOOKER
	setflag FLAG_HIDE_JUBILIFE_LOOKER
	setvar VAR_SINNOH_LOOKER, 1
	applymovement LOCALID_JUBILIFE_DAWN, Common_Movement_FaceRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJPoliceD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJPoliceL_Call
	closemessage
	delay 30
	sn_walkto LOCALID_JUBILIFE_DAWN, 43, 37, SN_SPEED_NORMAL, DIR_EAST, 0, 0
	sn_walkto OBJ_EVENT_ID_PLAYER, 44, 37, SN_SPEED_NORMAL, DIR_WEST, 0, 1
	waitmovement LOCALID_JUBILIFE_DAWN
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJSchoolD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJSchoolL_Call
	closemessage
	applymovement LOCALID_JUBILIFE_DAWN, Common_Movement_FaceRight
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_SNJRivalD_Call
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_SNJRivalL_Call
	closemessage
	sn_walkto LOCALID_JUBILIFE_DAWN, 48, 55, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_JUBILIFE_DAWN
	removeobject LOCALID_JUBILIFE_DAWN
	setflag FLAG_HIDE_JUBILIFE_DAWN
	clearflag FLAG_HIDE_SCHOOL_BARRY
	setvar VAR_SINNOH_STORY, 13
	releaseall
	end

JubilifeCity_Movement_SNJLookerSearch:
	face_left
	delay_16
	face_right
	delay_16
	walk_left
	walk_fast_left
	walk_fast_left
	face_right
	delay_16
	face_up
	delay_16
	walk_right
	walk_fast_right
	walk_fast_right
	face_down
	step_end

JubilifeCity_Movement_SNJLookerNotice:
	face_down
	emote_exclamation_mark
	step_end

JubilifeCity_Movement_SNJLookerLookAround:
	face_left
	delay_8
	face_right
	delay_8
	face_down
	step_end

JubilifeCity_Text_SNJAskD_Call:
	msgbox JubilifeCity_Text_SNJAskD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJAskL_Call:
	msgbox JubilifeCity_Text_SNJAskL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJManyD_Call:
	msgbox JubilifeCity_Text_SNJManyD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJManyL_Call:
	msgbox JubilifeCity_Text_SNJManyL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJFewD_Call:
	msgbox JubilifeCity_Text_SNJFewD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJFewL_Call:
	msgbox JubilifeCity_Text_SNJFewL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJFollowD_Call:
	msgbox JubilifeCity_Text_SNJFollowD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJFollowL_Call:
	msgbox JubilifeCity_Text_SNJFollowL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJWhatD_Call:
	msgbox JubilifeCity_Text_SNJWhatD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJWhatL_Call:
	msgbox JubilifeCity_Text_SNJWhatL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJUmD_Call:
	msgbox JubilifeCity_Text_SNJUmD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJUmL_Call:
	msgbox JubilifeCity_Text_SNJUmL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJSmallD_Call:
	msgbox JubilifeCity_Text_SNJSmallD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJSmallL_Call:
	msgbox JubilifeCity_Text_SNJSmallL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJPoliceD_Call:
	msgbox JubilifeCity_Text_SNJPoliceD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJPoliceL_Call:
	msgbox JubilifeCity_Text_SNJPoliceL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJSchoolD_Call:
	msgbox JubilifeCity_Text_SNJSchoolD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJSchoolL_Call:
	msgbox JubilifeCity_Text_SNJSchoolL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJRivalD_Call:
	msgbox JubilifeCity_Text_SNJRivalD, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJRivalL_Call:
	msgbox JubilifeCity_Text_SNJRivalL, MSGBOX_DEFAULT
	return

JubilifeCity_Text_SNJAskD:
	.string "Dawn: Hi, {PLAYER}! Are you catching\n"
	.string "POKéMON?$"
JubilifeCity_Text_SNJManyD:
	.string "Wow! You’ve already got {STR_VAR_1}\n"
	.string "POKéMON with you!\p"
	.string "At that pace, your POKéDEX should be\n"
	.string "full in no time at all!$"
JubilifeCity_Text_SNJFewD:
	.string "...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.$"
JubilifeCity_Text_SNJFollowD:
	.string "Oh, I know! Don’t you think it’s better\n"
	.string "to know more about POKéMON?\p"
	.string "Sure it is! I know just the place.\p"
	.string "Come on! Don’t be shy. Follow me!$"
JubilifeCity_Text_SNJWhatD:
	.string "Dawn: That man... What is he doing?$"
JubilifeCity_Text_SNJUmD:
	.string "Dawn: Um...$"
JubilifeCity_Text_SNJSmallD:
	.string "Dawn: Huh? What? I beg your pardon? I\n"
	.string "was just making conversation...$"
JubilifeCity_Text_SNJPoliceD:
	.string "Dawn: ...Working for the International\n"
	.string "Police must be hard.$"
JubilifeCity_Text_SNJSchoolD:
	.string "{PLAYER}, here it is. It’s the Trainers’\n"
	.string "School.\p"
	.string "The name says it all!$"
JubilifeCity_Text_SNJRivalD:
	.string "I saw your friend {RIVAL} go in\n"
	.string "earlier.\p"
	.string "He could still be in there studying. OK,\n"
	.string "bye now!$"
JubilifeCity_Text_SNJAskL:
	.string "Lucas: Hey, {PLAYER}! How many POKéMON\n"
	.string "have you caught?$"
JubilifeCity_Text_SNJManyL:
	.string "Whoa! You already have {STR_VAR_1}\n"
	.string "POKéMON with you!$"
JubilifeCity_Text_SNJFewL:
	.string "Huh? I think you should catch some\n"
	.string "more.\p"
	.string "It might be more of a challenge raising\n"
	.string "a lot of POKéMON...\p"
	.string "But it’s worth it. The more POKéMON you\n"
	.string "have, the happier you’ll be.$"
JubilifeCity_Text_SNJFollowL:
	.string "Hey, that’s right! Don’t you think it’s\n"
	.string "better to know more about POKéMON?\p"
	.string "Sure it is! There’s this great place for\n"
	.string "that.\p"
	.string "Come on! It’s all right. Follow me.$"
JubilifeCity_Text_SNJWhatL:
	.string "Lucas: That guy... What’s he doing?$"
JubilifeCity_Text_SNJUmL:
	.string "Lucas: Uh, excuse...$"
JubilifeCity_Text_SNJSmallL:
	.string "Lucas: Huh? What? Are you kidding? I\n"
	.string "was just making small talk...$"
JubilifeCity_Text_SNJPoliceL:
	.string "Lucas: ...Working for the International\n"
	.string "Police sounds hard.$"
JubilifeCity_Text_SNJSchoolL:
	.string "{PLAYER}, here we are. This is the\n"
	.string "Trainers’ School.\p"
	.string "The name says it all!$"
JubilifeCity_Text_SNJRivalL:
	.string "Your pal {RIVAL} went in earlier. He\n"
	.string "might still be studying in there.\p"
	.string "OK, see you around!$"
JubilifeCity_Text_SNJWHAAAT:
	.string "WHAAAT?!$"
JubilifeCity_Text_SNJHowDidYouUnmaskMe:
	.string "Mysterious man: ...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!$"
JubilifeCity_Text_SNJIKnowBetter:
	.string "Shady man: ...Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!$"
JubilifeCity_Text_SNJIsSayingFamiliarToYou:
	.string "Now that my cover has been blown, let\n"
	.string "me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you only\n"
	.string "of my code name.\p"
	.string "My code name, it is Looker. It is what\n"
	.string "they all call me.\p"
	.string "Incidentally, is the saying, “Don’t be a\n"
	.string "thief!” familiar to you?$"
JubilifeCity_Text_SNJTakingFromOthersIsWrong:
	.string "Looker: Yes, that is correct. Taking\n"
	.string "what belongs to others is wrong.$"
JubilifeCity_Text_SNJYouClaimToNotKnowIt:
	.string "Looker: No? You claim to not know it?\n"
	.string "How could that be?\p"
	.string "Perhaps your mama has said it, but you\n"
	.string "have forgotten it, like usual?\p"
	.string "Now listen, my friends. It is wrong to\n"
	.string "take what belongs to others.$"
JubilifeCity_Text_SNJPerhapsYouCanUseThis:
	.string "Unfortunately, there are apparently\n"
	.string "those who do not heed those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the POKéMON of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"
JubilifeCity_Text_SNJDeviceForRecordingAMatch:
	.string "That Vs. Recorder, it is a nifty device\n"
	.string "for recording a match.\p"
	.string "I obtained it because it is quite\n"
	.string "popular these days.\p"
	.string "But myself, I do not do POKéMON\n"
	.string "battling very often.\p"
	.string "It will be in better hands with you.$"
JubilifeCity_Text_SNJInformMeOfAnyHappenings:
	.string "Looker: Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no! You\n"
	.string "must inform me of bad guys!\p"
	.string "You must inform me of any happenings!$"

JubilifeCity_EventScript_PresidentScene::
	lockall
	applymovement LOCALID_JUBILIFE_PRESIDENT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_JUBILIFE_PRESIDENT, JubilifeCity_Movement_PresidentWalks
	waitmovement 0
	applymovement LOCALID_JUBILIFE_PRESIDENT, Common_Movement_FaceRight
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox JubilifeCity_Text_PresidentCampaign, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SINNOH_STORY, 15
	releaseall
	end

JubilifeCity_EventScript_President::
	lock
	faceplayer
	goto_if_set FLAG_SYS_POKENAV_GET, JubilifeCity_EventScript_PresidentAfter
	checkitem ITEM_COUPON_1
	goto_if_eq VAR_RESULT, FALSE, JubilifeCity_EventScript_PresidentNoCoupons
	checkitem ITEM_COUPON_2
	goto_if_eq VAR_RESULT, FALSE, JubilifeCity_EventScript_PresidentNoCoupons
	checkitem ITEM_COUPON_3
	goto_if_eq VAR_RESULT, FALSE, JubilifeCity_EventScript_PresidentNoCoupons
	msgbox JubilifeCity_Text_PresidentCoupons, MSGBOX_DEFAULT
	removeitem ITEM_COUPON_1
	removeitem ITEM_COUPON_2
	removeitem ITEM_COUPON_3
	playfanfare MUS_OBTAIN_ITEM
	message JubilifeCity_Text_ReceivedPokenav
	waitfanfare
	waitmessage
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	call_if_eq VAR_SINNOH_STORY, 15, JubilifeCity_EventScript_SetStory16
	msgbox JubilifeCity_Text_PresidentPokenav, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_SetStory16::
	setvar VAR_SINNOH_STORY, 16
	return

JubilifeCity_EventScript_PresidentNoCoupons::
	msgbox JubilifeCity_Text_PresidentNoCoupons, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_PresidentAfter::
	msgbox JubilifeCity_Text_PresidentAfter, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_BlockEast::
	lockall
	goto_if_eq VAR_SINNOH_STORY, 15, JubilifeCity_EventScript_BlockEastPoketch
	msgbox JubilifeCity_Text_BlockEastSchool, MSGBOX_DEFAULT
	goto JubilifeCity_EventScript_BlockEastEnd
JubilifeCity_EventScript_BlockEastPoketch::
	msgbox JubilifeCity_Text_BlockEastNorth, MSGBOX_DEFAULT
JubilifeCity_EventScript_BlockEastEnd::
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkLeft
	waitmovement 0
	releaseall
	end

JubilifeCity_EventScript_Clown1::
	lock
	faceplayer
	checkitem ITEM_COUPON_1
	goto_if_eq VAR_RESULT, TRUE, JubilifeCity_EventScript_ClownDone
	goto_if_set FLAG_SYS_POKENAV_GET, JubilifeCity_EventScript_ClownDone
	msgbox JubilifeCity_Text_ClownQuiz1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_EventScript_ClownWrong
	msgbox JubilifeCity_Text_ClownRight, MSGBOX_DEFAULT
	giveitem ITEM_COUPON_1
	goto JubilifeCity_EventScript_ClownRight

JubilifeCity_EventScript_Clown2::
	lock
	faceplayer
	checkitem ITEM_COUPON_2
	goto_if_eq VAR_RESULT, TRUE, JubilifeCity_EventScript_ClownDone
	goto_if_set FLAG_SYS_POKENAV_GET, JubilifeCity_EventScript_ClownDone
	msgbox JubilifeCity_Text_ClownQuiz2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_EventScript_ClownWrong
	msgbox JubilifeCity_Text_ClownRight, MSGBOX_DEFAULT
	giveitem ITEM_COUPON_2
	goto JubilifeCity_EventScript_ClownRight

JubilifeCity_EventScript_Clown3::
	lock
	faceplayer
	checkitem ITEM_COUPON_3
	goto_if_eq VAR_RESULT, TRUE, JubilifeCity_EventScript_ClownDone
	goto_if_set FLAG_SYS_POKENAV_GET, JubilifeCity_EventScript_ClownDone
	msgbox JubilifeCity_Text_ClownQuiz3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_EventScript_ClownWrong
	msgbox JubilifeCity_Text_ClownRight, MSGBOX_DEFAULT
	giveitem ITEM_COUPON_3
	goto JubilifeCity_EventScript_ClownRight

JubilifeCity_EventScript_ClownRight::
	msgbox JubilifeCity_Text_ClownRight2, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_ClownWrong::
	msgbox JubilifeCity_Text_ClownWrong, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_ClownDone::
	msgbox JubilifeCity_Text_ClownDone, MSGBOX_DEFAULT
	release
	end

JubilifeCity_EventScript_Rowan::
JubilifeCity_EventScript_GalacticScene::
	lockall
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_JUBILIFE_GRUNT_1, Common_Movement_ExclamationMark
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_GruntsThreaten_ScrD
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_GruntsThreaten_ScrL
	closemessage
	getplayerxy VAR_0x8008, VAR_0x8009
	subvar VAR_0x8008, 1
	setobjectxyperm LOCALID_JUBILIFE_DAWN, VAR_0x8008, VAR_0x8009
	clearflag FLAG_HIDE_JUBILIFE_DAWN
	addobject LOCALID_JUBILIFE_DAWN
	applymovement LOCALID_JUBILIFE_DAWN, Common_Movement_FaceUp
	waitmovement 0
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, JubilifeCity_EventScript_SNMulti_PL
	switch VAR_STARTER_MON
	case 0, JubilifeCity_EventScript_SNMulti_PD0
	case 1, JubilifeCity_EventScript_SNMulti_PD1
	case 2, JubilifeCity_EventScript_SNMulti_PD2
JubilifeCity_EventScript_SNMulti_PD0:
	setfollowernpc LOCALID_JUBILIFE_DAWN, FNPC_ALL_LAND, 0, PARTNER_DAWN_J_TURTWIG
	goto JubilifeCity_EventScript_SNMulti_Battle
JubilifeCity_EventScript_SNMulti_PD1:
	setfollowernpc LOCALID_JUBILIFE_DAWN, FNPC_ALL_LAND, 0, PARTNER_DAWN_J_CHIMCHAR
	goto JubilifeCity_EventScript_SNMulti_Battle
JubilifeCity_EventScript_SNMulti_PD2:
	setfollowernpc LOCALID_JUBILIFE_DAWN, FNPC_ALL_LAND, 0, PARTNER_DAWN_J_PIPLUP
	goto JubilifeCity_EventScript_SNMulti_Battle
JubilifeCity_EventScript_SNMulti_PL:
	switch VAR_STARTER_MON
	case 0, JubilifeCity_EventScript_SNMulti_PL0
	case 1, JubilifeCity_EventScript_SNMulti_PL1
	case 2, JubilifeCity_EventScript_SNMulti_PL2
JubilifeCity_EventScript_SNMulti_PL0:
	setfollowernpc LOCALID_JUBILIFE_DAWN, FNPC_ALL_LAND, 0, PARTNER_LUCAS_J_TURTWIG
	goto JubilifeCity_EventScript_SNMulti_Battle
JubilifeCity_EventScript_SNMulti_PL1:
	setfollowernpc LOCALID_JUBILIFE_DAWN, FNPC_ALL_LAND, 0, PARTNER_LUCAS_J_CHIMCHAR
	goto JubilifeCity_EventScript_SNMulti_Battle
JubilifeCity_EventScript_SNMulti_PL2:
	setfollowernpc LOCALID_JUBILIFE_DAWN, FNPC_ALL_LAND, 0, PARTNER_LUCAS_J_PIPLUP
	goto JubilifeCity_EventScript_SNMulti_Battle
JubilifeCity_EventScript_SNMulti_Battle:
	trainerbattle_two_trainers_sn TRAINER_GALACTIC_JUBILIFE_1, JubilifeCity_Text_Grunt1Defeat, TRAINER_GALACTIC_JUBILIFE_2, JubilifeCity_Text_Grunt2Defeat
	destroyfollowernpc
	setobjectxyperm LOCALID_JUBILIFE_DAWN, VAR_0x8008, VAR_0x8009
	clearflag FLAG_HIDE_JUBILIFE_DAWN
	addobject LOCALID_JUBILIFE_DAWN
	msgbox JubilifeCity_Text_GruntsFlee, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_JUBILIFE_GRUNT_1
	removeobject LOCALID_JUBILIFE_GRUNT_2
	fadescreenswapbuffers FADE_FROM_BLACK
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_RowanThanks_ScrD
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_RowanThanks_ScrL
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_JUBILIFE_ROWAN
	removeobject LOCALID_JUBILIFE_DAWN
	setflag FLAG_HIDE_JUBILIFE_DAWN
	setflag FLAG_HIDE_JUBILIFE_GRUNTS
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 20
	releaseall
	end

JubilifeCity_EventScript_Looker::
	lock
	faceplayer
	msgbox JubilifeCity_Text_Looker, MSGBOX_DEFAULT
	release
	end

JubilifeCity_Movement_DawnToSchool:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

JubilifeCity_Text_DawnWelcome:
	.string "{STR_VAR_1}: Hi, {PLAYER}! Are you\n"
	.string "catching POKéMON?\p"
	.string "{STR_VAR_1}: ...Um...\p"
	.string "I think you’d feel a lot safer if you\n"
	.string "were to catch some more.\p"
	.string "You know, like when you need to travel\n"
	.string "to faraway places.\p"
	.string "{STR_VAR_1}: Oh, I know! Don’t you think\n"
	.string "it’s better to know more about\l"
	.string "POKéMON?\p"
	.string "Sure it is! I know just the place.\p"
	.string "Come on! Don’t be shy. Follow me!$"

JubilifeCity_Text_BlockEastSchool:
	.string "I have to deliver {RIVAL}'s PARCEL\n"
	.string "first. He's somewhere in JUBILIFE.$"

JubilifeCity_Text_BlockEastNorth:
	.string "The POKéNAV campaign man was\n"
	.string "looking for Trainers. Maybe I\l"
	.string "should collect those COUPONS\n"
	.string "first.$"

JubilifeCity_Text_ClownQuiz1:
	.string "POKéNAV campaign quiz! Answer\n"
	.string "correctly to win a COUPON!\p"
	.string "Does a POKéMON grow by defeating\n"
	.string "others and gaining EXP. Points?$"

JubilifeCity_Text_ClownQuiz2:
	.string "POKéNAV campaign quiz time!\p"
	.string "Just like POKéMON have types, do\n"
	.string "moves have types too?$"

JubilifeCity_Text_ClownQuiz3:
	.string "Last POKéNAV campaign quiz! Ready?\p"
	.string "Can a POKéMON hold an item?$"

JubilifeCity_Text_ClownRight:
	.string "Correct! Here's your COUPON!$"

JubilifeCity_Text_ClownRight2:
	.string "Collect all three COUPONS and\n"
	.string "bring them to the POKéNAV\l"
	.string "COMPANY's president!$"

JubilifeCity_Text_ClownWrong:
	.string "Ooh, so close! Think it over and\n"
	.string "try again!$"

JubilifeCity_Text_ClownDone:
	.string "You already have my COUPON! Go\n"
	.string "find the others!$"

JubilifeCity_Text_GruntsThreaten:
	.string "Mystery man: Now, now, now, now, now!\n"
	.string "Professor Rowan, you must comply.\p"
	.string "Hand over all your research findings.\n"
	.string "For free, naturally.\p"
	.string "Failure to comply will result in a\n"
	.string "painful time for your assistant.\p"
	.string "Rowan: Quiet, you lot! Why must you be\n"
	.string "such a nuisance?\p"
	.string "Let me list some lessons you still need\n"
	.string "to learn.\p"
	.string "?1: Don’t loiter about for no good\n"
	.string "reason.\p"
	.string "?2: Don’t interrupt others while they\n"
	.string "are attempting to converse.\p"
	.string "?3: If you don’t get your way, don’t\n"
	.string "raise your voice to be intimidating.\p"
	.string "?4: Don’t think you’ve grown strong\n"
	.string "just because you’re in a group.\p"
	.string "?5: What is with those outlandish\n"
	.string "outfits you have on?\p"
	.string "Mystery man: Oh, professor of POKéMON,\n"
	.string "must you be so difficult?\p"
	.string "We are speaking to you on business.\n"
	.string "Because this is work for us.\p"
	.string "What we’re saying is--we demand you\n"
	.string "comply with our demands.\p"
	.string "Rowan: My goodness... You call\n"
	.string "yourselves adults?\p"
	.string "You kids, don’t grow up to be like these\n"
	.string "sorry specimens.\p"
	.string "Mystery man: Eeeeeh! You had to make\n"
	.string "this personal!\p"
	.string "You have forced our hand into making a\n"
	.string "show of force!\p"
	.string "We will make you regret insulting Team\n"
	.string "Galactic!\p"
	.string "Rowan: You kids, give these thugs a\n"
	.string "lesson in civility, please.\p"
	.string "{STR_VAR_1}: {PLAYER}! Let’s battle\n"
	.string "together!$"

JubilifeCity_Text_GruntsYouToo:
	.string "GRUNT: Huh? Some kid wants to\n"
	.string "interfere? You'll regret that!$"

JubilifeCity_Text_Grunt1Defeat:
	.string "How did a kid beat me?!$"

JubilifeCity_Text_GruntNext:
	.string "GRUNT: Out of my way! I'll teach\n"
	.string "you a lesson myself!$"

JubilifeCity_Text_Grunt2Defeat:
	.string "No way... This isn't over!$"

JubilifeCity_Text_GruntsFlee:
	.string "Grunt 1: You leave us no option. We will\n"
	.string "retreat for now.\p"
	.string "We shall do so because Team Galactic is\n"
	.string "benevolent to all.$"

JubilifeCity_Text_RowanThanks:
	.string "Rowan: That lot... They called\n"
	.string "themselves Team Galactic.\p"
	.string "When POKéMON evolve, they seem to\n"
	.string "release some type of energy...\p"
	.string "However, I believe that it’s a mystic\n"
	.string "power far beyond our control.\p"
	.string "But Team Galactic seems to be studying\n"
	.string "that power’s potential.\p"
	.string "They want to know if it can be used as\n"
	.string "energy for something...\p"
	.string "{STR_VAR_1}: {PLAYER}, did you know?\p"
	.string "The professor studies the evolution\n"
	.string "of POKéMON, too.\p"
	.string "According to his research, 90% of all\n"
	.string "POKéMON are somehow tied to evolution!\p"
	.string "Well, maybe that’s the reason those\n"
	.string "people tried to take the professor’s\p"
	.string "research data by force.\p"
	.string "That’s really unforgivable!\p"
	.string "Rowan: It’s all over, so you can relax\n"
	.string "now.\p"
	.string "Still, thanks to you two, nothing came\n"
	.string "of that situation. I appreciate that.\p"
	.string "Incidentally, {PLAYER}. Kudos to you\n"
	.string "for your battling skill.\p"
	.string "It got me thinking. Why don’t you\n"
	.string "collect all the Gym Badges of Sinnoh?\p"
	.string "Doing so, you will be sure to encounter\n"
	.string "lots of POKéMON.\p"
	.string "That, of course, means your POKéDEX\n"
	.string "pages will continuously fill up.\p"
	.string "In other words, it will be of great help\n"
	.string "to my research.\p"
	.string "That said, I’ve given you your first\n"
	.string "POKéMON and POKéDEX as yours to keep.\p"
	.string "You’re free to do with them as you wish.\n"
	.string "Take care now.$"

JubilifeCity_Text_Looker:
	.string "Looker: Hello, my friend. Have you\n"
	.string "visited the Trainers’ School?\p"
	.string "Did your friend not guide you there\n"
	.string "earlier?$"

JubilifeCity_Text_LookerIntro:
	.string "{STR_VAR_1}: That man... What is he\n"
	.string "doing?\p"
	.string "???: WHAAAT?!\p"
	.string "Mysterious man: ...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!\p"
	.string "{STR_VAR_1}: Huh? What? I beg your\n"
	.string "pardon? I was just making\l"
	.string "conversation...\p"
	.string "Shady man: ...Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!\p"
	.string "Looker: Now that my cover has been\n"
	.string "blown, let me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you only\n"
	.string "of my code name.\p"
	.string "My code name, it is Looker. It is what\n"
	.string "they all call me.\p"
	.string "Incidentally, is the saying, “Don’t be a\n"
	.string "thief!” familiar to you?\p"
	.string "Looker: Yes, that is correct. Taking\n"
	.string "what belongs to others is wrong.\p"
	.string "Looker: Unfortunately, there are\n"
	.string "apparently those who do not heed\l"
	.string "those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the POKéMON of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

JubilifeCity_Text_LookerBye:
	.string "Looker: Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no! You\n"
	.string "must inform me of bad guys!\p"
	.string "You must inform me of any happenings!\p"
	.string "{STR_VAR_1}: ...Working for the\n"
	.string "International Police must be hard.$"

JubilifeCity_Text_DawnSchool:
	.string "{STR_VAR_1}: {PLAYER}, here it is. It’s\n"
	.string "the Trainers’ School.\p"
	.string "The name says it all!\p"
	.string "{STR_VAR_1}: I saw your friend\n"
	.string "{RIVAL} go in earlier.\p"
	.string "He could still be in there studying. OK,\n"
	.string "bye now!$"

JubilifeCity_Text_PresidentCampaign:
	.string "Hello there! I'm the president of\n"
	.string "the POKéNAV COMPANY. We're running\l"
	.string "a campaign!\p"
	.string "Find the three clowns in town and\n"
	.string "answer their quizzes to get three\l"
	.string "COUPONS. Bring them to me for a\n"
	.string "prize!$"

JubilifeCity_Text_PresidentNoCoupons:
	.string "Find all three clowns and bring me\n"
	.string "their COUPONS. They're somewhere\l"
	.string "in JUBILIFE!$"

JubilifeCity_Text_PresidentCoupons:
	.string "Wonderful! You found all three\n"
	.string "COUPONS! Here's your prize!$"

JubilifeCity_Text_ReceivedPokenav:
	.string "{PLAYER} received the POKéNAV!$"

JubilifeCity_Text_PresidentPokenav:
	.string "The POKéNAV has a map and much\n"
	.string "more. It will help you on your\l"
	.string "journey!$"

JubilifeCity_Text_PresidentAfter:
	.string "How do you like your POKéNAV? Use\n"
	.string "it well!$"

JubilifeCity_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 14, JubilifeCity_EventScript_PresidentScene
	.2byte 0

JubilifeCity_EventScript_LookerScene::
	lockall
	goto_if_lt VAR_SINNOH_STORY, 12, JubilifeCity_EventScript_LookerEnd
	clearflag FLAG_HIDE_JUBILIFE_LOOKER
	addobject LOCALID_JUBILIFE_LOOKER
	applymovement LOCALID_JUBILIFE_LOOKER, Common_Movement_ExclamationMark
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_LookerIntro_ScrD
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_LookerIntro_ScrL
	giveitem ITEM_VS_RECORDER
	checkplayergender
	call_if_eq VAR_RESULT, MALE, JubilifeCity_Text_LookerBye_ScrD
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_LookerBye_ScrL
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_JUBILIFE_LOOKER
	setflag FLAG_HIDE_JUBILIFE_LOOKER
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_SINNOH_LOOKER, 1
JubilifeCity_EventScript_LookerEnd::
	releaseall
	end

JubilifeCity_Movement_PresidentWalks:
	walk_up
	walk_right
	step_end

JubilifeCity_EventScript_BlockNorth::
	lockall
	msgbox JubilifeCity_Text_BlockNorth, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

JubilifeCity_Text_BlockNorth:
	.string "The road north leads to a rocky\n"
	.string "cave. I'd better get the BADGE\l"
	.string "from OREBURGH GYM first.$"

JubilifeCity_EventScript_Sign1::
	msgbox JubilifeCity_Text_Sign1, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign1:
	.string "JUBILIFE CITY\p"
	.string "The most modern city in Sinnoh.$"

JubilifeCity_EventScript_Sign5::
	msgbox JubilifeCity_Text_Sign5, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign5:
	.string "JUBILIFE CITY\p"
	.string "The most modern city in Sinnoh.$"

JubilifeCity_EventScript_Sign6::
	msgbox JubilifeCity_Text_Sign6, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign6:
	.string "JUBILIFE CITY\p"
	.string "The most modern city in Sinnoh.$"

JubilifeCity_EventScript_Sign7::
	msgbox JubilifeCity_Text_Sign7, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign7:
	.string "JUBILIFE CITY\p"
	.string "The most modern city in Sinnoh.$"

JubilifeCity_EventScript_Sign4::
	msgbox JubilifeCity_Text_Sign4, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign4:
	.string "CONDOMINIUMS$"

JubilifeCity_EventScript_Sign9::
	msgbox JubilifeCity_Text_Sign9, MSGBOX_SIGN
	end

JubilifeCity_Text_Sign9:
	.string "JUBILIFE CITY\p"
	.string "The most modern city in Sinnoh.$"

JubilifeCity_Text_PtNpc5_Yes:
	.string "Ah, I see! You are knowledgeable!\p"
	.string "I imagine you wouldn't see the need to\n"
	.string "visit the Trainers' School, then.\p"
	.string "But do visit if you have the time. You\n"
	.string "may discover something new!$"

JubilifeCity_Text_PtNpc5_No:
	.string "Oh, you're not knowledgeable... But not\n"
	.string "to worry!\p"
	.string "There's the Trainers' School.\p"
	.string "The school will teach you the basics\n"
	.string "of POKéMON.$"

JubilifeCity_Text_DawnWelcome_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_DawnWelcome_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, JubilifeCity_Text_DawnWelcome_SNDawnCall
	return
JubilifeCity_Text_DawnWelcome_ScrL:
	msgbox JubilifeCity_Text_DawnWelcome_Lu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_DawnWelcome_Lu:
	.string "{STR_VAR_1}: Hey, {PLAYER}! How many\n"
	.string "POKéMON have you caught?\p"
	.string "{STR_VAR_1}: Huh? I think you should\n"
	.string "catch some more.\p"
	.string "It might be more of a challenge raising\n"
	.string "a lot of POKéMON...\p"
	.string "But it’s worth it. The more POKéMON you\n"
	.string "have, the happier you’ll be.\p"
	.string "{STR_VAR_1}: Hey, that’s right! Don’t\n"
	.string "you think it’s better to know more\l"
	.string "about POKéMON?\p"
	.string "Sure it is! There’s this great place for\n"
	.string "that.\p"
	.string "Come on! It’s all right. Follow me.$"

JubilifeCity_Text_DawnSchool_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_DawnSchool_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, JubilifeCity_Text_DawnSchool_SNDawnCall
	return
JubilifeCity_Text_DawnSchool_ScrL:
	msgbox JubilifeCity_Text_DawnSchool_Lu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_DawnSchool_Lu:
	.string "{STR_VAR_1}: {PLAYER}, here we are. This\n"
	.string "is the Trainers’ School.\p"
	.string "The name says it all!\p"
	.string "{STR_VAR_1}: Your pal {RIVAL} went\n"
	.string "in earlier. He might still be studying in\l"
	.string "there.\p"
	.string "OK, see you around!$"

JubilifeCity_Text_LookerIntro_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_LookerIntro_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, JubilifeCity_Text_LookerIntro_SNDawnCall
	return
JubilifeCity_Text_LookerIntro_ScrL:
	msgbox JubilifeCity_Text_LookerIntro_Lu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_LookerIntro_Lu:
	.string "{STR_VAR_1}: That guy... What’s he\n"
	.string "doing?\p"
	.string "???: WHAAAT?!\p"
	.string "Mysterious man: ...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!\p"
	.string "{STR_VAR_1}: Huh? What? Are you\n"
	.string "kidding? I was just making small talk...\p"
	.string "Shady man: ...Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!\p"
	.string "Looker: Now that my cover has been\n"
	.string "blown, let me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you only\n"
	.string "of my code name.\p"
	.string "My code name, it is Looker. It is what\n"
	.string "they all call me.\p"
	.string "Incidentally, is the saying, “Don’t be a\n"
	.string "thief!” familiar to you?\p"
	.string "Looker: Yes, that is correct. Taking\n"
	.string "what belongs to others is wrong.\p"
	.string "Looker: Unfortunately, there are\n"
	.string "apparently those who do not heed\l"
	.string "those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the POKéMON of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

JubilifeCity_Text_LookerBye_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_LookerBye_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, JubilifeCity_Text_LookerBye_SNDawnCall
	return
JubilifeCity_Text_LookerBye_ScrL:
	msgbox JubilifeCity_Text_LookerBye_Lu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_LookerBye_Lu:
	.string "Looker: Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no! You\n"
	.string "must inform me of bad guys!\p"
	.string "You must inform me of any happenings!\p"
	.string "{STR_VAR_1}: ...Working for the\n"
	.string "International Police sounds hard.$"

JubilifeCity_Text_GruntsThreaten_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_GruntsThreaten_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, JubilifeCity_Text_GruntsThreaten_SNDawnCall
	return
JubilifeCity_Text_GruntsThreaten_ScrL:
	msgbox JubilifeCity_Text_GruntsThreaten_Lu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_GruntsThreaten_Lu:
	.string "Mystery man: Now, now, now, now, now!\n"
	.string "Professor Rowan, you must comply.\p"
	.string "Hand over all your research findings.\n"
	.string "For free, naturally.\p"
	.string "Failure to comply will result in a\n"
	.string "painful time for your assistant.\p"
	.string "Rowan: Quiet, you lot! Why must you be\n"
	.string "such a nuisance?\p"
	.string "Let me list some lessons you still need\n"
	.string "to learn.\p"
	.string "?1: Don’t loiter about for no good\n"
	.string "reason.\p"
	.string "?2: Don’t interrupt others while they\n"
	.string "are attempting to converse.\p"
	.string "?3: If you don’t get your way, don’t\n"
	.string "raise your voice to be intimidating.\p"
	.string "?4: Don’t think you’ve grown strong\n"
	.string "just because you’re in a group.\p"
	.string "?5: What is with those outlandish\n"
	.string "outfits you have on?\p"
	.string "Mystery man: Oh, professor of POKéMON,\n"
	.string "must you be so difficult?\p"
	.string "We are speaking to you on business.\n"
	.string "Because this is work for us.\p"
	.string "What we’re saying is--we demand you\n"
	.string "comply with our demands.\p"
	.string "Rowan: My goodness... You call\n"
	.string "yourselves adults?\p"
	.string "You kids, don’t grow up to be like these\n"
	.string "sorry specimens.\p"
	.string "Mystery man: Eeeeeh! You had to make\n"
	.string "this personal!\p"
	.string "You have forced our hand into making a\n"
	.string "show of force!\p"
	.string "We will make you regret insulting Team\n"
	.string "Galactic!\p"
	.string "Rowan: You kids, give these thugs a\n"
	.string "lesson in civility, please.\p"
	.string "{STR_VAR_1}: {PLAYER}! Join me and\n"
	.string "battle these guys!$"

JubilifeCity_Text_RowanThanks_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, JubilifeCity_Text_RowanThanks_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, JubilifeCity_Text_RowanThanks_SNDawnCall
	return
JubilifeCity_Text_RowanThanks_ScrL:
	msgbox JubilifeCity_Text_RowanThanks_Lu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_RowanThanks_Lu:
	.string "Rowan: That lot... They called\n"
	.string "themselves Team Galactic.\p"
	.string "When POKéMON evolve, they seem to\n"
	.string "release some type of energy...\p"
	.string "However, I believe that it’s a mystic\n"
	.string "power far beyond our control.\p"
	.string "But Team Galactic seems to be studying\n"
	.string "that power’s potential.\p"
	.string "They want to know if it can be used as\n"
	.string "energy for something...\p"
	.string "{STR_VAR_1}: {PLAYER}, did you know\n"
	.string "about this?\p"
	.string "The professor studies the evolution\n"
	.string "of POKéMON, too.\p"
	.string "According to his research, 90% of all\n"
	.string "POKéMON are somehow tied to evolution!\p"
	.string "Maybe that’s the reason those goons\n"
	.string "tried to take the professor’s\p"
	.string "research data.\p"
	.string "They’re not allowed to do that!\p"
	.string "Rowan: It’s all over, so you can relax\n"
	.string "now.\p"
	.string "Still, thanks to you two, nothing came\n"
	.string "of that situation. I appreciate that.\p"
	.string "Incidentally, {PLAYER}. Kudos to you\n"
	.string "for your battling skill.\p"
	.string "It got me thinking. Why don’t you\n"
	.string "collect all the Gym Badges of Sinnoh?\p"
	.string "Doing so, you will be sure to encounter\n"
	.string "lots of POKéMON.\p"
	.string "That, of course, means your POKéDEX\n"
	.string "pages will continuously fill up.\p"
	.string "In other words, it will be of great help\n"
	.string "to my research.\p"
	.string "That said, I’ve given you your first\n"
	.string "POKéMON and POKéDEX as yours to keep.\p"
	.string "You’re free to do with them as you wish.\n"
	.string "Take care now.$"

JubilifeCity_Text_DawnWelcome_SNDawnCall:
	msgbox JubilifeCity_Text_DawnWelcome, MSGBOX_DEFAULT
	return

JubilifeCity_Text_DawnWelcome_SNLucasCall:
	msgbox JubilifeCity_Text_DawnWelcome_SNLu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_DawnWelcome_SNLu:
	.string "{STR_VAR_1}: Hey, {PLAYER}! How many\n"
	.string "POKéMON have you caught?\p"
	.string "{STR_VAR_1}: Huh? I think you should\n"
	.string "catch some more.\p"
	.string "It might be more of a challenge raising\n"
	.string "a lot of POKéMON...\p"
	.string "But it’s worth it. The more POKéMON you\n"
	.string "have, the happier you’ll be.\p"
	.string "{STR_VAR_1}: Hey, that’s right! Don’t\n"
	.string "you think it’s better to know more\l"
	.string "about POKéMON?\p"
	.string "Sure it is! There’s this great place for\n"
	.string "that.\p"
	.string "Come on! It’s all right. Follow me.$"

JubilifeCity_Text_DawnSchool_SNDawnCall:
	msgbox JubilifeCity_Text_DawnSchool, MSGBOX_DEFAULT
	return

JubilifeCity_Text_DawnSchool_SNLucasCall:
	msgbox JubilifeCity_Text_DawnSchool_SNLu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_DawnSchool_SNLu:
	.string "{STR_VAR_1}: {PLAYER}, here we are. This\n"
	.string "is the Trainers’ School.\p"
	.string "The name says it all!\p"
	.string "{STR_VAR_1}: Your pal {RIVAL} went\n"
	.string "in earlier. He might still be studying in\l"
	.string "there.\p"
	.string "OK, see you around!$"

JubilifeCity_Text_LookerIntro_SNDawnCall:
	msgbox JubilifeCity_Text_LookerIntro, MSGBOX_DEFAULT
	return

JubilifeCity_Text_LookerIntro_SNLucasCall:
	msgbox JubilifeCity_Text_LookerIntro_SNLu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_LookerIntro_SNLu:
	.string "{STR_VAR_1}: That guy... What’s he\n"
	.string "doing?\p"
	.string "???: WHAAAT?!\p"
	.string "Mysterious man: ...How did you know?\p"
	.string "How did you unmask me as a member of\n"
	.string "the International Police?!\p"
	.string "{STR_VAR_1}: Huh? What? Are you\n"
	.string "kidding? I was just making small talk...\p"
	.string "Shady man: ...Heh. You claim you were\n"
	.string "only making conversation, do you?\p"
	.string "But, I know better not to believe that.\n"
	.string "No, no, no.\p"
	.string "You recognized right away that I was\n"
	.string "someone extraordinary.\p"
	.string "That is why you spoke to me, is it not?\n"
	.string "Your power of observation is fearsome!\p"
	.string "Quite admirable, you are!\p"
	.string "Looker: Now that my cover has been\n"
	.string "blown, let me introduce myself.\p"
	.string "I am a globe-trotting elite of the\n"
	.string "International Police.\p"
	.string "My name... Ah, no, I shall inform you only\n"
	.string "of my code name.\p"
	.string "My code name, it is Looker. It is what\n"
	.string "they all call me.\p"
	.string "Incidentally, is the saying, “Don’t be a\n"
	.string "thief!” familiar to you?\p"
	.string "Looker: Yes, that is correct. Taking\n"
	.string "what belongs to others is wrong.\p"
	.string "Looker: Unfortunately, there are\n"
	.string "apparently those who do not heed\l"
	.string "those words.\p"
	.string "In Sinnoh, in fact, there are criminals\n"
	.string "stealing the POKéMON of others.\p"
	.string "I have, therefore, been on the lookout\n"
	.string "for characters arousing my suspicion.\p"
	.string "Incidentally, you are Trainers, yes?\n"
	.string "Perhaps you can make use of this?$"

JubilifeCity_Text_LookerBye_SNDawnCall:
	msgbox JubilifeCity_Text_LookerBye, MSGBOX_DEFAULT
	return

JubilifeCity_Text_LookerBye_SNLucasCall:
	msgbox JubilifeCity_Text_LookerBye_SNLu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_LookerBye_SNLu:
	.string "Looker: Also, I have a request.\p"
	.string "If you were to see me again, I ask that\n"
	.string "you not talk to me, for I am on duty.\p"
	.string "...Actually, yes, yes, you may speak to\n"
	.string "me. You must.\p"
	.string "Not because I am lonely, no, no! You\n"
	.string "must inform me of bad guys!\p"
	.string "You must inform me of any happenings!\p"
	.string "{STR_VAR_1}: ...Working for the\n"
	.string "International Police sounds hard.$"

JubilifeCity_Text_GruntsThreaten_SNDawnCall:
	msgbox JubilifeCity_Text_GruntsThreaten, MSGBOX_DEFAULT
	return

JubilifeCity_Text_GruntsThreaten_SNLucasCall:
	msgbox JubilifeCity_Text_GruntsThreaten_SNLu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_GruntsThreaten_SNLu:
	.string "Mystery man: Now, now, now, now, now!\n"
	.string "Professor Rowan, you must comply.\p"
	.string "Hand over all your research findings.\n"
	.string "For free, naturally.\p"
	.string "Failure to comply will result in a\n"
	.string "painful time for your assistant.\p"
	.string "Rowan: Quiet, you lot! Why must you be\n"
	.string "such a nuisance?\p"
	.string "Let me list some lessons you still need\n"
	.string "to learn.\p"
	.string "?1: Don’t loiter about for no good\n"
	.string "reason.\p"
	.string "?2: Don’t interrupt others while they\n"
	.string "are attempting to converse.\p"
	.string "?3: If you don’t get your way, don’t\n"
	.string "raise your voice to be intimidating.\p"
	.string "?4: Don’t think you’ve grown strong\n"
	.string "just because you’re in a group.\p"
	.string "?5: What is with those outlandish\n"
	.string "outfits you have on?\p"
	.string "Mystery man: Oh, professor of POKéMON,\n"
	.string "must you be so difficult?\p"
	.string "We are speaking to you on business.\n"
	.string "Because this is work for us.\p"
	.string "What we’re saying is--we demand you\n"
	.string "comply with our demands.\p"
	.string "Rowan: My goodness... You call\n"
	.string "yourselves adults?\p"
	.string "You kids, don’t grow up to be like these\n"
	.string "sorry specimens.\p"
	.string "Mystery man: Eeeeeh! You had to make\n"
	.string "this personal!\p"
	.string "You have forced our hand into making a\n"
	.string "show of force!\p"
	.string "We will make you regret insulting Team\n"
	.string "Galactic!\p"
	.string "Rowan: You kids, give these thugs a\n"
	.string "lesson in civility, please.\p"
	.string "{STR_VAR_1}: {PLAYER}! Join me and\n"
	.string "battle these guys!$"

JubilifeCity_Text_RowanThanks_SNDawnCall:
	msgbox JubilifeCity_Text_RowanThanks, MSGBOX_DEFAULT
	return

JubilifeCity_Text_RowanThanks_SNLucasCall:
	msgbox JubilifeCity_Text_RowanThanks_SNLu, MSGBOX_DEFAULT
	return

JubilifeCity_Text_RowanThanks_SNLu:
	.string "Rowan: That lot... They called\n"
	.string "themselves Team Galactic.\p"
	.string "When POKéMON evolve, they seem to\n"
	.string "release some type of energy...\p"
	.string "However, I believe that it’s a mystic\n"
	.string "power far beyond our control.\p"
	.string "But Team Galactic seems to be studying\n"
	.string "that power’s potential.\p"
	.string "They want to know if it can be used as\n"
	.string "energy for something...\p"
	.string "{STR_VAR_1}: {PLAYER}, did you know\n"
	.string "about this?\p"
	.string "The professor studies the evolution\n"
	.string "of POKéMON, too.\p"
	.string "According to his research, 90% of all\n"
	.string "POKéMON are somehow tied to evolution!\p"
	.string "Maybe that’s the reason those goons\n"
	.string "tried to take the professor’s\p"
	.string "research data.\p"
	.string "They’re not allowed to do that!\p"
	.string "Rowan: It’s all over, so you can relax\n"
	.string "now.\p"
	.string "Still, thanks to you two, nothing came\n"
	.string "of that situation. I appreciate that.\p"
	.string "Incidentally, {PLAYER}. Kudos to you\n"
	.string "for your battling skill.\p"
	.string "It got me thinking. Why don’t you\n"
	.string "collect all the Gym Badges of Sinnoh?\p"
	.string "Doing so, you will be sure to encounter\n"
	.string "lots of POKéMON.\p"
	.string "That, of course, means your POKéDEX\n"
	.string "pages will continuously fill up.\p"
	.string "In other words, it will be of great help\n"
	.string "to my research.\p"
	.string "That said, I’ve given you your first\n"
	.string "POKéMON and POKéDEX as yours to keep.\p"
	.string "You’re free to do with them as you wish.\n"
	.string "Take care now.$"

