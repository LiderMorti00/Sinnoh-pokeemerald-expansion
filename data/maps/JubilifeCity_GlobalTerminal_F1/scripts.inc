JubilifeCity_GlobalTerminal_F1_MapScripts::
	.byte 0

JubilifeCity_GlobalTerminal_F1_Text_PtNpc1:
	.string "Hello! Welcome to the GTS!\p"
	.string "Would you like to do a global POKéMON\n"
	.string "trade over Nintendo Wi-Fi Connection?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc1::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc2_0:
	.string "That’s a big globe, eh?\p"
	.string "Where do I live on it now? Let’s see if I\n"
	.string "can point it out...$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc3_0:
	.string "They say if you communicate with\n"
	.string "someone, their location is\p"
	.string "recorded on this giant globe.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc4_0:
	.string "All I need to do is leave a POKéMON here\n"
	.string "to trade.\p"
	.string "Who knows, it might be traded while I’m\n"
	.string "asleep tonight.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc5_0:
	.string "You can easily trade POKéMON with\n"
	.string "POKéMON fans around the world.\p"
	.string "Isn’t that something?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc6_0:
	.string "You can register where you live on this\n"
	.string "giant globe.\p"
	.string "Once you do, you can show your\n"
	.string "location to anyone you communicate\l"
	.string "with.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc7_0:
	.string "Is Nintendo WFC something even I can\n"
	.string "use easily?\p"
	.string "If it is really that easy, I’d love to\n"
	.string "trade POKéMON, too!$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc8_0:
	.string "There are several portal machines here\n"
	.string "at the Global Terminal.\p"
	.string "You must set your Vs. Recorder in the\n"
	.string "machines for communication.\p"
	.string "Please do give the machines a try, as\n"
	.string "they guide you through the operation.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc8::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc8_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc9_0:
	.string "Welcome to the Global Terminal!\p"
	.string "Here, you may join the huge community\n"
	.string "of Trainers worldwide.\p"
	.string "You may view the records of Trainers\n"
	.string "like yourself from around the world.\p"
	.string "You may also trade POKéMON with the\n"
	.string "world’s Trainers.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc9::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc9_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc10_0:
	.string "This week, I’ll do it!\p"
	.string "I really want to make the Top 8 of the\n"
	.string "rankings.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc10::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc10_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc11_0:
	.string "The Global Terminal has three floors.\p"
	.string "You use warp panels for getting from\n"
	.string "one floor to another.\p"
	.string "A blue panel takes you to the GTS on\n"
	.string "the ground floor.\p"
	.string "Take a green panel to the studios for\n"
	.string "Box Data and Dress-Up Data on 2F.\p"
	.string "Take a pink warp panel to the third\n"
	.string "floor for the Battle Video Gallery.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc11::
	lock
	faceplayer
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc11_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_GlobalTerminal_F1_Text_PtNpc12:
	.string "I want to know everyone’s favorite\n"
	.string "kinds of POKéMON.$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtNpc12::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtNpc12, MSGBOX_NPC
	end

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign1::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign1, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign1:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Battle Video\l"
	.string "Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign2::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign2, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign2:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Battle Video\l"
	.string "Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign3::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign3, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign3:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Trainer Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign4::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign4, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign4:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Trainer Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign5::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign5, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign5:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Battle Video\l"
	.string "Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign6::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign6, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign6:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Battle Video\l"
	.string "Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign7::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign7, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign7:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Trainer Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign8::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign8, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign8:
	.string "Connect to Nintendo Wi-Fi Connection\n"
	.string "and examine the Trainer Rankings?$"

JubilifeCity_GlobalTerminal_F1_EventScript_PtSign9::
	msgbox JubilifeCity_GlobalTerminal_F1_Text_PtSign9, MSGBOX_SIGN
	end

JubilifeCity_GlobalTerminal_F1_Text_PtSign9:
	.string "The green panel leads to the studios\n"
	.string "for Box Data and Dress-Up Data on 2F.\p"
	.string "The pink panel leads to the Battle\n"
	.string "Video Gallery on 3F.$"
