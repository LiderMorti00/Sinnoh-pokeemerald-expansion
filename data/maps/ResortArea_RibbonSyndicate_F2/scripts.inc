ResortArea_RibbonSyndicate_F2_MapScripts::
	.byte 0

ResortArea_RibbonSyndicate_F2_Text_PtNpc1_0:
	.string "We keep our clients and POKéMON from\n"
	.string "seeing others.\p"
	.string "That way, all our clients and their\n"
	.string "POKéMON can fully relax.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F2_Text_PtNpc2_0:
	.string "Our service is very exclusive. We only\n"
	.string "accept five members a day.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F2_Text_PtNpc3:
	.string "Oh, I do apologize.\p"
	.string "We can only provide one spa session a\n"
	.string "day to our members.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc3::
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc3, MSGBOX_NPC
	end

ResortArea_RibbonSyndicate_F2_Text_PtNpc4_0:
	.string "We’ve developed a reputation for\n"
	.string "bringing our members closer to\p"
	.string "their POKéMON.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end
