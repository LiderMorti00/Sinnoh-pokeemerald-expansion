Route208_MapScripts::
	.byte 0

Route208_EventScript_Robert::
	trainerbattle_single TRAINER_EDGAR, Route208_Text_RobertIntro, Route208_Text_RobertDefeat
	msgbox Route208_Text_RobertPost, MSGBOX_AUTOCLOSE
	end

Route208_Text_RobertIntro:
	.string "Gahahaha! You're just a little kid!\p"
	.string "How're you supposed to beat a big man\n"
	.string "like me?$"

Route208_Text_RobertDefeat:
	.string "Oh my, a big man like me got schooled\n"
	.string "by a little kid like you!$"

Route208_Text_RobertPost:
	.string "Wow, you're sure impressive!\p"
	.string "I guess it makes no difference if\n"
	.string "you're young or old in battles.$"

Route208_EventScript_Alexander::
	trainerbattle_single TRAINER_ALBERT, Route208_Text_AlexanderIntro, Route208_Text_AlexanderDefeat
	msgbox Route208_Text_AlexanderPost, MSGBOX_AUTOCLOSE
	end

Route208_Text_AlexanderIntro:
	.string "They call me the Echo Man! Battle with\n"
	.string "me! Yahoo!$"

Route208_Text_AlexanderDefeat:
	.string "Ohh... Yo... Yodelay...$"

Route208_Text_AlexanderPost:
	.string "Here's good advice from the Echo Man!\p"
	.string "If you're at a loss as to where you\n"
	.string "should be going, check the Town Map!$"

Route208_EventScript_Jonathan::
	trainerbattle_single TRAINER_KINDRA, Route208_Text_JonathanIntro, Route208_Text_JonathanDefeat
	msgbox Route208_Text_JonathanPost, MSGBOX_AUTOCLOSE
	end

Route208_Text_JonathanIntro:
	.string "If I beat you, will you share some food\n"
	.string "with me?$"

Route208_Text_JonathanDefeat:
	.string "We were starved for food, and now\n"
	.string "we're starved for a win...$"

Route208_Text_JonathanPost:
	.string "Sigh... I feel even hungrier... Maybe\n"
	.string "I'll chow down some Berries...\p"
	.string "But that's kind of gross. What am I, a\n"
	.string "POKéMON?$"

Route208_EventScript_Kyle::
	trainerbattle_single TRAINER_TAMMY, Route208_Text_KyleIntro, Route208_Text_KyleDefeat
	msgbox Route208_Text_KylePost, MSGBOX_AUTOCLOSE
	end

Route208_Text_KyleIntro:
	.string "This karate man's going to pulverize\n"
	.string "you!$"

Route208_Text_KyleDefeat:
	.string "We got pulverized...$"

Route208_Text_KylePost:
	.string "It's obvious I need to train myself\n"
	.string "and my POKéMON harder.\p"
	.string "Hey, if you've got a Vs. Seeker, you'd\n"
	.string "better put it to good use.\p"
	.string "Nothing beats some repeated battling\n"
	.string "for toughening up your POKéMON.$"

Route208_EventScript_Cody::
	trainerbattle_single TRAINER_TASHA, Route208_Text_CodyIntro, Route208_Text_CodyDefeat
	msgbox Route208_Text_CodyPost, MSGBOX_AUTOCLOSE
	end

Route208_Text_CodyIntro:
	.string "Muhihi... I'll haul you up and out!$"

Route208_Text_CodyDefeat:
	.string "Restraint is my favorite word.\n"
	.string "Like...from crushing my opponents.$"

Route208_Text_CodyPost:
	.string "You need a Good Rod if you want to\n"
	.string "catch good POKéMON.$"

Route208_EventScript_Hannah::
	trainerbattle_single TRAINER_NAOMI, Route208_Text_HannahIntro, Route208_Text_HannahDefeat
	msgbox Route208_Text_HannahPost, MSGBOX_AUTOCLOSE
	end

Route208_Text_HannahIntro:
	.string "Oh, you want to have a battle?\p"
	.string "I was meaning to enter a Contest, but\n"
	.string "beating you won't take long...$"

Route208_Text_HannahDefeat:
	.string "Oh, you have us beaten.$"

Route208_Text_HannahPost:
	.string "You and your POKéMON have so much\n"
	.string "energy.\p"
	.string "I think you would do well in Contests,\n"
	.string "too.$"

Route208_EventScript_William::
	trainerbattle_single TRAINER_MELISSA, Route208_Text_WilliamIntro, Route208_Text_WilliamDefeat
	msgbox Route208_Text_WilliamPost, MSGBOX_AUTOCLOSE
	end

Route208_Text_WilliamIntro:
	.string "You and I!\p"
	.string "Let us create a scene! A fantastic\n"
	.string "tableau of battle!$"

Route208_Text_WilliamDefeat:
	.string "Magnificent! I am aglow with\n"
	.string "inspiration!$"

Route208_Text_WilliamPost:
	.string "That battle will surely become a\n"
	.string "stupendous masterpiece painting!\p"
	.string "I shall title it...\p"
	.string "“My POKéMON Is Fight”!$"

Route208_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ROUTE208_ODD_KEYSTONE, Route208_EventScript_PtNpc1_Received
	msgbox Route208_Text_PtNpc1, MSGBOX_DEFAULT
	giveitem ITEM_ODD_KEYSTONE, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ROUTE208_ODD_KEYSTONE
	release
	end

Route208_EventScript_PtNpc1_Received:
	msgbox Route208_Text_PtNpc1_Received, MSGBOX_DEFAULT
	release
	end

Route208_Text_PtNpc1:
	.string "...Don't say a word. Just take it.$"

Route208_Text_PtNpc1_Received:
	.string "Go to Route 209! Go underground!\p"
	.string "Listen to the stone pillar! Talk to\n"
	.string "people underground!$"

Route208_EventScript_PtSign1::
	msgbox Route208_Text_PtSign1, MSGBOX_SIGN
	end

Route208_Text_PtSign1:
	.string "Rt. 208 HEARTHOME CITY$"

Route208_EventScript_PtSign2::
	msgbox Route208_Text_PtSign2, MSGBOX_SIGN
	end

Route208_Text_PtSign2:
	.string "Berry Master's House Free Berries\n"
	.string "Available$"

Route208_EventScript_PtSign3::
	msgbox Route208_Text_PtSign3, MSGBOX_SIGN
	end

Route208_Text_PtSign3:
	.string "Rt. 208 MT. CORONET$"

Route208_EventScript_PtSign4::
	msgbox Route208_Text_PtSign4, MSGBOX_SIGN
	end

Route208_Text_PtSign4:
	.string "Trainer Tips After a Berry is planted,\n"
	.string "watch the color of the soil.\p"
	.string "If the soil is dark, it means it has\n"
	.string "plenty of moisture.\p"
	.string "If the soil is lighter in color, water it\n"
	.string "with your Sprayduck.$"
