MtCoronet_1F_North_Room1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MtCoronet_1F_North_Room1_OnTransitionSN
	.byte 0

MtCoronet_1F_North_Room1_OnTransitionSN:
	call MtCoronet_1F_North_Room1_EventScript_SNVis_FOG_GRUNTS
	end

MtCoronet_1F_North_Room1_EventScript_SNVis_FOG_GRUNTS:
	setflag FLAG_SN_HIDE_FOG_GRUNTS
	goto_if_unset FLAG_BADGE02_GET, MtCoronet_1F_North_Room1_EventScript_SNVis_FOG_GRUNTS_End
	goto_if_ge VAR_SINNOH_STORY, 33, MtCoronet_1F_North_Room1_EventScript_SNVis_FOG_GRUNTS_End
	clearflag FLAG_SN_HIDE_FOG_GRUNTS
MtCoronet_1F_North_Room1_EventScript_SNVis_FOG_GRUNTS_End:
	return

MtCoronet_1F_North_Room1_EventScript_SNFog1::
	msgbox MtCoronet_1F_North_Room1_Text_SNFog1, MSGBOX_NPC
	end

MtCoronet_1F_North_Room1_EventScript_SNFog2::
	msgbox MtCoronet_1F_North_Room1_Text_SNFog2, MSGBOX_NPC
	end

MtCoronet_1F_North_Room1_Text_SNFog1:
	.string "Grunt 1: The fog is so thick ahead I\n"
	.string "can’t even see my own hand!\p"
	.string "Can you use Defog so we can see?$"

MtCoronet_1F_North_Room1_Text_SNFog2:
	.string "Grunt 2: Hah? The POKéMON they gave me\n"
	.string "can’t use Defog, either.\p"
	.string "I think we’re stuck. Let’s wait till the\n"
	.string "others get here.$"
