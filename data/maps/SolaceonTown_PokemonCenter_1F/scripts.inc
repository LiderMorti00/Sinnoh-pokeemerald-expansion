SolaceonTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SolaceonTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SolaceonTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SOLACEON_TOWN
	end

SolaceonTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SOLACEON_TOWN_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SolaceonTown_PokemonCenter_1F_Text_PtNpc1_0:
	.string "The Day-Care Man was saying POKéMON\n"
	.string "grow at different rates.$"

SolaceonTown_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SolaceonTown_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SolaceonTown_PokemonCenter_1F_Text_PtNpc2_0:
	.string "It’s quite far from Solaceon Town to\n"
	.string "Veilstone City.\p"
	.string "There’s a café along the way where you\n"
	.string "can get some rest, though.$"

SolaceonTown_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SolaceonTown_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SolaceonTown_PokemonCenter_1F_Text_PtNpc3_0:
	.string "The Hidden Machine Defog can be found\n"
	.string "in the Solaceon Ruins.\p"
	.string "But my POKéMON can’t learn the hidden\n"
	.string "move.\p"
	.string "I’m going to give the ruins a miss, this\n"
	.string "time.$"

SolaceonTown_PokemonCenter_1F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SolaceonTown_PokemonCenter_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
