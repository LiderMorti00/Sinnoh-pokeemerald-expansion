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
	.string "Heal up before you challenge\n"
	.string "ROARK. He's really tough!$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc3:
	.string "My training is almost complete.\n"
	.string "Soon I'll beat the GYM!$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc4::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc4, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc4:
	.string "This town has a long history. Ask\n"
	.string "the old folks about it.$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc5::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc5, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc5:
	.string "I'm trading with my friend. Don't\n"
	.string "interrupt!$"

OreburghCity_PokemonCenter_1F_EventScript_PtNpc6::
	msgbox OreburghCity_PokemonCenter_1F_Text_PtNpc6, MSGBOX_NPC
	end

OreburghCity_PokemonCenter_1F_Text_PtNpc6:
	.string "Link battles are so much fun!$"
