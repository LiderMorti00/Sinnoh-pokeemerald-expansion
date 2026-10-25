PokemonMansion_Office_MapScripts::
	.byte 0

PokemonMansion_Office_Text_PtNpc1:
	.string "Backlot: ...It’s true, I tell you! No lies\n"
	.string "ever leave these lips!\p"
	.string "There really are cute POKéMON in my\n"
	.string "trophy garden! Honest truth!$"

PokemonMansion_Office_EventScript_PtNpc1::
	msgbox PokemonMansion_Office_Text_PtNpc1, MSGBOX_NPC
	end

PokemonMansion_Office_Text_PtNpc2:
	.string "Butler: Did you see them? There were\n"
	.string "some POKéMON, weren’t there?\p"
	.string "But that’s only to be expected. It’s\n"
	.string "Master’s trophy garden.$"

PokemonMansion_Office_EventScript_PtNpc2::
	msgbox PokemonMansion_Office_Text_PtNpc2, MSGBOX_NPC
	end

PokemonMansion_Office_Text_PtNpc3:
	.string "You may look, but please refrain from\n"
	.string "touching this POKéMON statue.$"

PokemonMansion_Office_EventScript_PtNpc3::
	msgbox PokemonMansion_Office_Text_PtNpc3, MSGBOX_NPC
	end

PokemonMansion_Office_EventScript_PtSign1::
	msgbox PokemonMansion_Office_Text_PtSign1, MSGBOX_SIGN
	end

PokemonMansion_Office_Text_PtSign1:
	.string "It’s a very expensive-looking POKéMON\n"
	.string "statue...\p"
	.string "...! You got fingerprints on it...$"

PokemonMansion_Office_EventScript_PtSign2::
	msgbox PokemonMansion_Office_Text_PtSign2, MSGBOX_SIGN
	end

PokemonMansion_Office_Text_PtSign2:
	.string "It’s a very expensive-looking book on\n"
	.string "POKéMON.\p"
	.string "Would you like to read it?$"
