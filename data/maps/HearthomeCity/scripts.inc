HearthomeCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, HearthomeCity_OnTransitionSN
	.byte 0

HearthomeCity_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_Text_PtNpc1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, HearthomeCity_EventScript_PtNpc1_No
	msgbox HearthomeCity_Text_PtNpc1_Yes, MSGBOX_DEFAULT
	release
	end

HearthomeCity_EventScript_PtNpc1_No:
	msgbox HearthomeCity_Text_PtNpc1_No, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Text_PtNpc1:
	.string "I'm visiting here all the way from the\n"
	.string "Hoenn region.\p"
	.string "I had been hoping to find the Contest\n"
	.string "Hall, but being new, I lost my way.\p"
	.string "Fortunately, the local people very\n"
	.string "kindly led me to my destination.\p"
	.string "I was impressed by their kindness and\n"
	.string "generosity to a complete stranger.\p"
	.string "Now, may I offer you the courtesy of\n"
	.string "showing you to the Contest Hall?$"

HearthomeCity_Text_PtNpc1_Yes:
	.string "Ah. Please follow me.$"

HearthomeCity_Text_PtNpc1_No:
	.string "Oh, I do apologize. I should mind my\n"
	.string "own business.$"

HearthomeCity_EventScript_PtNpc2::
	msgbox HearthomeCity_Text_PtNpc2, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc2:
	.string "You're a Trainer, are you?\p"
	.string "You've got two choices of challenges,\n"
	.string "either the Gym or a Contest, right?$"

HearthomeCity_EventScript_PtNpc3::
	msgbox HearthomeCity_Text_PtNpc3, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc3:
	.string "When I take my baby out in his\n"
	.string "stroller, I see the town in a different\l"
	.string "way.\p"
	.string "I notice things like stairs and bumps\n"
	.string "in the sidewalk.$"

HearthomeCity_EventScript_PtNpc4::
	msgbox HearthomeCity_Text_PtNpc4, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc4:
	.string "At the Lost Tower, people unburden\n"
	.string "themselves of unbearable sorrow...\p"
	.string "You'll understand what I mean if you\n"
	.string "visit the Lost Tower on Route 209.$"

HearthomeCity_EventScript_PtNpc5::
	msgbox HearthomeCity_Text_PtNpc5, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc5:
	.string "I get to see POKéMON all day long, but\n"
	.string "there sure are many kinds.\p"
	.string "How many are there now?$"

HearthomeCity_Text_PtNpc6:
	.string "They call me Mr. Goods.\p"
	.string "No one knows my real name. No, not\n"
	.string "even I do...\p"
	.string "I dedicate myself to seeking rarities.\n"
	.string "It's what I live for.\p"
	.string "Hm! Hmhmhmhm?!\p"
	.string "I was going to give you something, but\n"
	.string "I just gave a rare thing away.\p"
	.string "I'll find something else for you, so\n"
	.string "just talk to me some other time.$"

HearthomeCity_EventScript_PtNpc7::
	msgbox HearthomeCity_Text_PtNpc7, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc7:
	.string "I can't decide what Accessories I\n"
	.string "should dress up POKéMON with.\p"
	.string "There are just so many kinds.$"

HearthomeCity_EventScript_PtNpc8::
	msgbox HearthomeCity_Text_PtNpc8, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc8:
	.string "I used a Fire Stone on my POKéMON, and\n"
	.string "it evolved!$"

HearthomeCity_EventScript_PtNpc9::
	msgbox HearthomeCity_Text_PtNpc9, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc9:
	.string "I went for a stroll in AMITY SQUARE\n"
	.string "with my PACHIRISU today.\p"
	.string "We came across a POKéMON feather\n"
	.string "while we walked.\p"
	.string "Do you think it'd make my PACHIRISU\n"
	.string "look any cuter?$"

HearthomeCity_EventScript_PtNpc10::
	msgbox HearthomeCity_Text_PtNpc10, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc10:
	.string "I'd like to live in HEARTHOME when I\n"
	.string "get married.\p"
	.string "But my boyfriend wants to live in\n"
	.string "VEILSTONE 'cause of its Game Corner...$"

HearthomeCity_EventScript_PtNpc11::
	msgbox HearthomeCity_Text_PtNpc11, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc11:
	.string "I lived in total seclusion up in the\n"
	.string "mountains for thirty years!\p"
	.string "I'm going to clean up some Contests\n"
	.string "with a dance move I came up with!$"

HearthomeCity_EventScript_PtNpc12::
	msgbox HearthomeCity_Text_PtNpc12, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc12:
	.string "I can feel the baby stroller getting\n"
	.string "heavier each and every day.\p"
	.string "I wonder what kind of POKéMON my child\n"
	.string "will become friends with first?$"

HearthomeCity_EventScript_PtNpc13::
	msgbox HearthomeCity_Text_PtNpc13, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc13:
	.string "This place is beautiful. Perhaps even\n"
	.string "too much so.\p"
	.string "POKéMON, people, and nature are in\n"
	.string "perfect harmony here.$"

HearthomeCity_EventScript_PtNpc14::
	msgbox HearthomeCity_Text_PtNpc14, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc14:
	.string "I put my Vs. Seeker through its paces\n"
	.string "a lot.\p"
	.string "I battled this one intriguing Trainer\n"
	.string "over and over using it.\p"
	.string "She asked me, “Do you like me?” Like,\n"
	.string "oops! Hahahahah!$"

HearthomeCity_EventScript_PtSign1::
	msgbox HearthomeCity_Text_PtSign1, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign1:
	.string "Rt. 208 Rt. 212$"

HearthomeCity_EventScript_PtSign2::
	msgbox HearthomeCity_Text_PtSign2, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign2:
	.string "Rt. 209 SOLACEON TOWN$"

HearthomeCity_EventScript_PtSign3::
	msgbox HearthomeCity_Text_PtSign3, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign3:
	.string "AMITY SQUARE West Gate Stroll with\n"
	.string "Your POKéMON!$"

HearthomeCity_EventScript_PtSign4::
	msgbox HearthomeCity_Text_PtSign4, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign4:
	.string "POKéMON Contest Hall Calling All\n"
	.string "Enthusiasts!$"

HearthomeCity_EventScript_PtSign5::
	msgbox HearthomeCity_Text_PtSign5, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign5:
	.string "AMITY SQUARE East Gate Stroll with\n"
	.string "Your POKéMON!$"

HearthomeCity_EventScript_PtSign6::
	msgbox HearthomeCity_Text_PtSign6, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign6:
	.string "POKéMON Fan Club All Trainers Welcome$"

HearthomeCity_EventScript_PtSign7::
	msgbox HearthomeCity_Text_PtSign7, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign7:
	.string "HEARTHOME CITY POKéMON Gym Leader:\n"
	.string "FANTINA The Alluring, Soulful Dancer!$"

HearthomeCity_EventScript_PtSign8::
	msgbox HearthomeCity_Text_PtSign8, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign8:
	.string "HEARTHOME CITY Warm & Kind$"

HearthomeCity_EventScript_PtSign9::
	msgbox HearthomeCity_Text_PtSign9, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign9:
	.string "The POKéBLOCK House Delicious\n"
	.string "POKéBLOCKS--Smiles for All$"

HearthomeCity_Text_PtNpc15_0:
	.string "Apapapu!$"

HearthomeCity_EventScript_PtNpc15::
	lock
	faceplayer
	msgbox HearthomeCity_Text_PtNpc15_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Text_PtNpc16_0:
	.string "PACHIRISU: Kyukyuuh!$"

HearthomeCity_EventScript_PtNpc16::
	lock
	faceplayer
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
	msgbox HearthomeCity_Text_PtNpc16_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Text_PtNpc17_0:
	.string "Papa! Mama!$"

HearthomeCity_EventScript_PtNpc17::
	lock
	faceplayer
	msgbox HearthomeCity_Text_PtNpc17_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_EventScript_SNMrGoods::
	lock
	faceplayer
	goto_if_set FLAG_SN_MRGOODS_GIFT, HearthomeCity_EventScript_SNMrGoods_Done
	msgbox HearthomeCity_EventScript_SNMrGoods_Hello, MSGBOX_DEFAULT
	goto_if_unset FLAG_BADGE03_GET, HearthomeCity_EventScript_SNMrGoods_Later
	givedecoration DECOR_PIKACHU_DOLL
	goto_if_eq VAR_RESULT, FALSE, HearthomeCity_EventScript_SNMrGoods_Full
	setflag FLAG_SN_MRGOODS_GIFT
	msgbox HearthomeCity_EventScript_SNMrGoods_Sent, MSGBOX_DEFAULT
	release
	end
HearthomeCity_EventScript_SNMrGoods_Later:
	msgbox HearthomeCity_EventScript_SNMrGoods_LaterT, MSGBOX_DEFAULT
	release
	end
HearthomeCity_EventScript_SNMrGoods_Full:
	msgbox HearthomeCity_EventScript_SNMrGoods_FullT, MSGBOX_DEFAULT
	release
	end
HearthomeCity_EventScript_SNMrGoods_Done:
	msgbox HearthomeCity_EventScript_SNMrGoods_DoneT, MSGBOX_DEFAULT
	release
	end

HearthomeCity_EventScript_SNMrGoods_Hello:
	.string "They call me Mr. Goods. No one knows my\n"
	.string "real name. No, not even I do...\p"
	.string "I dedicate myself to seeking rarities.$"

HearthomeCity_EventScript_SNMrGoods_LaterT:
	.string "Show me a Badge from the Hearthome\n"
	.string "Gym, and I may have something rare for\l"
	.string "you.$"

HearthomeCity_EventScript_SNMrGoods_Sent:
	.string "A fine Trainer like you deserves a fine\n"
	.string "decoration! Decorate your Secret Base\l"
	.string "with it!$"

HearthomeCity_EventScript_SNMrGoods_FullT:
	.string "Your decoration space is full! Make\n"
	.string "some room and come back.$"

HearthomeCity_EventScript_SNMrGoods_DoneT:
	.string "I’m still seeking rarities. One day I’ll\n"
	.string "find something even better.$"

HearthomeCity_OnTransitionSN:
	call HearthomeCity_EventScript_SNVis_KEIRA
	call HearthomeCity_EventScript_SNVis_GYM_BLOCK
	end

HearthomeCity_EventScript_SNVis_KEIRA:
	setflag FLAG_SN_HIDE_KEIRA
	goto_if_set FLAG_SN_MET_KEIRA, HearthomeCity_EventScript_SNVis_KEIRA_End
	clearflag FLAG_SN_HIDE_KEIRA
HearthomeCity_EventScript_SNVis_KEIRA_End:
	return

HearthomeCity_EventScript_SNVis_GYM_BLOCK:
	setflag FLAG_SN_HIDE_GYM_BLOCK
	goto_if_set FLAG_SN_MET_FANTINA, HearthomeCity_EventScript_SNVis_GYM_BLOCK_End
	goto_if_set FLAG_BADGE03_GET, HearthomeCity_EventScript_SNVis_GYM_BLOCK_End
	clearflag FLAG_SN_HIDE_GYM_BLOCK
HearthomeCity_EventScript_SNVis_GYM_BLOCK_End:
	return

HearthomeCity_EventScript_SNKeira::
	lock
	faceplayer
	msgbox HearthomeCity_EventScript_SNKeira_T1, MSGBOX_DEFAULT
	closemessage
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
	waitmoncry
	msgbox HearthomeCity_EventScript_SNKeira_T2, MSGBOX_DEFAULT
	removeobject LOCALID_SN_BUNEARY
	msgbox HearthomeCity_EventScript_SNKeira_T3, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_MET_KEIRA
	sn_walkto LOCALID_SN_KEIRA, 8, 46, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_KEIRA
	removeobject LOCALID_SN_KEIRA
	setflag FLAG_SN_HIDE_KEIRA
	release
	end

HearthomeCity_EventScript_SNKeira_T1:
	.string "Oh, thank goodness that you happened\n"
	.string "to be there!\p"
	.string "If it weren’t for you, who knows how\n"
	.string "far away my BUNEARY could have run...$"

HearthomeCity_EventScript_SNKeira_T2:
	.string "Baby BUNEARY, back into the Poké Ball\n"
	.string "you go!$"

HearthomeCity_EventScript_SNKeira_T3:
	.string "I’m Keira! I’m a POKéMON Contest Judge.\p"
	.string "Be sure to drop by the Contest Hall so\n"
	.string "I can thank you properly!$"

HearthomeCity_EventScript_SNGymBlock::
	msgbox HearthomeCity_EventScript_SNGymBlock_T, MSGBOX_NPC
	end

HearthomeCity_EventScript_SNGymBlock_T:
	.string "Hey, there! How’s it going, Trainer?\p"
	.string "You being here tells me you’re going to\n"
	.string "challenge the Gym Leader.\p"
	.string "Well... I hate to break it to you, but\n"
	.string "that’s impossible.\p"
	.string "You’re questioning why, and the answer\n"
	.string "is: she’s not here.\p"
	.string "Not to worry, though. We know she’s at\n"
	.string "the Contest Hall.\p"
	.string "Come back another time, OK? I’ll be\n"
	.string "waiting right here.$"
