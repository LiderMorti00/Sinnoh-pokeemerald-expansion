CelesticTown_House4_MapScripts::
	.byte 0

CelesticTown_House4_Text_PtNpc1_0:
	.string "HAPPINY: Pinny haaa!$"

CelesticTown_House4_EventScript_PtNpc1::
	lock
	faceplayer
	playmoncry SPECIES_HAPPINY, CRY_MODE_NORMAL
	msgbox CelesticTown_House4_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CelesticTown_House4_Text_PtNpc2:
	.string "Analog or digital: which kind of watch\n"
	.string "do you prefer?\p"
	.string "Personally, I like using an hourglass\n"
	.string "myself.$"

CelesticTown_House4_EventScript_PtNpc2::
	msgbox CelesticTown_House4_Text_PtNpc2, MSGBOX_NPC
	end
