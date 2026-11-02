VeilstoneCity_House4_MapScripts::
	.byte 0

VeilstoneCity_House4_Text_PtNpc1:
	.string "Me, I am but a tearful clown. Though I\n"
	.string "smile, I cry inside.$"

VeilstoneCity_House4_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_COIN_CASE, VeilstoneCity_House4_EventScript_SNClownDone
	msgbox VeilstoneCity_House4_Text_SNWatch, MSGBOX_DEFAULT
	msgbox VeilstoneCity_House4_Text_SNSpin, MSGBOX_DEFAULT
	message VeilstoneCity_House4_Text_SNWhich
	waitmessage
	dynmultipush VeilstoneCity_House4_Text_SNLeft, 0
	dynmultipush VeilstoneCity_House4_Text_SNRight, 1
	dynmultistack 0, 0, FALSE, 2, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	closemessage
	copyvar VAR_0x8004, VAR_RESULT
	random 2
	goto_if_ne VAR_RESULT, VAR_0x8004, VeilstoneCity_House4_EventScript_SNClownLose
	msgbox VeilstoneCity_House4_Text_SNWin, MSGBOX_DEFAULT
	giveitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_SN_RECEIVED_COIN_CASE
	release
	end

VeilstoneCity_House4_EventScript_SNClownLose:
	msgbox VeilstoneCity_House4_Text_SNLose, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House4_EventScript_SNClownDone:
	msgbox VeilstoneCity_House4_Text_PtNpc1, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House4_Text_PtNpc2_0:
	.string "There are many magicians in the world.\n"
	.string "You know, the performance artists?\p"
	.string "Don’t you think that maybe, say, five\n"
	.string "percent are actually psychics?$"

VeilstoneCity_House4_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_House4_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House4_Text_SNWatch:
	.string "You there. Watch this Coin.$"

VeilstoneCity_House4_Text_SNSpin:
	.string "Spin, spin, spin, spin, spin...$"

VeilstoneCity_House4_Text_SNWhich:
	.string "Now, which hand is that Coin in? My left\n"
	.string "or right?$"

VeilstoneCity_House4_Text_SNWin:
	.string "Bravo! A winner is you!\p"
	.string "For our winner, I have here... A Coin\n"
	.string "Case!$"

VeilstoneCity_House4_Text_SNLose:
	.string "Boo! Poor show! I challenge you to\n"
	.string "challenge it again!$"

VeilstoneCity_House4_Text_SNLeft:
	.string "LEFT$"

VeilstoneCity_House4_Text_SNRight:
	.string "RIGHT$"
