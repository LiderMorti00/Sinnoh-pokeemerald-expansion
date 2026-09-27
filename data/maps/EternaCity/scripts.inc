EternaCity_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, EternaCity_OnFrame
	.byte 0

EternaCity_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 25, EternaCity_EventScript_Statue
	.2byte 0

EternaCity_EventScript_Barry::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 24, EternaCity_EventScript_BarryEnd
	applymovement LOCALID_ETERNA_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox EternaCity_Text_Barry, MSGBOX_DEFAULT
	closemessage
	setvar VAR_SINNOH_STORY, 25
	setflag FLAG_HIDE_ETERNA_BARRY
	clearflag FLAG_HIDE_ETERNA_STATUE
	warpsilent MAP_ETERNA_CITY, 37, 15
	waitstate
EternaCity_EventScript_BarryEnd::
	releaseall
	end

EternaCity_EventScript_Statue::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 25, EternaCity_EventScript_BarryEnd
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	msgbox EternaCity_Text_Cyrus, MSGBOX_DEFAULT
	msgbox EternaCity_Text_BarryStatue, MSGBOX_DEFAULT
	msgbox EternaCity_Text_Cyrus2, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ETERNA_CYRUS
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox EternaCity_Text_BarryBye, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ETERNA_BARRY_STATUE
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement LOCALID_ETERNA_CYNTHIA, Common_Movement_FacePlayer
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
	waitmovement 0
	msgbox EternaCity_Text_Cynthia, MSGBOX_DEFAULT
	giveitem ITEM_HM_CUT
	msgbox EternaCity_Text_Cynthia2, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_ETERNA_CYNTHIA
	setflag FLAG_HIDE_ETERNA_STATUE
	fadescreenswapbuffers FADE_FROM_BLACK
	setvar VAR_SINNOH_STORY, 26
	releaseall
	end

EternaCity_Text_Barry:
	.string "BARRY: {PLAYER}! You made it to\n"
	.string "ETERNA! Hey, there's a famous\l"
	.string "statue of a legendary POKéMON\n"
	.string "around here. Come on, let's go see\l"
	.string "it!$"

EternaCity_Text_Cyrus:
	.string "???: ...This statue depicts the\n"
	.string "POKéMON said to have created\l"
	.string "Sinnoh. The ones that rule over\n"
	.string "time and space.\p"
	.string "Their power could remake this\n"
	.string "flawed world into a perfect one.$"

EternaCity_Text_BarryStatue:
	.string "BARRY: Uh... who's this guy? Are\n"
	.string "you a researcher or something?$"

EternaCity_Text_Cyrus2:
	.string "???: I am CYRUS. Remember that\n"
	.string "name, children. We may meet again.$"

EternaCity_Text_BarryBye:
	.string "BARRY: What a weird guy... Anyway!\n"
	.string "I'm going to beat the GYM here\l"
	.string "before you. See ya!$"

EternaCity_Text_Cynthia:
	.string "???: You're a Trainer, right? I'm\n"
	.string "CYNTHIA. I was studying this\l"
	.string "statue too.\p"
	.string "That man, CYRUS... He seemed to\n"
	.string "know a lot about the legends.\l"
	.string "Anyway, take this. It'll help you\n"
	.string "on your journey.$"

EternaCity_Text_Cynthia2:
	.string "CYNTHIA: That HM teaches CUT. It\n"
	.string "can chop down small trees, once\l"
	.string "you have ETERNA's GYM BADGE.\p"
	.string "Good luck, and take good care of\n"
	.string "your POKéMON!$"

EternaCity_EventScript_PtNpc1::
	msgbox EternaCity_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_Text_PtNpc1:
	.string "ETERNA is an old city. People here\n"
	.string "treasure history and nature.$"

EternaCity_EventScript_PtNpc2::
	msgbox EternaCity_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_Text_PtNpc2:
	.string "The statue here shows a legendary\n"
	.string "POKéMON. Nobody knows which one\l"
	.string "for sure.$"

EternaCity_EventScript_PtNpc3::
	msgbox EternaCity_Text_PtNpc3, MSGBOX_NPC
	end

EternaCity_Text_PtNpc3:
	.string "I trained in the forest to become\n"
	.string "stronger. Hi-yah!$"

EternaCity_EventScript_PtNpc4::
	msgbox EternaCity_Text_PtNpc4, MSGBOX_NPC
	end

EternaCity_Text_PtNpc4:
	.string "The GYM LEADER GARDENIA loves\n"
	.string "flowers and GRASS POKéMON.$"

EternaCity_EventScript_PtNpc5::
	msgbox EternaCity_Text_PtNpc5, MSGBOX_NPC
	end

EternaCity_Text_PtNpc5:
	.string "Those GALACTIC people built a\n"
	.string "weird building up north. It gives\l"
	.string "me the creeps.$"

EternaCity_EventScript_PtNpc6::
	msgbox EternaCity_Text_PtNpc6, MSGBOX_NPC
	end

EternaCity_Text_PtNpc6:
	.string "I caught a BURMY in ETERNA FOREST!$"

EternaCity_EventScript_PtNpc7::
	msgbox EternaCity_Text_PtNpc7, MSGBOX_NPC
	end

EternaCity_Text_PtNpc7:
	.string "The bike shop is closed. The owner\n"
	.string "hasn't been seen for days...$"

EternaCity_EventScript_PtNpc8::
	msgbox EternaCity_Text_PtNpc8, MSGBOX_NPC
	end

EternaCity_Text_PtNpc8:
	.string "Hunting for BUG POKéMON is the\n"
	.string "best!$"

EternaCity_EventScript_Sign1::
	msgbox EternaCity_Text_Sign1, MSGBOX_SIGN
	end

EternaCity_Text_Sign1:
	.string "ETERNA CITY\p"
	.string "A city that remembers the past.$"

EternaCity_EventScript_Sign2::
	msgbox EternaCity_Text_Sign2, MSGBOX_SIGN
	end

EternaCity_Text_Sign2:
	.string "ETERNA CITY\p"
	.string "A city that remembers the past.$"

EternaCity_EventScript_Sign3::
	msgbox EternaCity_Text_Sign3, MSGBOX_SIGN
	end

EternaCity_Text_Sign3:
	.string "POKéMON CENTER\p"
	.string "Heal your POKéMON!$"

EternaCity_EventScript_Sign4::
	msgbox EternaCity_Text_Sign4, MSGBOX_SIGN
	end

EternaCity_Text_Sign4:
	.string "UNDERGROUND MAN'S HOUSE$"
