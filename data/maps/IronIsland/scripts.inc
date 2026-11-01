IronIsland_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, IronIsland_OnTransitionSN
	.byte 0

IronIsland_Text_PtNpc1:
	.string "Do you want to sail somewhere?$"

IronIsland_EventScript_PtNpc1::
	msgbox IronIsland_Text_PtNpc1, MSGBOX_NPC
	end

IronIsland_EventScript_SailorBack::
	lock
	faceplayer
	msgbox IronIsland_Text_SailorBack, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, IronIsland_EventScript_SailorBackNo
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_CANALAVE_CITY, 15, 47
	waitstate
	release
	end

IronIsland_EventScript_SailorBackNo::
	release
	end

IronIsland_Text_SailorBack:
	.string "Shall we head back to\n"
	.string "CANALAVE CITY?$"

IronIsland_OnTransitionSN:
	call IronIsland_EventScript_SNVis_IRON_RILEY
	end

IronIsland_EventScript_SNVis_IRON_RILEY:
	setflag FLAG_SN_HIDE_IRON_RILEY
	goto_if_set FLAG_SN_RECEIVED_HM_STRENGTH, IronIsland_EventScript_SNVis_IRON_RILEY_End
	clearflag FLAG_SN_HIDE_IRON_RILEY
IronIsland_EventScript_SNVis_IRON_RILEY_End:
	return

IronIsland_EventScript_SNRiley::
	lock
	faceplayer
	msgbox IronIsland_EventScript_SNRiley_T1, MSGBOX_DEFAULT
	giveitem ITEM_HM_STRENGTH
	setflag FLAG_SN_RECEIVED_HM_STRENGTH
	goto_if_set FLAG_BADGE06_GET, IronIsland_EventScript_SNRiley_HasBadge
	msgbox IronIsland_EventScript_SNRiley_T2, MSGBOX_DEFAULT
	goto IronIsland_EventScript_SNRiley_Leave
IronIsland_EventScript_SNRiley_HasBadge:
	msgbox IronIsland_EventScript_SNRiley_T3, MSGBOX_DEFAULT
IronIsland_EventScript_SNRiley_Leave:
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_IRON_RILEY
	fadescreen FADE_FROM_BLACK
	release
	end
IronIsland_EventScript_SNRiley_T1:
	.string "...You are?\p"
	.string "OK, you’re {PLAYER}. I’m Riley.\p"
	.string "I’m a Trainer, and yes, it is a bit odd\n"
	.string "that I would be training here.\p"
	.string "Anyway, it’s always nice to meet\n"
	.string "another Trainer. Here’s a gift.$"

IronIsland_EventScript_SNRiley_T2:
	.string "Riley: That Hidden Machine contains\n"
	.string "the move Strength.\p"
	.string "To use it out of battle, you need the\n"
	.string "Mine Badge from Canalave Gym.\p"
	.string "I’ll be training inside. You can join me\n"
	.string "if you’d like.$"

IronIsland_EventScript_SNRiley_T3:
	.string "Riley: That Hidden Machine contains\n"
	.string "the move Strength.\p"
	.string "To use it out of battle, you need the\n"
	.string "Badge from Canalave Gym...\p"
	.string "Oh, never mind, you’ve already got the\n"
	.string "Mine Badge. My bad.\p"
	.string "I’ll be training inside. You can join me\n"
	.string "if you’d like.$"
