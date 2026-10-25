GalacticHQ_B1F_MapScripts::
	.byte 0

GalacticHQ_B1F_Text_PtNpc1_0:
	.string "I’m a Team Galactic member. But I don’t\n"
	.string "even have a POKéMON!\p"
	.string "I’m the gruntiest of the grunts!\p"
	.string "It’s my fault, though. I still don’t\n"
	.string "know how the warp panels connect.$"

GalacticHQ_B1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox GalacticHQ_B1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end
