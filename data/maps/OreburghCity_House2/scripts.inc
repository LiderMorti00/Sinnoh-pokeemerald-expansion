OreburghCity_House2_MapScripts::
	.byte 0

OreburghCity_House2_EventScript_PtNpc1::
	msgbox OreburghCity_House2_Text_PtNpc1, MSGBOX_NPC
	end

OreburghCity_House2_Text_PtNpc1:
	.string "Have you ever seen or heard about\n"
	.string "differently colored POKéMON?\p"
	.string "For instance, a regular PIKACHU has a\n"
	.string "yellow body, correct?\p"
	.string "Well, the different-colored PIKACHU\n"
	.string "has a sort of orange body.$"

OreburghCity_House2_EventScript_PtNpc2::
	msgbox OreburghCity_House2_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_House2_Text_PtNpc2:
	.string "You know how POKéMON have different\n"
	.string "natures like we have personalities?\p"
	.string "I don't think it's surprising to see\n"
	.string "POKéMON in different colors.$"

OreburghCity_House2_EventScript_PtNpc3::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox OreburghCity_House2_Text_PtNpc3, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_House2_Text_PtNpc3:
	.string "PIKACHU: Pikaaah!$"
