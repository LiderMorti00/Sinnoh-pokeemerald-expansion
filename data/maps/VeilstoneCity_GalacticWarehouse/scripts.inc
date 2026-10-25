VeilstoneCity_GalacticWarehouse_MapScripts::
	.byte 0

VeilstoneCity_GalacticWarehouse_Text_PtNpc1_0:
	.string "Looker: I am concerned over what I\n"
	.string "have overheard in the Game Corner.\p"
	.string "The Team Galactic has transported\n"
	.string "something to Pastoria City.\p"
	.string "What they are up to, I do not know, but\n"
	.string "I have bad feelings about it.$"

VeilstoneCity_GalacticWarehouse_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox VeilstoneCity_GalacticWarehouse_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end
