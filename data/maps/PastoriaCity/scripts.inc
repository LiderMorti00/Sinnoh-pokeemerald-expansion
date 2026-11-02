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
	msgbox PastoriaCity_Text_PtNpc2, MSGBOX_NPC
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
	call PastoriaCity_EventScript_SNVis_PAST_GRUNT
	call PastoriaCity_EventScript_SNVis_PAST_BARRY
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
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_PAST_BARRY
	fadescreen FADE_FROM_BLACK
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
	applymovement LOCALID_SN_PASTORIACITY_BARRY, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T0_M
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T0_P
	waitmovement 0
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
	applymovement LOCALID_SN_PASTORIACITY_BARRY, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T1_M
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T1_P
	waitmovement 0
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
	applymovement LOCALID_SN_PASTORIACITY_BARRY, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T2_M
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PastoriaCity_EventScript_SNPASTORIACITYBARRY_T2_P
	waitmovement 0
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
	goto_if_defeated TRAINER_ROBERT_2, PastoriaCity_EventScript_SNVis_PAST_GRUNT_End
	clearflag FLAG_SN_HIDE_PAST_GRUNT
PastoriaCity_EventScript_SNVis_PAST_GRUNT_End:
	return

PastoriaCity_EventScript_SNGrunt::
	lock
	faceplayer
	msgbox PastoriaCity_Text_SNGrunt1, MSGBOX_DEFAULT
	msgbox PastoriaCity_Text_SNGrunt2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_PAST_GRUNT
	setflag FLAG_SN_HIDE_PAST_GRUNT
	fadescreen FADE_FROM_BLACK
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
