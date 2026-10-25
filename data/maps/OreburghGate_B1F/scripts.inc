OreburghGate_B1F_MapScripts::
	.byte 0

OreburghGate_B1F_EventScript_Grant::
	trainerbattle_single TRAINER_JEFFREY_2, OreburghGate_B1F_Text_GrantIntro, OreburghGate_B1F_Text_GrantDefeat
	msgbox OreburghGate_B1F_Text_GrantPost, MSGBOX_AUTOCLOSE
	end

OreburghGate_B1F_Text_GrantIntro:
	.string "I’m a Veteran, yes, but don’t you dare\n"
	.string "treat me like a senior citizen!$"

OreburghGate_B1F_Text_GrantDefeat:
	.string "Grrr... So young, and yet so talented!$"

OreburghGate_B1F_Text_GrantPost:
	.string "I’ll always remain young at heart.\n"
	.string "Never let them say you’re too old!$"

OreburghGate_B1F_Text_PtNpc1_0:
	.string "Do you see those bumps on the ground?\p"
	.string "It feels awesome taking those fast on\n"
	.string "a Bicycle.$"

OreburghGate_B1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox OreburghGate_B1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end
