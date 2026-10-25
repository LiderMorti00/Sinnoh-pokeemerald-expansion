LakeAcuity_LowWater_MapScripts::
	.byte 0

LakeAcuity_LowWater_Text_PtNpc1:
	.string "{PLAYER}: What’d I say? I told you I’ll\n"
	.string "be OK by myself.\p"
	.string "If you haven’t gone yet, go challenge\n"
	.string "the Sunyshore Gym.\p"
	.string "I have a feeling things are going to\n"
	.string "keep getting tougher.\p"
	.string "It could be rough if you don’t collect\n"
	.string "up some Gym Badges.$"

LakeAcuity_LowWater_EventScript_PtNpc1::
	msgbox LakeAcuity_LowWater_Text_PtNpc1, MSGBOX_NPC
	end
