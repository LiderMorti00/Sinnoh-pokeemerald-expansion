EternaCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EternaCity_OnTransitionSN
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
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "You came to see the POKéMON statue,\n"
	.string "right? I’ll take you there!$"

EternaCity_Text_Cyrus:
	.string "Cyrus: ...So, this is Eterna’s POKéMON\n"
	.string "statue...\p"
	.string "Shaping our world are time and space in\n"
	.string "an intertwining spiral.\p"
	.string "Revered in Sinnoh are the POKéMON of\n"
	.string "time and space...\p"
	.string "Sinnoh’s myth... Its truth needs\n"
	.string "investigation...$"

EternaCity_Text_BarryStatue:
	.string "{RIVAL}: Uh... who's this guy? Are\n"
	.string "you a researcher or something?$"

EternaCity_Text_Cyrus2:
	.string "Cyrus: ...Pardon me. Stand aside.$"

EternaCity_Text_BarryBye:
	.string "{RIVAL}: Oh, hey!\p"
	.string "When we smacked together, a brilliant\n"
	.string "flash of inspiration came to me!\p"
	.string "An easy way to become a great Trainer!\n"
	.string "Yeah, that!\p"
	.string "All right. Listen close...\p"
	.string "Make certain all your attacks hit!\n"
	.string "Avoid enemy attacks for sure!\p"
	.string "You do that, you’d never lose! You’d be\n"
	.string "the invincible Trainer!\p"
	.string "Anyway, go check out the POKéMON\n"
	.string "statue. See you around!$"

EternaCity_Text_Cynthia:
	.string "???: Oh, that device you have...\p"
	.string "It is a POKéDEX? Wow, it brings back\n"
	.string "some memories.\p"
	.string "Pardon me, but what’s your name?\p"
	.string "...\p"
	.string "OK, hello, {PLAYER}. I’ll be sure to\n"
	.string "remember that name!\p"
	.string "My name is Cynthia. I’m a Trainer just\n"
	.string "like you.\p"
	.string "I’ve been studying POKéMON mythology\n"
	.string "lately, just out of curiosity.\p"
	.string "Cynthia: Here in Eterna City, there is a\n"
	.string "statue of an ancient POKéMON.\p"
	.string "Have you seen it already?\p"
	.string "According to myth, it was an extremely\n"
	.string "powerful POKéMON.\p"
	.string "Who knows? You may encounter\n"
	.string "something like it while you’re traveling\l"
	.string "with your\p"
	.string "POKéDEX.\p"
	.string "Oh, I know! Try using this. It should be\n"
	.string "helpful.$"

EternaCity_Text_Cynthia2:
	.string "Cynthia: Remember, the hidden move Cut\n"
	.string "can be used in the field.\p"
	.string "It will let you go places that were\n"
	.string "previously inaccessible to you.\p"
	.string "That’s important for filling up your\n"
	.string "POKéDEX, right?\p"
	.string "Then luck be with you, young Trainer!\p"
	.string "Oh, there’s one last thing! Please give\n"
	.string "my regards to Prof. Rowan.$"

EternaCity_EventScript_PtNpc1::
	msgbox EternaCity_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_Text_PtNpc1:
	.string "If you're visiting ETERNA, you need to\n"
	.string "get yourself a Bicycle and take a ride\l"
	.string "down the Cycling Road.$"

EternaCity_EventScript_PtNpc2::
	msgbox EternaCity_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_Text_PtNpc2:
	.string "ETERNA CITY's not anything like it was\n"
	.string "before, way back in the day.$"

EternaCity_EventScript_PtNpc3::
	msgbox EternaCity_Text_PtNpc3, MSGBOX_NPC
	end

EternaCity_Text_PtNpc3:
	.string "They say this is an awesome POKéMON\n"
	.string "that people saw long ago.$"

EternaCity_EventScript_PtNpc4::
	msgbox EternaCity_Text_PtNpc4, MSGBOX_NPC
	end

EternaCity_Text_PtNpc4:
	.string "Since that TEAM GALACTIC building\n"
	.string "went up, the city's atmosphere has\l"
	.string "gotten all creepy and tense.\p"
	.string "I don't know what those people are\n"
	.string "doing up in that place...$"

EternaCity_EventScript_PtNpc5::
	msgbox EternaCity_Text_PtNpc5, MSGBOX_NPC
	end

EternaCity_Text_PtNpc5:
	.string "They say this is an old city.\p"
	.string "It doesn't look it, though. Not with all\n"
	.string "these tall buildings.$"

EternaCity_EventScript_PtNpc6::
	msgbox EternaCity_Text_PtNpc6, MSGBOX_NPC
	end

EternaCity_Text_PtNpc6:
	.string "My friend said TEAM GALACTIC took his\n"
	.string "favorite POKéMON away.\p"
	.string "I don't think he's telling the truth.\n"
	.string "TEAM GALACTIC looks so cool.\p"
	.string "They don't look like common thugs.$"

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
	.string "Oh, wow! You got a Bicycle!\p"
	.string "You can ride down Cycling Road and end\n"
	.string "up in HEARTHOME CITY.\p"
	.string "It's a fast and fun ride. You should\n"
	.string "check it out!$"

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

EternaCity_EventScript_PtNpc9::
	msgbox EternaCity_Text_PtNpc9, MSGBOX_NPC
	end

EternaCity_Text_PtNpc9:
	.string "Oh, don't tell me you don't have an\n"
	.string "Explorer Kit?\p"
	.string "You should have a word with the man\n"
	.string "next door to the POKéMON CENTER.$"

EternaCity_EventScript_GalacticGruntM1::
	msgbox EternaCity_Text_GalacticGruntM1, MSGBOX_NPC
	end

EternaCity_Text_GalacticGruntM1:
	.string "Hey! You there, kid! Stay away from\n"
	.string "that POKéMON statue!\p"
	.string "TEAM GALACTIC is conducting an\n"
	.string "official investigation here!$"


EternaCity_EventScript_GalacticGruntM2::
	msgbox EternaCity_Text_GalacticGruntM2, MSGBOX_NPC
	end

EternaCity_Text_GalacticGruntM2:
	.string "Hey, you! Yeah, you, Trainer!\p"
	.string "Errr... It's OK. Never mind. You look\n"
	.string "tough.\p"
	.string "I won't take... Um, I'll just let you\n"
	.string "keep your POKéMON. Carry on!$"


EternaCity_EventScript_GalacticGruntM3::
	msgbox EternaCity_Text_GalacticGruntM3, MSGBOX_NPC
	end

EternaCity_Text_GalacticGruntM3:
	.string "Have you seen our building?\p"
	.string "TEAM GALACTIC is so stinking rich\n"
	.string "that we can have one built instantly!$"

EternaCity_OnTransitionSN:
	call EternaCity_EventScript_SNVis_ETERNA_CYNTHIA_EGG
	end

EternaCity_EventScript_SNVis_ETERNA_CYNTHIA_EGG:
	setflag FLAG_SN_HIDE_ETERNA_CYNTHIA_EGG
	goto_if_lt VAR_SINNOH_STORY, 28, EternaCity_EventScript_SNVis_ETERNA_CYNTHIA_EGG_End
	goto_if_set FLAG_SN_RECEIVED_TOGEPI_EGG, EternaCity_EventScript_SNVis_ETERNA_CYNTHIA_EGG_End
	clearflag FLAG_SN_HIDE_ETERNA_CYNTHIA_EGG
EternaCity_EventScript_SNVis_ETERNA_CYNTHIA_EGG_End:
	return

EternaCity_EventScript_SNCynthiaEgg::
	lock
	faceplayer
	msgbox EternaCity_EventScript_SNCynthiaEgg_T1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EternaCity_EventScript_SNCynthiaEgg_No
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, EternaCity_EventScript_SNCynthiaEgg_Full
	giveegg SPECIES_TOGEPI
	playfanfare MUS_OBTAIN_ITEM
	message EternaCity_EventScript_SNCynthiaEgg_Got
	waitfanfare
	waitmessage
	setflag FLAG_SN_RECEIVED_TOGEPI_EGG
	msgbox EternaCity_EventScript_SNCynthiaEgg_T15, MSGBOX_DEFAULT
	msgbox EternaCity_EventScript_SNCynthiaEgg_T2, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_ETERNA_CYNTHIA, 12, 36, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_ETERNA_CYNTHIA
	removeobject LOCALID_SN_ETERNA_CYNTHIA
	setflag FLAG_SN_HIDE_ETERNA_CYNTHIA_EGG
	release
	end
EternaCity_EventScript_SNCynthiaEgg_Full:
	msgbox EternaCity_EventScript_SNCynthiaEgg_FullT, MSGBOX_DEFAULT
	release
	end
EternaCity_EventScript_SNCynthiaEgg_No:
	msgbox EternaCity_EventScript_SNCynthiaEgg_NoT, MSGBOX_DEFAULT
	release
	end

EternaCity_EventScript_SNCynthiaEgg_T1:
	.string "Cynthia: Oh, there you are!\p"
	.string "I was looking for you. I’ve got\n"
	.string "something nice.\p"
	.string "I wanted you to have this POKéMON Egg.\n"
	.string "Will you accept it?$"

EternaCity_EventScript_SNCynthiaEgg_Got:
	.string "{PLAYER} received an Egg from Cynthia!$"

EternaCity_EventScript_SNCynthiaEgg_T2:
	.string "Cynthia: Keep that Egg with you in your\n"
	.string "party of POKéMON.\p"
	.string "A POKéMON will hatch from it while you\n"
	.string "are traveling.\p"
	.string "I would be happy to know that it will\n"
	.string "help fill another page of your POKéDEX.\p"
	.string "See you again!$"

EternaCity_EventScript_SNCynthiaEgg_FullT:
	.string "Cynthia: Oh? You have six POKéMON with\n"
	.string "you already.\p"
	.string "You don’t have room for this Egg.\p"
	.string "You’ll have to store a POKéMON in a PC\n"
	.string "Box at the POKéMON Center first.\p"
	.string "I’ll give you this Egg when you’ve made\n"
	.string "room for it.\p"
	.string "I’ll be waiting right here.$"

EternaCity_EventScript_SNCynthiaEgg_T15:
	.string "Cynthia: That’s wonderful!\p"
	.string "The POKéMON inside the Egg is happy,\n"
	.string "too. I’m sure of it!$"

EternaCity_EventScript_SNCynthiaEgg_NoT:
	.string "Cynthia: Oh...? You don’t need to feel\n"
	.string "obligated.\p"
	.string "It’s hard filling the pages of the\n"
	.string "POKéDEX, isn’t it?\p"
	.string "I only want to lend you a little hand,\n"
	.string "that’s all.$"
