MtCoronet_1F_South_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtCoronet_1F_South_OnTransitionSN
	.byte 0

MtCoronet_1F_South_OnTransitionSN:
	call MtCoronet_1F_South_EventScript_SNVis_CORONET_CYRUS
	end

MtCoronet_1F_South_EventScript_SNVis_CORONET_CYRUS:
	setflag FLAG_SN_HIDE_CORONET_CYRUS
	goto_if_lt VAR_SINNOH_STORY, 28, MtCoronet_1F_South_EventScript_SNVis_CORONET_CYRUS_End
	goto_if_set FLAG_SN_MET_CYRUS_CORONET, MtCoronet_1F_South_EventScript_SNVis_CORONET_CYRUS_End
	clearflag FLAG_SN_HIDE_CORONET_CYRUS
MtCoronet_1F_South_EventScript_SNVis_CORONET_CYRUS_End:
	return

MtCoronet_1F_South_EventScript_SNCyrus::
	lock
	msgbox MtCoronet_1F_South_EventScript_SNCyrus_T1, MSGBOX_DEFAULT
	faceplayer
	msgbox MtCoronet_1F_South_EventScript_SNCyrus_T2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_MET_CYRUS_CORONET
		sn_walkto LOCALID_SN_CORONET_CYRUS, 8, 16, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_CORONET_CYRUS
	removeobject LOCALID_SN_CORONET_CYRUS
	setflag FLAG_SN_HIDE_CORONET_CYRUS
	release
	end

MtCoronet_1F_South_EventScript_SNCyrus_T1:
	.string "...In a newly created world...\p"
	.string "A world where only time flowed and\n"
	.string "space expanded...\p"
	.string "There should have been no strife.$"

MtCoronet_1F_South_EventScript_SNCyrus_T2:
	.string "But what became of that world?\p"
	.string "Because the human spirit is weak and\n"
	.string "incomplete, strife has spread...\p"
	.string "This world is being ruined by it...\p"
	.string "I find this state of affairs to be\n"
	.string "deplorable...$"
