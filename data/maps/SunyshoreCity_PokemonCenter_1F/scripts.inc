SunyshoreCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunyshoreCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SunyshoreCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SUNYSHORE_CITY
	end

SunyshoreCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SUNYSHORE_CITY_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SunyshoreCity_PokemonCenter_1F_Text_PtNpc1_0:
	.string "I once dreamed of becoming a Gym\n"
	.string "Leader...\p"
	.string "Though that dream never came true, I\n"
	.string "got to live with POKéMON all\p"
	.string "this time.\p"
	.string "It’s been a blessed life.$"

SunyshoreCity_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SunyshoreCity_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_PokemonCenter_1F_Text_PtNpc2_0:
	.string "Wow, you’re really cool! You have seven\n"
	.string "Gym Badges!\p"
	.string "All you need is one more to challenge\n"
	.string "the POKéMON League.$"

SunyshoreCity_PokemonCenter_1F_Text_PtNpc2_1:
	.string "Wow! You’re awesomely cool! You have\n"
	.string "all eight Gym Badges!\p"
	.string "Now, you have to challenge the POKéMON\n"
	.string "League!$"

SunyshoreCity_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_BADGE08_GET, SunyshoreCity_PokemonCenter_1F_EventScript_PtNpc2_AwesomelyCoolEightBadges
	msgbox SunyshoreCity_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_PokemonCenter_1F_EventScript_PtNpc2_AwesomelyCoolEightBadges:
	msgbox SunyshoreCity_PokemonCenter_1F_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_PokemonCenter_1F_Text_PtNpc3_0:
	.string "To make up for the lack of space, the\n"
	.string "city built roads out of solar panels.\p"
	.string "Those solar panels provide us with\n"
	.string "clean energy, and they’re good roads.\p"
	.string "It’s a symbol of Sunyshore’s will to\n"
	.string "survive, I think.$"

SunyshoreCity_PokemonCenter_1F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SunyshoreCity_PokemonCenter_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
