JubilifeCity_GlobalTerminal_F2_MapScripts::
	.byte 0

JubilifeCity_GlobalTerminal_F2_Text_PtNpc1_0:
	.string "Did you know? About my PC Box, I mean.\p"
	.string "It’s full of POKéMON everyone longs\n"
	.string "for, like...\p"
	.string "...No, it would be immodest for me to\n"
	.string "say. It would sound like bragging.\p"
	.string "If you really must know, you can always\n"
	.string "find out yourself.$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc2_0:
	.string "What I like to do...\p"
	.string "I like sneaking glances at the people\n"
	.string "checking out Dress-Up Data.$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc3_0:
	.string "The combination of that POKéMON with\n"
	.string "those Accessories...\p"
	.string "It was so stunningly wonderful, I feel\n"
	.string "as if I’ve been zapped!$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc4_0:
	.string "The same kind of Accessory can create\n"
	.string "entirely different impressions.\p"
	.string "It really depends on where and how it’s\n"
	.string "used.$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc5_0:
	.string "I got a Backdrop from a nice lady\n"
	.string "downstairs. For free!$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc6_0:
	.string "Oh, dear me! Gracious! This is almost\n"
	.string "scandalous!$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc7_0:
	.string "Sneaking a peek at other people’s PC\n"
	.string "Boxes fills me with guilty glee.\p"
	.string "But it’s a secret sort of pleasure I’d\n"
	.string "rather not have others know about.\p"
	.string "...Ignoring the fact that me being here\n"
	.string "is a surefire giveaway.$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc8_0:
	.string "I visit every day to check on other\n"
	.string "people’s Dress-Up Data.\p"
	.string "For me, it’s like the first step to\n"
	.string "fashion!$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc8::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc8_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_Text_PtNpc9_0:
	.string "This is discriminatory! Why are there\n"
	.string "only shots of POKéMON?\p"
	.string "Why aren’t there any shots of ladies? I\n"
	.string "call discrimination!$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtNpc9::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtNpc9_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign1::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign1, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign1:
	.string "Warps to the GTS and the Trainer\n"
	.string "Rankings on 1F.$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign2::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign2, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign2:
	.string "Warps to the Battle Video Gallery on\n"
	.string "3F.$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign3::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign3, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign3:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Box Data?$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign4::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign4, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign4:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Box Data?$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign5::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign5, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign5:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Dress-Up Data?$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign6::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign6, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign6:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Dress-Up Data?$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign7::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign7, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign7:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Dress-Up Data?$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign8::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign8, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign8:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Dress-Up Data?$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign9::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign9, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign9:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Box Data?$"

JubilifeCity_GlobalTerminal_F2_EventScript_PtSign10::
	msgbox JubilifeCity_GlobalTerminal_F2_Text_PtSign10, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F2_Text_PtSign10:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "to view and post Box Data?$"
