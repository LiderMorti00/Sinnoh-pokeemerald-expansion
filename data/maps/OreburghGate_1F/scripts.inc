OreburghGate_1F_MapScripts::
	.byte 0

OreburghGate_1F_EventScript_Diana::
	trainerbattle_single TRAINER_AUTUMN, OreburghGate_1F_Text_DianaIntro, OreburghGate_1F_Text_DianaDefeat
	msgbox OreburghGate_1F_Text_DianaPost, MSGBOX_AUTOCLOSE
	end

OreburghGate_1F_Text_DianaIntro:
	.string "It's so dark in here! Battle me so\n"
	.string "I stop feeling scared!$"

OreburghGate_1F_Text_DianaDefeat:
	.string "I feel braver now, at least...$"

OreburghGate_1F_Text_DianaPost:
	.string "OREBURGH is right through here.\n"
	.string "You can smell the coal!$"

OreburghGate_1F_EventScript_Curtis::
	trainerbattle_single TRAINER_TED, OreburghGate_1F_Text_CurtisIntro, OreburghGate_1F_Text_CurtisDefeat
	msgbox OreburghGate_1F_Text_CurtisPost, MSGBOX_AUTOCLOSE
	end

OreburghGate_1F_Text_CurtisIntro:
	.string "Camping in a cave is the best!\n"
	.string "Let's battle!$"

OreburghGate_1F_Text_CurtisDefeat:
	.string "My campfire went out...$"

OreburghGate_1F_Text_CurtisPost:
	.string "Rock-type POKéMON live all around\n"
	.string "OREBURGH.$"

OreburghGate_1F_EventScript_PtNpc1::
	msgbox OreburghGate_1F_Text_PtNpc1, MSGBOX_NPC
	end

OreburghGate_1F_Text_PtNpc1:
	.string "You'll need ROCK SMASH to break\n"
	.string "these boulders. Come back later!$"
