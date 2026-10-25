PokemonMansion_MapScripts::
	.byte 0

PokemonMansion_Text_PtNpc1:
	.string "Mr. Backlot is the master of this\n"
	.string "mansion. This is his office.$"

PokemonMansion_EventScript_PtNpc1::
	msgbox PokemonMansion_Text_PtNpc1, MSGBOX_NPC
	end

PokemonMansion_Text_PtNpc2:
	.string "This is the way out to the trophy\n"
	.string "garden.\p"
	.string "The garden is open for all visitors to\n"
	.string "enjoy.\p"
	.string "However, please beware--wild POKéMON\n"
	.string "may appear in the garden.$"

PokemonMansion_EventScript_PtNpc2::
	msgbox PokemonMansion_Text_PtNpc2, MSGBOX_NPC
	end

PokemonMansion_Text_PtNpc3:
	.string "Please visit again tomorrow.$"

PokemonMansion_EventScript_PtNpc3::
	msgbox PokemonMansion_Text_PtNpc3, MSGBOX_NPC
	end

PokemonMansion_Text_PtNpc4:
	.string "I’m so sorry. Everything beyond this\n"
	.string "point is strictly off-limits.\p"
	.string "Please, you really mustn’t. Mr. Backlot\n"
	.string "will be so cross with me!$"

PokemonMansion_EventScript_PtNpc4::
	msgbox PokemonMansion_Text_PtNpc4, MSGBOX_NPC
	end

PokemonMansion_Text_PtNpc5_0:
	.string "The expensive-looking book Mr. Backlot\n"
	.string "has... It tugs at my attention.$"

PokemonMansion_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox PokemonMansion_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end
