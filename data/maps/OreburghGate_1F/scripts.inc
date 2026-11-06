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

OreburghGate_1F_EventScript_HikerScene::
	goto_if_set FLAG_RECEIVED_OREBURGH_GATE_HM, OreburghGate_1F_EventScript_HikerScene_End
	lockall
	applymovement LOCALID_GATE_HM_HIKER, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_GATE_HM_HIKER, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_GATE_HM_HIKER
	sn_playerface LOCALID_GATE_HM_HIKER, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox OreburghGate_1F_Text_Hiker, MSGBOX_DEFAULT
	giveitem ITEM_HM_ROCK_SMASH
	setflag FLAG_RECEIVED_OREBURGH_GATE_HM
	msgbox OreburghGate_1F_Text_HikerAfter, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_GATE_HM_HIKER, 6, 18, SN_SPEED_NORMAL, DIR_SOUTH, 0, 0
	waitmovement LOCALID_GATE_HM_HIKER
	releaseall
OreburghGate_1F_EventScript_HikerScene_End:
	end

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
	.string "That sparkling new POKéTCH! Your\n"
	.string "awkwardness as a traveler!\p"
	.string "Hmm... You’re still a pretty new Trainer,\n"
	.string "aren’t you?\p"
	.string "But it’s all good! You’re a new fellow\n"
	.string "friend of POKéMON!\p"
	.string "So, let me make a gift of this Hidden\n"
	.string "Machine to you!$"

OreburghGate_1F_Text_HikerAfter:
	.string "That Hidden Machine, or HM for short,\n"
	.string "contains the hidden move Rock Smash.\p"
	.string "A POKéMON learning Rock Smash can\n"
	.string "smash small boulders in the field.\p"
	.string "But the Trainer has to have the Gym\n"
	.string "Badge from Oreburgh City.\p"
	.string "If you don’t have that Badge, you can’t\n"
	.string "make a POKéMON use the hidden\p"
	.string "move Rock Smash outside of battle.$"
