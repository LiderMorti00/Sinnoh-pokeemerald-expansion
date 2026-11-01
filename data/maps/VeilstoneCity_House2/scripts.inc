VeilstoneCity_House2_MapScripts::
	.byte 0

VeilstoneCity_House2_Text_PtNpc1:
	.string "Team Galactic’s building bugs me so\n"
	.string "much, I can’t sleep well.\p"
	.string "It’s so bizarre, like a robot that’s\n"
	.string "about to start moving.$"

VeilstoneCity_House2_EventScript_PtNpc1::
	msgbox VeilstoneCity_House2_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_House2_Text_PtNpc2_0:
	.string "Those thorny things on the building...\n"
	.string "The way it moves meaninglessly...\p"
	.string "I don’t understand their idea of\n"
	.string "“awesomely fashionable” at all.\p"
	.string "Still, Team Galactic does seem to have\n"
	.string "a huge supply of energy.$"

VeilstoneCity_House2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_House2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House2_EventScript_SNPorygon::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_PORYGON, VeilstoneCity_House2_EventScript_SNPorygonDone
	goto_if_unset FLAG_SYS_GAME_CLEAR, VeilstoneCity_House2_EventScript_SNPorygonDone
	msgbox VeilstoneCity_House2_Text_SNPory1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, VeilstoneCity_House2_EventScript_SNPorygonEnd
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, VeilstoneCity_House2_EventScript_SNPorygonFull
	givemon SPECIES_PORYGON, 25
	playfanfare MUS_OBTAIN_ITEM
	message VeilstoneCity_House2_Text_SNPory2
	waitmessage
	waitfanfare
	setflag FLAG_SN_RECEIVED_PORYGON
	msgbox VeilstoneCity_House2_Text_SNPory3, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House2_EventScript_SNPorygonFull:
	msgbox VeilstoneCity_House2_Text_SNPoryFull, MSGBOX_DEFAULT
VeilstoneCity_House2_EventScript_SNPorygonEnd:
	release
	end

VeilstoneCity_House2_EventScript_SNPorygonDone:
	msgbox VeilstoneCity_House2_Text_PtNpc1, MSGBOX_DEFAULT
	release
	end
VeilstoneCity_House2_Text_SNPory1:
	.string "You’re a Trainer, aren’t you?\p"
	.string "You see, there’s this POKéMON I’d like\n"
	.string "someone to look after.\p"
	.string "It’s a POKéMON called PORYGON. Can you\n"
	.string "take it off my hands?$"

VeilstoneCity_House2_Text_SNPory2:
	.string "{PLAYER} accepted the PORYGON!$"

VeilstoneCity_House2_Text_SNPory3:
	.string "Excellent! Thanks! That’ll make the\n"
	.string "PORYGON happy, too.\p"
	.string "I suspect it ran away from those Team\n"
	.string "Galactic goons.$"

VeilstoneCity_House2_Text_SNPoryFull:
	.string "Thanks!\p"
	.string "...But, oops, you already have a whole\n"
	.string "team of POKéMON with you.\p"
	.string "If you want this PORYGON, you’d better\n"
	.string "put one in a PC Box first.$"
