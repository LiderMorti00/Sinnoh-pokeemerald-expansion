LostTower_4F_MapScripts::
	.byte 0

LostTower_4F_EventScript_Rebekah::
	trainerbattle_single TRAINER_TIMOTHY_4, LostTower_4F_Text_RebekahIntro, LostTower_4F_Text_RebekahDefeat
	msgbox LostTower_4F_Text_RebekahPost, MSGBOX_AUTOCLOSE
	end

LostTower_4F_Text_RebekahIntro:
	.string "I need to shake off my sorrow... Please,\n"
	.string "battle with me!$"

LostTower_4F_Text_RebekahDefeat:
	.string "My sorrow has deepened...$"

LostTower_4F_Text_RebekahPost:
	.string "I won’t ever forget the POKéMON that\n"
	.string "I’ve spent time with, however fleeting.$"

LostTower_4F_EventScript_MikeNat::
	trainerbattle_double TRAINER_TIMOTHY_5, LostTower_4F_Text_MikeNatIntro, LostTower_4F_Text_MikeNatDefeat, LostTower_4F_Text_MikeNatNotEnough
	msgbox LostTower_4F_Text_MikeNatPost, MSGBOX_AUTOCLOSE
	end

LostTower_4F_Text_MikeNatIntro:
	.string "Let’s battle!$"

LostTower_4F_Text_MikeNatDefeat:
	.string "I lost!$"

LostTower_4F_Text_MikeNatPost:
	.string "That was a good battle.$"

LostTower_4F_Text_MikeNatNotEnough:
	.string "You need two POKéMON to battle us!$"

LostTower_4F_EventScript_BethBob::
	trainerbattle_double TRAINER_SHELBY_1, LostTower_4F_Text_BethBobIntro, LostTower_4F_Text_BethBobDefeat, LostTower_4F_Text_BethBobNotEnough
	msgbox LostTower_4F_Text_BethBobPost, MSGBOX_AUTOCLOSE
	end

LostTower_4F_Text_BethBobIntro:
	.string "Let’s battle!$"

LostTower_4F_Text_BethBobDefeat:
	.string "I lost!$"

LostTower_4F_Text_BethBobPost:
	.string "That was a good battle.$"

LostTower_4F_Text_BethBobNotEnough:
	.string "You need two POKéMON to battle us!$"
