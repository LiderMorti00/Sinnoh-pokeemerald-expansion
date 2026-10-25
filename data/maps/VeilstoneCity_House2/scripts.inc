VeilstoneCity_House2_MapScripts::
	.byte 0

VeilstoneCity_House2_Text_PtNpc1:
	.string "Team Galactic’s building bugs me so\n"
	.string "much, I can’t sleep well.\p"
	.string "It’s so bizarre, like a robot that’s\n"
	.string "about to start moving.$"

VeilstoneCity_House2_EventScript_PtNpc1::
	msgbox VeilstoneCity_House2_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_House2_Text_PtNpc2_0:
	.string "Those thorny things on the building...\n"
	.string "The way it moves meaninglessly...\p"
	.string "I don’t understand their idea of\n"
	.string "“awesomely fashionable” at all.\p"
	.string "Still, Team Galactic does seem to have\n"
	.string "a huge supply of energy.$"

VeilstoneCity_House2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_House2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
