JubilifeCity_JubilifeTV_F3_MapScripts::
	.byte 0

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc1::
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc1:
	.string "The room closest to the stairs is the\n"
	.string "Group Ranking Room.\p"
	.string "The room on the opposite side is the\n"
	.string "Global Ranking Room.$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc2::
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc2:
	.string "I just realized something awesome! I\n"
	.string "should be trading POKéMON more!\p"
	.string "The more trades I make, the better my\n"
	.string "odds of winning the POKéMON Lottery!\p"
	.string "Why? Because the ID No. of a POKéMON\n"
	.string "is different from Trainer to Trainer!$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc3::
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc3:
	.string "Quiet on the set, please! We're\n"
	.string "about to start recording.$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc4::
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc4:
	.string "I edit the footage. It takes hours\n"
	.string "to make a short program!$"

JubilifeCity_JubilifeTV_F3_Text_PtNpc5_0:
	.string "Records are fine things. They tell you\n"
	.string "the history of stuff.\p"
	.string "You can really sense the dramatic\n"
	.string "stories behind all those numbers!$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc6_0:
	.string "You can see the rankings of people in\n"
	.string "your group here.\p"
	.string "It makes me try even harder ’cause I\n"
	.string "can’t stand losing to my friends!$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc7_0:
	.string "These rankings are nifty!\p"
	.string "I’m going to make a group and compete\n"
	.string "with all my best friends!$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc8_0:
	.string "I really don’t win many battles... But it\n"
	.string "doesn’t get me down.\p"
	.string "I’m trying for the world record at\n"
	.string "POKéMON fishing!$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc8::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc8_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F3_Text_PtNpc9_0:
	.string "Someone broke my POKéMON-catching\n"
	.string "record!\p"
	.string "I’ll reclaim my record and regain my\n"
	.string "place in the standings!$"

JubilifeCity_JubilifeTV_F3_EventScript_PtNpc9::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F3_Text_PtNpc9_0, MSGBOX_DEFAULT
	release
	end
