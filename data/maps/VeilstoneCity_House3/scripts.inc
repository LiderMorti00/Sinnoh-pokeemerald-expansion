VeilstoneCity_House3_MapScripts::
	.byte 0

VeilstoneCity_House3_Text_PtNpc1:
	.string "Oh? You want me to show you how to\n"
	.string "massage POKéMON?\p"
	.string "Tehehe...\p"
	.string "It’s a secret, of course!\p"
	.string "Come back again tomorrow!$"

VeilstoneCity_House3_EventScript_PtNpc1::
	msgbox VeilstoneCity_House3_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_House3_Text_PtNpc2_0:
	.string "My sister’s boyfriend is the Scarf Guy\n"
	.string "in Pastoria City.\p"
	.string "They send Mail to each other by letting\n"
	.string "POKéMON deliver it.$"

VeilstoneCity_House3_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_House3_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House3_Text_PtNpc3_0:
	.string "PACHIRISU: Pachi chiii!$"

VeilstoneCity_House3_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
	msgbox VeilstoneCity_House3_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
