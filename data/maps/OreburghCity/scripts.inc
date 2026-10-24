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

OreburghCity_EventScript_Sign4::
	msgbox OreburghCity_Text_Sign4, MSGBOX_SIGN
	end

OreburghCity_Text_Sign4:
	.string "OREBURGH CITY\p"
	.string "The energetic town of coal.$"

OreburghCity_EventScript_Sign6::
	msgbox OreburghCity_Text_Sign6, MSGBOX_SIGN
	end

OreburghCity_Text_Sign6:
	.string "OREBURGH CITY POKéMON GYM\p"
	.string "LEADER: ROARK\p"
	.string "The rock-solid POKéMON pro!$"

OreburghCity_EventScript_Sign7::
	msgbox OreburghCity_Text_Sign7, MSGBOX_SIGN
	end

OreburghCity_Text_Sign7:
	.string "OREBURGH MINE\p"
	.string "Coal mining site. Watch your step!$"

OreburghCity_EventScript_PtNpc1::
	msgbox OreburghCity_Text_PtNpc1, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc1:
	.string "Up ahead there's a huge mountain that\n"
	.string "towers above everything.\p"
	.string "It divides SINNOH into two distinct\n"
	.string "halves.$"

OreburghCity_EventScript_PtNpc2::
	msgbox OreburghCity_Text_PtNpc2, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc2:
	.string "The Gym Leader went off to work in the\n"
	.string "mine.$"

OreburghCity_EventScript_PtNpc3::
	msgbox OreburghCity_Text_PtNpc3, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc3:
	.string "Everyone's proud of the mine.\p"
	.string "They're digging for coal under the sea\n"
	.string "as we speak...\p"
	.string "It's amazing how they do it!$"

OreburghCity_EventScript_PtNpc4::
	msgbox OreburghCity_Text_PtNpc4, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc4:
	.string "Is that guy in front of the Gym your\n"
	.string "friend?\p"
	.string "He's sort of twitchy and impatient.$"

OreburghCity_EventScript_PtNpc5::
	msgbox OreburghCity_Text_PtNpc5, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc5:
	.string "These vents exchange the hot air\n"
	.string "down below with the fresh air outside.\p"
	.string "Looking down them gives me the urge\n"
	.string "to start yelling into 'em! Hello!$"

OreburghCity_EventScript_PtNpc6::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OREBURGHCITY_SUPER_POTION, OreburghCity_EventScript_PtNpc6_Received
	msgbox OreburghCity_Text_PtNpc6, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_POTION, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OREBURGHCITY_SUPER_POTION
	msgbox OreburghCity_Text_PtNpc6_After, MSGBOX_DEFAULT
	release
	end

OreburghCity_EventScript_PtNpc6_Received:
	msgbox OreburghCity_Text_PtNpc6_Received, MSGBOX_DEFAULT
	release
	end

OreburghCity_Text_PtNpc6:
	.string "There's no question. This is hard, hard\n"
	.string "work.\p"
	.string "But working alongside POKéMON... It\n"
	.string "gives me a boost somehow.\p"
	.string "Here, take one of these.$"

OreburghCity_EventScript_PtNpc7::
	msgbox OreburghCity_Text_PtNpc7, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc7:
	.string "When I run around with my Running\n"
	.string "Shoes on, I'm the center of attention!\p"
	.string "...At least that's what it feels like.\n"
	.string "There's always someone looking at me.$"

OreburghCity_EventScript_PtNpc8::
	msgbox OreburghCity_Text_PtNpc8, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc8:
	.string "This pile of dirty sand is called a slag\n"
	.string "heap.\p"
	.string "It's the waste from sorting coal.$"

OreburghCity_EventScript_PtNpc9::
	msgbox OreburghCity_Text_PtNpc9, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc9:
	.string "Chop, chop, MACHOP! Chop, chop away on\n"
	.string "rocks! -~$"

OreburghCity_EventScript_PtNpc10::
	msgbox OreburghCity_Text_PtNpc10, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc10:
	.string "Have you seen the vents? They\n"
	.string "release steam from down below.$"

OreburghCity_EventScript_PtNpc11::
	msgbox OreburghCity_Text_PtNpc11, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc11:
	.string "TMs are single use only, but HMs can be\n"
	.string "used over and over.\p"
	.string "It's tricky trying to decide which\n"
	.string "POKéMON should learn what moves.$"

OreburghCity_EventScript_PtNpc12::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox OreburghCity_Text_PtNpc12, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_Text_PtNpc12:
	.string "MACHOP: Macho! Chopo!$"

OreburghCity_EventScript_PtNpc13::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox OreburghCity_Text_PtNpc13, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_Text_PtNpc13:
	.string "MACHOP: Pigyooh!$"

OreburghCity_EventScript_PtNpc14::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
	msgbox OreburghCity_Text_PtNpc14, MSGBOX_DEFAULT
	waitmoncry
	release
	end

OreburghCity_Text_PtNpc14:
	.string "MACHOP: Gwooh! Gogogooh!$"

OreburghCity_EventScript_PtNpc15::
	msgbox OreburghCity_Text_PtNpc15, MSGBOX_NPC
	end

OreburghCity_Text_PtNpc15:
	.string "Natural time capsules buried many,\n"
	.string "many years ago...\p"
	.string "That's what Fossils are.$"

OreburghCity_EventScript_Sign3::
	msgbox OreburghCity_Text_Sign3, MSGBOX_SIGN
	end

OreburghCity_Text_Sign3:
	.string "OREBURGH GATE$"

OreburghCity_EventScript_Sign5::
	msgbox OreburghCity_Text_Sign5, MSGBOX_SIGN
	end

OreburghCity_Text_Sign5:
	.string "OREBURGH CITY POKéMON GYM\p"
	.string "LEADER: ROARK\p"
	.string "The rock-hard Trainer!$"

OreburghCity_EventScript_Sign2::
	msgbox OreburghCity_Text_Sign2, MSGBOX_SIGN
	end

OreburghCity_Text_Sign2:
	.string "OREBURGH CITY\p"
	.string "The energetic town of coal.$"

OreburghCity_EventScript_Sign1::
	msgbox OreburghCity_Text_Sign1, MSGBOX_SIGN
	end

OreburghCity_Text_Sign1:
	.string "OREBURGH CITY\p"
	.string "The energetic town of coal.$"

OreburghCity_Text_PtNpc6_Received:
	.string "Feeling hale and hearty puts a smile\n"
	.string "on my face. And that makes me happy.$"

OreburghCity_Text_PtNpc6_After:
	.string "Feeling hale and hearty puts a smile\n"
	.string "on my face. And that makes me happy.$"
