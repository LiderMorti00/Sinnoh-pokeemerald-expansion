JubilifeCity_JubilifeTV_F1_MapScripts::
	.byte 0

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc1::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc1:
	.string "They keep track of official records\n"
	.string "here.\p"
	.string "Things like winning streaks, or how\n"
	.string "many POKéMON you've caught.\p"
	.string "You can check everyone's records up\n"
	.string "on the third floor.$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc2::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc2:
	.string "I'm here to see how TV shows are\n"
	.string "made!$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc3::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc3:
	.string "The TV station interviews all sorts of\n"
	.string "Trainers for its shows.\p"
	.string "After all, people want to know about\n"
	.string "good Trainers and what they say.\p"
	.string "Personally, I'd like to learn more\n"
	.string "about Gym Leaders.\p"
	.string "I'd also like to hear about the tough\n"
	.string "Elite Four of the POKéMON LEAGUE.$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc4::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc4:
	.string "It's cold outside, but the studios\n"
	.string "here are nice and warm.$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc5::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc5, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc5:
	.string "I heard a famous Trainer is being\n"
	.string "interviewed today!$"

JubilifeCity_JubilifeTV_F1_Text_PtNpc6_0:
	.string "Why don’t you try dressing up your\n"
	.string "POKéMON now?\p"
	.string "We have a Fitting Room on the second\n"
	.string "floor.\p"
	.string "Dress up your POKéMON nicely with\n"
	.string "Accessories!$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end
