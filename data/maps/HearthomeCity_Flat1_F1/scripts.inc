HearthomeCity_Flat1_F1_MapScripts::
	.byte 0

HearthomeCity_Flat1_F1_Text_PtNpc1_0:
	.string "Well, now, you’re a Trainer?\p"
	.string "That makes you both papa and mama to\n"
	.string "your POKéMON.\p"
	.string "You know how having POKéMON around\n"
	.string "leads to new discoveries?\p"
	.string "It’s the same for parents and kids. I’m\n"
	.string "always learning from my kids.$"

HearthomeCity_Flat1_F1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F1_Text_PtNpc2_0:
	.string "Kuufu fuu!$"

HearthomeCity_Flat1_F1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F1_Text_PtNpc3_0:
	.string "PIKACHU: Pikapii?$"

HearthomeCity_Flat1_F1_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F1_Text_PtNpc4_0:
	.string "Babies and POKéMON get along\n"
	.string "perfectly together.\p"
	.string "When babies take naps, POKéMON go to\n"
	.string "sleep right next to them.$"

HearthomeCity_Flat1_F1_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F1_Text_PtNpc5_0:
	.string "When I get bigger, I’m going to be a\n"
	.string "Trainer, too!$"

HearthomeCity_Flat1_F1_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F1_Text_PtNpc6_0:
	.string "When I grow up, I want to become a\n"
	.string "POKéMON coordinator.$"

HearthomeCity_Flat1_F1_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F1_Text_PtNpc7_0:
	.string "Oh, wow, you’re a POKéMON Trainer.\p"
	.string "Having lots of POKéMON around is a lot\n"
	.string "of responsibility.\p"
	.string "But that also comes with a lot of fun!$"

HearthomeCity_Flat1_F1_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Flat1_F1_Text_PtNpc8_0:
	.string "...My sisters make so much noise, no one\n"
	.string "even notices me.$"

HearthomeCity_Flat1_F1_EventScript_PtNpc8::
	lock
	faceplayer
	msgbox HearthomeCity_Flat1_F1_Text_PtNpc8_0, MSGBOX_DEFAULT
	release
	end
