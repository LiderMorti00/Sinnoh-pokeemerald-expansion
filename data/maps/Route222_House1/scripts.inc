Route222_House1_MapScripts::
	.byte 0

Route222_House1_Text_PtNpc1:
	.string "I had a dream! It was a wonderful\n"
	.string "dream!\p"
	.string "I dreamt that a Trainer would bring me\n"
	.string "a giant REMORAID!$"

Route222_House1_EventScript_PtNpc1::
	msgbox Route222_House1_Text_PtNpc1, MSGBOX_NPC
	end
