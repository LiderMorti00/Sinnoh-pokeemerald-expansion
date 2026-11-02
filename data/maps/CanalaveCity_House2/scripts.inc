CanalaveCity_House2_MapScripts::
	.byte 0

CanalaveCity_House2_Text_PtNpc1:
	.string "You’ve come to make me force your\n"
	.string "POKéMON to forget some moves?$"

CanalaveCity_House2_EventScript_SNMoveDeleter::
	lockall
	faceplayer
	msgbox LilycoveCity_MoveDeletersHouse_Text_ICanMakeMonForgetMove, MSGBOX_YESNO
	switch VAR_RESULT
	case YES, LilycoveCity_MoveDeletersHouse_EventScript_ChooseMonAndMoveToForget
	case NO, LilycoveCity_MoveDeletersHouse_EventScript_ComeAgain
	releaseall
	end
