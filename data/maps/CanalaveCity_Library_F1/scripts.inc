CanalaveCity_Library_F1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CanalaveCity_Library_F1_OnTransitionSN
	.byte 0

CanalaveCity_Library_F1_OnTransitionSN:
	goto_if_unset FLAG_SYS_GAME_CLEAR, CanalaveCity_Library_F1_OnTransitionSN_End
	setflag FLAG_SN_HIDE_LIB_LUCIAN
CanalaveCity_Library_F1_OnTransitionSN_End:
	end

CanalaveCity_Library_F1_Text_PtNpc1_0:
	.string "Hello. This is the Canalave Library.\p"
	.string "Please keep quiet while you’re on the\n"
	.string "premises.$"

CanalaveCity_Library_F1_Text_PtNpc1_1:
	.string "H-hello! This is the Canalave Library.\p"
	.string "Please keep quiet while you’re on the\n"
	.string "premises.\p"
	.string "It certainly wasn’t me who screamed,\p"
	.string "“Gyaaah!!”\p"
	.string "or shouted,\p"
	.string "“Help meee!!”\p"
	.string "No, really, that wasn’t me screaming!$"

CanalaveCity_Library_F1_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED, CanalaveCity_Library_F1_EventScript_PtNpc1_ThatWasntMeScreaming
	msgbox CanalaveCity_Library_F1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F1_EventScript_PtNpc1_ThatWasntMeScreaming:
	msgbox CanalaveCity_Library_F1_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F1_Text_PtNpc2:
	.string "I’ve been asking people not to disturb\n"
	.string "me while I’m reading...\p"
	.string "I shouldn’t even have bothered... I’m\n"
	.string "all agitated now!$"

CanalaveCity_Library_F1_EventScript_PtNpc2::
	msgbox CanalaveCity_Library_F1_Text_PtNpc2, MSGBOX_NPC
	end

CanalaveCity_Library_F1_Text_PtNpc3:
	.string "Lucian: ...Ah, hello. You’re here to read,\n"
	.string "too?\p"
	.string "Books are wonderful things.\p"
	.string "The thoughts of people written in\n"
	.string "books stretch beyond time and space.$"

CanalaveCity_Library_F1_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox CanalaveCity_Library_F1_Text_PtNpc3, MSGBOX_DEFAULT
	random 5
	switch VAR_RESULT
	case 1, CanalaveCity_Library_F1_EventScript_SNBook1
	case 2, CanalaveCity_Library_F1_EventScript_SNBook2
	case 3, CanalaveCity_Library_F1_EventScript_SNBook3
	case 4, CanalaveCity_Library_F1_EventScript_SNBook4
	msgbox CanalaveCity_Library_F1_Text_SNBook0, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F1_EventScript_SNLucianLeave
CanalaveCity_Library_F1_EventScript_SNBook1:
	msgbox CanalaveCity_Library_F1_Text_SNBook1, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F1_EventScript_SNLucianLeave
CanalaveCity_Library_F1_EventScript_SNBook2:
	msgbox CanalaveCity_Library_F1_Text_SNBook2, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F1_EventScript_SNLucianLeave
CanalaveCity_Library_F1_EventScript_SNBook3:
	msgbox CanalaveCity_Library_F1_Text_SNBook3, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F1_EventScript_SNLucianLeave
CanalaveCity_Library_F1_EventScript_SNBook4:
	msgbox CanalaveCity_Library_F1_Text_SNBook4, MSGBOX_DEFAULT
	goto CanalaveCity_Library_F1_EventScript_SNLucianLeave
CanalaveCity_Library_F1_EventScript_SNLucianLeave:
	msgbox CanalaveCity_Library_F1_Text_SNSeeAtLeague, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_HIDE_LIB_LUCIAN
	sn_walkto LOCALID_LIB_LUCIAN, 7, 11, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_LIB_LUCIAN
	playse SE_EXIT
	removeobject LOCALID_LIB_LUCIAN
	release
	end

CanalaveCity_Library_F1_EventScript_PtSign1::
	msgbox CanalaveCity_Library_F1_Text_PtSign1, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign1:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign2::
	msgbox CanalaveCity_Library_F1_Text_PtSign2, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign2:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign3::
	msgbox CanalaveCity_Library_F1_Text_PtSign3, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign3:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign4::
	msgbox CanalaveCity_Library_F1_Text_PtSign4, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign4:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign5::
	msgbox CanalaveCity_Library_F1_Text_PtSign5, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign5:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign6::
	msgbox CanalaveCity_Library_F1_Text_PtSign6, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign6:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign7::
	msgbox CanalaveCity_Library_F1_Text_PtSign7, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign7:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign8::
	msgbox CanalaveCity_Library_F1_Text_PtSign8, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign8:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign9::
	msgbox CanalaveCity_Library_F1_Text_PtSign9, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign9:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign10::
	msgbox CanalaveCity_Library_F1_Text_PtSign10, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign10:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign11::
	msgbox CanalaveCity_Library_F1_Text_PtSign11, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign11:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign12::
	msgbox CanalaveCity_Library_F1_Text_PtSign12, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign12:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign13::
	msgbox CanalaveCity_Library_F1_Text_PtSign13, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign13:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign14::
	msgbox CanalaveCity_Library_F1_Text_PtSign14, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign14:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign15::
	msgbox CanalaveCity_Library_F1_Text_PtSign15, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign15:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign16::
	msgbox CanalaveCity_Library_F1_Text_PtSign16, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign16:
	.string "The ceiling-high bookshelves are\n"
	.string "crammed with books.$"

CanalaveCity_Library_F1_EventScript_PtSign17::
	msgbox CanalaveCity_Library_F1_Text_PtSign17, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign17:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign18::
	msgbox CanalaveCity_Library_F1_Text_PtSign18, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign18:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign19::
	msgbox CanalaveCity_Library_F1_Text_PtSign19, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign19:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign20::
	msgbox CanalaveCity_Library_F1_Text_PtSign20, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign20:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_EventScript_PtSign21::
	msgbox CanalaveCity_Library_F1_Text_PtSign21, MSGBOX_SIGN
	end

CanalaveCity_Library_F1_Text_PtSign21:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F1_Text_SNBook0:
	.string "I was just reading a collection of\n"
	.string "letters written by an artist long ago.\p"
	.string "More precisely, they were written to\n"
	.string "the artist’s younger brother.\p"
	.string "“The stars above tantalize from\n"
	.string "across infinite space.\p"
	.string "“Feeling their gaze from so far away, I\n"
	.string "am charmed again by life.”\p"
	.string "The artist must have come to a\n"
	.string "conclusion seeing the night sky...\p"
	.string "It’s an affirmation of life. It’s very\n"
	.string "moving.$"

CanalaveCity_Library_F1_Text_SNBook1:
	.string "I was just reading an analytical tome\n"
	.string "on humankind.\p"
	.string "It examines the human species from\n"
	.string "cultural and social perspectives.\p"
	.string "This is a thought-provoking quote: “It\n"
	.string "all began without humans.\p"
	.string "The end will also be without humans.”\p"
	.string "The world we share with POKéMON... Does\n"
	.string "it exist for us?$"

CanalaveCity_Library_F1_Text_SNBook2:
	.string "I was just reading a collection of\n"
	.string "observations on POKéMON in the wild.\p"
	.string "One article addresses the question\n"
	.string "why POKéMON would go into a POKé BALL.\p"
	.string "According to the article, this behavior\n"
	.string "is based on instinct.\p"
	.string "A weakened POKéMON will curl up tight\n"
	.string "in an effort to heal itself.\p"
	.string "The POKé BALL was invented to take\n"
	.string "advantage of that protective\l"
	.string "instinct.$"

CanalaveCity_Library_F1_Text_SNBook3:
	.string "I was just reading a collection of\n"
	.string "essays on the science-fiction genre.\p"
	.string "There was one quote attributed to a\n"
	.string "novelist I found remarkable.\p"
	.string "“Though love may lose, kindness wins.”\p"
	.string "I find that philosophical and, at the\n"
	.string "same time, compassionate.$"

CanalaveCity_Library_F1_Text_SNBook4:
	.string "I was just reading a book of\n"
	.string "philosophy from an ancient, far-off\l"
	.string "land.\p"
	.string "Their “universe” was a word that\n"
	.string "described both space and time.\p"
	.string "That people even back then understood\n"
	.string "the basic tenets of the universe...\p"
	.string "It fills me with a serene sense of\n"
	.string "inspiration.$"

CanalaveCity_Library_F1_Text_SNSeeAtLeague:
	.string "I imagine we’ll see each other again at\n"
	.string "the POKéMON League. Take care.$"
