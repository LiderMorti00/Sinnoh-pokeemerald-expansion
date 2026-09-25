JubilifeCity_PoketchCompany_F1_MapScripts::
	.byte 0

JubilifeCity_PoketchCompany_F1_EventScript_Receptionist::
	msgbox JubilifeCity_PoketchCompany_F1_Text_Receptionist, MSGBOX_NPC
	end

JubilifeCity_PoketchCompany_F1_EventScript_Engineer::
	msgbox JubilifeCity_PoketchCompany_F1_Text_Engineer, MSGBOX_NPC
	end

JubilifeCity_PoketchCompany_F1_Text_Receptionist:
	.string "This is the POKéTCH COMPANY. We\n"
	.string "make watches for Trainers!$"

JubilifeCity_PoketchCompany_F1_Text_Engineer:
	.string "Our watches track time, steps and\n"
	.string "even POKéMON happiness!$"

