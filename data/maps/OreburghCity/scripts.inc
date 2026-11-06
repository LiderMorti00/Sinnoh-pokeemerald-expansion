OreburghCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OreburghCity_OnTransitionSN
	.byte 0

OreburghCity_EventScript_GymClosed::
	lockall
	goto_if_set FLAG_SN_ORE_BARRY_MET, OreburghCity_EventScript_SNGymClosedAgain
	opendoor 30, 22
	waitdooranim
	setobjectxyperm LOCALID_SN_ORE_BARRY, 30, 22
	clearflag FLAG_SN_HIDE_ORE_BARRY
	addobject LOCALID_SN_ORE_BARRY
	playse SE_M_STRENGTH
	applymovement LOCALID_PLAYER, OreburghCity_Movement_SNKnockBack
	applymovement LOCALID_SN_ORE_BARRY, OreburghCity_Movement_SNBarryOut
	waitmovement 0
	closedoor 30, 22
	waitdooranim
	setobjectxyperm LOCALID_SN_ORE_BARRY, 30, 23
	msgbox OreburghCity_Text_SNThud, MSGBOX_DEFAULT
	msgbox OreburghCity_Text_GymClosed, MSGBOX_DEFAULT
	setflag FLAG_SN_ORE_BARRY_MET
	releaseall
	end

OreburghCity_EventScript_SNGymClosedAgain:
	msgbox OreburghCity_Text_SNBarryAgain, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

OreburghCity_EventScript_SNBarryTalk::
	lock
	faceplayer
	msgbox OreburghCity_Text_SNBarryAgain, MSGBOX_DEFAULT
	release
	end

OreburghCity_Movement_SNKnockBack:
	lock_facing_direction
	walk_fast_down
	unlock_facing_direction
	step_end

OreburghCity_Movement_SNBarryOut:
	walk_fast_down
	step_end

OreburghCity_Text_SNThud:
	.string "Thud!!$"

OreburghCity_Text_GymClosed:
	.string "{RIVAL}: Hunh?\p"
	.string "Oh, it’s you, {PLAYER}! You finally got\n"
	.string "here?\p"
	.string "You’re slow like always.\p"
	.string "But anyway, the Gym Leader’s tough!\n"
	.string "Like, seriously serious!\p"
	.string "If the Gym Leader’s this tough, I\n"
	.string "wonder how he compares to my dad...\p"
	.string "Huh? I just drifted there.\p"
	.string "Anyway, the Gym Leader’s gone off to\n"
	.string "the coal mine.\p"
	.string "If you want to take on the Gym Leader,\n"
	.string "you’d better go off to the mine!$"

OreburghCity_Text_SNBarryAgain:
	.string "{RIVAL}: I told you, the Gym Leader\n"
	.string "went down to the Oreburgh Mine.\p"
	.string "If you want to take the Gym challenge,\n"
	.string "you have to go down to the mine.$"

OreburghCity_EventScript_Sign4::
	msgbox OreburghCity_Text_Sign4, MSGBOX_SIGN
	end

OreburghCity_Text_Sign4:
	.string "OREBURGH CITY\p"
	.string "The energetic town of coal.$"

OreburghCity_EventScript_Sign6::
	msgbox OreburghCity_Text_Sign6, MSGBOX_SIGN
	end

OreburghCity_Text_Sign6:
	.string "OREBURGH CITY POKéMON GYM\p"
	.string "LEADER: ROARK\p"
	.string "The rock-solid POKéMON pro!$"

OreburghCity_EventScript_Sign7::
	msgbox OreburghCity_Text_Sign7, MSGBOX_SIGN
	end

OreburghCity_Text_Sign7:
	.string "OREBURGH MINE\p"
	.string "Coal mining site. Watch your step!$"

OreburghCity_EventScript_PtNpc1::
	msgbox OreburghCity_Text_PtNpc1, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc1:
	.string "Up ahead there's a huge mountain that\n"
	.string "towers above everything.\p"
	.string "It divides SINNOH into two distinct\n"
	.string "halves.$"

OreburghCity_EventScript_PtNpc2::
	msgbox OreburghCity_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc2:
	.string "The Gym Leader went off to work in the\n"
	.string "mine.$"

OreburghCity_EventScript_PtNpc3::
	msgbox OreburghCity_Text_PtNpc3, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc3:
	.string "Everyone's proud of the mine.\p"
	.string "They're digging for coal under the sea\n"
	.string "as we speak...\p"
	.string "It's amazing how they do it!$"

OreburghCity_EventScript_SNYoungster::
	goto_if_set FLAG_SN_ORE_YOUNGSTER_DONE, OreburghCity_EventScript_SNYoungster_End
	goto_if_set FLAG_SN_ORE_BARRY_MET, OreburghCity_EventScript_SNYoungster_End
	lockall
	applymovement LOCALID_ORE_YOUNGSTER, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_ORE_YOUNGSTER, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_ORE_YOUNGSTER
	sn_playerface LOCALID_ORE_YOUNGSTER, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox OreburghCity_Text_SNYoungsterGym, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_ORE_YOUNGSTER_DONE
	sn_walkto LOCALID_ORE_YOUNGSTER, 31, 24, SN_SPEED_NORMAL, DIR_WEST, 0, 0
	sn_walkto OBJ_EVENT_ID_PLAYER, 30, 24, SN_SPEED_NORMAL, DIR_NORTH, 0, 1
	waitmovement LOCALID_ORE_YOUNGSTER
	waitmovement OBJ_EVENT_ID_PLAYER
	setobjectxyperm LOCALID_ORE_YOUNGSTER, 31, 24
	msgbox OreburghCity_Text_SNYoungsterSomeone, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
	waitmovement 0
	releaseall
	goto OreburghCity_EventScript_GymClosed
OreburghCity_EventScript_SNYoungster_End:
	end

OreburghCity_EventScript_PtNpc4::
	msgbox OreburghCity_Text_PtNpc4, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc4:
	.string "Is that guy in front of the Gym your\n"
	.string "friend?\p"
	.string "He's sort of twitchy and impatient.$"

OreburghCity_EventScript_PtNpc5::
	msgbox OreburghCity_Text_PtNpc5, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc5:
	.string "These vents exchange the hot air\n"
	.string "down below with the fresh air outside.\p"
	.string "Looking down them gives me the urge\n"
	.string "to start yelling into 'em! Hello!$"

OreburghCity_EventScript_PtNpc6::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OREBURGHCITY_SUPER_POTION, OreburghCity_EventScript_PtNpc6_Received
	msgbox OreburghCity_Text_PtNpc6, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_POTION, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OREBURGHCITY_SUPER_POTION
	msgbox OreburghCity_Text_PtNpc6_After, MSGBOX_DEFAULT
	release
	end

OreburghCity_EventScript_PtNpc6_Received:
	msgbox OreburghCity_Text_PtNpc6_Received, MSGBOX_DEFAULT
	release
	end

OreburghCity_Text_PtNpc6:
	.string "There's no question. This is hard, hard\n"
	.string "work.\p"
	.string "But working alongside POKéMON... It\n"
	.string "gives me a boost somehow.\p"
	.string "Here, take one of these.$"

OreburghCity_EventScript_PtNpc7::
	msgbox OreburghCity_Text_PtNpc7, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc7:
	.string "When I run around with my Running\n"
	.string "Shoes on, I'm the center of attention!\p"
	.string "...At least that's what it feels like.\n"
	.string "There's always someone looking at me.$"

OreburghCity_EventScript_PtNpc8::
	msgbox OreburghCity_Text_PtNpc8, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc8:
	.string "This pile of dirty sand is called a slag\n"
	.string "heap.\p"
	.string "It's the waste from sorting coal.$"

OreburghCity_EventScript_PtNpc9::
	msgbox OreburghCity_Text_PtNpc9, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc9:
	.string "Chop, chop, MACHOP! Chop, chop away on\n"
	.string "rocks! -~$"

OreburghCity_EventScript_PtNpc10::
	msgbox OreburghCity_Text_PtNpc10, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc10:
	.string "Have you seen the vents? They\n"
	.string "release steam from down below.$"

OreburghCity_EventScript_PtNpc11::
	msgbox OreburghCity_Text_PtNpc11, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc11:
	.string "TMs are single use only, but HMs can be\n"
	.string "used over and over.\p"
	.string "It's tricky trying to decide which\n"
	.string "POKéMON should learn what moves.$"

OreburghCity_EventScript_PtNpc12::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox OreburghCity_Text_PtNpc12, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_Text_PtNpc12:
	.string "MACHOP: Macho! Chopo!$"

OreburghCity_EventScript_PtNpc13::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox OreburghCity_Text_PtNpc13, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_Text_PtNpc13:
	.string "MACHOP: Pigyooh!$"

OreburghCity_EventScript_PtNpc14::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox OreburghCity_Text_PtNpc14, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_Text_PtNpc14:
	.string "MACHOP: Gwooh! Gogogooh!$"

OreburghCity_EventScript_PtNpc15::
	msgbox OreburghCity_Text_PtNpc15, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc15:
	.string "Natural time capsules buried many,\n"
	.string "many years ago...\p"
	.string "That's what Fossils are.$"

OreburghCity_EventScript_Sign3::
	msgbox OreburghCity_Text_Sign3, MSGBOX_SIGN
	end

OreburghCity_Text_Sign3:
	.string "OREBURGH GATE$"

OreburghCity_EventScript_Sign5::
	msgbox OreburghCity_Text_Sign5, MSGBOX_SIGN
	end

OreburghCity_Text_Sign5:
	.string "OREBURGH CITY POKéMON GYM\p"
	.string "LEADER: ROARK\p"
	.string "The rock-hard Trainer!$"

OreburghCity_EventScript_Sign2::
	msgbox OreburghCity_Text_Sign2, MSGBOX_SIGN
	end

OreburghCity_Text_Sign2:
	.string "OREBURGH CITY\p"
	.string "The energetic town of coal.$"

OreburghCity_EventScript_Sign1::
	msgbox OreburghCity_Text_Sign1, MSGBOX_SIGN
	end

OreburghCity_Text_Sign1:
	.string "OREBURGH CITY\p"
	.string "The energetic town of coal.$"

OreburghCity_Text_PtNpc6_Received:
	.string "Feeling hale and hearty puts a smile\n"
	.string "on my face. And that makes me happy.$"

OreburghCity_Text_PtNpc6_After:
	.string "Feeling hale and hearty puts a smile\n"
	.string "on my face. And that makes me happy.$"

OreburghCity_OnTransitionSN:
	call OreburghCity_EventScript_SNVis_ORE_BARRY
	call OreburghCity_EventScript_SNVis_ORE_BARRY_POST
	end

OreburghCity_EventScript_SNVis_ORE_BARRY:
	setflag FLAG_SN_HIDE_ORE_BARRY
	goto_if_ne VAR_SINNOH_STORY, 17, OreburghCity_EventScript_SNVis_ORE_BARRY_End
	goto_if_unset FLAG_SN_ORE_BARRY_MET, OreburghCity_EventScript_SNVis_ORE_BARRY_End
	clearflag FLAG_SN_HIDE_ORE_BARRY
OreburghCity_EventScript_SNVis_ORE_BARRY_End:
	return

OreburghCity_EventScript_SNVis_ORE_BARRY_POST:
	setflag FLAG_SN_HIDE_ORE_BARRY_POST
	goto_if_unset FLAG_BADGE01_GET, OreburghCity_EventScript_SNVis_ORE_BARRY_POST_End
	goto_if_set FLAG_SN_ORE_BARRY_POST, OreburghCity_EventScript_SNVis_ORE_BARRY_POST_End
	clearflag FLAG_SN_HIDE_ORE_BARRY_POST
OreburghCity_EventScript_SNVis_ORE_BARRY_POST_End:
	return

OreburghCity_EventScript_SNOrePost_T0::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T0_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T0_End:
	end

OreburghCity_EventScript_SNOrePost_T0_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_left
	walk_fast_left
	face_up
	step_end

OreburghCity_EventScript_SNOrePost_T0_P:
	face_down
	step_end

OreburghCity_EventScript_SNOrePost_T1::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T1_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T1_End:
	end

OreburghCity_EventScript_SNOrePost_T1_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_left
	face_up
	step_end

OreburghCity_EventScript_SNOrePost_T1_P:
	face_down
	step_end

OreburghCity_EventScript_SNOrePost_T2::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T2_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T2_End:
	end

OreburghCity_EventScript_SNOrePost_T2_M:
	emote_exclamation_mark
	walk_fast_up
	face_up
	step_end

OreburghCity_EventScript_SNOrePost_T2_P:
	face_down
	step_end

OreburghCity_EventScript_SNOrePost_T3::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T3_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T3_End:
	end

OreburghCity_EventScript_SNOrePost_T3_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_right
	face_up
	step_end

OreburghCity_EventScript_SNOrePost_T3_P:
	face_down
	step_end

OreburghCity_EventScript_SNOrePost_T4::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T4_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T4_End:
	end

OreburghCity_EventScript_SNOrePost_T4_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_right
	walk_fast_right
	face_up
	step_end

OreburghCity_EventScript_SNOrePost_T4_P:
	face_down
	step_end

OreburghCity_EventScript_SNOrePost_T5::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T5_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T5_End:
	end

OreburghCity_EventScript_SNOrePost_T5_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	face_right
	step_end

OreburghCity_EventScript_SNOrePost_T5_P:
	face_left
	step_end

OreburghCity_EventScript_SNOrePost_T6::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T6_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T6_End:
	end

OreburghCity_EventScript_SNOrePost_T6_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_left
	step_end

OreburghCity_EventScript_SNOrePost_T6_P:
	face_right
	step_end

OreburghCity_EventScript_SNOrePost_T7::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T7_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T7_End:
	end

OreburghCity_EventScript_SNOrePost_T7_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_right
	step_end

OreburghCity_EventScript_SNOrePost_T7_P:
	face_left
	step_end

OreburghCity_EventScript_SNOrePost_T8::
	goto_if_set FLAG_SN_HIDE_ORE_BARRY_POST, OreburghCity_EventScript_SNOrePost_T8_End
	lockall
	sn_walktoplayer LOCALID_SN_ORE_BARRY_POST, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_ORE_BARRY_POST
	waitmovement OBJ_EVENT_ID_PLAYER
	goto OreburghCity_EventScript_SNBarryPost
OreburghCity_EventScript_SNOrePost_T8_End:
	end

OreburghCity_EventScript_SNOrePost_T8_M:
	emote_exclamation_mark
	walk_fast_up
	walk_fast_up
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	face_left
	step_end

OreburghCity_EventScript_SNOrePost_T8_P:
	face_right
	step_end

OreburghCity_EventScript_SNBarryPost::
	lockall
	msgbox OreburghCity_Text_SNPost1, MSGBOX_DEFAULT
	msgbox OreburghCity_Text_SNPost2, MSGBOX_DEFAULT
	msgbox OreburghCity_Text_SNPost3, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_ORE_BARRY_POST
		sn_walkto LOCALID_SN_ORE_BARRY_POST, 22, 22, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_ORE_BARRY_POST
	removeobject LOCALID_SN_ORE_BARRY_POST
	setflag FLAG_SN_HIDE_ORE_BARRY_POST
	releaseall
	end

OreburghCity_Text_SNPost1:
	.string "{RIVAL}: Whoops! {PLAYER}! You got\n"
	.string "the Gym Badge, huh?\p"
	.string "Eterna City is the next place with a\n"
	.string "Gym that gives away Badges, right?$"

OreburghCity_Text_SNPost2:
	.string "{RIVAL}: So, yeah, I went to Route\n"
	.string "207, but you can’t go there without a\l"
	.string "Bicycle.\p"
	.string "I made my team battle and toughened\n"
	.string "them up, so it wasn’t a waste.$"

OreburghCity_Text_SNPost3:
	.string "{RIVAL}: So, I’m going back to\n"
	.string "Jubilife City. Next stop, the Eterna\l"
	.string "Gym Badge!\p"
	.string "Ten seconds before I dash!\p"
	.string "Nine...\p"
	.string "Bah! Who’s got time to count?!$"

OreburghCity_Text_SNYoungsterGym:
	.string "Howdy, Trainer!\p"
	.string "Huh? Uh-oh! You don’t have a single Gym\n"
	.string "Badge?\p"
	.string "You’d better do something about that!\n"
	.string "I’ll take you to the POKéMON Gym.$"

OreburghCity_Text_SNYoungsterSomeone:
	.string "Huh? There’s someone there.$"
