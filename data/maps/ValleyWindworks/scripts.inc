ValleyWindworks_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ValleyWindworks_OnTransitionSN
	.byte 0

ValleyWindworks_EventScript_DoorGrunt::
	trainerbattle_single TRAINER_CHARLIE, ValleyWindworks_Text_DoorIntro, ValleyWindworks_Text_DoorDefeat, ValleyWindworks_EventScript_DoorGruntFlees
	msgbox ValleyWindworks_Text_DoorDefeat, MSGBOX_AUTOCLOSE
	end

ValleyWindworks_EventScript_DoorGruntFlees::
	msgbox ValleyWindworks_Text_DoorFlee, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WINDWORKS_DOOR_GRUNT, Common_Movement_WalkUp
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_WINDWORKS_DOOR_GRUNT
	setflag FLAG_HIDE_WINDWORKS_DOOR_GRUNT
	playse SE_PIN
	msgbox ValleyWindworks_Text_Locked, MSGBOX_DEFAULT
	release
	end

ValleyWindworks_EventScript_SetStory21::
	setvar VAR_SINNOH_STORY, 21
	return

ValleyWindworks_EventScript_Locked::
	lockall
	goto_if_unset FLAG_HIDE_WINDWORKS_DOOR_GRUNT, ValleyWindworks_EventScript_DoorEnd
	checkitem ITEM_WORKS_KEY
	goto_if_eq VAR_RESULT, TRUE, ValleyWindworks_EventScript_OpenDoor
	msgbox ValleyWindworks_Text_Locked, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

ValleyWindworks_EventScript_OpenDoor::
ValleyWindworks_EventScript_Unlock::
	lockall
	msgbox ValleyWindworks_Text_Unlock, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

ValleyWindworks_Text_DoorIntro:
	.string "GRUNT: The WINDWORKS belongs to\n"
	.string "TEAM GALACTIC now! Get lost!$"

ValleyWindworks_Text_DoorDefeat:
	.string "Tch! Lucky kid!$"

ValleyWindworks_Text_DoorFlee:
	.string "Isn’t that just great. Getting owned\n"
	.string "by some kid.\p"
	.string "But you can’t do a thing if I lock\n"
	.string "myself in with my Works Key!\p"
	.string "That’s right, the other Works Key’s not\n"
	.string "here!\p"
	.string "My cohorts in the flower patch have\n"
	.string "the only other one!\p"
	.string "Hahaha! In that sense, I’m no longer\n"
	.string "the loser!$"

ValleyWindworks_Text_Locked:
	.string "It’s locked from inside!$"

ValleyWindworks_Text_Unlock:
	.string "Ker-chunk!\p"
	.string "The door to Valley Windworks opened!$"

ValleyWindworks_EventScript_DoorEnd::
	releaseall
	end

ValleyWindworks_EventScript_Looker::
	lock
	faceplayer
	msgbox ValleyWindworks_Text_Looker, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_WINDWORKS_LOOKER
	setflag FLAG_HIDE_WINDWORKS_LOOKER
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

ValleyWindworks_Text_Looker:
	.string "Looker: Ah, yes. It is you, yes.\p"
	.string "I have heard that the Team Galactic\n"
	.string "appeared at this power plant.\p"
	.string "I have, therefore, come running. So,\n"
	.string "the Team Galactic. Where are they?\p"
	.string "...\p"
	.string "You have run them off, you say? You\n"
	.string "are a Trainer, but...?\p"
	.string "Very well! I shall go investigate\n"
	.string "inside!\p"
	.string "Looker: Magnificent! Yes, it is! What\n"
	.string "you have said, it is all true!\p"
	.string "Superb! Though you are young, you are\n"
	.string "a Trainer through and through!\p"
	.string "Very well! I shall pursue the culprits!\p"
	.string "I have received tips that the Team\n"
	.string "Galactic hideout is in Eterna City.\p"
	.string "To there, I must be off!$"

ValleyWindworks_EventScript_Sign1::
	msgbox ValleyWindworks_Text_Sign1, MSGBOX_SIGN
	end

ValleyWindworks_Text_Sign1:
	.string "VALLEY WINDWORKS$"

ValleyWindworks_OnTransitionSN:
	call ValleyWindworks_EventScript_SNVis_DRIFLOON
	end

ValleyWindworks_EventScript_SNVis_DRIFLOON:
	setflag FLAG_SN_HIDE_DRIFLOON
	goto_if_lt VAR_SINNOH_STORY, 22, ValleyWindworks_EventScript_SNVis_DRIFLOON_End
	goto_if_set FLAG_SN_DONE_DRIFLOON, ValleyWindworks_EventScript_SNVis_DRIFLOON_End
	clearflag FLAG_SN_HIDE_DRIFLOON
ValleyWindworks_EventScript_SNVis_DRIFLOON_End:
	return

ValleyWindworks_EventScript_SNDRIFLOON::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DRIFLOON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_DRIFLOON, 22
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ValleyWindworks_EventScript_SNDRIFLOON_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ValleyWindworks_EventScript_SNDRIFLOON_Ran
	setflag FLAG_SN_DONE_DRIFLOON
	setflag FLAG_SN_HIDE_DRIFLOON
	goto Common_EventScript_RemoveStaticPokemon
	end

ValleyWindworks_EventScript_SNDRIFLOON_Ran:
	setvar VAR_0x8004, SPECIES_DRIFLOON
	goto Common_EventScript_LegendaryFlewAway
	end

ValleyWindworks_EventScript_SNHoneyTree::
	lock
	goto_if_ne VAR_SN_HONEY_TREE, 17, ValleyWindworks_EventScript_SNHoneyTree_Fresh
	special SinnohHoneyReady
	goto_if_eq VAR_RESULT, TRUE, ValleyWindworks_EventScript_SNHoneyTree_Battle
	msgbox SN_HoneyTree_Text_Wait, MSGBOX_DEFAULT
	release
	end
ValleyWindworks_EventScript_SNHoneyTree_Battle:
	setvar VAR_SN_HONEY_TREE, 0
	setwildbattle SPECIES_WURMPLE, 5
	special SinnohHoneyTreeMon
	msgbox SN_HoneyTree_Text_Mon, MSGBOX_DEFAULT
	closemessage
	dowildbattle
	release
	end
ValleyWindworks_EventScript_SNHoneyTree_Fresh:
	msgbox SN_HoneyTree_Text_Scent, MSGBOX_DEFAULT
	checkitem ITEM_HONEY
	goto_if_eq VAR_RESULT, FALSE, ValleyWindworks_EventScript_SNHoneyTree_End
	msgbox SN_HoneyTree_Text_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ValleyWindworks_EventScript_SNHoneyTree_End
	removeitem ITEM_HONEY
	setvar VAR_SN_HONEY_TREE, 17
	special SinnohHoneySlather
	msgbox SN_HoneyTree_Text_Done, MSGBOX_DEFAULT
ValleyWindworks_EventScript_SNHoneyTree_End:
	release
	end
