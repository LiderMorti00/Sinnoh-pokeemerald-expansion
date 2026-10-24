OldChateau_2F_MapScripts::
	.byte 0

OldChateau_2F_EventScript_TV::
	msgbox OldChateau_2F_Text_TV, MSGBOX_SIGN
	end

OldChateau_2F_EventScript_GhostGirl::
	lock
	msgbox OldChateau_2F_Text_GhostGirl, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_CHATEAU_GHOST_GIRL, Common_Movement_FaceDown
	waitmovement 0
	delay 16
	fadescreenswapbuffers FADE_TO_WHITE
	removeobject LOCALID_CHATEAU_GHOST_GIRL
	fadescreenswapbuffers FADE_FROM_WHITE
	release
	end

OldChateau_2F_Text_TV:
	.string "The TV has an oddly malevolent feel...\p"
	.string "It's as if it is staring...$"

OldChateau_2F_Text_GhostGirl:
	.string "...$"

