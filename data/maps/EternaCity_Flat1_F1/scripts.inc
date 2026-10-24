EternaCity_Flat1_F1_MapScripts::
	.byte 0

EternaCity_Flat1_F1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox EternaCity_Flat1_F1_Text_PtNpc1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EternaCity_Flat1_F1_EventScript_PtNpc1_No
	msgbox EternaCity_Flat1_F1_Text_PtNpc1_Yes, MSGBOX_DEFAULT
	release
	end

EternaCity_Flat1_F1_EventScript_PtNpc1_No:
	msgbox EternaCity_Flat1_F1_Text_PtNpc1_No, MSGBOX_DEFAULT
	release
	end

EternaCity_Flat1_F1_Text_PtNpc1:
	.string "Excuse me, but do you got that\n"
	.string "POKéMON named BUIZEL?\p"
	.string "Wanna trade it for my CHATOT?$"

EternaCity_Flat1_F1_EventScript_PtNpc2::
	msgbox EternaCity_Flat1_F1_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_Flat1_F1_Text_PtNpc2:
	.string "Hi! I'm the building superintendent. I\n"
	.string "maintain a vigilant 24-hour watch!$"

EternaCity_Flat1_F1_EventScript_PtNpc3::
	msgbox EternaCity_Flat1_F1_Text_PtNpc3, MSGBOX_NPC
	end

EternaCity_Flat1_F1_Text_PtNpc3:
	.string "Nicknames show how much you care\n"
	.string "about your POKéMON.$"

EternaCity_Flat1_F1_Text_PtNpc1_Yes:
	.string "Yes! So awesome! A BUIZEL! I so\n"
	.string "promise I'll be good to it!\p"
	.string "Oh yeah, CHATOT can learn some human\n"
	.string "speech pretty quickly.\p"
	.string "Try out its move Chatter. You'll\n"
	.string "totally see what I mean.$"

EternaCity_Flat1_F1_Text_PtNpc1_No:
	.string "Oh, OK. Totally got it. It's all right if\n"
	.string "you don't want to.\p"
	.string "But if you change your mind, let's\n"
	.string "totally trade some POKéMON.$"
