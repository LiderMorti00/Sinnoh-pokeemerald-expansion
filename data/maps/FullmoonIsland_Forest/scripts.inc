FullmoonIsland_Forest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, FullmoonIsland_Forest_OnTransitionSN
	.byte 0

FullmoonIsland_Forest_OnTransitionSN:
	call FullmoonIsland_Forest_EventScript_SNVis_CRESSELIA
	end

FullmoonIsland_Forest_EventScript_SNVis_CRESSELIA:
	setflag FLAG_SN_HIDE_CRESSELIA
	goto_if_unset FLAG_SYS_GAME_CLEAR, FullmoonIsland_Forest_EventScript_SNVis_CRESSELIA_End
	goto_if_set FLAG_SN_DONE_CRESSELIA, FullmoonIsland_Forest_EventScript_SNVis_CRESSELIA_End
	clearflag FLAG_SN_HIDE_CRESSELIA
FullmoonIsland_Forest_EventScript_SNVis_CRESSELIA_End:
	return

FullmoonIsland_Forest_EventScript_SNCRESSELIA::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CRESSELIA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	msgbox FullmoonIsland_Forest_EventScript_SNCRESSELIA_TFled, MSGBOX_DEFAULT
	closemessage
	playse SE_M_TELEPORT
	fadescreen FADE_TO_WHITE
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_DONE_CRESSELIA
	setflag FLAG_SN_HIDE_CRESSELIA
	fadescreen FADE_FROM_WHITE
	waitse
	setvar VAR_0x8004, SPECIES_CRESSELIA
	setvar VAR_0x8005, 50
	special SinnohAddRoamer
	msgbox FullmoonIsland_Forest_Text_SNLunarWing, MSGBOX_DEFAULT
	giveitem ITEM_LUNAR_WING
	release
	end

FullmoonIsland_Forest_EventScript_SNCRESSELIA_TFled:
	.string "CRESSELIA fled!\p"
	.string "It seems to be wandering all over\n"
	.string "Sinnoh!$"

FullmoonIsland_Forest_Text_SNLunarWing:
	.string "Something is glittering where\n"
	.string "CRESSELIA was standing...$"
