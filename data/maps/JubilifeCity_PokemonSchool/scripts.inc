JubilifeCity_PokemonSchool_MapScripts::
	.byte 0

JubilifeCity_PokemonSchool_EventScript_Teacher::
	msgbox JubilifeCity_PokemonSchool_Text_Teacher, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_EventScript_Student1::
	msgbox JubilifeCity_PokemonSchool_Text_Student1, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_EventScript_Student2::
	msgbox JubilifeCity_PokemonSchool_Text_Student2, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_EventScript_Student3::
	msgbox JubilifeCity_PokemonSchool_Text_Student3, MSGBOX_NPC
	end

JubilifeCity_PokemonSchool_Text_Teacher:
	.string "Welcome to the TRAINERS' SCHOOL!\n"
	.string "Feel free to look around and\l"
	.string "learn.\p"
	.string "Remember: type matchups are the\n"
	.string "foundation of every battle.$"

JubilifeCity_PokemonSchool_Text_Student1:
	.string "STATUS problems like POISON last\n"
	.string "even after battle. Carry\l"
	.string "ANTIDOTES!$"

JubilifeCity_PokemonSchool_Text_Student2:
	.string "If your POKéMON is faster, it\n"
	.string "attacks first. Speed matters!$"

JubilifeCity_PokemonSchool_Text_Student3:
	.string "The blackboard says: WATER beats\n"
	.string "FIRE, FIRE beats GRASS, GRASS\l"
	.string "beats WATER.$"

