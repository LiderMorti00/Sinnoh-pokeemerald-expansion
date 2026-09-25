SandgemTown_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

SandgemTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SANDGEM_TOWN
	end

SandgemTown_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_SANDGEM_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

SandgemTown_PokemonCenter_1F_EventScript_Gentleman::
	msgbox SandgemTown_PokemonCenter_1F_Text_Gentleman, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_Text_Gentleman:
	.string "Your POKéMON are healed for free\n"
	.string "here. Don't be shy about visiting\l"
	.string "often!$"

