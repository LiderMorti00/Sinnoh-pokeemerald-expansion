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
	.string "GRUNT: Hand over all your HONEY,\n"
	.string "old man! ...Huh? Who invited you?$"

FloaromaMeadow_Text_Grunt1Defeat:
	.string "You're kidding me!$"

FloaromaMeadow_Text_Grunt2Intro:
	.string "GRUNT: Leave it to me! I'll show\n"
	.string "this brat!$"

FloaromaMeadow_Text_Grunt2Defeat:
	.string "No way...$"

FloaromaMeadow_Text_GruntsFlee:
	.string "GRUNT: Forget the HONEY! Let's get\n"
	.string "out of here! ...Hey, you dropped\l"
	.string "the WINDWORKS key!$"

FloaromaMeadow_Text_HoneyThanks:
	.string "HONEY MAN: Thank you, young one!\n"
	.string "Those ruffians dropped this. It\l"
	.string "must be the key to the WINDWORKS.$"

FloaromaMeadow_Text_HoneyGift:
	.string "And please, take some of my HONEY\n"
	.string "as thanks!$"

FloaromaMeadow_Text_HoneyInfo:
	.string "Slather HONEY on a sweet-smelling\n"
	.string "tree, and wild POKéMON will come\l"
	.string "to eat it!$"

FloaromaMeadow_Text_HoneyHelp:
	.string "Help! These people want to take\n"
	.string "all my HONEY!$"
