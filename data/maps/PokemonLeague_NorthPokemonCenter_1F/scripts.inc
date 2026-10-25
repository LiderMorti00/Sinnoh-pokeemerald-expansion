PokemonLeague_NorthPokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_NorthPokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

PokemonLeague_NorthPokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_POKEMON_LEAGUE_NORTH
	setflag FLAG_LANDMARK_POKEMON_LEAGUE
	call_if_unset FLAG_ENTERED_ELITE_FOUR, PokemonLeague_NorthPokemonCenter_1F_EventScript_GuardsBlockDoor
	end

PokemonLeague_NorthPokemonCenter_1F_EventScript_GuardsBlockDoor::
	setobjectxyperm LOCALID_POKEMON_LEAGUE_NORTH_POKEMON_CENTER_1F_LEAGUE_GUARD_1, 9, 2
	setobjectxyperm LOCALID_POKEMON_LEAGUE_NORTH_POKEMON_CENTER_1F_LEAGUE_GUARD_2, 10, 2
	return

PokemonLeague_NorthPokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_POKEMON_LEAGUE_NORTH_POKEMON_CENTER_1F_LEAGUE_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

PokemonLeague_NorthPokemonCenter_1F_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart PokemonLeague_NorthPokemonCenter_1F_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
PokemonLeague_NorthPokemonCenter_1F_Pokemart:
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_FULL_RESTORE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	pokemartlistend

@ The door guards only check for FLAG_BADGE06_GET because Winonas badge is the only one that can be skipped
@ Its assumed the player has the remaining badges
PokemonLeague_NorthPokemonCenter_1F_EventScript_DoorGuard::
	lockall
	goto_if_set FLAG_ENTERED_ELITE_FOUR, PokemonLeague_NorthPokemonCenter_1F_EventScript_GoForth
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	call_if_ge VAR_TEMP_0, 11, PokemonLeague_NorthPokemonCenter_1F_EventScript_PlayerMoveToFrontFromRight
	call_if_le VAR_TEMP_0, 8, PokemonLeague_NorthPokemonCenter_1F_EventScript_PlayerMoveToFrontFromLeft
	message PokemonLeague_NorthPokemonCenter_1F_Text_MustHaveAllGymBadges
	waitmessage
	delay 120
	goto_if_unset FLAG_BADGE06_GET, PokemonLeague_NorthPokemonCenter_1F_EventScript_NotAllBadges
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_NORTH_POKEMON_CENTER_1F_LEAGUE_GUARD_1, PokemonLeague_NorthPokemonCenter_1F_Movement_LeftGuardOutOfWay
	applymovement LOCALID_POKEMON_LEAGUE_NORTH_POKEMON_CENTER_1F_LEAGUE_GUARD_2, PokemonLeague_NorthPokemonCenter_1F_Movement_RightGuardOutOfWay
	waitmovement 0
	delay 10
	playfanfare MUS_OBTAIN_BADGE
	message PokemonLeague_NorthPokemonCenter_1F_Text_GoForth
	waitmessage
	waitfanfare
	closemessage
	copyobjectxytoperm LOCALID_POKEMON_LEAGUE_NORTH_POKEMON_CENTER_1F_LEAGUE_GUARD_1
	copyobjectxytoperm LOCALID_POKEMON_LEAGUE_NORTH_POKEMON_CENTER_1F_LEAGUE_GUARD_2
	setflag FLAG_ENTERED_ELITE_FOUR
	releaseall
	end

PokemonLeague_NorthPokemonCenter_1F_EventScript_PlayerMoveToFrontFromRight::
	applymovement LOCALID_PLAYER, PokemonLeague_NorthPokemonCenter_1F_Movement_MoveToFrontFromRight
	waitmovement 0
	return

PokemonLeague_NorthPokemonCenter_1F_EventScript_PlayerMoveToFrontFromLeft::
	applymovement LOCALID_PLAYER, PokemonLeague_NorthPokemonCenter_1F_Movement_MoveToFrontFromLeft
	waitmovement 0
	return

PokemonLeague_NorthPokemonCenter_1F_EventScript_NotAllBadges::
	playse SE_FAILURE
	msgbox PokemonLeague_NorthPokemonCenter_1F_Text_HaventObtainedAllBadges, MSGBOX_DEFAULT
	releaseall
	end

PokemonLeague_NorthPokemonCenter_1F_EventScript_GoForth::
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
	waitmovement 0
	msgbox PokemonLeague_NorthPokemonCenter_1F_Text_GoForth, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

PokemonLeague_NorthPokemonCenter_1F_Movement_MoveToFrontFromRight:
	walk_down
	walk_left
	walk_in_place_faster_up
	step_end

PokemonLeague_NorthPokemonCenter_1F_Movement_MoveToFrontFromLeft:
	walk_down
	walk_right
	walk_in_place_faster_up
	step_end

PokemonLeague_NorthPokemonCenter_1F_Movement_LeftGuardOutOfWay:
	walk_left
	walk_in_place_faster_down
	step_end

PokemonLeague_NorthPokemonCenter_1F_Movement_RightGuardOutOfWay:
	walk_right
	walk_in_place_faster_down
	step_end

PokemonLeague_NorthPokemonCenter_1F_Text_MustHaveAllGymBadges:
	.string "Beyond this point, only those TRAINERS\n"
	.string "who have collected all the GYM BADGES\l"
	.string "are permitted to enter.\p"
	.string "TRAINER, let us confirm that you have\n"
	.string "all the GYM BADGES.$"

PokemonLeague_NorthPokemonCenter_1F_Text_HaventObtainedAllBadges:
	.string "You haven't obtained all the BADGES.\p"
	.string "If you're bound for the POKéMON\n"
	.string "LEAGUE, you must return with them.$"

PokemonLeague_NorthPokemonCenter_1F_Text_GoForth:
	.string "TRAINER! Believe in yourself and your\n"
	.string "POKéMON, and go forth!$"
