SunyshoreCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunyshoreCity_OnTransitionSN
	.byte 0

SunyshoreCity_EventScript_PtNpc1::
	msgbox SunyshoreCity_Text_PtNpc1, MSGBOX_NPC
	end

SunyshoreCity_Text_PtNpc1:
	.string "That giant rock... Isn't it really a\n"
	.string "POKéMON?$"

SunyshoreCity_EventScript_PtNpc2::
	msgbox SunyshoreCity_Text_PtNpc2, MSGBOX_NPC
	end

SunyshoreCity_Text_PtNpc2:
	.string "The city uses a lot of electricity,\n"
	.string "especially the lighthouse and the Gym.\p"
	.string "They finally decided to turn all the\n"
	.string "city's roads into giant solar panels.\p"
	.string "SUNYSHORE is the Sunshine City, so\n"
	.string "the system works perfectly.$"

SunyshoreCity_EventScript_PtNpc3::
	msgbox SunyshoreCity_Text_PtNpc3, MSGBOX_NPC
	end

SunyshoreCity_Text_PtNpc3:
	.string "This is a major port town. And...\p"
	.string "It's the gateway to the POKéMON\n"
	.string "LEAGUE.$"

SunyshoreCity_EventScript_PtNpc4::
	msgbox SunyshoreCity_Text_PtNpc4, MSGBOX_NPC
	end

SunyshoreCity_Text_PtNpc4:
	.string "The Gym Leader uses too much\n"
	.string "electricity!\p"
	.string "He needs to think about the city's\n"
	.string "power needs, too!$"

SunyshoreCity_EventScript_PtNpc5::
	msgbox SunyshoreCity_Text_PtNpc5, MSGBOX_NPC
	end

SunyshoreCity_Text_PtNpc5:
	.string "Whatever the environment, people and\n"
	.string "POKéMON adapt to live there.\p"
	.string "That's what we all do to survive.$"

SunyshoreCity_EventScript_PtSign1::
	msgbox SunyshoreCity_Text_PtSign1, MSGBOX_SIGN
	end

SunyshoreCity_Text_PtSign1:
	.string "SUNYSHORE Market A Selection of the\n"
	.string "World's Seals$"

SunyshoreCity_EventScript_PtSign2::
	msgbox SunyshoreCity_Text_PtSign2, MSGBOX_SIGN
	end

SunyshoreCity_Text_PtSign2:
	.string "SUNYSHORE CITY POKéMON Gym Leader:\n"
	.string "VOLKNER The Shining, Shocking Star$"

SunyshoreCity_EventScript_PtSign3::
	msgbox SunyshoreCity_Text_PtSign3, MSGBOX_SIGN
	end

SunyshoreCity_Text_PtSign3:
	.string "It's a blank sign painted white.$"

SunyshoreCity_OnTransitionSN:
	call SunyshoreCity_EventScript_SNVis_FLINT
	call SunyshoreCity_EventScript_SNVis_JASMINE
	end

SunyshoreCity_EventScript_SNVis_JASMINE:
	setflag FLAG_SN_HIDE_JASMINE
	goto_if_unset FLAG_BADGE08_GET, SunyshoreCity_EventScript_SNVis_JASMINE_End
	goto_if_set FLAG_SN_RECEIVED_HM_WATERFALL, SunyshoreCity_EventScript_SNVis_JASMINE_End
	clearflag FLAG_SN_HIDE_JASMINE
SunyshoreCity_EventScript_SNVis_JASMINE_End:
	return

SunyshoreCity_EventScript_SNJasmine::
	lock
	faceplayer
	msgbox SunyshoreCity_EventScript_SNJasmine_T1, MSGBOX_DEFAULT
	giveitem ITEM_HM_WATERFALL
	setflag FLAG_SN_RECEIVED_HM_WATERFALL
	msgbox SunyshoreCity_EventScript_SNJasmine_T2, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_JASMINE
	fadescreen FADE_FROM_BLACK
	release
	end
SunyshoreCity_EventScript_SNJasmine_T1:
	.string "...Er...um... M-my name is Jasmine, and I’m\n"
	.string "a Gym Leader.\p"
	.string "Oh, I’m sorry, not the Gym Leader of\n"
	.string "this town...\p"
	.string "I’m a Gym Leader in the Johto region...\p"
	.string "...Er...um... It would be nice if you knew\n"
	.string "about\p"
	.string "the Johto region...$"

SunyshoreCity_EventScript_SNJasmine_T2:
	.string "...That Hidden Machine... It contains\n"
	.string "Waterfall.\p"
	.string "If you use it, you can get to the\n"
	.string "POKéMON League.\p"
	.string "...Um... I... I don’t know how I should say\n"
	.string "this, but good luck.$"

SunyshoreCity_EventScript_SNVis_FLINT:
	setflag FLAG_SN_HIDE_FLINT
	goto_if_set FLAG_BADGE08_GET, SunyshoreCity_EventScript_SNVis_FLINT_End
	clearflag FLAG_SN_HIDE_FLINT
SunyshoreCity_EventScript_SNVis_FLINT_End:
	return

SunyshoreCity_EventScript_SNFlint::
	lock
	faceplayer
	goto_if_set FLAG_SN_MET_VOLKNER, SunyshoreCity_EventScript_SNFlint_Back
	goto_if_set FLAG_SN_MET_FLINT, SunyshoreCity_EventScript_SNFlint_Wait
	msgbox SunyshoreCity_EventScript_SNFlint_T1, MSGBOX_DEFAULT
	msgbox SunyshoreCity_EventScript_SNFlint_T2, MSGBOX_DEFAULT
	setflag FLAG_SN_MET_FLINT
	release
	end
SunyshoreCity_EventScript_SNFlint_Wait:
	msgbox SunyshoreCity_EventScript_SNFlint_T3, MSGBOX_DEFAULT
	release
	end
SunyshoreCity_EventScript_SNFlint_Back:
	msgbox SunyshoreCity_EventScript_SNFlint_T4, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_EventScript_SNFlint_T1:
	.string "Yo! Fellow Trainer!\p"
	.string "Your POKéMON are secure inside their\n"
	.string "POKé BALLS, but there’s no masking\p"
	.string "that aura of serious toughness!\p"
	.string "Oops, sorry, I should introduce myself.\p"
	.string "The name’s Flint! I’m one of the\n"
	.string "POKéMON League’s Elite Four!$"

SunyshoreCity_EventScript_SNFlint_T2:
	.string "I just had this idea. Maybe you can pull\n"
	.string "it off.\p"
	.string "It’s about this town’s Gym Leader.\p"
	.string "He’s really lost his enthusiasm lately\n"
	.string "because there’ve been so few good\p"
	.string "challengers worth his time.\p"
	.string "He’s been so bored, he spends all his\n"
	.string "time renovating the Gym.\p"
	.string "And then the blackout happened... That\n"
	.string "sure didn’t help lift his mood.\p"
	.string "You know where I’m going with this,\n"
	.string "don’t you?\p"
	.string "I need you to give him a battle that’s\n"
	.string "so hot, it will reignite his\p"
	.string "passion for battling.\p"
	.string "I’m counting on you, hotshot!$"

SunyshoreCity_EventScript_SNFlint_T3:
	.string "Flint: Yo! Hiya! He hasn’t come back\n"
	.string "yet.\p"
	.string "When he does, you know what you’ve\n"
	.string "gotta do.\p"
	.string "Give him a battle that’s so hot, it will\n"
	.string "reignite his passion for battling!\p"
	.string "I’m counting on you, hotshot!$"

SunyshoreCity_EventScript_SNFlint_T4:
	.string "Flint: Yo! Hiya! He’s finally come back!\p"
	.string "He seemed to be feeling upbeat, too.\p"
	.string "I have a hunch that he recognized your\n"
	.string "toughness right away.\p"
	.string "I bet he’s getting excited over the\n"
	.string "thought of battling you.\p"
	.string "Remember what you have to do, hotshot.\p"
	.string "Give him a battle that’s so hot, it will\n"
	.string "reignite his passion for battling!\p"
	.string "All right, hotshot! I’ll be waiting at\n"
	.string "the POKéMON League!$"
