CanalaveCity_Library_F3_MapScripts::
	.byte 0

CanalaveCity_Library_F3_Text_PtNpc1_0:
	.string "Every book contains someone’s\n"
	.string "memories of various places and times.\p"
	.string "Libraries aren’t just buildings where\n"
	.string "books are kept, you know.\p"
	.string "They’re where different places and\n"
	.string "times are gathered together.$"

CanalaveCity_Library_F3_Text_PtNpc1_1:
	.string "W-was that an earthquake? I didn’t\n"
	.string "imagine it?$"

CanalaveCity_Library_F3_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_3, CanalaveCity_Library_F3_EventScript_PtNpc1_WasThatAnEarthquake
	msgbox CanalaveCity_Library_F3_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtNpc1_WasThatAnEarthquake:
	msgbox CanalaveCity_Library_F3_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_Text_PtNpc2_0:
	.string "Someone’s always checked out the book\n"
	.string "I want to read...$"

CanalaveCity_Library_F3_Text_PtNpc2_1:
	.string "I’m feeling wobbly...\p"
	.string "Even though the tremor has ended, my\n"
	.string "knees still feel like jelly...$"

CanalaveCity_Library_F3_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_3, CanalaveCity_Library_F3_EventScript_PtNpc2_ImFeelingWobbly
	msgbox CanalaveCity_Library_F3_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtNpc2_ImFeelingWobbly:
	msgbox CanalaveCity_Library_F3_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F3_EventScript_PtSign1::
	msgbox CanalaveCity_Library_F3_Text_PtSign1, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign1:
	.string "This book is titled “Sinnoh Myth.” Want\n"
	.string "to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign2::
	msgbox CanalaveCity_Library_F3_Text_PtSign2, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign2:
	.string "This book is titled “Sinnoh Myth.” Want\n"
	.string "to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign3::
	msgbox CanalaveCity_Library_F3_Text_PtSign3, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign3:
	.string "This book is titled “Sinnoh Region’s\n"
	.string "Mythology.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign4::
	msgbox CanalaveCity_Library_F3_Text_PtSign4, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign4:
	.string "This book is titled “Sinnoh Region’s\n"
	.string "Mythology.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign5::
	msgbox CanalaveCity_Library_F3_Text_PtSign5, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign5:
	.string "This book is titled “Sinnoh’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign6::
	msgbox CanalaveCity_Library_F3_Text_PtSign6, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign6:
	.string "This book is titled “Sinnoh’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign7::
	msgbox CanalaveCity_Library_F3_Text_PtSign7, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign7:
	.string "This book is titled “Veilstone’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign8::
	msgbox CanalaveCity_Library_F3_Text_PtSign8, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign8:
	.string "This book is titled “Veilstone’s Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign9::
	msgbox CanalaveCity_Library_F3_Text_PtSign9, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign9:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign10::
	msgbox CanalaveCity_Library_F3_Text_PtSign10, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign10:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign11::
	msgbox CanalaveCity_Library_F3_Text_PtSign11, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign11:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign12::
	msgbox CanalaveCity_Library_F3_Text_PtSign12, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign12:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign13::
	msgbox CanalaveCity_Library_F3_Text_PtSign13, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign13:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_EventScript_PtSign14::
	msgbox CanalaveCity_Library_F3_Text_PtSign14, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign14:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_EventScript_PtSign15::
	msgbox CanalaveCity_Library_F3_Text_PtSign15, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign15:
	.string "On this floor, you will find many books\n"
	.string "on the myths and legends of\p"
	.string "the Sinnoh region.$"

CanalaveCity_Library_F3_EventScript_PtSign16::
	msgbox CanalaveCity_Library_F3_Text_PtSign16, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign16:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign17::
	msgbox CanalaveCity_Library_F3_Text_PtSign17, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign17:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign18::
	msgbox CanalaveCity_Library_F3_Text_PtSign18, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign18:
	.string "This ancient book is titled “The\n"
	.string "Original Story.” Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign19::
	msgbox CanalaveCity_Library_F3_Text_PtSign19, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign19:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign20::
	msgbox CanalaveCity_Library_F3_Text_PtSign20, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign20:
	.string "This book is titled “A Horrific Myth.”\n"
	.string "Want to read it?$"

CanalaveCity_Library_F3_EventScript_PtSign21::
	msgbox CanalaveCity_Library_F3_Text_PtSign21, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign21:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"

CanalaveCity_Library_F3_EventScript_PtSign22::
	msgbox CanalaveCity_Library_F3_Text_PtSign22, MSGBOX_SIGN
	end

CanalaveCity_Library_F3_Text_PtSign22:
	.string "This book is titled “Sinnoh Folk\n"
	.string "Stories.”$"
