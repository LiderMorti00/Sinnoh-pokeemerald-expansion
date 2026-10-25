CanalaveCity_Library_F1_MapScripts::
	.byte 0

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
	msgbox CanalaveCity_Library_F1_Text_PtNpc3, MSGBOX_NPC
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
