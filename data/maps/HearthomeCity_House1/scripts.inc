HearthomeCity_House1_MapScripts::
	.byte 0

HearthomeCity_House1_Text_PtNpc1:
	.string "Bebe: Oh? Now that’s a National\n"
	.string "POKéDEX I’m seeing. Good for you!\p"
	.string "You’ll be using my POKéMON Boxes a\n"
	.string "whole lot more if you’ve got that.\p"
	.string "Well, I always thought a good Trainer\n"
	.string "ought to juggle Boxes smartly, though.\p"
	.string "I shouldn’t be the one to say so.$"

HearthomeCity_House1_EventScript_PtNpc1::
	msgbox HearthomeCity_House1_Text_PtNpc1, MSGBOX_NPC
	end
