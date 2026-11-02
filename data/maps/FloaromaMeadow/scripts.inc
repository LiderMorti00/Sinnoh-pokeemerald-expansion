FloaromaMeadow_MapScripts::
	.byte 0

FloaromaMeadow_EventScript_Grunts::
	lock
	faceplayer
	msgbox FloaromaMeadow_Text_Grunt1Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_RANDALL, FloaromaMeadow_Text_Grunt1Defeat
	msgbox FloaromaMeadow_Text_Grunt2Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_PARKER, FloaromaMeadow_Text_Grunt2Defeat
	msgbox FloaromaMeadow_Text_GruntsFlee, MSGBOX_DEFAULT
	closemessage
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject LOCALID_MEADOW_GRUNT_1
	removeobject LOCALID_MEADOW_GRUNT_2
	setflag FLAG_HIDE_MEADOW_GRUNTS
	fadescreenswapbuffers FADE_FROM_BLACK
	applymovement LOCALID_MEADOW_HONEY_MAN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox FloaromaMeadow_Text_HoneyThanks, MSGBOX_DEFAULT
	giveitem ITEM_WORKS_KEY
	msgbox FloaromaMeadow_Text_HoneyGift, MSGBOX_DEFAULT
	giveitem ITEM_HONEY, 10
	msgbox FloaromaMeadow_Text_HoneyInfo, MSGBOX_DEFAULT
	release
	end

FloaromaMeadow_EventScript_SetStory22::
	setvar VAR_SINNOH_STORY, 22
	return

FloaromaMeadow_EventScript_HoneyMan::
	lock
	faceplayer
	goto_if_set FLAG_HIDE_MEADOW_GRUNTS, FloaromaMeadow_EventScript_HoneyManNormal
	msgbox FloaromaMeadow_Text_HoneyHelp, MSGBOX_DEFAULT
	release
	end
FloaromaMeadow_EventScript_HoneyManNormal::
	msgbox FloaromaMeadow_Text_HoneyInfo, MSGBOX_DEFAULT
	release
	end

FloaromaMeadow_Text_Grunt1Intro:
	.string "Grunt 1: Enough arguing! Hand over\n"
	.string "that sweet Honey!\p"
	.string "Grunt 2: Do as we say! Team Galactic\n"
	.string "will have that Honey!\p"
	.string "We must have it to attract POKéMON in\n"
	.string "great numbers!\p"
	.string "Grunt 1: Hey! This kid is a witness!\n"
	.string "What’ll we do?\p"
	.string "Grunt 2: We don’t need the brat running\n"
	.string "off to get help...\p"
	.string "The solution’s simple! We ensure the\n"
	.string "brat stays quiet!$"

FloaromaMeadow_Text_Grunt1Defeat:
	.string "Grunt 1: This is so lame... They’re going\n"
	.string "to dock my pay!$"

FloaromaMeadow_Text_Grunt2Intro:
	.string "Grunt 2: I’m up next! Heheheh...\p"
	.string "Battling you right after my cohort\n"
	.string "weakened you gives me the edge!$"

FloaromaMeadow_Text_Grunt2Defeat:
	.string "No way...$"

FloaromaMeadow_Text_GruntsFlee:
	.string "Grunt 1: This brat’s tough! Like, really,\n"
	.string "really tough!\p"
	.string "Tougher than I can put into words, and\n"
	.string "I know a lot of words!\p"
	.string "We’re done for here... Let’s get back to\n"
	.string "the Valley Windworks.$"

FloaromaMeadow_Text_HoneyThanks:
	.string "Oh, what’s this thing? They seem to\n"
	.string "have forgotten it...\p"
	.string "It’s a Works Key... It must be for the\n"
	.string "Valley Windworks!\p"
	.string "It’s of no use to me. You may as well\n"
	.string "have it.\p"
	.string "Thank you! You surely saved me.\p"
	.string "Those goons were trying to rob me of\n"
	.string "my sweet, sweet Honey.\p"
	.string "They sure were weird, though. You saw\n"
	.string "how they were dressed.\p"
	.string "What they were saying didn’t make a\n"
	.string "whole lot of sense, either.\p"
	.string "Oh! I need to thank you! This sweet,\n"
	.string "sweet Honey!\p"
	.string "Go on, take a whole lot!$"

FloaromaMeadow_Text_HoneyGift:
	.string "And please, take some of my HONEY\n"
	.string "as thanks!$"

FloaromaMeadow_Text_HoneyInfo:
	.string "Slather that Honey on a sweet-smelling\n"
	.string "tree. It might attract POKéMON.$"

FloaromaMeadow_Text_HoneyHelp:
	.string "Help! These people want to take\n"
	.string "all my HONEY!$"

SN_HoneyTree_Text_Scent:
	.string "There is a sweet scent in the air...$"

SN_HoneyTree_Text_Ask:
	.string "Slather the bark with Honey?$"

SN_HoneyTree_Text_Done:
	.string "The bark was slathered with Honey.$"

SN_HoneyTree_Text_Wait:
	.string "The bark is slathered with Honey...$"

SN_HoneyTree_Text_Mon:
	.string "A wild {STR_VAR_1} appeared from the\n"
	.string "tree you slathered with Honey!$"

FloaromaMeadow_EventScript_SNHoneyTree::
	lock
	goto_if_ne VAR_SN_HONEY_TREE, 16, FloaromaMeadow_EventScript_SNHoneyTree_Fresh
	special SinnohHoneyReady
	goto_if_eq VAR_RESULT, TRUE, FloaromaMeadow_EventScript_SNHoneyTree_Battle
	msgbox SN_HoneyTree_Text_Wait, MSGBOX_DEFAULT
	release
	end
FloaromaMeadow_EventScript_SNHoneyTree_Battle:
	setvar VAR_SN_HONEY_TREE, 0
	setwildbattle SPECIES_WURMPLE, 5
	special SinnohHoneyTreeMon
	msgbox SN_HoneyTree_Text_Mon, MSGBOX_DEFAULT
	closemessage
	dowildbattle
	release
	end
FloaromaMeadow_EventScript_SNHoneyTree_Fresh:
	msgbox SN_HoneyTree_Text_Scent, MSGBOX_DEFAULT
	checkitem ITEM_HONEY
	goto_if_eq VAR_RESULT, FALSE, FloaromaMeadow_EventScript_SNHoneyTree_End
	msgbox SN_HoneyTree_Text_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FloaromaMeadow_EventScript_SNHoneyTree_End
	removeitem ITEM_HONEY
	setvar VAR_SN_HONEY_TREE, 16
	special SinnohHoneySlather
	msgbox SN_HoneyTree_Text_Done, MSGBOX_DEFAULT
FloaromaMeadow_EventScript_SNHoneyTree_End:
	release
	end
