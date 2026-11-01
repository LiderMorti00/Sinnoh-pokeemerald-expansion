GalacticHQ_4F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GalacticHQ_4F_OnTransitionSN
	.byte 0

GalacticHQ_4F_Text_PtNpc1:
	.string "Cyrus: ...So, you’ve come. You heard my\n"
	.string "speech, I take it.\p"
	.string "Snicker... A big lie, of course.\p"
	.string "It’s true insofar as my intention is to\n"
	.string "create a new world.\p"
	.string "But that world isn’t for the likes of\n"
	.string "Team Galactic.\p"
	.string "I seek an entirely new world solely for\n"
	.string "myself.\p"
	.string "If not, it could never be the complete\n"
	.string "and perfect world.\p"
	.string "You’ve seen my minions of Team\n"
	.string "Galactic.\p"
	.string "You yourself must know that they are\n"
	.string "uniformly useless and incomplete.$"

GalacticHQ_4F_EventScript_PtNpc1::
	msgbox GalacticHQ_4F_Text_PtNpc1, MSGBOX_NPC
	end

GalacticHQ_4F_EventScript_PtSign1::
	msgbox GalacticHQ_4F_Text_PtSign1, MSGBOX_SIGN
	end

GalacticHQ_4F_Text_PtSign1:
	.string "Team Galactic Warp Panels!\p"
	.string "The green warp panel returns you to\n"
	.string "the ground floor.\p"
	.string "Onward to a new universe! -Team\n"
	.string "Galactic$"

GalacticHQ_4F_EventScript_PtSign2::
	msgbox GalacticHQ_4F_Text_PtSign2, MSGBOX_SIGN
	end

GalacticHQ_4F_Text_PtSign2:
	.string "Team Galactic Report$"

GalacticHQ_4F_OnTransitionSN:
	call GalacticHQ_4F_EventScript_SNVis_HQ_CYRUS
	end

GalacticHQ_4F_EventScript_SNVis_HQ_CYRUS:
	setflag FLAG_SN_HIDE_HQ_CYRUS
	goto_if_lt VAR_SINNOH_STORY, 31, GalacticHQ_4F_EventScript_SNVis_HQ_CYRUS_End
	goto_if_defeated TRAINER_ABIGAIL_5, GalacticHQ_4F_EventScript_SNVis_HQ_CYRUS_End
	clearflag FLAG_SN_HIDE_HQ_CYRUS
GalacticHQ_4F_EventScript_SNVis_HQ_CYRUS_End:
	return

GalacticHQ_4F_EventScript_SNCyrus::
	trainerbattle_single TRAINER_ABIGAIL_5, GalacticHQ_4F_EventScript_SNCyrus_Intro, GalacticHQ_4F_EventScript_SNCyrus_Defeat, GalacticHQ_4F_EventScript_SNCyrus_Won
	end

GalacticHQ_4F_EventScript_SNCyrus_Won:
	lock
	msgbox GalacticHQ_4F_EventScript_SNCyrus_Post, MSGBOX_DEFAULT
	giveitem ITEM_MASTER_BALL
	msgbox GalacticHQ_4F_EventScript_SNCyrus_Post2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_HQ_CYRUS
	setvar VAR_SINNOH_STORY, 32
	fadescreen FADE_FROM_BLACK
	release
	end
GalacticHQ_4F_EventScript_SNCyrus_Intro:
	.string "Cyrus: ...So, you’ve come. You heard my\n"
	.string "speech, I take it.\p"
	.string "Snicker... A big lie, of course.\p"
	.string "It’s true insofar as my intention is to\n"
	.string "create a new world.\p"
	.string "But that world isn’t for the likes of\n"
	.string "Team Galactic.\p"
	.string "I seek an entirely new world solely for\n"
	.string "myself.\p"
	.string "If not, it could never be the complete\n"
	.string "and perfect world.\p"
	.string "You’ve seen my minions of Team\n"
	.string "Galactic.\p"
	.string "You yourself must know that they are\n"
	.string "uniformly useless and incomplete.$"

GalacticHQ_4F_EventScript_SNCyrus_Defeat:
	.string "Cyrus: ...$"

GalacticHQ_4F_EventScript_SNCyrus_Post:
	.string "Cyrus: I see. You are indeed strong.\p"
	.string "And the basis of your power is your\n"
	.string "compassion toward POKéMON.\p"
	.string "...How wasteful... Such emotions are but\n"
	.string "mere illusions.\p"
	.string "And, like all illusions, they fade over\n"
	.string "time until death banishes them\l"
	.string "forever.\p"
	.string "That is why I have abandoned all\n"
	.string "emotions as useless sentimentality.\p"
	.string "...But that doesn’t matter. I doubt you\n"
	.string "will ever understand my position.\p"
	.string "That said, I recognize that you are\n"
	.string "strong and courageous to come alone.\p"
	.string "This is your reward.$"

GalacticHQ_4F_EventScript_SNCyrus_Post2:
	.string "Cyrus: The Master Ball is the ultimate\n"
	.string "POKé BALL.\p"
	.string "It will unfailingly catch any POKéMON\n"
	.string "in the wild.\p"
	.string "But it is not anything that I require.\p"
	.string "Unlike you Trainers, I do not make\n"
	.string "POKéMON my friends or partners.\p"
	.string "Unlike other Team Galactic members, I\n"
	.string "don’t use POKéMON as tools.\p"
	.string "Instead, I make the power of POKéMON\n"
	.string "my own.$"
