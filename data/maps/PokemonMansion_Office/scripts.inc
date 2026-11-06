PokemonMansion_Office_MapScripts::
	.byte 0

PokemonMansion_Office_Text_PtNpc1:
	.string "Backlot: ...It’s true, I tell you! No lies\n"
	.string "ever leave these lips!\p"
	.string "There really are cute POKéMON in my\n"
	.string "trophy garden! Honest truth!$"

PokemonMansion_Office_Text_PtNpc2:
	.string "Butler: Did you see them? There were\n"
	.string "some POKéMON, weren’t there?\p"
	.string "But that’s only to be expected. It’s\n"
	.string "Master’s trophy garden.$"

PokemonMansion_Office_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_TROPHY, PokemonMansion_Office_EventScript_SNButlerSaw
	special IsNationalPokedexEnabled
	goto_if_eq VAR_RESULT, TRUE, PokemonMansion_Office_EventScript_SNButlerHow
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonMansion_Office_EventScript_SNButlerEnjoys
	msgbox PokemonMansion_Office_Text_SNWonderful, MSGBOX_DEFAULT
	release
	end
PokemonMansion_Office_EventScript_SNButlerSaw:
	msgbox PokemonMansion_Office_Text_PtNpc2, MSGBOX_DEFAULT
	release
	end
PokemonMansion_Office_EventScript_SNButlerHow:
	msgbox PokemonMansion_Office_Text_SNHowGarden, MSGBOX_DEFAULT
	release
	end
PokemonMansion_Office_EventScript_SNButlerEnjoys:
	msgbox PokemonMansion_Office_Text_SNEnjoys, MSGBOX_DEFAULT
	release
	end

PokemonMansion_Office_Text_PtNpc3:
	.string "You may look, but please refrain from\n"
	.string "touching this POKéMON statue.$"

PokemonMansion_Office_EventScript_PtNpc3::
	msgbox PokemonMansion_Office_Text_PtNpc3, MSGBOX_NPC
	end

PokemonMansion_Office_EventScript_PtSign1::
	msgbox PokemonMansion_Office_Text_PtSign1, MSGBOX_SIGN
	end

PokemonMansion_Office_Text_PtSign1:
	.string "It’s a very expensive-looking POKéMON\n"
	.string "statue...\p"
	.string "...! You got fingerprints on it...$"

PokemonMansion_Office_EventScript_PtSign2::
	msgbox PokemonMansion_Office_Text_PtSign2, MSGBOX_SIGN
	end

PokemonMansion_Office_Text_PtSign2:
	.string "It’s a very expensive-looking book on\n"
	.string "POKéMON.\p"
	.string "Would you like to read it?$"

PokemonMansion_Office_EventScript_SNBacklot::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_TROPHY, PokemonMansion_Office_EventScript_SNBCute
	special IsNationalPokedexEnabled
	goto_if_eq VAR_RESULT, FALSE, PokemonMansion_Office_EventScript_SNBWelcome
	msgbox PokemonMansion_Office_Text_SNEnvious, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PokemonMansion_Office_EventScript_SNBIKnow
	msgbox PokemonMansion_Office_Text_SNEnvious2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PokemonMansion_Office_EventScript_SNBIKnow
	special SinnohTrophyGardenPick
	msgbox PokemonMansion_Office_EventScript_SNBacklot_T2, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_MANSION_BUTLER, PokemonMansion_Office_Movement_SNButlerNotice
	waitmovement 0
	msgbox PokemonMansion_Office_Text_SNDoesntExist, MSGBOX_DEFAULT
	applymovement LOCALID_MANSION_BACKLOT, PokemonMansion_Office_Movement_SNBacklotNotice
	waitmovement 0
	msgbox PokemonMansion_Office_Text_SNWhatAreYouSaying, MSGBOX_DEFAULT
	msgbox PokemonMansion_Office_Text_SNRightAway, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_MANSION_BUTLER, 9, 10, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_MANSION_BUTLER
	playse SE_EXIT
	removeobject LOCALID_MANSION_BUTLER
	applymovement LOCALID_MANSION_BACKLOT, Common_Movement_FacePlayer
	waitmovement 0
PokemonMansion_Office_EventScript_SNBCute:
	special SinnohTrophyGardenPick
	msgbox PokemonMansion_Office_Text_SNThereAreCute, MSGBOX_DEFAULT
	release
	end
PokemonMansion_Office_EventScript_SNBWelcome:
	msgbox PokemonMansion_Office_EventScript_SNBacklot_T1, MSGBOX_DEFAULT
	release
	end
PokemonMansion_Office_EventScript_SNBIKnow:
	msgbox PokemonMansion_Office_Text_SNIKnow, MSGBOX_DEFAULT
	release
	end

PokemonMansion_Office_Movement_SNButlerNotice:
	emote_exclamation_mark
	face_right
	step_end

PokemonMansion_Office_Movement_SNBacklotNotice:
	emote_exclamation_mark
	face_left
	step_end

PokemonMansion_Office_EventScript_SNStatue::
	lockall
	applymovement LOCALID_MANSION_POLICEMAN, Common_Movement_FaceLeft
	waitmovement 0
	msgbox PokemonMansion_Office_Text_SNDontTouch, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_Office_Movement_SNPushBack
	waitmovement 0
	applymovement LOCALID_MANSION_POLICEMAN, Common_Movement_FaceDown
	waitmovement 0
	releaseall
	end

PokemonMansion_Office_Movement_SNPushBack:
	walk_down
	face_up
	step_end

PokemonMansion_Office_EventScript_SNBacklot_T1:
	.string "Backlot: Hello, hello! Welcome to my\n"
	.string "opulent mansion!\p"
	.string "There’s a lot for me to be proud of\n"
	.string "inside, and outside, of this home...\p"
	.string "But what makes me the most proud is my\n"
	.string "trophy garden in the back!\p"
	.string "Why bother traveling afar when\n"
	.string "POKéMON are attracted by my garden?\p"
	.string "They come to me in hopes of seeing the\n"
	.string "garden!\p"
	.string "You’re welcome to join them and marvel\n"
	.string "at my garden!$"

PokemonMansion_Office_EventScript_SNBacklot_T2:
	.string "Backlot: Muhohoho... I bet you are! I\n"
	.string "knew you would be!\p"
	.string "But I don’t mind! I enjoy sharing my\n"
	.string "stories with you!\p"
	.string "So! This is what happened this morning\n"
	.string "when I went into my trophy garden.\p"
	.string "I noticed a cute-eyed {STR_VAR_1},\n"
	.string "which joyously ran over to me.\p"
	.string "The {STR_VAR_1} ran up and gave me a\n"
	.string "smooch on my cheek...$"

PokemonMansion_Office_EventScript_SNBacklot_T3:
	.string "Backlot: ...It’s true, I tell you! No lies\n"
	.string "ever leave these lips!\p"
	.string "There really are cute {STR_VAR_1} in my\n"
	.string "trophy garden! Honest truth!$"

PokemonMansion_Office_Text_SNEnvious:
	.string "Backlot: Er-hem!\p"
	.string "There’s a lot for me to be proud of\n"
	.string "inside, and outside, of this home...\p"
	.string "But what makes me the most proud is my\n"
	.string "trophy garden in the back!\p"
	.string "Why bother traveling afar when\n"
	.string "POKéMON are attracted by my garden?\p"
	.string "They come to me in hopes of seeing the\n"
	.string "garden!\p"
	.string "Well, doesn’t that make you envious?\n"
	.string "You are envious, yes?$"

PokemonMansion_Office_Text_SNEnvious2:
	.string "Backlot: Muhohoho... I bet you are! I\n"
	.string "knew you would be!\p"
	.string "But I don’t mind! I enjoy sharing my\n"
	.string "stories with you!\p"
	.string "So! When I go out into my prized trophy\n"
	.string "garden, POKéMON come running to me.\p"
	.string "They sidle up, as happy as they can be\n"
	.string "to see me!\p"
	.string "Well? Doesn’t that make you envious?\n"
	.string "You are envious, yes?$"

PokemonMansion_Office_Text_SNIKnow:
	.string "I know you’re really envious... You’re\n"
	.string "not fooling anyone...$"

PokemonMansion_Office_Text_SNDoesntExist:
	.string "Butler: M-Master! Th-that POKéMON you\n"
	.string "mentioned...\p"
	.string "It doesn’t exist in the garden...$"

PokemonMansion_Office_Text_SNWhatAreYouSaying:
	.string "Backlot: Wha...\p"
	.string "Erm...\p"
	.string "Wh-what are you saying? I’m no\n"
	.string "blowhard!\p"
	.string "Listen... Mutter, mutter... Whisper,\n"
	.string "whisper...$"

PokemonMansion_Office_Text_SNRightAway:
	.string "Butler: Yes, Master! Right away, sir!$"

PokemonMansion_Office_Text_SNWonderful:
	.string "Butler: Master is a truly wonderful and\n"
	.string "generous person!\p"
	.string "It’s on his orders that the garden, his\n"
	.string "pride and joy, is open to all,\p"
	.string "even Trainers.$"

PokemonMansion_Office_Text_SNHowGarden:
	.string "Butler: How do you find it? Master’s\n"
	.string "upgraded trophy garden, I mean.\p"
	.string "You did notice the influx of quite rare\n"
	.string "POKéMON, yes?\p"
	.string "But that’s only to be expected. It’s\n"
	.string "Master’s trophy garden.$"

PokemonMansion_Office_Text_SNEnjoys:
	.string "Butler: Master actually quite enjoys\n"
	.string "showing his prized garden to strong\p"
	.string "Trainers.$"

PokemonMansion_Office_Text_SNDontTouch:
	.string "I’m very sorry. But please refrain from\n"
	.string "touching this statue.$"

PokemonMansion_Office_Text_SNThereAreCute:
	.string "Backlot: ...It’s true, I tell you! No lies\n"
	.string "ever leave these lips!\p"
	.string "There really are cute {STR_VAR_1} in my\n"
	.string "trophy garden! Honest truth!$"
