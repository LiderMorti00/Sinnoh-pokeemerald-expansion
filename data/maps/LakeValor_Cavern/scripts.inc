LakeValor_Cavern_MapScripts::
	.byte 0

LakeValor_Cavern_Text_PtNpc1:
	.string "The mission is proceeding without a\n"
	.string "hitch. The boss should be pleased.\p"
	.string "Everything is for everyone, and for\n"
	.string "the good of Team Galactic!$"

LakeValor_Cavern_EventScript_PtNpc1::
	msgbox LakeValor_Cavern_Text_PtNpc1, MSGBOX_NPC
	end
