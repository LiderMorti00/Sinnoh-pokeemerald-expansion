SunyshoreCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunyshoreCity_OnTransitionSN
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunyshoreCity_OnFrameSN
	.byte 0

SunyshoreCity_OnFrameSN:
	map_script_2 VAR_TEMP_3, 1, SunyshoreCity_EventScript_SNBadge8Scene
	.2byte 0

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
	call SunyshoreCity_EventScript_SNVis_SUNY_BARRY
	call SunyshoreCity_EventScript_SNVis_FLINT
	call SunyshoreCity_EventScript_SNVis_JASMINE
	setvar VAR_TEMP_3, 0
	goto_if_unset FLAG_BADGE08_GET, SunyshoreCity_OnTransitionSN_End
	goto_if_set FLAG_SN_SUNYSHORE_BARRY, SunyshoreCity_OnTransitionSN_End
	setvar VAR_TEMP_3, 1
SunyshoreCity_OnTransitionSN_End:
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
	sn_walkto VAR_LAST_TALKED, 17, 9, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement VAR_LAST_TALKED
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_JASMINE
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

SunyshoreCity_EventScript_SNVis_SUNY_BARRY:
	setflag FLAG_SN_HIDE_SUNY_BARRY
	goto_if_unset FLAG_BADGE08_GET, SunyshoreCity_EventScript_SNVis_SUNY_BARRY_End
	goto_if_set FLAG_SN_SUNYSHORE_BARRY, SunyshoreCity_EventScript_SNVis_SUNY_BARRY_End
	clearflag FLAG_SN_HIDE_SUNY_BARRY
SunyshoreCity_EventScript_SNVis_SUNY_BARRY_End:
	return

SunyshoreCity_EventScript_SNBadge8Scene::
	lockall
	setvar VAR_TEMP_3, 0
	applymovement LOCALID_SN_SUNY_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_SN_SUNY_BARRY, SN_SPEED_FAST, 0, 0
	waitmovement LOCALID_SN_SUNY_BARRY
	sn_playerface LOCALID_SN_SUNY_BARRY, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SunyshoreCity_Text_SNBarry8, MSGBOX_DEFAULT
	msgbox SunyshoreCity_Text_SNWatchMe, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SN_SUNY_BARRY, SunyshoreCity_Movement_SNLookAround
	waitmovement 0
	msgbox SunyshoreCity_Text_SNHurryLeague, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_SUNYSHORE_BARRY
	sn_walkto LOCALID_SN_SUNY_BARRY, 26, 28, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_SUNY_BARRY
	removeobject LOCALID_SN_SUNY_BARRY
	setflag FLAG_SN_HIDE_SUNY_BARRY
	goto_if_set FLAG_SN_RECEIVED_HM_WATERFALL, SunyshoreCity_EventScript_SNBadge8Scene_End
	sn_walktoplayer LOCALID_SN_SUNY_JASMINE, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_SN_SUNY_JASMINE
	sn_playerface LOCALID_SN_SUNY_JASMINE, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox SunyshoreCity_Text_SNJasmineThanks, MSGBOX_DEFAULT
	giveitem ITEM_HM_WATERFALL
	setflag FLAG_SN_RECEIVED_HM_WATERFALL
	msgbox SunyshoreCity_EventScript_SNJasmine_T2, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_SUNY_JASMINE, 30, 13, SN_SPEED_NORMAL, DIR_SOUTH, 0, 0
	waitmovement LOCALID_SN_SUNY_JASMINE
SunyshoreCity_EventScript_SNBadge8Scene_End:
	releaseall
	end

SunyshoreCity_Movement_SNLookAround:
	face_left
	delay_16
	face_up
	delay_16
	face_right
	delay_16
	face_player
	step_end

SunyshoreCity_EventScript_SNBarry8::
	lock
	faceplayer
	msgbox SunyshoreCity_Text_SNBarry8, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_SUNYSHORE_BARRY
	sn_walkto LOCALID_SN_SUNY_BARRY, 17, 9, SN_SPEED_FAST, 0, 0, 0
	waitmovement LOCALID_SN_SUNY_BARRY
	removeobject LOCALID_SN_SUNY_BARRY
	setflag FLAG_SN_HIDE_SUNY_BARRY
	release
	end

SunyshoreCity_Text_SNBarry8:
	.string "{RIVAL}: Hey! {PLAYER}!\p"
	.string "What the...\p"
	.string "You went and got all eight Gym Badges\n"
	.string "of Sinnoh!\p"
	.string "Aww, you... That’s wicked! I envy you!\p"
	.string "But don’t think you’ve won!$"

SunyshoreCity_Text_SNWatchMe:
	.string "Because I’m going to be the toughest\n"
	.string "Trainer ever! You watch me!\p"
	.string "Before I was dreaming. I just wanted\n"
	.string "to be like my dad.\p"
	.string "Now, things are different.\p"
	.string "I thought about what being a Trainer\n"
	.string "involves.\p"
	.string "I thought about what POKéMON are.\p"
	.string "We’re going to get tougher one step at\n"
	.string "a time!$"

SunyshoreCity_Text_SNHurryLeague:
	.string "I’m not going to challenge you to a\n"
	.string "battle now.\p"
	.string "I hate to say it, but I know you’re\n"
	.string "tougher than me.\p"
	.string "But not a whole lot tougher. Just a\n"
	.string "little.\p"
	.string "Our difference is about a yard?\p"
	.string "Nah, not even an inch.\p"
	.string "...What I’m trying to say is that I will\n"
	.string "catch up to you in no time.\p"
	.string "If you don’t hurry to the POKéMON\n"
	.string "League, I’ll leave you in my wake!$"

SunyshoreCity_Text_SNJasmineThanks:
	.string "Jasmine: ...Was that your friend?\p"
	.string "Seeing how you two got along made me\n"
	.string "happy somehow.\p"
	.string "It must be wonderful having a friend\n"
	.string "like that.\p"
	.string "A person that you can share anything\n"
	.string "and everything with.\p"
	.string "A person you can compete with without\n"
	.string "fighting.\p"
	.string "...Um, it made me feel sort of warm\n"
	.string "seeing you two.\p"
	.string "It may seem odd, but I’d like you to\n"
	.string "have this as my thanks.\p"
	.string "This isn’t much, but...$"
