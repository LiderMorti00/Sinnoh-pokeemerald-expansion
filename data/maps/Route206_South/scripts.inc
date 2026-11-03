Route206_South_MapScripts::
	.byte 0

Route206_South_EventScript_PtNpc1::
	msgbox Route206_South_Text_PtNpc1, MSGBOX_NPC
	end

Route206_South_Text_PtNpc1:
	.string "What's a Bicycle without this?\p"
	.string "You've got to have a Flag! It's a\n"
	.string "POKéMON Accessory!$"

Route206_South_EventScript_SNBikeOnly::
	specialvar VAR_RESULT, GetPlayerFacingDirection
	goto_if_ne VAR_RESULT, DIR_NORTH, Route206_South_EventScript_SNBikeOnly_End
	specialvar VAR_RESULT, GetPlayerAvatarBike
	goto_if_ne VAR_RESULT, 0, Route206_South_EventScript_SNBikeOnly_End
	lockall
	playse SE_PIN
	applymovement LOCALID_SN_GATE_W_SOUTH, Common_Movement_ExclamationMark
	applymovement LOCALID_SN_GATE_E_SOUTH, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route206_South_EventScript_SNBikeOnly_Text, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
Route206_South_EventScript_SNBikeOnly_End:
	end

Route206_South_EventScript_SNBikeOnly_Text:
	.string "Cycling Road is open only to cyclists.\n"
	.string "You must be on a Bicycle.$"

Route206_South_EventScript_SNGateGuard::
	msgbox Route206_South_Text_SNGateGuard, MSGBOX_NPC
	end

Route206_South_Text_SNGateGuard:
	.string "Cycling Road is one long slope.\p"
	.string "Riding down it on your BIKE is a real\n"
	.string "thrill, but going up takes some effort!\p"
	.string "Hold tight to your handlebars and\n"
	.string "enjoy the ride!$"
