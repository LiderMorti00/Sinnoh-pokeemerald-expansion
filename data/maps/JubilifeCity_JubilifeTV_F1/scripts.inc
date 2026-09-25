JubilifeCity_JubilifeTV_F1_MapScripts::
	.byte 0

JubilifeCity_JubilifeTV_F1_EventScript_Receptionist::
	msgbox JubilifeCity_JubilifeTV_F1_Text_Receptionist, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_EventScript_Visitor::
	msgbox JubilifeCity_JubilifeTV_F1_Text_Visitor, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_Receptionist:
	.string "Welcome to JUBILIFE TV! We\n"
	.string "broadcast all over the Sinnoh\l"
	.string "region.$"

JubilifeCity_JubilifeTV_F1_Text_Visitor:
	.string "I'm hoping to spot a famous TV\n"
	.string "star today!$"

