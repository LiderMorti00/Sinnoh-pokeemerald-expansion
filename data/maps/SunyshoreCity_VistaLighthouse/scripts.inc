SunyshoreCity_VistaLighthouse_MapScripts::
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

SunyshoreCity_VistaLighthouse_EventScript_PtNpc3::
	msgbox SunyshoreCity_VistaLighthouse_Text_PtNpc3, MSGBOX_NPC
	end

SunyshoreCity_VistaLighthouse_EventScript_PtSign1::
	msgbox SunyshoreCity_VistaLighthouse_Text_PtSign1, MSGBOX_SIGN
	end

SunyshoreCity_VistaLighthouse_Text_PtSign1:
	.string "{PLAYER} took a look through the\n"
	.string "binoculars.$"
