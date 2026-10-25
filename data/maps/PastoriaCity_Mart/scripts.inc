PastoriaCity_Mart_MapScripts::
	.byte 0

PastoriaCity_Mart_Text_PtNpc1_0:
	.string "The POKéMON CROAGUNK is the city’s\n"
	.string "official mascot.\p"
	.string "CROAGUNK sure is purdy--we’re hopin’\n"
	.string "it’ll get popular ’round the world.$"

PastoriaCity_Mart_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox PastoriaCity_Mart_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Mart_Text_PtNpc2_0:
	.string "Put Seals on the Capsule, then put it\n"
	.string "on a POKé BALL...\p"
	.string "And done! Another POKé BALL made by\n"
	.string "me! It’s one of a kind!\p"
	.string "Giggle... Are you using Ball Capsules?$"

PastoriaCity_Mart_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox PastoriaCity_Mart_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_Mart_EventScript_PtSign1::
	msgbox PastoriaCity_Mart_Text_PtSign1, MSGBOX_SIGN
	end

PastoriaCity_Mart_Text_PtSign1:
	.string "It’s a wood carving of the POKéMON\n"
	.string "CROAGUNK.\p"
	.string "Even though it’s made of wood, it looks\n"
	.string "like it’s seeping poison...$"
