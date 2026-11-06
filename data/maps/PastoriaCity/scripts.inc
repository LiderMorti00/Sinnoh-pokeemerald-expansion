PastoriaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PastoriaCity_OnTransitionSN
	.byte 0

PastoriaCity_EventScript_PtNpc1::
	msgbox PastoriaCity_Text_PtNpc1, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc1:
	.string "Some Trainers deliberately prevent\n"
	.string "their POKéMON from evolving.\p"
	.string "They wait until the POKéMON levels up\n"
	.string "and learns certain moves.$"

PastoriaCity_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE05_GET, PastoriaCity_EventScript_PtNpc2_SNVar0
	msgbox PastoriaCity_Text_PtNpc2, MSGBOX_DEFAULT
	release
	end
PastoriaCity_EventScript_PtNpc2_SNVar0:
	msgbox PastoriaCity_Text_PtNpc2_SNVar0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Text_PtNpc2:
	.string "PASTORIA's Gym Leader is awesome with\n"
	.string "his water attacks.\p"
	.string "You'll know what I mean when you\n"
	.string "challenge him.$"

PastoriaCity_EventScript_PtNpc3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox PastoriaCity_Text_PtNpc3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

PastoriaCity_Text_PtNpc3:
	.string "CLEFAIRY: Fiiih?!$"

PastoriaCity_EventScript_PtNpc4::
	msgbox PastoriaCity_Text_PtNpc4, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc4:
	.string "Here where I am standing, I'm\n"
	.string "smack-dab in the middle of town.$"

PastoriaCity_EventScript_PtNpc5::
	msgbox PastoriaCity_Text_PtNpc5, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc5:
	.string "I'm visiting here to see the Great\n"
	.string "Marsh.\p"
	.string "I'm staying at the lakeside hotel.$"

PastoriaCity_EventScript_PtNpc6::
	msgbox PastoriaCity_Text_PtNpc6, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc6:
	.string "I can't use the hidden move Surf until\n"
	.string "I beat the local Gym Leader.$"

PastoriaCity_EventScript_PtNpc7::
	msgbox PastoriaCity_Text_PtNpc7, MSGBOX_NPC
	end

PastoriaCity_Text_PtNpc7:
	.string "Have you been to the POKéMON\n"
	.string "Mansion? It's on Route 212.\p"
	.string "The owner, Mr. Backlot, likes to brag\n"
	.string "about his herd of rare POKéMON.$"

PastoriaCity_EventScript_PtSign1::
	msgbox PastoriaCity_Text_PtSign1, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign1:
	.string "PASTORIA CITY The Marsh City$"

PastoriaCity_EventScript_PtSign2::
	msgbox PastoriaCity_Text_PtSign2, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign2:
	.string "PASTORIA CITY POKéMON Gym Leader:\n"
	.string "CRASHER WAKE The Torrential Masked\l"
	.string "Master!$"

PastoriaCity_EventScript_PtSign3::
	msgbox PastoriaCity_Text_PtSign3, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign3:
	.string "PASTORIA Great Marsh Observatory\n"
	.string "Gate$"

PastoriaCity_EventScript_PtSign4::
	msgbox PastoriaCity_Text_PtSign4, MSGBOX_SIGN
	end

PastoriaCity_Text_PtSign4:
	.string "Try the Safari Game in PASTORIA's\n"
	.string "Great Marsh!$"

PastoriaCity_OnTransitionSN:
	call PastoriaCity_EventScript_SNVis_PAST_WAKE_A
	call PastoriaCity_EventScript_SNVis_PAST_BOMB
	call PastoriaCity_EventScript_SNVis_PAST_GRUNT
	call PastoriaCity_EventScript_SNVis_PAST_BARRY
	call PastoriaCity_EventScript_SNVis_PAST_GUARD
	end

PastoriaCity_EventScript_SNVis_PAST_GUARD:
	setflag FLAG_SN_HIDE_PAST_BARRY_GUARD
	goto_if_unset FLAG_SN_PAST_BOMB_DONE, PastoriaCity_EventScript_SNVis_PAST_GUARD_End
	goto_if_defeated TRAINER_ROBERT_2, PastoriaCity_EventScript_SNVis_PAST_GUARD_End
	clearflag FLAG_SN_HIDE_PAST_BARRY_GUARD
PastoriaCity_EventScript_SNVis_PAST_GUARD_End:
	return

PastoriaCity_EventScript_SNBarryGuard::
	lock
	faceplayer
	msgbox PastoriaCity_Text_SNWhyArentYouGone, MSGBOX_DEFAULT
	msgbox PastoriaCity_Text_SNWB4, MSGBOX_DEFAULT
	release
	end

PastoriaCity_EventScript_SNVis_PAST_BARRY:
	setflag FLAG_SN_HIDE_PAST_BARRY
	goto_if_unset FLAG_BADGE04_GET, PastoriaCity_EventScript_SNVis_PAST_BARRY_End
	goto_if_defeated TRAINER_CALVIN_3, PastoriaCity_EventScript_SNVis_PAST_BARRY_End
	goto_if_defeated TRAINER_CALVIN_4, PastoriaCity_EventScript_SNVis_PAST_BARRY_End
	goto_if_defeated TRAINER_CALVIN_5, PastoriaCity_EventScript_SNVis_PAST_BARRY_End
	clearflag FLAG_SN_HIDE_PAST_BARRY
PastoriaCity_EventScript_SNVis_PAST_BARRY_End:
	return

PastoriaCity_EventScript_SNBarry::
	lock
	faceplayer
	msgbox PastoriaCity_EventScript_SNBarry_Intro, MSGBOX_DEFAULT
	closemessage
	switch VAR_STARTER_MON
	case 0, PastoriaCity_EventScript_SNBarry_B0
	case 1, PastoriaCity_EventScript_SNBarry_B1
	case 2, PastoriaCity_EventScript_SNBarry_B2
PastoriaCity_EventScript_SNBarry_B0:
	trainerbattle_no_intro TRAINER_CALVIN_3, PastoriaCity_EventScript_SNBarry_Defeat
	goto PastoriaCity_EventScript_SNBarry_After
PastoriaCity_EventScript_SNBarry_B1:
	trainerbattle_no_intro TRAINER_CALVIN_4, PastoriaCity_EventScript_SNBarry_Defeat
	goto PastoriaCity_EventScript_SNBarry_After
PastoriaCity_EventScript_SNBarry_B2:
	trainerbattle_no_intro TRAINER_CALVIN_5, PastoriaCity_EventScript_SNBarry_Defeat
	goto PastoriaCity_EventScript_SNBarry_After
PastoriaCity_EventScript_SNBarry_After:
	msgbox PastoriaCity_EventScript_SNBarry_Post, MSGBOX_DEFAULT
	closemessage
	sn_walkto VAR_LAST_TALKED, 20, 18, SN_SPEED_FAST, 0, 0, 0
	waitmovement VAR_LAST_TALKED
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_PAST_BARRY
	release
	end
PastoriaCity_EventScript_SNBarry_Intro:
	.string "BARRY: Whoops!\p"
	.string "Hehehe! I’m not always going to plow\n"
	.string "into you every time we meet!\p"
	.string "So how’s it going, {PLAYER}? Buffing up\n"
	.string "your POKéMON, eh?\p"
	.string "I’ll test you and your POKéMON out to\n"
	.string "see how buff and tough you are!$"

PastoriaCity_EventScript_SNBarry_Defeat:
	.string "BARRY: Wh-what?! I lost?!$"

PastoriaCity_EventScript_SNBarry_Post:
	.string "BARRY: Heh, yeah, maybe you did get a\n"
	.string "bit tougher since last time.\p"
	.string "That even shocked me a bit, so yeah, I\n"
	.string "got beat ’cause I was careless.\p"
	.string "Oh, yeah, I joined Mr. Wake as an\n"
	.string "apprentice!\p"
	.string "Like, I want my own theme song!$"

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T0::
	goto_if_set FLAG_SN_HIDE_PAST_BARRY, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T0_End
	lockall
	sn_walktoplayer LOCALID_SN_PASTORIACITY_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_PASTORIACITY_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PastoriaCity_EventScript_SNBarry
PastoriaCity_EventScript_SNPASTORIACITYBARRY_T0_End:
	end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T0_M:
	emote_exclamation_mark
	walk_fast_left
	face_down
	step_end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T0_P:
	face_up
	step_end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T1::
	goto_if_set FLAG_SN_HIDE_PAST_BARRY, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T1_End
	lockall
	sn_walktoplayer LOCALID_SN_PASTORIACITY_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_PASTORIACITY_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PastoriaCity_EventScript_SNBarry
PastoriaCity_EventScript_SNPASTORIACITYBARRY_T1_End:
	end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T1_M:
	emote_exclamation_mark
	face_down
	step_end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T1_P:
	face_up
	step_end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T2::
	goto_if_set FLAG_SN_HIDE_PAST_BARRY, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T2_End
	lockall
	sn_walktoplayer LOCALID_SN_PASTORIACITY_BARRY, SN_SPEED_FAST, SN_MOVE_EMOTE
	waitmovement 0
	sn_playerface LOCALID_SN_PASTORIACITY_BARRY
	waitmovement OBJ_EVENT_ID_PLAYER
	goto PastoriaCity_EventScript_SNBarry
PastoriaCity_EventScript_SNPASTORIACITYBARRY_T2_End:
	end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T2_M:
	emote_exclamation_mark
	walk_fast_right
	face_down
	step_end

PastoriaCity_EventScript_SNPASTORIACITYBARRY_T2_P:
	face_up
	step_end

PastoriaCity_EventScript_SNVis_PAST_GRUNT:
	setflag FLAG_SN_HIDE_PAST_GRUNT
	goto_if_unset FLAG_BADGE05_GET, PastoriaCity_EventScript_SNVis_PAST_GRUNT_End
	goto PastoriaCity_EventScript_SNVis_PAST_GRUNT_End
	clearflag FLAG_SN_HIDE_PAST_GRUNT
PastoriaCity_EventScript_SNVis_PAST_GRUNT_End:
	return

PastoriaCity_EventScript_SNGrunt::
	lock
	faceplayer
	msgbox PastoriaCity_Text_SNGrunt1, MSGBOX_DEFAULT
	msgbox PastoriaCity_Text_SNGrunt2, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_PAST_GRUNT, 46, 9, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_PAST_GRUNT
	removeobject LOCALID_SN_PAST_GRUNT
	setflag FLAG_SN_HIDE_PAST_GRUNT
	msgbox PastoriaCity_Text_SNGrunt3, MSGBOX_DEFAULT
	release
	end
PastoriaCity_Text_SNGrunt1:
	.string "What’s with you? Stop chasing after\n"
	.string "me, you.\p"
	.string "I’ve half a mind to pulverize you with\n"
	.string "my POKéMON!\p"
	.string "But I have to be on my way to the lake\n"
	.string "ASAP! So, you’re lucky! I’m out!\p"
	.string "All right, do I make myself clear? Don’t\n"
	.string "you dare follow me!$"

PastoriaCity_Text_SNGrunt2:
	.string "Grunt: What’ve I done, you’re asking?\n"
	.string "Well, technically speaking, it wasn’t\l"
	.string "me.\p"
	.string "The package that arrived, see, that\n"
	.string "was a bomb, named the Galactic Bomb.\p"
	.string "Me, I was told to push the button. So I\n"
	.string "did. Like, “Poink!”\p"
	.string "Oh, that’s right! Mustn’t forget! The\n"
	.string "test results need reporting!\p"
	.string "Cheerio, then! You daft codger, your\n"
	.string "mask’s absurd!$"

PastoriaCity_Text_SNGrunt3:
	.string "The Galactic grunt ran off toward\n"
	.string "ROUTE 213 and VALOR LAKEFRONT!$"

PastoriaCity_EventScript_SNVis_PAST_WAKE_A:
	setflag FLAG_SN_HIDE_PAST_WAKE_A
	goto_if_unset FLAG_BADGE05_GET, PastoriaCity_EventScript_SNVis_PAST_WAKE_A_End
	goto_if_set FLAG_SN_PAST_WAKE_A, PastoriaCity_EventScript_SNVis_PAST_WAKE_A_End
	clearflag FLAG_SN_HIDE_PAST_WAKE_A
PastoriaCity_EventScript_SNVis_PAST_WAKE_A_End:
	return

PastoriaCity_EventScript_SNVis_PAST_BOMB:
	setflag FLAG_SN_HIDE_PAST_BOMB
	goto_if_unset FLAG_SN_PAST_WAKE_A, PastoriaCity_EventScript_SNVis_PAST_BOMB_End
	goto_if_set FLAG_SN_PAST_BOMB_DONE, PastoriaCity_EventScript_SNVis_PAST_BOMB_End
	clearflag FLAG_SN_HIDE_PAST_BOMB
PastoriaCity_EventScript_SNVis_PAST_BOMB_End:
	return

PastoriaCity_EventScript_SNWakeA::
	lock
	faceplayer
	msgbox PastoriaCity_Text_SNWA1, MSGBOX_DEFAULT
	msgbox PastoriaCity_Text_SNWA2, MSGBOX_DEFAULT
	msgbox PastoriaCity_Text_SNWA3, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_PAST_WAKE_A, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PastoriaCity_Text_SNWA4, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_PAST_WAKE_A, 15, 26, SN_SPEED_NORMAL, 0, 0, 0
	sn_walkto LOCALID_SN_PAST_BARRY_A, 21, 19, SN_SPEED_FAST, 0, 0, 1
	waitmovement LOCALID_SN_PAST_WAKE_A
	waitmovement LOCALID_SN_PAST_BARRY_A
	removeobject LOCALID_SN_PAST_WAKE_A
	removeobject LOCALID_SN_PAST_BARRY_A
	setflag FLAG_SN_HIDE_PAST_WAKE_A
	setflag FLAG_SN_PAST_WAKE_A
	clearflag FLAG_SN_HIDE_PAST_BOMB
	addobject LOCALID_SN_PAST_WAKE_B
	addobject LOCALID_SN_PAST_BARRY_B
	msgbox PastoriaCity_Text_SNWA5, MSGBOX_DEFAULT
	release
	end

PastoriaCity_EventScript_SNBomb::
	lock
	msgbox PastoriaCity_Text_SNWB1, MSGBOX_DEFAULT
	closemessage
	playse SE_M_EXPLOSION
	setvar VAR_0x8004, 2
	setvar VAR_0x8005, 3
	setvar VAR_0x8006, 12
	setvar VAR_0x8007, 3
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special ShakeCamera
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	msgbox PastoriaCity_Text_SNWB2, MSGBOX_DEFAULT
	clearflag FLAG_SN_HIDE_PAST_GRUNT
	addobject LOCALID_SN_PAST_GRUNT
	applymovement LOCALID_SN_PAST_WAKE_B, Common_Movement_ExclamationMark
	applymovement LOCALID_SN_PAST_BARRY_B, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox PastoriaCity_Text_SNWB3, MSGBOX_DEFAULT
	msgbox PastoriaCity_Text_SNGrunt2, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_PAST_GRUNT, 48, 12, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_PAST_GRUNT
	removeobject LOCALID_SN_PAST_GRUNT
	setflag FLAG_SN_HIDE_PAST_GRUNT
	msgbox PastoriaCity_Text_SNGrunt3, MSGBOX_DEFAULT
	msgbox PastoriaCity_Text_SNGreatMarsh, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_PAST_WAKE_B, Common_Movement_FacePlayer
	waitmovement 0
	msgbox PastoriaCity_Text_SNDoNotFollow, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_PAST_WAKE_B, 36, 8, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_PAST_WAKE_B
	playse SE_EXIT
	removeobject LOCALID_SN_PAST_WAKE_B
	sn_walkto LOCALID_SN_PAST_BARRY_B, 36, 9, SN_SPEED_FAST, DIR_SOUTH, 0, 0
	waitmovement LOCALID_SN_PAST_BARRY_B
	sn_playerface LOCALID_SN_PAST_BARRY_B, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox PastoriaCity_Text_SNWB4, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_PAST_BOMB_DONE
	removeobject LOCALID_SN_PAST_BARRY_B
	setflag FLAG_SN_HIDE_PAST_BOMB
	clearflag FLAG_SN_HIDE_PAST_BARRY_GUARD
	addobject LOCALID_SN_PAST_BARRY_GUARD
	release
	end

PastoriaCity_Text_SNWA1:
	.string "Wake: What’s this racket, then? Oh, it’s\n"
	.string "you two.\p"
	.string "{RIVAL}: Oh, Master!$"

PastoriaCity_Text_SNWA2:
	.string "Wake: ...Listen, kid. I know your father.\n"
	.string "I won’t deny that.\p"
	.string "But I don’t recall ever taking you on\n"
	.string "as an apprentice. Not in the least.\p"
	.string "Wake: Besides, you two don’t need me.\p"
	.string "You can become strong on your own\n"
	.string "without being my apprentice.$"

PastoriaCity_Text_SNWA3:
	.string "{RIVAL}: It doesn’t matter. I made\n"
	.string "you my master! I decided!\p"
	.string "But forget that! There’s trouble\n"
	.string "brewing!\p"
	.string "There’s a Team Galactic goon in front\n"
	.string "of the Observatory Gate.\p"
	.string "He said something about using a bomb!$"

PastoriaCity_Text_SNWA4:
	.string "Wake: WHAAAAT?!\p"
	.string "No one messes with Pastoria! Not on my\n"
	.string "watch!\p"
	.string "{RIVAL}: Hey! Master! Wait!$"

PastoriaCity_Text_SNWA5:
	.string "They rushed off toward the Great\n"
	.string "Marsh!$"

PastoriaCity_Text_SNWB1:
	.string "{RIVAL}: Hey!\p"
	.string "What am I, chopped liver? Don’t forget\n"
	.string "I’m here, too!\p"
	.string "Wake: So, where’s this Galac...$"

PastoriaCity_Text_SNWB2:
	.string "DDDOOOMMM!!$"

PastoriaCity_Text_SNWB3:
	.string "Grunt: Fweh! That was rough.\p"
	.string "Wake: YOU! What’ve you done?!$"

PastoriaCity_Text_SNWB4:
	.string "{RIVAL}: Hey! {PLAYER}! You go after\n"
	.string "that Galactic goon!\p"
	.string "I’m staying here like Master said!\n"
	.string "Gotta keep others from going in!\p"
	.string "Don’t let that Galactic guy get away!$"

PastoriaCity_EventScript_SNPtSCIENTISTM::
	msgbox PastoriaCity_EventScript_SNPtSCIENTISTM_Text, MSGBOX_NPC
	end

PastoriaCity_EventScript_SNPtSCIENTISTM_Text:
	.string "I study rare POKéMON that appear only\n"
	.string "in the Great Marsh.$"

PastoriaCity_EventScript_SNPtPARASOLLADY::
	msgbox PastoriaCity_EventScript_SNPtPARASOLLADY_Text, MSGBOX_NPC
	end

PastoriaCity_EventScript_SNPtPARASOLLADY_Text:
	.string "Someone gave me a Berry, so I planted\n"
	.string "it and grew some more.\p"
	.string "Then, I took the Berries and cooked\n"
	.string "them into Poffins.\p"
	.string "All the work is worth it when I see how\n"
	.string "happy they make my POKéMON!$"

PastoriaCity_Text_SNGreatMarsh:
	.string "Wake: The Great Marsh is invaluable...$"

PastoriaCity_Text_SNDoNotFollow:
	.string "You two! Do NOT follow me! Don’t let\n"
	.string "anyone else in, either!\p"
	.string "There’d be big trouble if there’s any of\n"
	.string "that bomb left!$"

PastoriaCity_Text_SNWhyArentYouGone:
	.string "{RIVAL}: What’s the matter?! Why\n"
	.string "aren’t you gone already?!\p"
	.string "Go after that Galactic goon!$"

PastoriaCity_Text_PtNpc2_SNVar0:
	.string "Wasn’t the Pastoria Gym Leader kind of\n"
	.string "awesome in all sorts of ways?\p"
	.string "But don’t judge him by the way he looks\n"
	.string "and acts.\p"
	.string "I hear he enters professional\n"
	.string "wrestling matches for prize money.\p"
	.string "That money goes to help people and\n"
	.string "POKéMON in trouble.$"
