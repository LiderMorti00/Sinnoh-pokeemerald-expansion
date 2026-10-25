FightArea_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FightArea_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

FightArea_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FIGHT_AREA
	end

FightArea_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_FIGHT_AREA_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

FightArea_PokemonCenter_1F_Text_PtNpc1_0:
	.string "The Battle Frontier’s as tough as they\n"
	.string "say...\p"
	.string "None of the facilities are cakewalks,\n"
	.string "that’s for sure.$"

FightArea_PokemonCenter_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox FightArea_PokemonCenter_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

FightArea_PokemonCenter_1F_Text_PtNpc2_0:
	.string "The best Trainers from around the\n"
	.string "country...\p"
	.string "No, the best Trainers from around the\n"
	.string "world gather at the Battle Zone.$"

FightArea_PokemonCenter_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox FightArea_PokemonCenter_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

FightArea_PokemonCenter_1F_Text_PtNpc3_0:
	.string "To toughen myself! To toughen my\n"
	.string "POKéMON!\p"
	.string "For that alone, I have come!$"

FightArea_PokemonCenter_1F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox FightArea_PokemonCenter_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
