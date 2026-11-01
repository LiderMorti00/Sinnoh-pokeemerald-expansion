JubilifeCity_JubilifeTV_F2_MapScripts::
	.byte 0

JubilifeCity_JubilifeTV_F2_EventScript_PtNpc1::
	msgbox JubilifeCity_JubilifeTV_F2_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F2_Text_PtNpc1:
	.string "La la la! I'm practicing for my\n"
	.string "big performance today!$"

JubilifeCity_JubilifeTV_F2_EventScript_PtNpc2::
	msgbox JubilifeCity_JubilifeTV_F2_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F2_Text_PtNpc2:
	.string "The room at the back is our dreamy\n"
	.string "fitting room.\p"
	.string "Once you're done in there, get our\n"
	.string "dreamy Hiker to take a dreamy photo!$"

JubilifeCity_JubilifeTV_F2_EventScript_PtNpc3::
	msgbox JubilifeCity_JubilifeTV_F2_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F2_Text_PtNpc3:
	.string "I don't know what to do.\p"
	.string "What Accessories will go well with my\n"
	.string "dress today?$"

JubilifeCity_JubilifeTV_F2_Text_PtNpc4:
	.string "That’s a that!\p"
	.string "I hope you get into collecting\n"
	.string "Accessories for your POKéMON!$"

JubilifeCity_JubilifeTV_F2_EventScript_PtNpc4::
	msgbox JubilifeCity_JubilifeTV_F2_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F2_Text_PtNpc5:
	.string "Ooh, your POKéMON are so very\n"
	.string "charming! How enchanting!\p"
	.string "They’re so charming I will even hang a\n"
	.string "picture of one right beside me!\p"
	.string "I’m only doing this especially for you!\n"
	.string "Exciting, don’t you think?\p"
	.string "Dress up your POKéMON in my boudoir\n"
	.string "and make it a sight to behold!\p"
	.string "I will snap a photo when you’re done.\n"
	.string "You will do this, won’t you?$"

JubilifeCity_JubilifeTV_F2_EventScript_PtNpc5::
	msgbox JubilifeCity_JubilifeTV_F2_Text_PtNpc5, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F2_Text_PtNpc6_0:
	.string "They display photos from Trainers you\n"
	.string "been mixin’ records with, right?\p"
	.string "I hope you collect yerself some good\n"
	.string "photos of dressed-up POKéMON!$"

JubilifeCity_JubilifeTV_F2_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F2_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end
