SendoffSpring_MapScripts::
	.byte 0

SendoffSpring_Text_PtNpc1:
	.string "Cynthia: Sigh... I wish I could have\n"
	.string "battled GIRATINA.\p"
	.string "Oh, don’t mind me. I’m only musing out\n"
	.string "loud.\p"
	.string "You deserve the glory and all the\n"
	.string "thanks for what you did.$"

SendoffSpring_EventScript_PtNpc1::
	msgbox SendoffSpring_Text_PtNpc1, MSGBOX_NPC
	end
