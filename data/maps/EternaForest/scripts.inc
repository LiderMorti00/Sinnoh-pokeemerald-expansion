EternaForest_MapScripts::
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
	.string "CHERYL: Excuse me... I'm CHERYL. I\n"
	.string "heard some suspicious people in\l"
	.string "strange outfits are in this\n"
	.string "forest.\p"
	.string "I'm a little scared to go through\n"
	.string "alone. Would you come with me? My\l"
	.string "CHANSEY can heal your POKéMON\n"
	.string "along the way!$"

EternaForest_Text_CherylHeal:
	.string "CHERYL: Let me heal your POKéMON.\n"
	.string "Stay strong!$"

EternaForest_Text_CherylBye:
	.string "CHERYL: We made it out of the\n"
	.string "forest! Thank you so much. Please,\l"
	.string "take this as thanks.$"

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
