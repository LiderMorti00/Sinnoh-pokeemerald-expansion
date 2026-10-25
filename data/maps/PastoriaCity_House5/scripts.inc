PastoriaCity_House5_MapScripts::
	.byte 0

PastoriaCity_House5_Text_PtNpc1:
	.string "Planting Berries is good for POKéMON.\p"
	.string "It provides them with more things to\n"
	.string "eat in the wild.$"

PastoriaCity_House5_EventScript_PtNpc1::
	msgbox PastoriaCity_House5_Text_PtNpc1, MSGBOX_NPC
	end

PastoriaCity_House5_Text_PtNpc2_0:
	.string "My sister gathers Berries every day!\n"
	.string "Please come visit again!\p"
	.string "We cook the Berries, too! We mix them\n"
	.string "up! They’re yummy!$"

PastoriaCity_House5_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox PastoriaCity_House5_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
