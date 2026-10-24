VeilstoneCity_MapScripts::
	.byte 0

VeilstoneCity_EventScript_PtNpc1::
	msgbox VeilstoneCity_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc1:
	.string "Yeah, TEAM GALACTIC is hiding all\n"
	.string "sorts of good stuff in their\l"
	.string "warehouse.\p"
	.string "I hear they even have a Hidden\n"
	.string "Machine in there!$"

VeilstoneCity_EventScript_PtNpc2::
	msgbox VeilstoneCity_Text_PtNpc2, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc2:
	.string "The Game Corner is dangerous!\p"
	.string "Why is it dangerous? It's so fun, I\n"
	.string "lose track of time!$"

VeilstoneCity_EventScript_PtNpc3::
	msgbox VeilstoneCity_Text_PtNpc3, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc3:
	.string "I got a TM as a prize from the Game\n"
	.string "Corner.\p"
	.string "I used it on my POKéMON right away!$"

VeilstoneCity_EventScript_PtNpc4::
	msgbox VeilstoneCity_Text_PtNpc4, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc4:
	.string "I came to this city just so I could go\n"
	.string "shopping at the department store.\p"
	.string "But with all these rock walls around,\n"
	.string "this place feels kind of cold.$"

VeilstoneCity_EventScript_PtNpc5::
	msgbox VeilstoneCity_Text_PtNpc5, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc5:
	.string "I bought a new parasol.\p"
	.string "But I don't want it to get rained on,\n"
	.string "so I watch the TV weather reports.$"

VeilstoneCity_EventScript_PtNpc6::
	msgbox VeilstoneCity_Text_PtNpc6, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc6:
	.string "MAYLENE is VEILSTONE's Gym Leader.\n"
	.string "Then, there's Wake in PASTORIA...\p"
	.string "They're way too tough for me. I can't\n"
	.string "even come close to them.$"

VeilstoneCity_EventScript_PtNpc7::
	msgbox VeilstoneCity_Text_PtNpc7, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc7:
	.string "Do you know where one might find a\n"
	.string "Coin Case?\p"
	.string "I heard that there's a clown giving 'em\n"
	.string "away, but...$"

VeilstoneCity_EventScript_PtNpc8::
	msgbox VeilstoneCity_Text_PtNpc8, MSGBOX_NPC
	end

VeilstoneCity_Text_PtNpc8:
	.string "A man spoke to me in a foreign\n"
	.string "language. He really surprised me!\p"
	.string "I think he was asking if I liked\n"
	.string "POKéMON or something.$"

VeilstoneCity_EventScript_PtNpc9::
	lock
	faceplayer
	msgbox VeilstoneCity_Text_PtNpc9, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VeilstoneCity_EventScript_PtNpc9_No
	msgbox VeilstoneCity_Text_PtNpc9_Yes, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_EventScript_PtNpc9_No:
	msgbox VeilstoneCity_Text_PtNpc9_No, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_Text_PtNpc9:
	.string "Salut, Trainer! Tu aimes les POKéMON?$"

VeilstoneCity_Text_PtNpc9_Yes:
	.string "Moi aussi! C'est génial!$"

VeilstoneCity_Text_PtNpc9_No:
	.string "J'ai du mal à te croire... Il n'y a qu'à\n"
	.string "vous regarder!$"

VeilstoneCity_EventScript_PtSign1::
	msgbox VeilstoneCity_Text_PtSign1, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign1:
	.string "VEILSTONE CITY Hewn from Rock$"

VeilstoneCity_EventScript_PtSign2::
	msgbox VeilstoneCity_Text_PtSign2, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign2:
	.string "GALACTIC Warehouse NO TRESPASSING!$"

VeilstoneCity_EventScript_PtSign3::
	msgbox VeilstoneCity_Text_PtSign3, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign3:
	.string "GALACTIC VEILSTONE Building We Dream\n"
	.string "of the Universe!$"

VeilstoneCity_EventScript_PtSign4::
	msgbox VeilstoneCity_Text_PtSign4, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign4:
	.string "VEILSTONE Department Store A Shop\n"
	.string "Full of Dreams!$"

VeilstoneCity_EventScript_PtSign5::
	msgbox VeilstoneCity_Text_PtSign5, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign5:
	.string "VEILSTONE CITY POKéMON Gym Leader:\n"
	.string "MAYLENE The Barefoot, Fighting\l"
	.string "Genius!$"

VeilstoneCity_EventScript_PtSign6::
	msgbox VeilstoneCity_Text_PtSign6, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign6:
	.string "VEILSTONE Game Corner Aim for an\n"
	.string "Explosion of Luck!$"

VeilstoneCity_EventScript_PtSign7::
	msgbox VeilstoneCity_Text_PtSign7, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign7:
	.string "Prize Exchange Coins Exchanged for\n"
	.string "Prizes!$"

VeilstoneCity_EventScript_PtSign8::
	msgbox VeilstoneCity_Text_PtSign8, MSGBOX_SIGN
	end

VeilstoneCity_Text_PtSign8:
	.string "Visit Beautiful LAKE VALOR! Right off\n"
	.string "Rt. 214!$"
