HearthomeCity_House1_MapScripts::
	.byte 0

HearthomeCity_House1_Text_PtNpc1:
	.string "Bebe: Oh? Now that’s a National\n"
	.string "POKéDEX I’m seeing. Good for you!\p"
	.string "You’ll be using my POKéMON Boxes a\n"
	.string "whole lot more if you’ve got that.\p"
	.string "Well, I always thought a good Trainer\n"
	.string "ought to juggle Boxes smartly, though.\p"
	.string "I shouldn’t be the one to say so.$"

HearthomeCity_House1_EventScript_SNBebe::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_EEVEE, HearthomeCity_House1_EventScript_SNBebe_After
	msgbox HearthomeCity_House1_EventScript_SNBebe_T1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, HearthomeCity_House1_EventScript_SNBebe_No
	getpartysize
	goto_if_eq VAR_RESULT, PARTY_SIZE, HearthomeCity_House1_EventScript_SNBebe_Full
	givemon SPECIES_EEVEE, 20
	playfanfare MUS_OBTAIN_ITEM
	message HearthomeCity_House1_EventScript_SNBebe_Got
	waitfanfare
	waitmessage
	setflag FLAG_SN_RECEIVED_EEVEE
	msgbox HearthomeCity_House1_EventScript_SNBebe_T2, MSGBOX_DEFAULT
	release
	end
HearthomeCity_House1_EventScript_SNBebe_No:
	msgbox HearthomeCity_House1_EventScript_SNBebe_NoT, MSGBOX_DEFAULT
	release
	end
HearthomeCity_House1_EventScript_SNBebe_Full:
	msgbox HearthomeCity_House1_EventScript_SNBebe_FullT, MSGBOX_DEFAULT
	release
	end
HearthomeCity_House1_EventScript_SNBebe_After:
	msgbox HearthomeCity_House1_EventScript_SNBebe_AfterT, MSGBOX_DEFAULT
	release
	end

HearthomeCity_House1_EventScript_SNBebe_T1:
	.string "Bebe: Hi! I’m Bebe. I’m the one who made\n"
	.string "the POKéMON Storage System!\p"
	.string "There’s a POKéMON here I’d like you to\n"
	.string "raise. It’s an EEVEE. Would you like it?$"

HearthomeCity_House1_EventScript_SNBebe_Got:
	.string "{PLAYER} received an EEVEE!$"

HearthomeCity_House1_EventScript_SNBebe_T2:
	.string "Bebe: EEVEE can evolve in many\n"
	.string "different ways. Which one will it\l"
	.string "become, I wonder?$"

HearthomeCity_House1_EventScript_SNBebe_NoT:
	.string "Bebe: Oh... If you change your mind,\n"
	.string "come back anytime.$"

HearthomeCity_House1_EventScript_SNBebe_FullT:
	.string "Bebe: Your party is full! You can use my\n"
	.string "POKéMON Storage System at any\l"
	.string "POKéMON Center.$"

HearthomeCity_House1_EventScript_SNBebe_AfterT:
	.string "Bebe: How is that EEVEE doing? I hope\n"
	.string "it’s happy with you!$"
