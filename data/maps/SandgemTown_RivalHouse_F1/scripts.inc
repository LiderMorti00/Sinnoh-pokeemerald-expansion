SandgemTown_RivalHouse_F1_MapScripts::
	.byte 0

SandgemTown_RivalHouse_F1_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SYS_NATIONAL_DEX, SandgemTown_RivalHouse_F1_EventScript_SNNational
	msgbox SandgemTown_RivalHouse_F1_Text_PtNpc1, MSGBOX_DEFAULT
	release
	end
SandgemTown_RivalHouse_F1_EventScript_SNNational:
	msgbox SandgemTown_RivalHouse_F1_Text_SNNational, MSGBOX_DEFAULT
	release
	end

SandgemTown_RivalHouse_F1_Text_PtNpc1:
	.string "Ah, so that ROWAN fellow is back? He's\n"
	.string "quite the remarkable man.\p"
	.string "He's been studying POKéMON since way,\n"
	.string "way back.\p"
	.string "My son and grandchild help ROWAN with\n"
	.string "his studies now.$"

SandgemTown_RivalHouse_F1_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_unset FLAG_SYS_NATIONAL_DEX, SandgemTown_RivalHouse_F1_EventScript_SNKid
	special SinnohDailyOutbreak
	msgbox SandgemTown_RivalHouse_F1_Text_SNSwarm1, MSGBOX_DEFAULT
	msgbox SandgemTown_RivalHouse_F1_Text_SNSwarm2, MSGBOX_DEFAULT
	release
	end
SandgemTown_RivalHouse_F1_EventScript_SNKid:
	msgbox SandgemTown_RivalHouse_F1_Text_PtNpc2, MSGBOX_DEFAULT
	release
	end

SandgemTown_RivalHouse_F1_Text_PtNpc2:
	.string "I'm going to be a POKéMON\n"
	.string "researcher when I grow up, just\l"
	.string "like my big sibling!$"

SandgemTown_RivalHouse_F1_Text_SNNational:
	.string "Oh, my! You’ve got a National POKéDEX?\p"
	.string "How fantastic is that?!\p"
	.string "Rowan should be delighted. It will\n"
	.string "greatly help his research.\p"
	.string "But, young Trainer... You should know\n"
	.string "this.\p"
	.string "In this world, there are 300... No, 400...\p"
	.string "No, no, no! There’re a lot more kinds of\n"
	.string "POKéMON than that!$"

SandgemTown_RivalHouse_F1_Text_SNSwarm1:
	.string "Oh, hi, {PLAYER}!\p"
	.string "There was news on TV saying there is a\n"
	.string "massive outbreak of POKéMON!\p"
	.string "That’d be great for filling up your\n"
	.string "POKéDEX!$"

SandgemTown_RivalHouse_F1_Text_SNSwarm2:
	.string "Let me see... What did that news say\n"
	.string "now...?\p"
	.string "{STR_VAR_2}! They said there’s a whole\n"
	.string "bunch of {STR_VAR_1} there!\p"
	.string "{PLAYER}, you have to hurry!\p"
	.string "I want you to do better than my sister\n"
	.string "Dawn!$"

