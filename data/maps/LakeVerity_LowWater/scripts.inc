LakeVerity_LowWater_MapScripts::
	.byte 0

LakeVerity_LowWater_Text_PtNpc1:
	.string "Rowan: {PLAYER}, how was Lake Valor?\n"
	.string "Anything to report?\p"
	.string "What? You’re just going there now?\n"
	.string "You’ve got to move faster than that!$"

LakeVerity_LowWater_EventScript_PtNpc1::
	msgbox LakeVerity_LowWater_Text_PtNpc1, MSGBOX_NPC
	end
