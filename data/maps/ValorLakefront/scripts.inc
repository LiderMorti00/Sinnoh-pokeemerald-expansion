ValorLakefront_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ValorLakefront_OnTransitionSN
	.byte 0

ValorLakefront_EventScript_PtSign1::
	msgbox ValorLakefront_Text_PtSign1, MSGBOX_SIGN
	end

ValorLakefront_Text_PtSign1:
	.string "Seven Stars Restaurant More Flavor\n"
	.string "Than You Can Wish For$"

ValorLakefront_OnTransitionSN:
	call ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA
	end

ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA:
	setflag FLAG_SN_HIDE_VALOR_CYNTHIA
	goto_if_unset FLAG_BADGE05_GET, ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA_End
	goto_if_set FLAG_SN_RECEIVED_SECRET_POTION, ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA_End
	clearflag FLAG_SN_HIDE_VALOR_CYNTHIA
ValorLakefront_EventScript_SNVis_VALOR_CYNTHIA_End:
	return

ValorLakefront_EventScript_SNCynthia::
	lock
	faceplayer
	msgbox ValorLakefront_EventScript_SNCynthia_T1, MSGBOX_DEFAULT
	msgbox ValorLakefront_EventScript_SNCynthia_T2, MSGBOX_DEFAULT
	giveitem ITEM_SECRET_POTION
	setflag FLAG_SN_RECEIVED_SECRET_POTION
	msgbox ValorLakefront_EventScript_SNCynthia_T3, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_VALOR_CYNTHIA
	fadescreen FADE_FROM_BLACK
	release
	end
ValorLakefront_EventScript_SNCynthia_T1:
	.string "Cynthia: Yes, that’s right. By the café\n"
	.string "on Route 210.\p"
	.string "You’ve seen that group of PSYDUCK\n"
	.string "huddled with their heads in their,\p"
	.string "uh, hands...?$"

ValorLakefront_EventScript_SNCynthia_T2:
	.string "Anyway, what you should do is use this\n"
	.string "medicine on the PSYDUCK.\p"
	.string "You’re working on a POKéDEX, so it\n"
	.string "would be worthwhile for you.$"

ValorLakefront_EventScript_SNCynthia_T3:
	.string "Cynthia: I went on a big adventure with\n"
	.string "a POKéDEX when I was younger.\p"
	.string "I hope you get to meet every kind of\n"
	.string "POKéMON there is to see.\p"
	.string "It may help you with the secret of the\n"
	.string "mirage POKéMON.\p"
	.string "See you later!$"
