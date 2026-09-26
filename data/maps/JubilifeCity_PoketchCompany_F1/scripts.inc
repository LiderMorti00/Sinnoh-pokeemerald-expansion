JubilifeCity_PoketchCompany_F1_MapScripts::
	.byte 0

JubilifeCity_PoketchCompany_F1_EventScript_PtNpc1::
	msgbox JubilifeCity_PoketchCompany_F1_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_PoketchCompany_F1_Text_PtNpc1:
	.string "We build and test new POKéTCH apps\n"
	.string "here every day.$"

JubilifeCity_PoketchCompany_F1_EventScript_PtNpc2::
	msgbox JubilifeCity_PoketchCompany_F1_Text_PtNpc2, MSGBOX_NPC
	end

JubilifeCity_PoketchCompany_F1_Text_PtNpc2:
	.string "Welcome to the POKéTCH COMPANY!\n"
	.string "Our president is upstairs.$"

JubilifeCity_PoketchCompany_F1_EventScript_PtNpc3::
	msgbox JubilifeCity_PoketchCompany_F1_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_PoketchCompany_F1_Text_PtNpc3:
	.string "I want a POKéTCH so badly. They\n"
	.string "say there's a campaign in town!$"

JubilifeCity_PoketchCompany_F1_EventScript_President::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POKETCH, JubilifeCity_PoketchCompany_F1_EventScript_PresidentAfter
	goto_if_unset FLAG_POKETCH_COUPON_1, JubilifeCity_PoketchCompany_F1_EventScript_PresidentNoCoupons
	goto_if_unset FLAG_POKETCH_COUPON_2, JubilifeCity_PoketchCompany_F1_EventScript_PresidentNoCoupons
	goto_if_unset FLAG_POKETCH_COUPON_3, JubilifeCity_PoketchCompany_F1_EventScript_PresidentNoCoupons
	msgbox JubilifeCity_PoketchCompany_F1_Text_PresidentCoupons, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	message JubilifeCity_PoketchCompany_F1_Text_ReceivedPoketch
	waitfanfare
	waitmessage
	setflag FLAG_RECEIVED_POKETCH
	call_if_eq VAR_SINNOH_STORY, 10, JubilifeCity_PoketchCompany_F1_EventScript_StartGalactic
	msgbox JubilifeCity_PoketchCompany_F1_Text_PresidentPoketch, MSGBOX_DEFAULT
	release
	end

JubilifeCity_PoketchCompany_F1_EventScript_StartGalactic::
	setvar VAR_SINNOH_STORY, 11
	clearflag FLAG_HIDE_JUBILIFE_GRUNTS
	return

JubilifeCity_PoketchCompany_F1_EventScript_PresidentNoCoupons::
	msgbox JubilifeCity_PoketchCompany_F1_Text_PresidentNoCoupons, MSGBOX_DEFAULT
	release
	end

JubilifeCity_PoketchCompany_F1_EventScript_PresidentAfter::
	msgbox JubilifeCity_PoketchCompany_F1_Text_PresidentAfter, MSGBOX_DEFAULT
	release
	end

JubilifeCity_PoketchCompany_F1_Text_PresidentNoCoupons:
	.string "I'm the president of the POKéTCH\n"
	.string "COMPANY! Bring me three COUPONS\l"
	.string "from our campaign clowns and I'll\n"
	.string "give you a POKéTCH!$"

JubilifeCity_PoketchCompany_F1_Text_PresidentCoupons:
	.string "Oh! You collected all three\n"
	.string "COUPONS! Wonderful! Here's your\l"
	.string "very own POKéTCH!$"

JubilifeCity_PoketchCompany_F1_Text_ReceivedPoketch:
	.string "{PLAYER} received the POKéTCH!$"

JubilifeCity_PoketchCompany_F1_Text_PresidentPoketch:
	.string "Our watches help Trainers on their\n"
	.string "journey. Use it well!\p"
	.string "By the way, I heard a commotion at\n"
	.string "the north end of town. Something\l"
	.string "strange is going on...$"

JubilifeCity_PoketchCompany_F1_Text_PresidentAfter:
	.string "How is your POKéTCH? We're always\n"
	.string "working on new apps!$"
