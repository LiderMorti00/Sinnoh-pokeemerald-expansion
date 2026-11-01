CelesticTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CelesticTown_OnTransitionSN
	.byte 0

CelesticTown_EventScript_PtNpc1::
	msgbox CelesticTown_Text_PtNpc1, MSGBOX_NPC
	end

CelesticTown_Text_PtNpc1:
	.string "Howdy! Studying up on local history?$"

CelesticTown_EventScript_PtNpc2::
	msgbox CelesticTown_Text_PtNpc2, MSGBOX_NPC
	end

CelesticTown_Text_PtNpc2:
	.string "Hey, do you know what they say?\p"
	.string "They say a POKéMON created the\n"
	.string "SINNOH region.$"

CelesticTown_EventScript_PtNpc3::
	msgbox CelesticTown_Text_PtNpc3, MSGBOX_NPC
	end

CelesticTown_Text_PtNpc3:
	.string "There's no POKéMON Mart in this town...\p"
	.string "Instead, you can buy and sell items in\n"
	.string "this house here.$"

CelesticTown_EventScript_PtSign1::
	msgbox CelesticTown_Text_PtSign1, MSGBOX_SIGN
	end

CelesticTown_Text_PtSign1:
	.string "CELESTIC TOWN The Past Lives$"

CelesticTown_OnTransitionSN:
	call CelesticTown_EventScript_SNVis_CEL_GRUNT
	end

CelesticTown_EventScript_SNVis_CEL_GRUNT:
	setflag FLAG_SN_HIDE_CEL_GRUNT
	goto_if_unset FLAG_BADGE05_GET, CelesticTown_EventScript_SNVis_CEL_GRUNT_End
	goto_if_defeated TRAINER_ELLIOT_1, CelesticTown_EventScript_SNVis_CEL_GRUNT_End
	clearflag FLAG_SN_HIDE_CEL_GRUNT
CelesticTown_EventScript_SNVis_CEL_GRUNT_End:
	return

CelesticTown_EventScript_SNCEL_GRUNT::
	trainerbattle_single TRAINER_ELLIOT_1, CelesticTown_EventScript_SNCEL_GRUNT_Intro, CelesticTown_EventScript_SNCEL_GRUNT_Defeat, CelesticTown_EventScript_SNCEL_GRUNT_Won
	msgbox CelesticTown_EventScript_SNCEL_GRUNT_Post, MSGBOX_AUTOCLOSE
	end

CelesticTown_EventScript_SNCEL_GRUNT_Won:
	lock
	msgbox CelesticTown_EventScript_SNCEL_GRUNT_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_CEL_GRUNT
	fadescreen FADE_FROM_BLACK
	release
	end
CelesticTown_EventScript_SNCEL_GRUNT_Intro:
	.string "You dare to oppose Team Galactic?\p"
	.string "That means you’re taking on the world...\n"
	.string "No, the universe, even!$"

CelesticTown_EventScript_SNCEL_GRUNT_Defeat:
	.string "Too much to handle...$"

CelesticTown_EventScript_SNCEL_GRUNT_Post:
	.string "Too much to handle... I can’t do\n"
	.string "anything here...\p"
	.string "This place is nothing! I’ll be happily\n"
	.string "rid of this place!$"
