OreburghCity_MapScripts::
	.byte 0

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

OreburghCity_EventScript_Sign1::
	msgbox OreburghCity_Text_Sign1, MSGBOX_SIGN
	end

OreburghCity_Text_Sign1:
	.string "OREBURGH CITY\p"
	.string "The energetic town of coal.$"

OreburghCity_EventScript_Sign2::
	msgbox OreburghCity_Text_Sign2, MSGBOX_SIGN
	end

OreburghCity_Text_Sign2:
	.string "OREBURGH CITY POKéMON GYM\p"
	.string "LEADER: ROARK\p"
	.string "The rock-solid POKéMON pro!$"

OreburghCity_EventScript_Sign3::
	msgbox OreburghCity_Text_Sign3, MSGBOX_SIGN
	end

OreburghCity_Text_Sign3:
	.string "OREBURGH MINE\p"
	.string "Coal mining site. Watch your step!$"

OreburghCity_EventScript_PtNpc1::
	msgbox OreburghCity_Text_PtNpc1, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc1:
	.string "The mine is where the town's coal\n"
	.string "comes from. We work hard every\l"
	.string "day!$"

OreburghCity_EventScript_PtNpc2::
	msgbox OreburghCity_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc2:
	.string "My dad works in the mine. He comes\n"
	.string "home covered in coal dust!$"

OreburghCity_EventScript_PtNpc3::
	msgbox OreburghCity_Text_PtNpc3, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc3:
	.string "This town is full of energy. Just\n"
	.string "like the coal we dig!$"

OreburghCity_EventScript_PtNpc4::
	msgbox OreburghCity_Text_PtNpc4, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc4:
	.string "ROARK is the GYM LEADER and the\n"
	.string "boss of the mine. He's amazing!$"

OreburghCity_EventScript_PtNpc5::
	msgbox OreburghCity_Text_PtNpc5, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc5:
	.string "Watch out for the trucks! We move\n"
	.string "tons of coal every day.$"

OreburghCity_EventScript_PtNpc6::
	msgbox OreburghCity_Text_PtNpc6, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc6:
	.string "Coal keeps all of Sinnoh warm in\n"
	.string "the winter.$"

OreburghCity_EventScript_PtNpc7::
	msgbox OreburghCity_Text_PtNpc7, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc7:
	.string "Camping near OREBURGH is fun. The\n"
	.string "stars are so bright here!$"

OreburghCity_EventScript_PtNpc8::
	msgbox OreburghCity_Text_PtNpc8, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc8:
	.string "Dig, dig, dig! That's all we do\n"
	.string "all day.$"

OreburghCity_EventScript_PtNpc9::
	msgbox OreburghCity_Text_PtNpc9, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc9:
	.string "Break time! Mining makes you\n"
	.string "really hungry.$"

OreburghCity_EventScript_PtNpc10::
	msgbox OreburghCity_Text_PtNpc10, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc10:
	.string "I write songs about miners.\n"
	.string "They're the heroes of this town!$"

OreburghCity_EventScript_PtNpc11::
	msgbox OreburghCity_Text_PtNpc11, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc11:
	.string "I train with MACHOP. Their\n"
	.string "strength is incredible!$"

OreburghCity_EventScript_PtNpc12::
	msgbox OreburghCity_Text_PtNpc12, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc12:
	.string "Machop! Machop!$"

OreburghCity_EventScript_PtNpc13::
	msgbox OreburghCity_Text_PtNpc13, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc13:
	.string "Machoooop!$"

OreburghCity_EventScript_PtNpc14::
	msgbox OreburghCity_Text_PtNpc14, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc14:
	.string "Machop!$"

OreburghCity_EventScript_PtNpc15::
	msgbox OreburghCity_Text_PtNpc15, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc15:
	.string "We help carry coal with our\n"
	.string "MACHOP. They never get tired!$"
