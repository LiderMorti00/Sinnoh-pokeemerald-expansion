PokemonLeague_ChampionRoom_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_ChampionRoom_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionRoom_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionRoom_OnFrame
	.byte 0

PokemonLeague_ChampionRoom_OnTransition:
	end

PokemonLeague_ChampionRoom_OnWarp:
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionRoom_EventScript_PlayerTurnNorth
	.2byte 0

PokemonLeague_ChampionRoom_EventScript_PlayerTurnNorth::
	turnobject LOCALID_PLAYER, DIR_NORTH
	end

PokemonLeague_ChampionRoom_OnFrame:
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionRoom_EventScript_EnterRoom
	.2byte 0

PokemonLeague_ChampionRoom_EventScript_EnterRoom::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp4
	waitmovement 0
	delay 40
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionRoom_Movement_PlayerApproachWallace
	waitmovement 0
	setvar VAR_TEMP_1, 1
	goto PokemonLeague_ChampionRoom_EventScript_Wallace
	releaseall
	end

PokemonLeague_ChampionRoom_Movement_PlayerApproachWallace:
	walk_up
	walk_up
	step_end

PokemonLeague_ChampionRoom_EventScript_Wallace::
	playbgm MUS_ENCOUNTER_CHAMPION, FALSE
	msgbox PokemonLeague_ChampionRoom_Text_IntroSpeech, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_WALLACE, PokemonLeague_ChampionRoom_Text_Defeat
	goto PokemonLeague_ChampionRoom_EventScript_Defeated
	end

PokemonLeague_ChampionRoom_EventScript_Defeated::
	playse SE_DOOR
	setmetatile 6, 1, METATILE_EliteFour_OpenDoorChampion_Frame, FALSE
	setmetatile 6, 2, METATILE_EliteFour_OpenDoorChampion_Opening, FALSE
	special DrawWholeMapView
	msgbox PokemonLeague_ChampionRoom_Text_PostBattleSpeech, MSGBOX_DEFAULT
	closemessage
	delay 30
	applymovement LOCALID_POKEMON_LEAGUE_CHAMPION_ROOM_CHAMPIONS_ROOM_WALLACE, PokemonLeague_ChampionRoom_Movement_WallaceExitStart
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionRoom_Movement_PlayerExitStart
	waitmovement 0
	closemessage
	applymovement LOCALID_POKEMON_LEAGUE_CHAMPION_ROOM_CHAMPIONS_ROOM_WALLACE, PokemonLeague_ChampionRoom_Movement_WallaceExit
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionRoom_Movement_PlayerExit
	waitmovement 0
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME_ROOM, 7, 16
	waitstate
	releaseall
	end

PokemonLeague_ChampionRoom_Movement_PlayerExitStart:
	walk_up
	walk_up
	step_end

PokemonLeague_ChampionRoom_Movement_PlayerExit:
	walk_up
	delay_16
	walk_up
	delay_8
	set_invisible
	step_end

PokemonLeague_ChampionRoom_Movement_WallaceExitStart:
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

PokemonLeague_ChampionRoom_Movement_WallaceExit:
	walk_up
	delay_8
	set_invisible
	step_end

PokemonLeague_ChampionRoom_Text_IntroSpeech:
	.string "Cynthia: Have you been keeping well?\p"
	.string "Thank you for Mt. Coronet. And for the\n"
	.string "Distortion World.\p"
	.string "I’m truly grateful.\p"
	.string "Together, you and your POKéMON\n"
	.string "overcame all the challenges you\p"
	.string "faced, however difficult.\p"
	.string "It means that you’ve triumphed over\n"
	.string "any personal weaknesses, too.\p"
	.string "The power you learned... I can feel it\n"
	.string "emanating from you.\p"
	.string "But that’s enough talk. Let’s get on\n"
	.string "with why you’re here.\p"
	.string "As the POKéMON League Champion, I\n"
	.string "accept your challenge!$"

PokemonLeague_ChampionRoom_Text_Defeat:
	.string "Cynthia: That was excellent. Truly, an\n"
	.string "outstanding battle.\p"
	.string "You gave the support your POKéMON\n"
	.string "needed to maximize their power.\p"
	.string "And you guided them with certainty to\n"
	.string "secure victory.\p"
	.string "You have both passion and calculating\n"
	.string "coolness.\p"
	.string "Together, you and your POKéMON can\n"
	.string "overcome any challenge\p"
	.string "that may come your way.\p"
	.string "Those are the impressions I got from\n"
	.string "our battle.\p"
	.string "I’m glad I got to take part in the\n"
	.string "crowning of Sinnoh’s new Champion!$"

PokemonLeague_ChampionRoom_Text_PostBattleSpeech:
	.string "Come with me. We’ll take the lift.$"

PokemonLeague_ChampionRoom_Text_WallaceWaitOutside:
	.string "WALLACE: I'm sorry, but…\p"
	.string "From here on, only those TRAINERS who\n"
	.string "have become CHAMPIONS may enter.\p"
	.string "You'll have to wait outside with\n"
	.string "PROF. BIRCH.$"

PokemonLeague_ChampionRoom_Text_MayCongratulations:
	.string "MAY: Groan…\p"
	.string "… … … … … … … …\n"
	.string "… … … … … … … …\p"
	.string "I'm just joking! That's okay!\n"
	.string "That's the rule!\p"
	.string "{PLAYER}{KUN}!\n"
	.string "Honestly, congratulations!$"

PokemonLeague_ChampionRoom_Text_BrendanCongratulations:
	.string "BRENDAN: Whaaaat?! … … … … …\n"
	.string "… … … … … … … …\p"
	.string "It can't be helped if that's the rule.\p"
	.string "{PLAYER}, way to go!\n"
	.string "Congratulations!$"
