PokemonMansion_Office_MapScripts::
	.byte 0

PokemonMansion_Office_Text_PtNpc1:
	.string "Backlot: ...It’s true, I tell you! No lies\n"
	.string "ever leave these lips!\p"
	.string "There really are cute POKéMON in my\n"
	.string "trophy garden! Honest truth!$"

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

PokemonMansion_Office_EventScript_SNBacklot::
	lock
	faceplayer
	special SinnohTrophyGardenPick
	msgbox PokemonMansion_Office_EventScript_SNBacklot_T1, MSGBOX_DEFAULT
	msgbox PokemonMansion_Office_EventScript_SNBacklot_T2, MSGBOX_DEFAULT
	msgbox PokemonMansion_Office_EventScript_SNBacklot_T3, MSGBOX_DEFAULT
	release
	end

PokemonMansion_Office_EventScript_SNBacklot_T1:
	.string "Backlot: Hello, hello! Welcome to my\n"
	.string "opulent mansion!\p"
	.string "There’s a lot for me to be proud of\n"
	.string "inside, and outside, of this home...\p"
	.string "But what makes me the most proud is my\n"
	.string "trophy garden in the back!\p"
	.string "Why bother traveling afar when\n"
	.string "POKéMON are attracted by my garden?\p"
	.string "They come to me in hopes of seeing the\n"
	.string "garden!\p"
	.string "You’re welcome to join them and marvel\n"
	.string "at my garden!$"

PokemonMansion_Office_EventScript_SNBacklot_T2:
	.string "Backlot: Muhohoho... I bet you are! I\n"
	.string "knew you would be!\p"
	.string "But I don’t mind! I enjoy sharing my\n"
	.string "stories with you!\p"
	.string "So! This is what happened this morning\n"
	.string "when I went into my trophy garden.\p"
	.string "I noticed a cute-eyed {STR_VAR_1},\n"
	.string "which joyously ran over to me.\p"
	.string "The {STR_VAR_1} ran up and gave me a\n"
	.string "smooch on my cheek...$"

PokemonMansion_Office_EventScript_SNBacklot_T3:
	.string "Backlot: ...It’s true, I tell you! No lies\n"
	.string "ever leave these lips!\p"
	.string "There really are cute {STR_VAR_1} in my\n"
	.string "trophy garden! Honest truth!$"
