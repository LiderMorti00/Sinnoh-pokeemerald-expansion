EternaForest_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, EternaForest_OnTransitionSN
	.byte 0

EternaForest_EventScript_Cheryl::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 22, EternaForest_EventScript_CherylEnd
	applymovement LOCALID_FOREST_CHERYL, Common_Movement_FacePlayer
	waitmovement 0
	msgbox EternaForest_Text_CherylAsk, MSGBOX_DEFAULT
	closemessage
	special HealPlayerParty
	setfollowernpc LOCALID_FOREST_CHERYL, FNPC_ALL_LAND, EternaForest_EventScript_CherylHeal, PARTNER_CHERYL
	setvar VAR_SINNOH_STORY, 23
EternaForest_EventScript_CherylEnd::
	releaseall
	end

EternaForest_EventScript_CherylHeal::
	lock
	msgbox EternaForest_Text_CherylHeal, MSGBOX_DEFAULT
	special HealPlayerParty
	release
	end

EternaForest_EventScript_CherylBye::
	lockall
	msgbox EternaForest_Text_CherylBye, MSGBOX_DEFAULT
	giveitem ITEM_SOOTHE_BELL
	msgbox EternaForest_Text_CherylBye2, MSGBOX_DEFAULT
	closemessage
	destroyfollowernpc
	setflag FLAG_HIDE_FOREST_CHERYL
	clearflag FLAG_HIDE_ETERNA_BARRY
	setvar VAR_SINNOH_STORY, 24
	releaseall
	end

EternaForest_Text_CherylAsk:
	.string "Hello, my name’s Cheryl. And you are...?\p"
	.string "OK, so your name is {PLAYER}. I’m\n"
	.string "sincerely glad to meet you.\p"
	.string "{PLAYER}, may I ask a big favor of you?\p"
	.string "I want to get through this forest, but\n"
	.string "I’m afraid of doing it alone.\p"
	.string "I’ve heard that there is a sinister\n"
	.string "group of people called Team Galactic\p"
	.string "about.\p"
	.string "I think there’d be safety in numbers.\n"
	.string "Please, may I go through with you?\p"
	.string "{PLAYER} decided to go with Cheryl!$"

EternaForest_Text_CherylHeal:
	.string "Cheryl: I’ll keep your POKéMON in\n"
	.string "perfect health.$"

EternaForest_Text_CherylBye:
	.string "Cheryl: Oh! There’s the exit! I’m so\n"
	.string "relieved... We finally got here.\p"
	.string "I would’ve never been able to get\n"
	.string "through this by myself.\p"
	.string "Thank you so much, {PLAYER}!$"

EternaForest_Text_CherylBye2:
	.string "CHERYL: A POKéMON holding a SOOTHE\n"
	.string "BELL grows friendly faster. Good\l"
	.string "luck on your journey!$"

EternaForest_EventScript_Jack::
	trainerbattle_single TRAINER_JODY, EternaForest_Text_JackIntro, EternaForest_Text_JackDefeat
	msgbox EternaForest_Text_JackPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_JackIntro:
	.string "What's cool, you might ask? No? I'll\n"
	.string "tell you anyway: bug POKéMON!$"

EternaForest_Text_JackDefeat:
	.string "Don't ignore bug POKéMON! That really\n"
	.string "bugs me!$"

EternaForest_Text_JackPost:
	.string "It would seem that coolness alone\n"
	.string "doesn't add up to any wins...$"

EternaForest_EventScript_Briana::
	trainerbattle_single TRAINER_WENDY, EternaForest_Text_BrianaIntro, EternaForest_Text_BrianaDefeat
	msgbox EternaForest_Text_BrianaPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_BrianaIntro:
	.string "We're just out on a power walk!$"

EternaForest_Text_BrianaDefeat:
	.string "Oh, you!$"

EternaForest_Text_BrianaPost:
	.string "You can't avoid bug POKéMON ever in\n"
	.string "the forest.\p"
	.string "I didn't have any Antidotes with me,\n"
	.string "either. It was the worst!$"

EternaForest_EventScript_Lindsey::
	trainerbattle_single TRAINER_KEIRA, EternaForest_Text_LindseyIntro, EternaForest_Text_LindseyDefeat
	msgbox EternaForest_Text_LindseyPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_LindseyIntro:
	.string "I see it... I see it...\p"
	.string "I see you going down in defeat...$"

EternaForest_Text_LindseyDefeat:
	.string "It is I that has gone down in defeat.$"

EternaForest_Text_LindseyPost:
	.string "The OLD CHATEAU... There should be\n"
	.string "none alive in it...\p"
	.string "And yet there is a pervasive sense of\n"
	.string "a presence...$"

EternaForest_EventScript_Elijah::
	trainerbattle_single TRAINER_JENNIFER, EternaForest_Text_ElijahIntro, EternaForest_Text_ElijahDefeat
	msgbox EternaForest_Text_ElijahPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_ElijahIntro:
	.string "When a Trainer and a POKéMON bond as\n"
	.string "one, a wondrous power is born...$"

EternaForest_Text_ElijahDefeat:
	.string "Urmmm... Urrrrmmmmm...$"

EternaForest_Text_ElijahPost:
	.string "There still remain many mysteries yet\n"
	.string "to be solved in this strange world...$"

EternaForest_EventScript_Phillip::
	trainerbattle_single TRAINER_HOPE, EternaForest_Text_PhillipIntro, EternaForest_Text_PhillipDefeat
	msgbox EternaForest_Text_PhillipPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_PhillipIntro:
	.string "Here comes the swarm!$"

EternaForest_Text_PhillipDefeat:
	.string "Whoooh...$"

EternaForest_Text_PhillipPost:
	.string "There's a POKéMON ability named Swarm.$"

EternaForest_EventScript_Donald::
	trainerbattle_single TRAINER_SHANNON, EternaForest_Text_DonaldIntro, EternaForest_Text_DonaldDefeat
	msgbox EternaForest_Text_DonaldPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_DonaldIntro:
	.string "My senses tingle... I've spotted a rare\n"
	.string "POKéMON!$"

EternaForest_Text_DonaldDefeat:
	.string "Awawawawah...$"

EternaForest_Text_DonaldPost:
	.string "I thought it was a rare POKéMON, but\n"
	.string "it turned out to be just a Trainer!$"

EternaForest_EventScript_Kody::
	trainerbattle_single TRAINER_MICHELLE, EternaForest_Text_KodyIntro, EternaForest_Text_KodyDefeat
	msgbox EternaForest_Text_KodyPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_KodyIntro:
	.string "A strange presence has been felt... It\n"
	.string "is emanating from...you!$"

EternaForest_Text_KodyDefeat:
	.string "Oh, no! My MEDITITE!$"

EternaForest_Text_KodyPost:
	.string "The OLD CHATEAU... I sense... a\n"
	.string "particularly strong presence there.$"

EternaForest_EventScript_Rachael::
	trainerbattle_single TRAINER_CAROLINE, EternaForest_Text_RachaelIntro, EternaForest_Text_RachaelDefeat
	msgbox EternaForest_Text_RachaelPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_RachaelIntro:
	.string "This forest is strange, you know... It\n"
	.string "seems to fill me with energy...$"

EternaForest_Text_RachaelDefeat:
	.string "Your victory... There is nothing\n"
	.string "strange about it.$"

EternaForest_Text_RachaelPost:
	.string "Forests are mystifying... They seem to\n"
	.string "gather such unexplainable energy.$"

EternaForest_EventScript_PtNpc1::
	msgbox EternaForest_Text_PtNpc1, MSGBOX_NPC
	end

EternaForest_Text_PtNpc1:
	.string "I'm searching for bug POKéMON so I can\n"
	.string "win at the ETERNA Gym.\p"
	.string "Bug POKéMON are great, you know? They\n"
	.string "grow really fast!$"

EternaForest_EventScript_Sign2::
	msgbox EternaForest_Text_Sign2, MSGBOX_SIGN
	end

EternaForest_Text_Sign2:
	.string "ETERNA FOREST$"

EternaForest_EventScript_Sign1::
	msgbox EternaForest_Text_Sign1, MSGBOX_SIGN
	end

EternaForest_Text_Sign1:
	.string "ETERNA FOREST$"

EternaForest_EventScript_SNHoneyTree::
	lock
	goto_if_ne VAR_SN_HONEY_TREE, 18, EternaForest_EventScript_SNHoneyTree_Fresh
	special SinnohHoneyReady
	goto_if_eq VAR_RESULT, TRUE, EternaForest_EventScript_SNHoneyTree_Battle
	msgbox SN_HoneyTree_Text_Wait, MSGBOX_DEFAULT
	release
	end
EternaForest_EventScript_SNHoneyTree_Battle:
	setvar VAR_SN_HONEY_TREE, 0
	setwildbattle SPECIES_WURMPLE, 5
	special SinnohHoneyTreeMon
	msgbox SN_HoneyTree_Text_Mon, MSGBOX_DEFAULT
	closemessage
	dowildbattle
	release
	end
EternaForest_EventScript_SNHoneyTree_Fresh:
	msgbox SN_HoneyTree_Text_Scent, MSGBOX_DEFAULT
	checkitem ITEM_HONEY
	goto_if_eq VAR_RESULT, FALSE, EternaForest_EventScript_SNHoneyTree_End
	msgbox SN_HoneyTree_Text_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EternaForest_EventScript_SNHoneyTree_End
	removeitem ITEM_HONEY
	setvar VAR_SN_HONEY_TREE, 18
	special SinnohHoneySlather
	msgbox SN_HoneyTree_Text_Done, MSGBOX_DEFAULT
EternaForest_EventScript_SNHoneyTree_End:
	release
	end

EternaForest_OnTransitionSN:
	call EternaForest_EventScript_SNVis_CHATEAU_GARDENIA
	end

EternaForest_EventScript_SNVis_CHATEAU_GARDENIA:
	setflag FLAG_SN_HIDE_CHATEAU_GARDENIA
	goto_if_unset FLAG_BADGE02_GET, EternaForest_EventScript_SNVis_CHATEAU_GARDENIA_End
	clearflag FLAG_SN_HIDE_CHATEAU_GARDENIA
EternaForest_EventScript_SNVis_CHATEAU_GARDENIA_End:
	return

EternaForest_EventScript_SNGardenia::
	lock
	faceplayer
	msgbox EternaForest_Text_SNGardenia1, MSGBOX_DEFAULT
	msgbox EternaForest_Text_SNGardenia2, MSGBOX_DEFAULT
	release
	end

EternaForest_Text_SNGardenia1:
	.string "Gardenia: Hiya! Were you intrigued by\n"
	.string "the rumors going around, too?\p"
	.string "Gardenia: You know, people’ve been\n"
	.string "talking about the ghost POKéMON of\l"
	.string "the Old Chateau.\p"
	.string "I’ve been hearing rumors about\n"
	.string "sinister shadows, too.$"

EternaForest_Text_SNGardenia2:
	.string "Gardenia: I should check it out myself,\n"
	.string "but going in there is...\p"
	.string "...Well, you know, being that I’m a Gym\n"
	.string "Leader, I’m always busy.\p"
	.string "So, since I’m so busy, I can’t go in. It’s\n"
	.string "not because I’m s-scared!\p"
	.string "S-so, good luck with your\n"
	.string "investigation!$"

EternaForest_EventScript_SNMossRock::
	msgbox EternaForest_EventScript_SNMossRock_Text, MSGBOX_SIGN
	end

EternaForest_EventScript_SNMossRock_Text:
	.string "The rock is covered in moss. It feels\n"
	.string "pleasantly cool.$"
