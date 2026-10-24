OreburghGate_1F_MapScripts::
	.byte 0

OreburghGate_1F_EventScript_Diana::
	trainerbattle_single TRAINER_AUTUMN, OreburghGate_1F_Text_DianaIntro, OreburghGate_1F_Text_DianaDefeat
	msgbox OreburghGate_1F_Text_DianaPost, MSGBOX_AUTOCLOSE
	end

OreburghGate_1F_Text_DianaIntro:
	.string "To celebrate my getting through this\n"
	.string "cave, I'm going to battle you!$"

OreburghGate_1F_Text_DianaDefeat:
	.string "Well, I guess losing is something to\n"
	.string "commemorate, too...$"

OreburghGate_1F_Text_DianaPost:
	.string "Getting through that cave feels like\n"
	.string "an adventure.$"

OreburghGate_1F_EventScript_Curtis::
	trainerbattle_single TRAINER_TED, OreburghGate_1F_Text_CurtisIntro, OreburghGate_1F_Text_CurtisDefeat
	msgbox OreburghGate_1F_Text_CurtisPost, MSGBOX_AUTOCLOSE
	end

OreburghGate_1F_Text_CurtisIntro:
	.string "We Trainers will accept challenges\n"
	.string "anywhere! It's what we do.$"

OreburghGate_1F_Text_CurtisDefeat:
	.string "Hmm... Insufficiently raised?$"

OreburghGate_1F_Text_CurtisPost:
	.string "POKéMON can appear anywhere in a\n"
	.string "cave. It's not like the tall grass by\l"
	.string "roads.$"

OreburghGate_1F_EventScript_PtNpc1::
	msgbox OreburghGate_1F_Text_PtNpc1, MSGBOX_NPC
	end

OreburghGate_1F_Text_PtNpc1:
	.string "Oh! Good golly! That's OREBURGH CITY's\n"
	.string "Gym Badge!\p"
	.string "All right! Now you can use the hidden\n"
	.string "move Rock Smash on small boulders!$"

OreburghGate_1F_EventScript_HikerHM::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OREBURGH_GATE_HM, OreburghGate_1F_EventScript_HikerAfter
	msgbox OreburghGate_1F_Text_Hiker, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_OREBURGH_GATE_HM
	msgbox OreburghGate_1F_Text_HikerAfter, MSGBOX_DEFAULT
	release
	end
OreburghGate_1F_EventScript_HikerAfter::
	msgbox OreburghGate_1F_Text_HikerAfter, MSGBOX_DEFAULT
	release
	end

OreburghGate_1F_Text_Hiker:
	.string "Whoa there! Heading to OREBURGH?\n"
	.string "This cave is full of rocks. You'll\l"
	.string "need this!$"

OreburghGate_1F_Text_HikerAfter:
	.string "That HM teaches ROCK SMASH. You\n"
	.string "can use it outside of battle once\l"
	.string "you have the BADGE from OREBURGH\n"
	.string "GYM.$"
