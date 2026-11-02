JubilifeCity_JubilifeTV_F1_MapScripts::
	.byte 0

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc1::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc1:
	.string "They keep track of official records\n"
	.string "here.\p"
	.string "Things like winning streaks, or how\n"
	.string "many POKéMON you've caught.\p"
	.string "You can check everyone's records up\n"
	.string "on the third floor.$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc2::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc2:
	.string "I'm here to see how TV shows are\n"
	.string "made!$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc3::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc3:
	.string "The TV station interviews all sorts of\n"
	.string "Trainers for its shows.\p"
	.string "After all, people want to know about\n"
	.string "good Trainers and what they say.\p"
	.string "Personally, I'd like to learn more\n"
	.string "about Gym Leaders.\p"
	.string "I'd also like to hear about the tough\n"
	.string "Elite Four of the POKéMON LEAGUE.$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc4::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc4, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc4:
	.string "It's cold outside, but the studios\n"
	.string "here are nice and warm.$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc5::
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc5, MSGBOX_NPC
	end

JubilifeCity_JubilifeTV_F1_Text_PtNpc5:
	.string "I heard a famous Trainer is being\n"
	.string "interviewed today!$"

JubilifeCity_JubilifeTV_F1_Text_PtNpc6_0:
	.string "Why don’t you try dressing up your\n"
	.string "POKéMON now?\p"
	.string "We have a Fitting Room on the second\n"
	.string "floor.\p"
	.string "Dress up your POKéMON nicely with\n"
	.string "Accessories!$"

JubilifeCity_JubilifeTV_F1_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox JubilifeCity_JubilifeTV_F1_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F1_EventScript_SNLottery::
	lock
	faceplayer
	dotimebasedevents
	goto_if_ne VAR_POKELOT_PRIZE_ITEM, ITEM_NONE, JubilifeCity_JubilifeTV_F1_EventScript_SNLotHeld
	goto_if_set FLAG_DAILY_PICKED_LOTO_TICKET, JubilifeCity_JubilifeTV_F1_EventScript_SNLotDone
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotIntro, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, JubilifeCity_JubilifeTV_F1_EventScript_SNLotNo
	setflag FLAG_DAILY_PICKED_LOTO_TICKET
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotLookUp, MSGBOX_DEFAULT
	special RetrieveLotteryNumber
	copyvar VAR_0x8008, VAR_RESULT
	special BufferLottoTicketNumber
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotNumber, MSGBOX_DEFAULT
	closemessage
	playse SE_PC_ON
	special PickLotteryCornerTicket
	delay 120
	playse SE_PC_OFF
	goto_if_eq VAR_0x8004, 0, JubilifeCity_JubilifeTV_F1_EventScript_SNLotMiss
	incrementgamestat GAME_STAT_WON_POKEMON_LOTTERY
	call_if_eq VAR_0x8006, 0, JubilifeCity_JubilifeTV_F1_EventScript_SNLotParty
	call_if_eq VAR_0x8006, 1, JubilifeCity_JubilifeTV_F1_EventScript_SNLotBox
	call_if_eq VAR_0x8004, 1, JubilifeCity_JubilifeTV_F1_EventScript_SNLot2
	call_if_eq VAR_0x8004, 2, JubilifeCity_JubilifeTV_F1_EventScript_SNLot3
	call_if_eq VAR_0x8004, 3, JubilifeCity_JubilifeTV_F1_EventScript_SNLot4
	call_if_eq VAR_0x8004, 4, JubilifeCity_JubilifeTV_F1_EventScript_SNLot5
	giveitem VAR_0x8005
	goto_if_eq VAR_RESULT, FALSE, JubilifeCity_JubilifeTV_F1_EventScript_SNLotNoRoom
	special TryPutLotteryWinnerReportOnAir
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotBye, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F1_EventScript_SNLotParty:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotParty, MSGBOX_DEFAULT
	return
JubilifeCity_JubilifeTV_F1_EventScript_SNLotBox:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotBox, MSGBOX_DEFAULT
	return
JubilifeCity_JubilifeTV_F1_EventScript_SNLot2:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLot2, MSGBOX_DEFAULT
	return
JubilifeCity_JubilifeTV_F1_EventScript_SNLot3:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLot3, MSGBOX_DEFAULT
	return
JubilifeCity_JubilifeTV_F1_EventScript_SNLot4:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLot4, MSGBOX_DEFAULT
	return
JubilifeCity_JubilifeTV_F1_EventScript_SNLot5:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLot5, MSGBOX_DEFAULT
	return

JubilifeCity_JubilifeTV_F1_EventScript_SNLotMiss:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotMiss, MSGBOX_DEFAULT
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotBye, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F1_EventScript_SNLotNoRoom:
	copyvar VAR_POKELOT_PRIZE_PLACE, VAR_0x8004
	copyvar VAR_POKELOT_PRIZE_ITEM, VAR_0x8005
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotNoRoomT, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F1_EventScript_SNLotHeld:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotHeldT, MSGBOX_DEFAULT
	giveitem VAR_POKELOT_PRIZE_ITEM
	goto_if_eq VAR_RESULT, FALSE, JubilifeCity_JubilifeTV_F1_EventScript_SNLotNoRoomAgain
	copyvar VAR_0x8004, VAR_POKELOT_PRIZE_PLACE
	copyvar VAR_0x8005, VAR_POKELOT_PRIZE_ITEM
	special TryPutLotteryWinnerReportOnAir
	setvar VAR_POKELOT_PRIZE_ITEM, ITEM_NONE
	setvar VAR_POKELOT_PRIZE_PLACE, 0
	release
	end

JubilifeCity_JubilifeTV_F1_EventScript_SNLotNoRoomAgain:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotNoRoomT, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F1_EventScript_SNLotDone:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotDoneT, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F1_EventScript_SNLotNo:
	msgbox JubilifeCity_JubilifeTV_F1_Text_SNLotNoT, MSGBOX_DEFAULT
	release
	end

JubilifeCity_JubilifeTV_F1_Text_SNLotIntro:
	.string "This is the POKéMON Lottery Corner. I’m\n"
	.string "Felicity, your attendant today.\p"
	.string "If your drawn number matches the ID\n"
	.string "No. of any of your POKéMON,\p"
	.string "you could win fabulous gifts.\p"
	.string "Would you like to check today’s lucky\n"
	.string "number?$"

JubilifeCity_JubilifeTV_F1_Text_SNLotLookUp:
	.string "First, I’ll look up today’s POKéMON\n"
	.string "Lottery Corner lucky number.\p"
	.string "...$"

JubilifeCity_JubilifeTV_F1_Text_SNLotNumber:
	.string "Your Loto Ticket number is {STR_VAR_1}.\p"
	.string "Now, let’s see if it matches the ID No.\n"
	.string "of any of your POKéMON.$"

JubilifeCity_JubilifeTV_F1_Text_SNLotParty:
	.string "Congratulations!\p"
	.string "The ID No. of your team’s {STR_VAR_1}\n"
	.string "matches your Loto Ticket number!$"

JubilifeCity_JubilifeTV_F1_Text_SNLotBox:
	.string "Congratulations!\p"
	.string "The ID No. of your PC-boxed\n"
	.string "{STR_VAR_1} matches your Loto\l"
	.string "Ticket number!$"

JubilifeCity_JubilifeTV_F1_Text_SNLot2:
	.string "The last two digits matched, so you win\n"
	.string "the third prize!$"

JubilifeCity_JubilifeTV_F1_Text_SNLot3:
	.string "The last three digits matched, so you\n"
	.string "win the second prize!$"

JubilifeCity_JubilifeTV_F1_Text_SNLot4:
	.string "The last four digits matched, so you\n"
	.string "win the first prize!$"

JubilifeCity_JubilifeTV_F1_Text_SNLot5:
	.string "Oh, my goodness, all five digits\n"
	.string "matched!\p"
	.string "You’ve won the jackpot prize! This is\n"
	.string "just so incredible!\p"
	.string "...Oh, I’m sorry! Your prize! I got\n"
	.string "carried away there.\p"
	.string "Here you go!$"

JubilifeCity_JubilifeTV_F1_Text_SNLotMiss:
	.string "I’m sorry. You didn’t get a match...$"

JubilifeCity_JubilifeTV_F1_Text_SNLotNoRoomT:
	.string "...Oh? You seem to have no room for\n"
	.string "this.\p"
	.string "Please make room in your Bag and then\n"
	.string "let me know.$"

JubilifeCity_JubilifeTV_F1_Text_SNLotHeldT:
	.string "{PLAYER}? Yes, I’ve been expecting you.\p"
	.string "This is the prize we’ve been holding for\n"
	.string "you. Here you go!$"

JubilifeCity_JubilifeTV_F1_Text_SNLotDoneT:
	.string "You’ve already drawn a Loto Ticket\n"
	.string "today. Please come back tomorrow.$"

JubilifeCity_JubilifeTV_F1_Text_SNLotNoT:
	.string "Oh. I see. Please do visit us again.$"

JubilifeCity_JubilifeTV_F1_Text_SNLotBye:
	.string "Please do visit again! Good-bye from\n"
	.string "Felicity, your attendant!$"
