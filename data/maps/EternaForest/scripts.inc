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
	.string "My BUG POKéMON love this forest!\n"
	.string "Let's battle!$"

EternaForest_Text_JackDefeat:
	.string "Squashed flat...$"

EternaForest_Text_JackPost:
	.string "BEAUTIFLY is so pretty when it\n"
	.string "flies.$"

EternaForest_EventScript_Briana::
	trainerbattle_single TRAINER_WENDY, EternaForest_Text_BrianaIntro, EternaForest_Text_BrianaDefeat
	msgbox EternaForest_Text_BrianaPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_BrianaIntro:
	.string "PACHIRISU and I are lost... Battle\n"
	.string "me while we wait!$"

EternaForest_Text_BrianaDefeat:
	.string "Lost the battle, too...$"

EternaForest_Text_BrianaPost:
	.string "Is the exit this way? I'm so\n"
	.string "confused.$"

EternaForest_EventScript_Lindsey::
	trainerbattle_single TRAINER_KEIRA, EternaForest_Text_LindseyIntro, EternaForest_Text_LindseyDefeat
	msgbox EternaForest_Text_LindseyPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_LindseyIntro:
	.string "I sensed you coming. Shall we\n"
	.string "battle?$"

EternaForest_Text_LindseyDefeat:
	.string "I didn't foresee that...$"

EternaForest_Text_LindseyPost:
	.string "ABRA teleports away when it's\n"
	.string "scared.$"

EternaForest_EventScript_Elijah::
	trainerbattle_single TRAINER_JENNIFER, EternaForest_Text_ElijahIntro, EternaForest_Text_ElijahDefeat
	msgbox EternaForest_Text_ElijahPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_ElijahIntro:
	.string "My mind is sharper than any sword!$"

EternaForest_Text_ElijahDefeat:
	.string "My focus broke...$"

EternaForest_Text_ElijahPost:
	.string "Even psychics get lost in this\n"
	.string "forest.$"

EternaForest_EventScript_Phillip::
	trainerbattle_single TRAINER_HOPE, EternaForest_Text_PhillipIntro, EternaForest_Text_PhillipDefeat
	msgbox EternaForest_Text_PhillipPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_PhillipIntro:
	.string "DUSTOX shines in the dark! Look!$"

EternaForest_Text_PhillipDefeat:
	.string "It's powder everywhere...$"

EternaForest_Text_PhillipPost:
	.string "Watch out for poison powder!$"

EternaForest_EventScript_Donald::
	trainerbattle_single TRAINER_SHANNON, EternaForest_Text_DonaldIntro, EternaForest_Text_DonaldDefeat
	msgbox EternaForest_Text_DonaldPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_DonaldIntro:
	.string "My BURMY change their cloaks here!\n"
	.string "Wanna see?$"

EternaForest_Text_DonaldDefeat:
	.string "Unwrapped...$"

EternaForest_Text_DonaldPost:
	.string "BURMY takes on the cloak of the\n"
	.string "place where it battled.$"

EternaForest_EventScript_Kody::
	trainerbattle_single TRAINER_MICHELLE, EternaForest_Text_KodyIntro, EternaForest_Text_KodyDefeat
	msgbox EternaForest_Text_KodyPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_KodyIntro:
	.string "MEDITITE and I meditate here every\n"
	.string "day.$"

EternaForest_Text_KodyDefeat:
	.string "My concentration broke!$"

EternaForest_Text_KodyPost:
	.string "Clear your mind and you'll find\n"
	.string "the path.$"

EternaForest_EventScript_Rachael::
	trainerbattle_single TRAINER_CAROLINE, EternaForest_Text_RachaelIntro, EternaForest_Text_RachaelDefeat
	msgbox EternaForest_Text_RachaelPost, MSGBOX_AUTOCLOSE
	end

EternaForest_Text_RachaelIntro:
	.string "PSYDUCK has a headache again.\n"
	.string "Let's battle!$"

EternaForest_Text_RachaelDefeat:
	.string "Ouch...$"

EternaForest_Text_RachaelPost:
	.string "PSYDUCK gets stronger when its\n"
	.string "headache is worse.$"

EternaForest_EventScript_PtNpc1::
	msgbox EternaForest_Text_PtNpc1, MSGBOX_NPC
	end

EternaForest_Text_PtNpc1:
	.string "I got totally lost in here. Every\n"
	.string "tree looks the same!$"

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
