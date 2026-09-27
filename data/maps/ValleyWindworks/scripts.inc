ValleyWindworks_MapScripts::
	.byte 0

ValleyWindworks_EventScript_DoorGrunt::
	trainerbattle_single TRAINER_CHARLIE, ValleyWindworks_Text_DoorIntro, ValleyWindworks_Text_DoorDefeat, ValleyWindworks_EventScript_DoorGruntFlees
	msgbox ValleyWindworks_Text_DoorDefeat, MSGBOX_AUTOCLOSE
	end

ValleyWindworks_EventScript_DoorGruntFlees::
	msgbox ValleyWindworks_Text_DoorFlee, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_WINDWORKS_DOOR_GRUNT, Common_Movement_WalkUp
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_WINDWORKS_DOOR_GRUNT
	setflag FLAG_HIDE_WINDWORKS_DOOR_GRUNT
	playse SE_PIN
	msgbox ValleyWindworks_Text_Locked, MSGBOX_DEFAULT
	release
	end

ValleyWindworks_EventScript_SetStory21::
	setvar VAR_SINNOH_STORY, 21
	return

ValleyWindworks_EventScript_Locked::
	lockall
	goto_if_unset FLAG_HIDE_WINDWORKS_DOOR_GRUNT, ValleyWindworks_EventScript_DoorEnd
	checkitem ITEM_WORKS_KEY
	goto_if_eq VAR_RESULT, TRUE, ValleyWindworks_EventScript_OpenDoor
	msgbox ValleyWindworks_Text_Locked, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

ValleyWindworks_EventScript_OpenDoor::
ValleyWindworks_EventScript_Unlock::
	lockall
	msgbox ValleyWindworks_Text_Unlock, MSGBOX_DEFAULT
	closemessage
	releaseall
	end

ValleyWindworks_Text_DoorIntro:
	.string "GRUNT: The WINDWORKS belongs to\n"
	.string "TEAM GALACTIC now! Get lost!$"

ValleyWindworks_Text_DoorDefeat:
	.string "Tch! Lucky kid!$"

ValleyWindworks_Text_DoorFlee:
	.string "GRUNT: You won't get inside\n"
	.string "anyway! I'm locking the door! The\l"
	.string "key is with my buddies in FLOAROMA\n"
	.string "MEADOW... Oops!$"

ValleyWindworks_Text_Locked:
	.string "The door is locked tight. There\n"
	.string "must be a key somewhere...$"

ValleyWindworks_Text_Unlock:
	.string "{PLAYER} used the WORKS KEY. The\n"
	.string "door is unlocked!$"

ValleyWindworks_EventScript_DoorEnd::
	releaseall
	end

ValleyWindworks_EventScript_Looker::
	lock
	faceplayer
	msgbox ValleyWindworks_Text_Looker, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_WINDWORKS_LOOKER
	setflag FLAG_HIDE_WINDWORKS_LOOKER
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

ValleyWindworks_Text_Looker:
	.string "LOOKER: So it was you who drove\n"
	.string "TEAM GALACTIC out of the\l"
	.string "WINDWORKS? Impressive!\p"
	.string "My investigation tells me they\n"
	.string "have a building in ETERNA CITY. I\l"
	.string "will keep watching them, yes?$"

ValleyWindworks_EventScript_PaintedSign1::
	msgbox ValleyWindworks_Text_PaintedSign1, MSGBOX_SIGN
	end

ValleyWindworks_Text_PaintedSign1:
	.string "VALLEY WINDWORKS$"
