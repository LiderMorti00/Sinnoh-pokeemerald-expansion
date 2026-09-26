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

SandgemTown_PokemonCenter_1F_EventScript_PtNpc1::
	msgbox SandgemTown_PokemonCenter_1F_Text_PtNpc1, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_Text_PtNpc1:
	.string "Nurses here heal your POKéMON for\n"
	.string "free. Amazing, isn't it?$"

SandgemTown_PokemonCenter_1F_EventScript_PtNpc2::
	msgbox SandgemTown_PokemonCenter_1F_Text_PtNpc2, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_Text_PtNpc2:
	.string "Trainers use the PC to store\n"
	.string "POKéMON. You can carry up to six.$"

SandgemTown_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox SandgemTown_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_Text_PtNpc3:
	.string "I'm resting before heading back to\n"
	.string "ROUTE 201.$"
