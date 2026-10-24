OreburghCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OreburghCity_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

OreburghCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_OREBURGH_CITY
	end

OreburghCity_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_OREBURGH_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

OreburghCity_PokemonCenter_1F_EventScript_PtNpc1::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc1, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc1:
	.string "I sense a strong Trainer... Could\n"
	.string "it be you?$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc2::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc2:
	.string "Switch on the PC at any POKéMON\n"
	.string "CENTER.\p"
	.string "Connect to “Someone's PC” and access\n"
	.string "the POKéMON Storage System.\p"
	.string "That's all you need to do to store or\n"
	.string "bring out your POKéMON.$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc3:
	.string "Yay! I got a Pal Pad at the POKéMON\n"
	.string "Wi-Fi Club downstairs!$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc4::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc4, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc4:
	.string "Hmmm! What, or who, is this TEAM\n"
	.string "GALACTIC?!\p"
	.string "They make wonderful claims of a dream\n"
	.string "energy source on one hand...\p"
	.string "But rumor has it, they steal POKéMON\n"
	.string "from others by force.\p"
	.string "It's a mystery! They're mysterious!\n"
	.string "Isn't anyone investigating them?$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc5::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc5, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc5:
	.string "You know how you can battle a friend\n"
	.string "using wireless communications?\p"
	.string "Well now, you can capture it as a\n"
	.string "Battle Video using a Vs. Recorder!$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc6::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc6, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc6:
	.string "Cool! You have a Vs. Recorder!\p"
	.string "So, did you go to the Global Terminal in\n"
	.string "JUBILIFE CITY? Did ya? Did ya?$"
