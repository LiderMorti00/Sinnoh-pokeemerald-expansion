SnowpointCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SnowpointCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SnowpointCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SNOWPOINT_CITY
	end

SnowpointCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SNOWPOINT_CITY_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SnowpointCity_PokemonCenter_1F_Text_PtNpc1_0:
	.string "You know how there are many Ice-type\n"
	.string "POKéMON around Snowpoint City?\p"
	.string "I wonder if they also live in the\n"
	.string "temple?$"

SnowpointCity_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SnowpointCity_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_PokemonCenter_1F_Text_PtNpc2_0:
	.string "Sound gets swallowed up by the snow.\n"
	.string "That’s why it’s very quiet here.$"

SnowpointCity_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SnowpointCity_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_PokemonCenter_1F_Text_PtNpc3_0:
	.string "PSYDUCK: Gaga guwawa!$"

SnowpointCity_PokemonCenter_1F_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox SnowpointCity_PokemonCenter_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

SnowpointCity_PokemonCenter_1F_Text_PtNpc4:
	.string "Maylene: Oh! That’s the Icicle Badge!\n"
	.string "You must have beaten Candice.\p"
	.string "With that Badge, aren’t you allowed to\n"
	.string "use the hidden move Rock Climb?\p"
	.string "Rock Climb can be learned by Rock-type\n"
	.string "or Fighting-type POKéMON, I think.$"

SnowpointCity_PokemonCenter_1F_EventScript_PtNpc4::
	msgbox SnowpointCity_PokemonCenter_1F_Text_PtNpc4, MSGBOX_NPC
	end
