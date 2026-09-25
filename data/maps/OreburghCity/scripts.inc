OreburghCity_MapScripts::
	.byte 0

OreburghCity_EventScript_Miner1::
	msgbox OreburghCity_Text_Miner1, MSGBOX_NPC
	end

OreburghCity_EventScript_Miner2::
	msgbox OreburghCity_Text_Miner2, MSGBOX_NPC
	end

OreburghCity_EventScript_Boy::
	msgbox OreburghCity_Text_Boy, MSGBOX_NPC
	end

OreburghCity_EventScript_Woman::
	msgbox OreburghCity_Text_Woman, MSGBOX_NPC
	end

OreburghCity_Text_Miner1:
	.string "The OREBURGH MINE is south of\n"
	.string "town. That's where ROARK usually\l"
	.string "works.$"

OreburghCity_Text_Miner2:
	.string "Coal, coal and more coal! This\n"
	.string "town runs on it.$"

OreburghCity_Text_Boy:
	.string "My dad says ROARK is the strongest\n"
	.string "miner AND Trainer in town!$"

OreburghCity_Text_Woman:
	.string "The MINING MUSEUM displays fossils\n"
	.string "found right here in OREBURGH.$"

OreburghCity_EventScript_GymClosed::
	lockall
	msgbox OreburghCity_Text_GymClosed, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

OreburghCity_Text_GymClosed:
	.string "The door is locked. A sign reads:\n"
	.string "GYM LEADER ROARK is working at the\l"
	.string "OREBURGH MINE, south of town.$"

