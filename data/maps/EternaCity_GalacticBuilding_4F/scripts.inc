EternaCity_GalacticBuilding_4F_MapScripts::
	.byte 0

EternaCity_GalacticBuilding_4F_EventScript_Jupiter::
	lock
	faceplayer
	msgbox EternaCity_GalacticBuilding_4F_Text_JupiterIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_PAXTON, EternaCity_GalacticBuilding_4F_Text_JupiterDefeat
	msgbox EternaCity_GalacticBuilding_4F_Text_JupiterAfter, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_GB4F_JUPITER
	setflag FLAG_HIDE_ETERNA_GALACTIC
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement LOCALID_GB4F_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EternaCity_GalacticBuilding_4F_Text_OwnerThanks, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	setflag FLAG_HIDE_GALACTIC_BUILDING_HOSTAGES
	clearflag FLAG_HIDE_CYCLE_SHOP_OWNER
	removeobject LOCALID_GB4F_OWNER
	removeobject LOCALID_GB4F_CLEFAIRY
	removeobject LOCALID_GB4F_BUNEARY
	setvar VAR_SINNOH_STORY, 28
	fadescreenswapbuffers FADE_FROM_BLACK
	release
	end

EternaCity_GalacticBuilding_4F_EventScript_Owner::
	msgbox EternaCity_GalacticBuilding_4F_Text_OwnerWorried, MSGBOX_NPC
	end

EternaCity_GalacticBuilding_4F_EventScript_Clefairy::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
	msgbox EternaCity_GalacticBuilding_4F_Text_ClefairyCry, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EternaCity_GalacticBuilding_4F_EventScript_Buneary::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
	msgbox EternaCity_GalacticBuilding_4F_Text_BunearyCry, MSGBOX_DEFAULT
	waitmoncry
	release
	end

EternaCity_GalacticBuilding_4F_Text_JupiterIntro:
	.string "Eh? Did you want something?\p"
	.string "How silly of me to even ask. You want\n"
	.string "to free the POKéMON.\p"
	.string "Fine! I, JUPITER, will deal with you.$"

EternaCity_GalacticBuilding_4F_Text_JupiterDefeat:
	.string "Losing to some child... Being careless\n"
	.string "cost me too much.$"

EternaCity_GalacticBuilding_4F_Text_JupiterAfter:
	.string "Well, aren't you tough...?\p"
	.string "It's OK, though. Our official POKéMON-\n"
	.string "statue investigation is finished.\p"
	.string "MARS has collected energy from the\n"
	.string "VALLEY WINDWORKS.\p"
	.string "We're pretty much finished here. I'll\n"
	.string "let you in on one little thing.\p"
	.string "Our boss is researching the myths of\n"
	.string "ancient POKéMON.\p"
	.string "With the power of mythical POKéMON, he\n"
	.string "will become the ruler of SINNOH...\p"
	.string "I suggest you keep out of TEAM\n"
	.string "GALACTIC's affairs from now on.\p"
	.string "This is your last warning!$"

EternaCity_GalacticBuilding_4F_Text_OwnerThanks:
	.string "I got my CLEFAIRY back, and it's all\n"
	.string "thanks to you!\p"
	.string "But that TEAM GALACTIC...\p"
	.string "They said, “CLEFAIRY came from space.\n"
	.string "Hand it over!” Their logic baffles me\l"
	.string "still. It's like they are from space!\p"
	.string "Anyway, they're gone now. Thank you\n"
	.string "very much!\p"
	.string "I can't thank you enough right now,\n"
	.string "but cruise by my Cycle Shop, OK?$"

EternaCity_GalacticBuilding_4F_Text_OwnerWorried:
	.string "What is it with this TEAM GALACTIC?\p"
	.string "Why did they take our POKéMON? What\n"
	.string "are they trying to accomplish?$"

EternaCity_GalacticBuilding_4F_Text_ClefairyCry:
	.string "CLEFAIRY: Pi...$"

EternaCity_GalacticBuilding_4F_Text_BunearyCry:
	.string "BUNEARY: Myun...$"
