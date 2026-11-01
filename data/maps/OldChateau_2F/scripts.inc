OldChateau_2F_MapScripts::
	.byte 0

OldChateau_2F_EventScript_TV::
	goto_if_unset FLAG_SYS_GAME_CLEAR, OldChateau_2F_EventScript_TVOnly
	goto_if_set FLAG_SN_DONE_ROTOM, OldChateau_2F_EventScript_TVOnly
	goto OldChateau_2F_EventScript_SNRotom
	end

OldChateau_2F_EventScript_TVOnly:
	msgbox OldChateau_2F_Text_TV, MSGBOX_SIGN
	end

OldChateau_2F_EventScript_GhostGirl::
	lock
	msgbox OldChateau_2F_Text_GhostGirl, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CHATEAU_GHOST_GIRL, Common_Movement_FaceDown
	waitmovement 0
	delay 16
	fadescreenswapbuffers FADE_TO_WHITE
	removeobject LOCALID_CHATEAU_GHOST_GIRL
	fadescreenswapbuffers FADE_FROM_WHITE
	release
	end

OldChateau_2F_Text_TV:
	.string "The TV has an oddly malevolent feel...\p"
	.string "It's as if it is staring...$"

OldChateau_2F_Text_GhostGirl:
	.string "...$"

OldChateau_2F_EventScript_SNRotom::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_ROTOM, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_ROTOM, 20
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, OldChateau_2F_EventScript_SNRotom_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, OldChateau_2F_EventScript_SNRotom_Ran
	setflag FLAG_SN_DONE_ROTOM
	
	release
	end

OldChateau_2F_EventScript_SNRotom_Ran:
	setvar VAR_0x8004, SPECIES_ROTOM
	release
	end
