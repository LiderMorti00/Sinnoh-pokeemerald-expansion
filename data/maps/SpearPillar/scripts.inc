SpearPillar_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SpearPillar_OnTransitionSN
	.byte 0

SpearPillar_Text_PtNpc1_0:
	.string "We are not capable of slowing you.\p"
	.string "We will let you pass so you can get\n"
	.string "pulverized by our bosses!$"

SpearPillar_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SpearPillar_Text_PtNpc2_0:
	.string "Mars: I’m surprised you made it here.\n"
	.string "You can stay if you won’t meddle.$"

SpearPillar_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SpearPillar_Text_PtNpc3_0:
	.string "We are not capable of slowing you.\p"
	.string "We will let you pass so you can get\n"
	.string "pulverized by our bosses!$"

SpearPillar_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

SpearPillar_Text_PtNpc4_0:
	.string "Jupiter: Be quiet and watch what our\n"
	.string "boss is about to do.$"

SpearPillar_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

SpearPillar_OnTransitionSN:
	call SpearPillar_EventScript_SNVis_SP_GRUNT1
	call SpearPillar_EventScript_SNVis_SP_GRUNT2
	call SpearPillar_EventScript_SNVis_SP_MARS
	call SpearPillar_EventScript_SNVis_SP_JUPITER
	call SpearPillar_EventScript_SNVis_SP_CYRUS
	call SpearPillar_EventScript_SNVis_DIALGA
	call SpearPillar_EventScript_SNVis_PALKIA
	end

SpearPillar_EventScript_SNVis_SP_GRUNT1:
	setflag FLAG_SN_HIDE_SP_GRUNT1
	goto_if_lt VAR_SINNOH_STORY, 32, SpearPillar_EventScript_SNVis_SP_GRUNT1_End
	goto_if_ge VAR_SINNOH_STORY, 33, SpearPillar_EventScript_SNVis_SP_GRUNT1_End
	goto_if_defeated TRAINER_DYLAN_1, SpearPillar_EventScript_SNVis_SP_GRUNT1_End
	clearflag FLAG_SN_HIDE_SP_GRUNT1
SpearPillar_EventScript_SNVis_SP_GRUNT1_End:
	return

SpearPillar_EventScript_SNVis_SP_GRUNT2:
	setflag FLAG_SN_HIDE_SP_GRUNT2
	goto_if_lt VAR_SINNOH_STORY, 32, SpearPillar_EventScript_SNVis_SP_GRUNT2_End
	goto_if_ge VAR_SINNOH_STORY, 33, SpearPillar_EventScript_SNVis_SP_GRUNT2_End
	goto_if_defeated TRAINER_DYLAN_2, SpearPillar_EventScript_SNVis_SP_GRUNT2_End
	clearflag FLAG_SN_HIDE_SP_GRUNT2
SpearPillar_EventScript_SNVis_SP_GRUNT2_End:
	return

SpearPillar_EventScript_SNVis_SP_MARS:
	setflag FLAG_SN_HIDE_SP_MARS
	goto_if_lt VAR_SINNOH_STORY, 32, SpearPillar_EventScript_SNVis_SP_MARS_End
	goto_if_ge VAR_SINNOH_STORY, 33, SpearPillar_EventScript_SNVis_SP_MARS_End
	goto_if_defeated TRAINER_DYLAN_3, SpearPillar_EventScript_SNVis_SP_MARS_End
	clearflag FLAG_SN_HIDE_SP_MARS
SpearPillar_EventScript_SNVis_SP_MARS_End:
	return

SpearPillar_EventScript_SNVis_SP_JUPITER:
	setflag FLAG_SN_HIDE_SP_JUPITER
	goto_if_lt VAR_SINNOH_STORY, 32, SpearPillar_EventScript_SNVis_SP_JUPITER_End
	goto_if_ge VAR_SINNOH_STORY, 33, SpearPillar_EventScript_SNVis_SP_JUPITER_End
	goto_if_defeated TRAINER_DYLAN_4, SpearPillar_EventScript_SNVis_SP_JUPITER_End
	clearflag FLAG_SN_HIDE_SP_JUPITER
SpearPillar_EventScript_SNVis_SP_JUPITER_End:
	return

SpearPillar_EventScript_SNVis_SP_CYRUS:
	setflag FLAG_SN_HIDE_SP_CYRUS
	goto_if_lt VAR_SINNOH_STORY, 32, SpearPillar_EventScript_SNVis_SP_CYRUS_End
	goto_if_ge VAR_SINNOH_STORY, 33, SpearPillar_EventScript_SNVis_SP_CYRUS_End
	clearflag FLAG_SN_HIDE_SP_CYRUS
SpearPillar_EventScript_SNVis_SP_CYRUS_End:
	return

SpearPillar_EventScript_SNVis_DIALGA:
	setflag FLAG_SN_HIDE_DIALGA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SpearPillar_EventScript_SNVis_DIALGA_End
	checkitem ITEM_ADAMANT_ORB
	goto_if_eq VAR_RESULT, FALSE, SpearPillar_EventScript_SNVis_DIALGA_End
	goto_if_set FLAG_SN_DONE_DIALGA, SpearPillar_EventScript_SNVis_DIALGA_End
	clearflag FLAG_SN_HIDE_DIALGA
SpearPillar_EventScript_SNVis_DIALGA_End:
	return

SpearPillar_EventScript_SNVis_PALKIA:
	setflag FLAG_SN_HIDE_PALKIA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SpearPillar_EventScript_SNVis_PALKIA_End
	checkitem ITEM_LUSTROUS_ORB
	goto_if_eq VAR_RESULT, FALSE, SpearPillar_EventScript_SNVis_PALKIA_End
	goto_if_set FLAG_SN_DONE_PALKIA, SpearPillar_EventScript_SNVis_PALKIA_End
	clearflag FLAG_SN_HIDE_PALKIA
SpearPillar_EventScript_SNVis_PALKIA_End:
	return

SpearPillar_EventScript_SNSP_GRUNT1::
	trainerbattle_single TRAINER_DYLAN_1, SpearPillar_EventScript_SNSP_GRUNT1_Intro, SpearPillar_EventScript_SNSP_GRUNT1_Defeat, SpearPillar_EventScript_SNSP_GRUNT1_Won
	end

SpearPillar_EventScript_SNSP_GRUNT1_Won:
	lock
	msgbox SpearPillar_EventScript_SNSP_GRUNT1_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_SP_GRUNT1
	fadescreen FADE_FROM_BLACK
	release
	end
SpearPillar_EventScript_SNSP_GRUNT1_Intro:
	.string "You won’t get past us!$"

SpearPillar_EventScript_SNSP_GRUNT1_Defeat:
	.string "No way...!$"

SpearPillar_EventScript_SNSP_GRUNT1_Post:
	.string "Our boss will create a new world!$"

SpearPillar_EventScript_SNSP_GRUNT2::
	trainerbattle_single TRAINER_DYLAN_2, SpearPillar_EventScript_SNSP_GRUNT2_Intro, SpearPillar_EventScript_SNSP_GRUNT2_Defeat, SpearPillar_EventScript_SNSP_GRUNT2_Won
	end

SpearPillar_EventScript_SNSP_GRUNT2_Won:
	lock
	msgbox SpearPillar_EventScript_SNSP_GRUNT2_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_SP_GRUNT2
	fadescreen FADE_FROM_BLACK
	release
	end
SpearPillar_EventScript_SNSP_GRUNT2_Intro:
	.string "Not one step further!$"

SpearPillar_EventScript_SNSP_GRUNT2_Defeat:
	.string "No way...!$"

SpearPillar_EventScript_SNSP_GRUNT2_Post:
	.string "Gah... The boss won’t like this...$"

SpearPillar_EventScript_SNSP_MARS::
	trainerbattle_single TRAINER_DYLAN_3, SpearPillar_EventScript_SNSP_MARS_Intro, SpearPillar_EventScript_SNSP_MARS_Defeat, SpearPillar_EventScript_SNSP_MARS_Won
	end

SpearPillar_EventScript_SNSP_MARS_Won:
	lock
	msgbox SpearPillar_EventScript_SNSP_MARS_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_SP_MARS
	fadescreen FADE_FROM_BLACK
	release
	end
SpearPillar_EventScript_SNSP_MARS_Intro:
	.string "Mars: Where do you think you’re going?\n"
	.string "I won’t let you disturb our boss.\p"
	.string "If you’re not going to listen, you’ll\n"
	.string "have to go through me first.\p"
	.string "After all, you’ve made me look bad more\n"
	.string "times than I care to remember!$"

SpearPillar_EventScript_SNSP_MARS_Defeat:
	.string "No way...!$"

SpearPillar_EventScript_SNSP_MARS_Post:
	.string "Mars: I’m surprised you made it here.\n"
	.string "You can stay if you won’t meddle.$"

SpearPillar_EventScript_SNSP_JUPITER::
	trainerbattle_single TRAINER_DYLAN_4, SpearPillar_EventScript_SNSP_JUPITER_Intro, SpearPillar_EventScript_SNSP_JUPITER_Defeat, SpearPillar_EventScript_SNSP_JUPITER_Won
	end

SpearPillar_EventScript_SNSP_JUPITER_Won:
	lock
	msgbox SpearPillar_EventScript_SNSP_JUPITER_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_SP_JUPITER
	fadescreen FADE_FROM_BLACK
	release
	end
SpearPillar_EventScript_SNSP_JUPITER_Intro:
	.string "Jupiter: And I’ll be next.\p"
	.string "You might be tough, but this time, the\n"
	.string "gloves are coming off!$"

SpearPillar_EventScript_SNSP_JUPITER_Defeat:
	.string "No way...!$"

SpearPillar_EventScript_SNSP_JUPITER_Post:
	.string "Jupiter: Be quiet and watch what our\n"
	.string "boss is about to do.$"

SpearPillar_EventScript_SNCyrus::
	lock
	faceplayer
	msgbox SpearPillar_EventScript_SNCyrus_T1, MSGBOX_DEFAULT
	msgbox SpearPillar_EventScript_SNCyrus_T2, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_DYLAN_5, SpearPillar_EventScript_SNCyrus_Defeat
	msgbox SpearPillar_EventScript_SNCyrus_T3, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_SP_CYRUS
	fadescreen FADE_FROM_BLACK
	msgbox SpearPillar_EventScript_SNCyrus_T4, MSGBOX_DEFAULT
	closemessage
	waitse
	playmoncry SPECIES_GIRATINA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_GIRATINA, 47
	special BattleSetup_StartLegendaryBattle
	waitstate
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, SpearPillar_EventScript_SNCyrus_NotCaught
	setflag FLAG_SN_DONE_GIRATINA
SpearPillar_EventScript_SNCyrus_NotCaught:
	setvar VAR_SINNOH_STORY, 33
	release
	end
SpearPillar_EventScript_SNCyrus_T1:
	.string "Cyrus: ... ...\p"
	.string "Everything is ready for the creation\n"
	.string "of a new world.\p"
	.string "Now, all will end. And everything will\n"
	.string "begin.\p"
	.string "With this, the Red Chain made from the\n"
	.string "crystals of the three lake POKéMON...\p"
	.string "And this, the Red Chain I replicated\n"
	.string "with technological means...\p"
	.string "With these Red Chains I will pry open\n"
	.string "the portal to another dimension.\p"
	.string "I command that you unleash your power\n"
	.string "for me...$"

SpearPillar_EventScript_SNCyrus_T2:
	.string "Cyrus: I’ve waited so long for this\n"
	.string "moment, DIALGA and PALKIA.\p"
	.string "Shaping this world is a double spiral of\n"
	.string "time and space.\p"
	.string "Yes, the very things that you have the\n"
	.string "ability to control!\p"
	.string "You will do my bidding! I will have your\n"
	.string "abilities as mine!\p"
	.string "With the power I wield, I will create an\n"
	.string "entirely new world!$"

SpearPillar_EventScript_SNCyrus_Defeat:
	.string "Cyrus: ...How can this be?$"

SpearPillar_EventScript_SNCyrus_T3:
	.string "Cyrus: ...I should have expected as\n"
	.string "much.\p"
	.string "UXIE, “The Being of Knowledge.”\p"
	.string "AZELF, “The Being of Willpower.”\p"
	.string "And MESPRIT, “The Being of Emotion”...$"

SpearPillar_EventScript_SNCyrus_T4:
	.string "Cyrus: Interesting.\p"
	.string "So, there is a POKéMON that can only\n"
	.string "appear as a shadow.$"

SpearPillar_EventScript_SNDIALGA::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_DIALGA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_DIALGA, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SpearPillar_EventScript_SNDIALGA_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SpearPillar_EventScript_SNDIALGA_Ran
	setflag FLAG_SN_DONE_DIALGA
	setflag FLAG_SN_HIDE_DIALGA
	goto Common_EventScript_RemoveStaticPokemon
	end

SpearPillar_EventScript_SNDIALGA_Ran:
	setvar VAR_0x8004, SPECIES_DIALGA
	goto Common_EventScript_LegendaryFlewAway
	end

SpearPillar_EventScript_SNPALKIA::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PALKIA, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_PALKIA, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special BattleSetup_StartLegendaryBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SpearPillar_EventScript_SNPALKIA_Ran
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SpearPillar_EventScript_SNPALKIA_Ran
	setflag FLAG_SN_DONE_PALKIA
	setflag FLAG_SN_HIDE_PALKIA
	goto Common_EventScript_RemoveStaticPokemon
	end

SpearPillar_EventScript_SNPALKIA_Ran:
	setvar VAR_0x8004, SPECIES_PALKIA
	goto Common_EventScript_LegendaryFlewAway
	end
