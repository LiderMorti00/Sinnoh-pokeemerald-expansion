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
	.string "Talk to that nice lady at the counter\n"
	.string "and hand her your POKéMON.\p"
	.string "She'll heal your POKéMON to perfect\n"
	.string "health in no time at all!$"

SandgemTown_PokemonCenter_1F_EventScript_PtNpc2::
	msgbox SandgemTown_PokemonCenter_1F_Text_PtNpc2, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_Text_PtNpc2:
	.string "Do you see that PC over there? That\n"
	.string "fancy blue one?\p"
	.string "If you've got POKéMON with you, it's\n"
	.string "free to use.$"

SandgemTown_PokemonCenter_1F_EventScript_PtNpc3::
	msgbox SandgemTown_PokemonCenter_1F_Text_PtNpc3, MSGBOX_NPC
	end

SandgemTown_PokemonCenter_1F_Text_PtNpc3:
	.string "The top floor of any POKéMON CENTER\n"
	.string "is the POKéMON Communication Club.\p"
	.string "There, you can have all sorts of fun\n"
	.string "with your friends.$"
