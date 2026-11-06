CanalaveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CanalaveCity_OnTransitionSN
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CanalaveCity_OnFrameSN
	.byte 0

CanalaveCity_OnFrameSN:
	map_script_2 VAR_TEMP_2, 0, CanalaveCity_EventScript_SNOnFrame
	.2byte 0

CanalaveCity_EventScript_SNOnFrame::
	setvar VAR_TEMP_2, 1
	checkplayergender
	call_if_eq VAR_RESULT, MALE, CanalaveCity_EventScript_SNGfxDawn
	call_if_eq VAR_RESULT, FEMALE, CanalaveCity_EventScript_SNGfxLucas
	goto_if_unset FLAG_SN_HIDE_CANAL_GYM_BARRY, CanalaveCity_EventScript_SNGymBarry
	goto_if_unset FLAG_SN_HIDE_CANAL_EXPLOSION, CanalaveCity_EventScript_SNExplosion
	end

CanalaveCity_EventScript_SNGfxDawn:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	return
CanalaveCity_EventScript_SNGfxLucas:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	return

CanalaveCity_EventScript_PtNpc1::
	msgbox CanalaveCity_Text_PtNpc1, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc1:
	.string "What's up? Your clothes look damp.\p"
	.string "Maybe you took the boat to Iron\n"
	.string "Island to get a Hidden Machine, right?$"

CanalaveCity_EventScript_PtNpc2::
	msgbox CanalaveCity_Text_PtNpc2, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc2:
	.string "My PSYDUCK is very close to me. That\n"
	.string "makes its Return move powerful!$"

CanalaveCity_EventScript_PtNpc3::
	msgbox CanalaveCity_Text_PtNpc3, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc3:
	.string "Welcome to CANALAVE CITY, the Canal\n"
	.string "City!\p"
	.string "In the old days, this port used to be a\n"
	.string "hub of cargo transportation.$"

CanalaveCity_EventScript_PtNpc4::
	msgbox CanalaveCity_Text_PtNpc4, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc4:
	.string "I'm going to study at the library.\p"
	.string "I've taken an interest in the subject\n"
	.string "of time and space.$"

CanalaveCity_EventScript_PtNpc5::
	msgbox CanalaveCity_Text_PtNpc5, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc5:
	.string "The Gym Leader and Trainers of this\n"
	.string "Gym often go out to Iron Island.\p"
	.string "They not only train their POKéMON, but\n"
	.string "they work out as well.$"

CanalaveCity_EventScript_PtSign1::
	msgbox CanalaveCity_Text_PtSign1, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign1:
	.string "CANALAVE Library$"

CanalaveCity_EventScript_PtSign2::
	msgbox CanalaveCity_Text_PtSign2, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign2:
	.string "CANALAVE CITY POKéMON Gym Leader:\n"
	.string "BYRON The Man with the Steel Body!$"

CanalaveCity_EventScript_PtSign3::
	msgbox CanalaveCity_Text_PtSign3, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign3:
	.string "CANALAVE Dock$"

CanalaveCity_EventScript_PtSign4::
	msgbox CanalaveCity_Text_PtSign4, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign4:
	.string "CANALAVE CITY Cargo Port$"

CanalaveCity_EventScript_PtSign5::
	msgbox CanalaveCity_Text_PtSign5, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign5:
	.string "Sailor Eldritch's House$"

CanalaveCity_EventScript_PtSign6::
	msgbox CanalaveCity_Text_PtSign6, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign6:
	.string "Harbor Inn A Roost for Restless\n"
	.string "Sailors “Enjoy sweet dreams in our\l"
	.string "sumptuous beds!”$"

CanalaveCity_Text_SailorAllAboard:
	.string "All right! All aboard!$"

CanalaveCity_Text_PtNpc6_0:
	.string "PSYDUCK: Gua?$"

CanalaveCity_Text_PtNpc6_1:
	.string "PSYDUCK: Gua! Gua! Gwa? Guaa!\n"
	.string "Guuagwa?!$"

CanalaveCity_EventScript_PtNpc6::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_4, CanalaveCity_EventScript_PtNpc6_PsyduckCryGuaagwa
	msgbox CanalaveCity_Text_PtNpc6_0, MSGBOX_DEFAULT
	goto CanalaveCity_EventScript_PtNpc6_NPCEnd

CanalaveCity_EventScript_PtNpc6_PsyduckCryGuaagwa:
	msgbox CanalaveCity_Text_PtNpc6_1, MSGBOX_DEFAULT
	goto CanalaveCity_EventScript_PtNpc6_NPCEnd

CanalaveCity_EventScript_PtNpc6_NPCEnd:
	release
	end

CanalaveCity_EventScript_SailorEldritch::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_GAME_CLEAR, CanalaveCity_EventScript_SNEldritchMenu
	goto_if_set FLAG_SN_ELDRITCH_SON_WOKE, CanalaveCity_EventScript_SNEldritchWoke
	checkitem ITEM_LUNAR_WING
	goto_if_eq VAR_RESULT, TRUE, CanalaveCity_EventScript_SNEldritchTakeWing
	goto_if_set FLAG_SN_ELDRITCH_ASKED, CanalaveCity_EventScript_SNEldritchMenu
	setflag FLAG_SN_ELDRITCH_ASKED
	msgbox CanalaveCity_Text_SNGoingToFullmoon, MSGBOX_DEFAULT
	msgbox CanalaveCity_Text_SNCountingOnYou, MSGBOX_DEFAULT
	goto CanalaveCity_EventScript_SNEldritchMenu
CanalaveCity_EventScript_SNEldritchTakeWing:
	msgbox CanalaveCity_Text_SNTakeLunarWing, MSGBOX_DEFAULT
	release
	end
CanalaveCity_EventScript_SNEldritchWoke:
	goto_if_set FLAG_SN_ELDRITCH_THANKED, CanalaveCity_EventScript_SNEldritchMenu
	setflag FLAG_SN_ELDRITCH_THANKED
	msgbox CanalaveCity_Text_SNComeSailWithMe, MSGBOX_DEFAULT
CanalaveCity_EventScript_SNEldritchMenu:
	msgbox CanalaveCity_Text_DoYouWannaSetSail, MSGBOX_DEFAULT
	dynmultipush CanalaveCity_Text_DestIronIsland, 0
	goto_if_unset FLAG_SYS_GAME_CLEAR, CanalaveCity_EventScript_SailorMenu
	dynmultipush CanalaveCity_Text_DestFullmoon, 1
	dynmultipush CanalaveCity_Text_DestNewmoon, 2
CanalaveCity_EventScript_SailorMenu:
	dynmultipush CanalaveCity_Text_DestCancel, 3
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, CanalaveCity_EventScript_SailIronIsland
	case 1, CanalaveCity_EventScript_SailFullmoon
	case 2, CanalaveCity_EventScript_SailNewmoon
	msgbox CanalaveCity_Text_TellWheneverSetSail, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_SailIronIsland:
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_IRON_ISLAND, 4, 22
	waitstate
	release
	end

CanalaveCity_EventScript_SailFullmoon:
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_FULLMOON_ISLAND, 8, 20
	waitstate
	release
	end

CanalaveCity_EventScript_SailNewmoon:
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_NEWMOON_ISLAND, 23, 20
	waitstate
	release
	end

CanalaveCity_Text_DestIronIsland:
	.string "IRON ISLAND$"

CanalaveCity_Text_DestFullmoon:
	.string "FULLMOON ISLAND$"

CanalaveCity_Text_DestNewmoon:
	.string "NEWMOON ISLAND$"

CanalaveCity_Text_DestCancel:
	.string "CANCEL$"
CanalaveCity_Text_DoYouWannaSetSail:
	.string "Ahoy! I’m Eldritch, a sailor. Do you\n"
	.string "wanna set sail?$"

CanalaveCity_Text_TellWheneverSetSail:
	.string "You just tell me whenever you need to\n"
	.string "set sail!$"

CanalaveCity_OnTransitionSN:
	call CanalaveCity_EventScript_SNVis_CANAL_GYM_BARRY
	call CanalaveCity_EventScript_SNVis_CANAL_EXPLOSION
	call CanalaveCity_EventScript_SNVis_CANAL_SAILOR
	call CanalaveCity_EventScript_SNVis_CANAL_BARRY
	end

CanalaveCity_EventScript_SNVis_CANAL_BARRY:
	setflag FLAG_SN_HIDE_CANAL_BARRY
	goto_if_defeated TRAINER_ELLIOT_5, CanalaveCity_EventScript_SNVis_CANAL_BARRY_End
	goto_if_defeated TRAINER_BENJAMIN_1, CanalaveCity_EventScript_SNVis_CANAL_BARRY_End
	goto_if_defeated TRAINER_BENJAMIN_2, CanalaveCity_EventScript_SNVis_CANAL_BARRY_End
	clearflag FLAG_SN_HIDE_CANAL_BARRY
CanalaveCity_EventScript_SNVis_CANAL_BARRY_End:
	return

CanalaveCity_EventScript_SNBarry::
	lock
	faceplayer
	checkitem ITEM_HM_STRENGTH
	goto_if_eq VAR_RESULT, FALSE, CanalaveCity_EventScript_SNBarry_NoHM
	msgbox CanalaveCity_EventScript_SNBarry_Intro, MSGBOX_DEFAULT
	closemessage
	switch VAR_STARTER_MON
	case 0, CanalaveCity_EventScript_SNBarry_B0
	case 1, CanalaveCity_EventScript_SNBarry_B1
	case 2, CanalaveCity_EventScript_SNBarry_B2
CanalaveCity_EventScript_SNBarry_B0:
	trainerbattle_no_intro TRAINER_ELLIOT_5, CanalaveCity_EventScript_SNBarry_Defeat
	goto CanalaveCity_EventScript_SNBarry_After
CanalaveCity_EventScript_SNBarry_B1:
	trainerbattle_no_intro TRAINER_BENJAMIN_1, CanalaveCity_EventScript_SNBarry_Defeat
	goto CanalaveCity_EventScript_SNBarry_After
CanalaveCity_EventScript_SNBarry_B2:
	trainerbattle_no_intro TRAINER_BENJAMIN_2, CanalaveCity_EventScript_SNBarry_Defeat
	goto CanalaveCity_EventScript_SNBarry_After
CanalaveCity_EventScript_SNBarry_After:
	msgbox CanalaveCity_EventScript_SNBarry_Post, MSGBOX_DEFAULT
	closemessage
	sn_walkto VAR_LAST_TALKED, 3, 25, SN_SPEED_FAST, 0, 0, 0
	waitmovement VAR_LAST_TALKED
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_CANAL_BARRY
	release
	end

CanalaveCity_EventScript_SNBarry_NoHM:
	msgbox CanalaveCity_EventScript_SNBarry_NoHMT, MSGBOX_DEFAULT
	release
	end
CanalaveCity_EventScript_SNBarry_Intro:
	.string "BARRY: Whoops! Hey, {PLAYER}!\p"
	.string "You’re going to challenge the Gym\n"
	.string "Leader up past here, eh?\p"
	.string "Someone should check to see if you’re\n"
	.string "ready for this challenge!\p"
	.string "That someone is me! With my brand-new\n"
	.string "Gym Badge!$"

CanalaveCity_EventScript_SNBarry_Defeat:
	.string "BARRY: Argh! Not again!$"

CanalaveCity_EventScript_SNBarry_Post:
	.string "BARRY: Yeah, yeah, you’re just a bit\n"
	.string "better than me, as usual.\p"
	.string "But listen up!\p"
	.string "Let me tell you who’s going to take on\n"
	.string "the POKéMON League and become the\p"
	.string "Champion.\p"
	.string "You guessed right! It’s going to be me!\p"
	.string "Anyway, you should go to Iron Island\n"
	.string "and toughen up some more.\p"
	.string "Yeah, train at Iron Island! That’s what\n"
	.string "I did before going to the Gym!$"

CanalaveCity_EventScript_SNBarry_NoHMT:
	.string "BARRY: Hey, you’re here! Finally!\p"
	.string "Oh, but what the...\p"
	.string "Aww, you haven’t gone to Iron Island,\n"
	.string "have you?\p"
	.string "You didn’t get the HM Strength, did\n"
	.string "you?\p"
	.string "Aww, sheesh! I’ll wait here for you!\n"
	.string "Hurry up and go already!$"

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T0::
	goto_if_set FLAG_SN_HIDE_CANAL_BARRY, CanalaveCity_EventScript_SNCANALAVECITYBARRY_T0_End
	lockall
	sn_walktoplayer LOCALID_SN_CANALAVECITY_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_CANALAVECITY_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto CanalaveCity_EventScript_SNBarry
CanalaveCity_EventScript_SNCANALAVECITYBARRY_T0_End:
	end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T0_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_right
	face_right
	step_end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T0_P:
	face_left
	step_end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T1::
	goto_if_set FLAG_SN_HIDE_CANAL_BARRY, CanalaveCity_EventScript_SNCANALAVECITYBARRY_T1_End
	lockall
	sn_walktoplayer LOCALID_SN_CANALAVECITY_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_CANALAVECITY_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto CanalaveCity_EventScript_SNBarry
CanalaveCity_EventScript_SNCANALAVECITYBARRY_T1_End:
	end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T1_M:
	emote_exclamation_mark
	walk_fast_right
	face_right
	step_end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T1_P:
	face_left
	step_end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T2::
	goto_if_set FLAG_SN_HIDE_CANAL_BARRY, CanalaveCity_EventScript_SNCANALAVECITYBARRY_T2_End
	lockall
	sn_walktoplayer LOCALID_SN_CANALAVECITY_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_CANALAVECITY_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto CanalaveCity_EventScript_SNBarry
CanalaveCity_EventScript_SNCANALAVECITYBARRY_T2_End:
	end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T2_M:
	emote_exclamation_mark
	walk_fast_down
	walk_fast_right
	face_right
	step_end

CanalaveCity_EventScript_SNCANALAVECITYBARRY_T2_P:
	face_left
	step_end

CanalaveCity_EventScript_SNGymBarry::
	lockall
	playbgm MUS_RG_ENCOUNTER_RIVAL, 0
	sn_walktoplayer LOCALID_SN_CANAL_GYM_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_CANAL_GYM_BARRY
	waitmovement LOCALID_PLAYER
	msgbox CanalaveCity_Text_SNComeToLibrary, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_CANAL_GYM_BARRY, 7, 18, SN_SPEED_FAST
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_SN_CANAL_GYM_BARRY
	setflag FLAG_SN_HIDE_CANAL_GYM_BARRY
	setflag FLAG_SN_CANAL_BARRY_GYM_DONE
	fadedefaultbgm
	releaseall
	end

CanalaveCity_EventScript_SNExplosion::
	lockall
	applymovement LOCALID_SN_CANAL_ROWAN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox CanalaveCity_Text_SNTremor, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_SN_HIDE_CANAL_SAILOR
	addobject LOCALID_SN_CANAL_SAILOR
	sn_walkto LOCALID_SN_CANAL_SAILOR, 8, 21, SN_SPEED_FAST, DIR_WEST
	waitmovement 0
	msgbox CanalaveCity_Text_SNExplosion, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_CANAL_SAILOR, 12, 27, SN_SPEED_FAST
	waitmovement 0
	removeobject LOCALID_SN_CANAL_SAILOR
	setflag FLAG_SN_HIDE_CANAL_SAILOR
	applymovement LOCALID_SN_CANAL_EXP_BARRY, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox CanalaveCity_Text_SNBadFeeling, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_CANAL_EXP_BARRY, 22, 25, SN_SPEED_FAST
	waitmovement 0
	removeobject LOCALID_SN_CANAL_EXP_BARRY
	sn_playerface LOCALID_SN_CANAL_ROWAN
	waitmovement LOCALID_PLAYER
	msgbox CanalaveCity_Text_SNNeedYouAtValor, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_CANAL_COUNTERPART, Common_Movement_FacePlayer
	waitmovement 0
	delay 15
	checkplayergender
	call_if_eq VAR_RESULT, MALE, CanalaveCity_EventScript_SNDawnOK
	call_if_eq VAR_RESULT, FEMALE, CanalaveCity_EventScript_SNLucasWonder
	closemessage
	setflag FLAG_SN_CANAL_EXPLOSION_DONE
	releaseall
	end

CanalaveCity_EventScript_SNDawnOK:
	msgbox CanalaveCity_Text_SNDawnOK, MSGBOX_DEFAULT
	return
CanalaveCity_EventScript_SNLucasWonder:
	msgbox CanalaveCity_Text_SNLucasWonder, MSGBOX_DEFAULT
	return

CanalaveCity_EventScript_SNExpRowan::
	msgbox CanalaveCity_Text_SNRowanTalk, MSGBOX_NPC
	end

CanalaveCity_EventScript_SNExpCounterpart::
	lock
	faceplayer
	checkplayergender
	call_if_eq VAR_RESULT, MALE, CanalaveCity_EventScript_SNDawnTalk
	call_if_eq VAR_RESULT, FEMALE, CanalaveCity_EventScript_SNLucasTalk
	release
	end
CanalaveCity_EventScript_SNDawnTalk:
	msgbox CanalaveCity_Text_SNDawnTalk, MSGBOX_DEFAULT
	return
CanalaveCity_EventScript_SNLucasTalk:
	msgbox CanalaveCity_Text_SNLucasTalk, MSGBOX_DEFAULT
	return

CanalaveCity_Text_SNComeToLibrary:
	.string "{RIVAL}: Hey! That’s the Mine Badge!\n"
	.string "Good going!\p"
	.string "You’re tough enough to consider\n"
	.string "becoming the POKéMON Champ.\p"
	.string "Of course, I’m tougher, so it’s not\n"
	.string "going to actually happen.\p"
	.string "Anyway, {PLAYER}, come with me to the\n"
	.string "library.$"
CanalaveCity_Text_SNTremor:
	.string "Rowan: ...That tremor... That wasn’t a\n"
	.string "natural occurrence.$"
CanalaveCity_Text_SNExplosion:
	.string "Hey, hey! Old dude and kids! Did you\n"
	.string "hear?!\p"
	.string "They’re saying there was a huge\n"
	.string "explosion at Lake Valor!\p"
	.string "But, I hear everything’s fine now. I\n"
	.string "guess it was just a lot of noise.$"
CanalaveCity_Text_SNBadFeeling:
	.string "{RIVAL}: Gramps!\p"
	.string "I’m going! I have a bad feeling about\n"
	.string "this!$"
CanalaveCity_Text_SNNeedYouAtValor:
	.string "Rowan: ...That {RIVAL}... Can’t sit\n"
	.string "still...\p"
	.string "{PLAYER}, I don’t like to demand, but I\n"
	.string "need you at Lake Valor.\p"
	.string "It’s impossible for things to be OK. Not\n"
	.string "after an explosion like that.\p"
	.string "But I have no idea what is taking\n"
	.string "place...\p"
	.string "But before you go, let me stress: don’t\n"
	.string "get in over your head.\p"
	.string "We will try to join you as soon as we\n"
	.string "inspect Lake Verity.$"
CanalaveCity_Text_SNDawnOK:
	.string "Dawn: ...{PLAYER}, you’ll be OK, no matter\n"
	.string "what, right?$"
CanalaveCity_Text_SNLucasWonder:
	.string "Lucas: Lake Valor... I wonder what\n"
	.string "happened?$"

CanalaveCity_EventScript_SNVis_CANAL_GYM_BARRY:
	setflag FLAG_SN_HIDE_CANAL_GYM_BARRY
	goto_if_unset FLAG_BADGE06_GET, CanalaveCity_EventScript_SNVis_CANAL_GYM_BARRY_End
	goto_if_ge VAR_SINNOH_STORY, 31, CanalaveCity_EventScript_SNVis_CANAL_GYM_BARRY_End
	goto_if_set FLAG_SN_CANAL_BARRY_GYM_DONE, CanalaveCity_EventScript_SNVis_CANAL_GYM_BARRY_End
	clearflag FLAG_SN_HIDE_CANAL_GYM_BARRY
CanalaveCity_EventScript_SNVis_CANAL_GYM_BARRY_End:
	return

CanalaveCity_EventScript_SNVis_CANAL_EXPLOSION:
	setflag FLAG_SN_HIDE_CANAL_EXPLOSION
	goto_if_ne VAR_SINNOH_STORY, 31, CanalaveCity_EventScript_SNVis_CANAL_EXPLOSION_End
	goto_if_set FLAG_SN_CANAL_EXPLOSION_DONE, CanalaveCity_EventScript_SNVis_CANAL_EXPLOSION_End
	clearflag FLAG_SN_HIDE_CANAL_EXPLOSION
CanalaveCity_EventScript_SNVis_CANAL_EXPLOSION_End:
	return

CanalaveCity_EventScript_SNVis_CANAL_SAILOR:
	setflag FLAG_SN_HIDE_CANAL_SAILOR
	goto CanalaveCity_EventScript_SNVis_CANAL_SAILOR_End
	clearflag FLAG_SN_HIDE_CANAL_SAILOR
CanalaveCity_EventScript_SNVis_CANAL_SAILOR_End:
	return
CanalaveCity_Text_SNRowanTalk:
	.string "Rowan: Hmm...\p"
	.string "What is taking place at Lake Valor...\n"
	.string "You must find out!\p"
	.string "But before you go, let me stress: don’t\n"
	.string "get in over your head.\p"
	.string "We will try to join you as soon as we\n"
	.string "inspect Lake Verity.$"
CanalaveCity_Text_SNDawnTalk:
	.string "Dawn: We’re going off to Lake Verity\n"
	.string "first...\p"
	.string "Don’t do anything rash if something\n"
	.string "does happen.$"
CanalaveCity_Text_SNLucasTalk:
	.string "Lucas: We’re going to investigate Lake\n"
	.string "Verity before we join you.\p"
	.string "Don’t try to be a hero if anything\n"
	.string "crazy happens.$"

CanalaveCity_Text_SNGoingToFullmoon:
	.string "...You.... You’re going to Fullmoon Island\n"
	.string "for us?$"

CanalaveCity_Text_SNCountingOnYou:
	.string "We’re both counting on you!\p"
	.string "Only you can awaken my son from his\n"
	.string "awful nightmare...\p"
	.string "Please, I need the Lunar Wing from\n"
	.string "Fullmoon Island to awaken him!\p"
	.string "I went, but I failed to find it...$"

CanalaveCity_Text_SNTakeLunarWing:
	.string "That Lunar Wing... Please! Take it to my\n"
	.string "son...$"

CanalaveCity_Text_SNComeSailWithMe:
	.string "Seeing you back to normal makes me\n"
	.string "feel great!\p"
	.string "I’ve regained my spirit as a Sailor!\n"
	.string "Come sail with me later!$"
