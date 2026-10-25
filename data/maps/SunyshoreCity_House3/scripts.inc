SunyshoreCity_House3_MapScripts::
	.byte 0

SunyshoreCity_House3_Text_PtNpc1_0:
	.string "Have you gone underground lately?\p"
	.string "Depending on where you go down, you\n"
	.string "end up in different places.\p"
	.string "That’s why I use my Explorer Kit in as\n"
	.string "many places as I can.$"

SunyshoreCity_House3_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SunyshoreCity_House3_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_House3_Text_PtNpc2_0:
	.string "The Spheres found in the underground\n"
	.string "tunnels are like gems.\p"
	.string "You can obtain goodies by trading the\n"
	.string "Spheres away.$"

SunyshoreCity_House3_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SunyshoreCity_House3_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_House3_Text_PtNpc3_0:
	.string "Some underground Traps need to be\n"
	.string "defused by touch or by using the\p"
	.string "microphone!$"

SunyshoreCity_House3_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SunyshoreCity_House3_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_House3_Text_PtNpc4_0:
	.string "The Underground Man in Eterna and\n"
	.string "Byron of Canalave are related.\p"
	.string "Add Byron’s son Roark, and you have a\n"
	.string "trio of dedicated diggers.$"

SunyshoreCity_House3_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox SunyshoreCity_House3_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_House3_Text_PtNpc5_0:
	.string "If you bury Spheres, they grow a little\n"
	.string "every day.\p"
	.string "They’re really weird that way.\p"
	.string "Oh, right! I’d better dig mine up! I\n"
	.string "forgot I had some buried!$"

SunyshoreCity_House3_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox SunyshoreCity_House3_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_House3_Text_PtNpc6_0:
	.string "Get Flags from your friends to make\n"
	.string "your Secret Base better.\p"
	.string "Try to hide your Secret Base, and get\n"
	.string "good at discovering your\p"
	.string "friends’ bases.$"

SunyshoreCity_House3_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox SunyshoreCity_House3_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_House3_Text_PtNpc7_0:
	.string "Go underground and have fun down\n"
	.string "there. Make it an adventure!$"

SunyshoreCity_House3_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox SunyshoreCity_House3_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end
