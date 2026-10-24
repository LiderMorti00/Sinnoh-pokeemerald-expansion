Route205_South_MapScripts::
	.byte 0

Route205_South_EventScript_Daniel::
	trainerbattle_single TRAINER_LEAH, Route205_South_Text_DanielIntro, Route205_South_Text_DanielDefeat
	msgbox Route205_South_Text_DanielPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_DanielIntro:
	.string "There's no mountain here, but I'm\n"
	.string "dressed to hike! Gahaha! Here goes!$"

Route205_South_Text_DanielDefeat:
	.string "Oh, yeah! A refreshing battle that\n"
	.string "was!$"

Route205_South_Text_DanielPost:
	.string "You can find the same kinds of\n"
	.string "POKéMON in all sorts of places.\p"
	.string "There's no law saying a Hiker can't go\n"
	.string "searching off in the mountains!$"

Route205_South_EventScript_Elizabeth::
	trainerbattle_single TRAINER_FELIX, Route205_South_Text_ElizabethIntro, Route205_South_Text_ElizabethDefeat
	msgbox Route205_South_Text_ElizabethPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_ElizabethIntro:
	.string "I love POKéMON that smell sweet. Like\n"
	.string "this one--get a whiff of this!$"

Route205_South_Text_ElizabethDefeat:
	.string "Did you understand what I meant?\n"
	.string "Didn't my POKéMON smell nice?$"

Route205_South_Text_ElizabethPost:
	.string "If you plant lots of Berries, you can\n"
	.string "be surrounded by sweet scents.$"

Route205_South_EventScript_Jacob::
	trainerbattle_single TRAINER_VIOLET, Route205_South_Text_JacobIntro, Route205_South_Text_JacobDefeat
	msgbox Route205_South_Text_JacobPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_JacobIntro:
	.string "Hey, how about you and me battle\n"
	.string "before I go into ETERNA FOREST?$"

Route205_South_Text_JacobDefeat:
	.string "That really dampened my spirits.$"

Route205_South_Text_JacobPost:
	.string "I heard that really tough POKéMON\n"
	.string "appear in ETERNA FOREST.\p"
	.string "I need to be more prepared than this!$"

Route205_South_EventScript_Siena::
	trainerbattle_single TRAINER_CHIP, Route205_South_Text_SienaIntro, Route205_South_Text_SienaDefeat
	msgbox Route205_South_Text_SienaPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_SienaIntro:
	.string "What kinds of POKéMON live around\n"
	.string "here, I wonder?$"

Route205_South_Text_SienaDefeat:
	.string "I'm shocked! How did I lose?$"

Route205_South_Text_SienaPost:
	.string "I know all sorts of things about\n"
	.string "POKéMON!\p"
	.string "Let's see... There are males and\n"
	.string "females, and some aren't either!$"

Route205_South_EventScript_Nicholas::
	trainerbattle_single TRAINER_FOSTER, Route205_South_Text_NicholasIntro, Route205_South_Text_NicholasDefeat
	msgbox Route205_South_Text_NicholasPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_NicholasIntro:
	.string "I've lost my way... Here of all places...$"

Route205_South_Text_NicholasDefeat:
	.string "Having lost his way, the Trainer lost\n"
	.string "the battle too...$"

Route205_South_Text_NicholasPost:
	.string "From being lost in the mountains so\n"
	.string "long, I became a Hiker...$"

Route205_South_EventScript_Kelsey::
	trainerbattle_single TRAINER_AUSTINA, Route205_South_Text_KelseyIntro, Route205_South_Text_KelseyDefeat
	msgbox Route205_South_Text_KelseyPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_KelseyIntro:
	.string "Hiyah! There's no holding anything\n"
	.string "back!$"

Route205_South_Text_KelseyDefeat:
	.string "I... I concede! I think you're on a\n"
	.string "different level...$"

Route205_South_Text_KelseyPost:
	.string "Hiyah! You put me in my place! I\n"
	.string "appreciate it!$"

Route205_South_EventScript_Karina::
	trainerbattle_single TRAINER_GWEN, Route205_South_Text_KarinaIntro, Route205_South_Text_KarinaDefeat
	msgbox Route205_South_Text_KarinaPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_KarinaIntro:
	.string "Oh, I don't know. Should I play a\n"
	.string "little?$"

Route205_South_Text_KarinaDefeat:
	.string "Oh, boo! How insulting!$"

Route205_South_Text_KarinaPost:
	.string "Listen very closely... Can you hear the\n"
	.string "cries of POKéMON?$"

Route205_South_EventScript_Zackary::
	trainerbattle_single TRAINER_SIMON, Route205_South_Text_ZackaryIntro, Route205_South_Text_ZackaryDefeat
	msgbox Route205_South_Text_ZackaryPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_ZackaryIntro:
	.string "It's a long way between FLOAROMA and\n"
	.string "ETERNA CITY. So, let's battle!$"

Route205_South_Text_ZackaryDefeat:
	.string "Wawawaah! I'm out of POKéMON that can\n"
	.string "go!$"

Route205_South_Text_ZackaryPost:
	.string "Camping with POKéMON! Do you have any\n"
	.string "idea how fun that is?$"

Route205_South_EventScript_BridgeGrunts::
	msgbox Route205_South_Text_BridgeGrunts, MSGBOX_NPC
	end

Route205_South_EventScript_BridgeBlock::
	lockall
	msgbox Route205_South_Text_BridgeBlock, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

Route205_South_EventScript_Girl::
	msgbox Route205_South_Text_Girl, MSGBOX_NPC
	end

Route205_South_Text_BridgeGrunts:
	.string "GRUNT: Nobody crosses this bridge\n"
	.string "while TEAM GALACTIC is working at\l"
	.string "the WINDWORKS!$"

Route205_South_Text_BridgeBlock:
	.string "TEAM GALACTIC GRUNTS are blocking\n"
	.string "the way north. I can't get past\l"
	.string "them.$"

Route205_South_Text_Girl:
	.string "Please help! Scary people in\n"
	.string "strange clothes took over the\l"
	.string "VALLEY WINDWORKS!\p"
	.string "My papa is still inside! The\n"
	.string "WINDWORKS is to the east. Please\l"
	.string "save him!$"

Route205_South_EventScript_PtNpc1::
	msgbox Route205_South_Text_PtNpc1, MSGBOX_NPC
	end

Route205_South_Text_PtNpc1:
	.string "Many Poison-type POKéMON make the\n"
	.string "ETERNA FOREST their home.\p"
	.string "But I didn't buy any Antidotes. What\n"
	.string "should I do?\p"
	.string "Do I press on, or do I go back?$"

Route205_South_EventScript_GirlScene::
	lockall
	applymovement LOCALID_ROUTE205_GIRL, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route205_South_Text_Girl, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_HIDE_FLOAROMA_GRUNTS
	clearflag FLAG_HIDE_MEADOW_GRUNTS
	setvar VAR_SINNOH_STORY, 21
	releaseall
	end

Route205_South_EventScript_Sign5::
	msgbox Route205_South_Text_Sign5, MSGBOX_SIGN
	end

Route205_South_Text_Sign5:
	.string "ROUTE 205\p"
	.string "FLOAROMA TOWN / ETERNA FOREST$"

Route205_South_EventScript_Sign1::
	msgbox Route205_South_Text_Sign1, MSGBOX_SIGN
	end

Route205_South_Text_Sign1:
	.string "ROUTE 205\p"
	.string "FLOAROMA TOWN / ETERNA FOREST$"

Route205_South_EventScript_Sign2::
	msgbox Route205_South_Text_Sign2, MSGBOX_SIGN
	end

Route205_South_Text_Sign2:
	.string "TRAINER TIPS\p"
	.string "Some trees can be cut down with\n"
	.string "the HM move CUT.$"

Route205_South_EventScript_Sign4::
	msgbox Route205_South_Text_Sign4, MSGBOX_SIGN
	end

Route205_South_Text_Sign4:
	.string "ROUTE 205$"

Route205_South_EventScript_Sign3::
	msgbox Route205_South_Text_Sign3, MSGBOX_SIGN
	end

Route205_South_Text_Sign3:
	.string "ROUTE 205\p"
	.string "FLOAROMA TOWN / ETERNA FOREST$"
