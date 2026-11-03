Route224_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route224_OnTransitionSN
	.byte 0

Route224_EventScript_Ruben::
	trainerbattle_single TRAINER_JONAS, Route224_Text_RubenIntro, Route224_Text_RubenDefeat
	msgbox Route224_Text_RubenPost, MSGBOX_AUTOCLOSE
	end

Route224_Text_RubenIntro:
	.string "There's something about you... You're\n"
	.string "not just anybody.\p"
	.string "I challenge you!$"

Route224_Text_RubenDefeat:
	.string "You're at a different level of\n"
	.string "expertise for sure!$"

Route224_Text_RubenPost:
	.string "You've won countless times... That has\n"
	.string "made you very powerful.$"

Route224_EventScript_Maxwell::
	trainerbattle_single TRAINER_KAYLEY, Route224_Text_MaxwellIntro, Route224_Text_MaxwellDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route224_EventScript_Maxwell_Rematch
	msgbox Route224_Text_MaxwellPost, MSGBOX_AUTOCLOSE
	end

Route224_EventScript_Maxwell_Rematch:
	trainerbattle_rematch TRAINER_KAYLEY, Route224_Text_MaxwellIntro, Route224_Text_MaxwellDefeat
	msgbox Route224_Text_MaxwellPost, MSGBOX_AUTOCLOSE
	end

Route224_Text_MaxwellIntro:
	.string "For some reason I was drawn here, and\n"
	.string "it is here that I met you...\p"
	.string "I want to know what all this means!$"

Route224_Text_MaxwellDefeat:
	.string "I see...\p"
	.string "So that's what it means...$"

Route224_Text_MaxwellPost:
	.string "I feel... I feel some sort of a mystic\n"
	.string "presence emanating from here...$"

Route224_EventScript_Carl::
	trainerbattle_single TRAINER_AURON, Route224_Text_CarlIntro, Route224_Text_CarlDefeat
	msgbox Route224_Text_CarlPost, MSGBOX_AUTOCLOSE
	end

Route224_Text_CarlIntro:
	.string "All right, my POKéMON squad! Get out\n"
	.string "there and kick up a storm!$"

Route224_Text_CarlDefeat:
	.string "The squad failed to hit its stride...$"

Route224_Text_CarlPost:
	.string "Hmm...\p"
	.string "Gazing out over the sea doesn't do a\n"
	.string "thing for toughening up my POKéMON!$"

Route224_EventScript_Armando::
	trainerbattle_single TRAINER_KELVIN, Route224_Text_ArmandoIntro, Route224_Text_ArmandoDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route224_EventScript_Armando_Rematch
	msgbox Route224_Text_ArmandoPost, MSGBOX_AUTOCLOSE
	end

Route224_EventScript_Armando_Rematch:
	trainerbattle_rematch TRAINER_KELVIN, Route224_Text_ArmandoIntro, Route224_Text_ArmandoDefeat
	msgbox Route224_Text_ArmandoPost, MSGBOX_AUTOCLOSE
	end

Route224_Text_ArmandoIntro:
	.string "I've seen countless Trainers and even\n"
	.string "more POKéMON!\p"
	.string "So, what kind of a Trainer are you?$"

Route224_Text_ArmandoDefeat:
	.string "I see... Simply outstanding.$"

Route224_Text_ArmandoPost:
	.string "I've seen countless Trainers and even\n"
	.string "more POKéMON.\p"
	.string "You're a strong Trainer. Moreover,\n"
	.string "your heart is strong.$"

Route224_EventScript_Brittney::
	trainerbattle_single TRAINER_MARLEY, Route224_Text_BrittneyIntro, Route224_Text_BrittneyDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route224_EventScript_Brittney_Rematch
	msgbox Route224_Text_BrittneyPost, MSGBOX_AUTOCLOSE
	end

Route224_EventScript_Brittney_Rematch:
	trainerbattle_rematch TRAINER_MARLEY, Route224_Text_BrittneyIntro, Route224_Text_BrittneyDefeat
	msgbox Route224_Text_BrittneyPost, MSGBOX_AUTOCLOSE
	end

Route224_Text_BrittneyIntro:
	.string "There is nothing here... And yet there\n"
	.string "is a power lurking...\p"
	.string "Were you drawn by it, as well?$"

Route224_Text_BrittneyDefeat:
	.string "The power that slumbers within you...\n"
	.string "It is rather marvelous indeed...$"

Route224_Text_BrittneyPost:
	.string "A place where nothing else exists...\p"
	.string "A place such as that is better suited\n"
	.string "to awaken the power within.$"

Route224_EventScript_Jamie::
	trainerbattle_single TRAINER_REYNA, Route224_Text_JamieIntro, Route224_Text_JamieDefeat
	msgbox Route224_Text_JamiePost, MSGBOX_AUTOCLOSE
	end

Route224_Text_JamieIntro:
	.string "I constantly analyze POKéMON and\n"
	.string "various battles on my laptop.$"

Route224_Text_JamieDefeat:
	.string "...Things don't always work out\n"
	.string "according to my calculations...$"

Route224_Text_JamiePost:
	.string "I had a lot of fun battling with you,\n"
	.string "though.\p"
	.string "I wonder if I can analyze the battle\n"
	.string "data properly?\p"
	.string "I could use a rematch to get some\n"
	.string "additional data.$"

Route224_EventScript_Larry::
	trainerbattle_single TRAINER_HUDSON, Route224_Text_LarryIntro, Route224_Text_LarryDefeat
	msgbox Route224_Text_LarryPost, MSGBOX_AUTOCLOSE
	end

Route224_Text_LarryIntro:
	.string "I don't care who you are--no one\n"
	.string "interferes with my treasure hunting!$"

Route224_Text_LarryDefeat:
	.string "My POKéMON! My treasures!$"

Route224_Text_LarryPost:
	.string "I heard there's an intriguing stone\n"
	.string "monument around, so I came running.$"

Route224_EventScript_Hayden::
	trainerbattle_single TRAINER_CONOR, Route224_Text_HaydenIntro, Route224_Text_HaydenDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route224_EventScript_Hayden_Rematch
	msgbox Route224_Text_HaydenPost, MSGBOX_AUTOCLOSE
	end

Route224_EventScript_Hayden_Rematch:
	trainerbattle_rematch TRAINER_CONOR, Route224_Text_HaydenIntro, Route224_Text_HaydenDefeat
	msgbox Route224_Text_HaydenPost, MSGBOX_AUTOCLOSE
	end

Route224_Text_HaydenIntro:
	.string "My dragon POKéMON chose to become\n"
	.string "powerful here. They sure like it!$"

Route224_Text_HaydenDefeat:
	.string "Your battle style... So savage...$"

Route224_Text_HaydenPost:
	.string "It's been several years since I left\n"
	.string "the Dragon's Den.\p"
	.string "I've got to say, your POKéMON are in\n"
	.string "the top class for toughness.$"

Route224_OnTransitionSN:
	call Route224_EventScript_SNVis_R224_OAK
	call Route224_EventScript_SNVis_SHAYMIN
	end

Route224_EventScript_SNVis_SHAYMIN:
	setflag FLAG_SN_HIDE_SHAYMIN
	goto_if_unset FLAG_SN_ROUTE224_TABLET, Route224_EventScript_SNVis_SHAYMIN_End
	goto_if_set FLAG_SN_DONE_SHAYMIN, Route224_EventScript_SNVis_SHAYMIN_End
	clearflag FLAG_SN_HIDE_SHAYMIN
Route224_EventScript_SNVis_SHAYMIN_End:
	return

Route224_EventScript_SNShaymin::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_SHAYMIN, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_SHAYMIN, 30
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route224_EventScript_SNShaymin_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route224_EventScript_SNShaymin_Ran
	setflag FLAG_SN_DONE_SHAYMIN
	setflag FLAG_SN_HIDE_SHAYMIN
	goto Common_EventScript_RemoveStaticPokemon
	end
Route224_EventScript_SNShaymin_Ran:
	setvar VAR_0x8004, SPECIES_SHAYMIN
	goto Common_EventScript_LegendaryFlewAway
	end

Route224_EventScript_SNVis_R224_OAK:
	setflag FLAG_SN_HIDE_R224_OAK
	goto_if_unset FLAG_SYS_NATIONAL_DEX, Route224_EventScript_SNVis_R224_OAK_End
	goto_if_set FLAG_SN_ROUTE224_TABLET, Route224_EventScript_SNVis_R224_OAK_End
	clearflag FLAG_SN_HIDE_R224_OAK
Route224_EventScript_SNVis_R224_OAK_End:
	return

Route224_EventScript_SNOak::
	lock
	faceplayer
	msgbox Route224_Text_SNOak1, MSGBOX_DEFAULT
	msgbox Route224_Text_SNOak2, MSGBOX_DEFAULT
	msgbox Route224_Text_SNOak3, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_ROUTE224_TABLET
	playse SE_M_HEAL_BELL
	waitse
	clearflag FLAG_SN_HIDE_SHAYMIN
	addobject LOCALID_SN_SHAYMIN
	playmoncry SPECIES_SHAYMIN, CRY_MODE_NORMAL
	waitmoncry
	msgbox Route224_Text_SNOak4, MSGBOX_DEFAULT
	closemessage
		sn_walkto LOCALID_SN_R224_OAK, 57, 36, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_R224_OAK
	removeobject LOCALID_SN_R224_OAK
	setflag FLAG_SN_HIDE_R224_OAK
	release
	end

Route224_Text_SNOak1:
	.string "Oak: Ah, {PLAYER}! It’s good to see you!\p"
	.string "Without any further ado, I’d like you\n"
	.string "to examine this stone tablet.\p"
	.string "Something just like it was also\n"
	.string "discovered in the Kanto region.\p"
	.string "I want to ask for your help in solving\n"
	.string "the mystery behind this.$"

Route224_Text_SNOak2:
	.string "Oak: I tried deciphering the\n"
	.string "engravings on the stone tablet.\p"
	.string "Apparently, it is for a Trainer to\n"
	.string "engrave his or her thoughts after\p"
	.string "growing as a person on an adventure.\p"
	.string "A Trainer fitting that description\n"
	.string "would be you.\p"
	.string "That’s why I’m asking you for your help.\p"
	.string "You’ve met many people and POKéMON;\n"
	.string "you’ve experienced many things that\p"
	.string "shaped you into the person you are.\p"
	.string "I want you to sincerely tell me who\n"
	.string "affected you the most.\p"
	.string "Tell me, to whom do you most want to\n"
	.string "say your thanks?$"

Route224_Text_SNOak3:
	.string "{PLAYER} engraved a message of thanks\n"
	.string "to everyone met on the journey...$"

Route224_Text_SNOak4:
	.string "Oak: ?! What was that POKéMON?\p"
	.string "Is it somehow connected to the stone\n"
	.string "tablet?\p"
	.string "Hmm... Where did that POKéMON go? Its\n"
	.string "destination is intriguing...$"
