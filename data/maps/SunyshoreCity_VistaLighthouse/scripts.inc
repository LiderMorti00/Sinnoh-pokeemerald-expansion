SunyshoreCity_VistaLighthouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunyshoreCity_VistaLighthouse_OnTransitionSN
	.byte 0

SunyshoreCity_VistaLighthouse_Text_PtNpc1_0:
	.string "The Vista Lighthouse represents\n"
	.string "safety and protection to us Sailors.$"

SunyshoreCity_VistaLighthouse_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SunyshoreCity_VistaLighthouse_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_VistaLighthouse_Text_PtNpc2_0:
	.string "I love how far away you can see with\n"
	.string "the binoculars.\p"
	.string "I’m going to go that far away with my\n"
	.string "POKéMON one day!$"

SunyshoreCity_VistaLighthouse_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SunyshoreCity_VistaLighthouse_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_VistaLighthouse_Text_PtNpc3:
	.string "... ...\p"
	.string "...So, you’re the latest challenger up\n"
	.string "against the Sunyshore Gym...$"

SunyshoreCity_VistaLighthouse_EventScript_PtSign1::
	msgbox SunyshoreCity_VistaLighthouse_Text_PtSign1, MSGBOX_SIGN
	end

SunyshoreCity_VistaLighthouse_Text_PtSign1:
	.string "{PLAYER} took a look through the\n"
	.string "binoculars.\p"
	.string "Far across the sea, the POKéMON LEAGUE\n"
	.string "can be seen!$"

SunyshoreCity_VistaLighthouse_OnTransitionSN:
	call SunyshoreCity_VistaLighthouse_EventScript_SNVis_LH_VOLKNER
	end

SunyshoreCity_VistaLighthouse_EventScript_SNVis_LH_VOLKNER:
	setflag FLAG_SN_HIDE_LH_VOLKNER
	goto_if_set FLAG_SN_MET_VOLKNER, SunyshoreCity_VistaLighthouse_EventScript_SNVis_LH_VOLKNER_End
	goto_if_set FLAG_BADGE08_GET, SunyshoreCity_VistaLighthouse_EventScript_SNVis_LH_VOLKNER_End
	clearflag FLAG_SN_HIDE_LH_VOLKNER
SunyshoreCity_VistaLighthouse_EventScript_SNVis_LH_VOLKNER_End:
	return

SunyshoreCity_VistaLighthouse_EventScript_SNVolkner::
	lock
	faceplayer
	msgbox SunyshoreCity_VistaLighthouse_EventScript_SNVolkner_T1, MSGBOX_DEFAULT
	msgbox SunyshoreCity_VistaLighthouse_EventScript_SNVolkner_T2, MSGBOX_DEFAULT
	msgbox SunyshoreCity_VistaLighthouse_EventScript_SNVolkner_T3, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_MET_VOLKNER
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_LH_VOLKNER
	setflag FLAG_SN_HIDE_LH_VOLKNER
	fadescreen FADE_FROM_BLACK
	release
	end

SunyshoreCity_VistaLighthouse_EventScript_SNVolkner_T1:
	.string "... ...\p"
	.string "...So, you’re the latest challenger up\n"
	.string "against the Sunyshore Gym...$"

SunyshoreCity_VistaLighthouse_EventScript_SNVolkner_T2:
	.string "All right, I’ve decided!\p"
	.string "If I find you to be weak, I’m going to\n"
	.string "challenge the POKéMON League.\p"
	.string "I’m all done with renovating the Gym, so\n"
	.string "I don’t need to be here.\p"
	.string "More than anything, I want to have\n"
	.string "battles that can thrill me again.$"

SunyshoreCity_VistaLighthouse_EventScript_SNVolkner_T3:
	.string "As the toughest Gym Leader in Sinnoh,\n"
	.string "I’m going to unleash everything in\p"
	.string "my arsenal on you.$"
