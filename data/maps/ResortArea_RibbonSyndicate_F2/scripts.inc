ResortArea_RibbonSyndicate_F2_MapScripts::
	.byte 0

ResortArea_RibbonSyndicate_F2_Text_PtNpc1_0:
	.string "We keep our clients and POKéMON from\n"
	.string "seeing others.\p"
	.string "That way, all our clients and their\n"
	.string "POKéMON can fully relax.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F2_Text_PtNpc2_0:
	.string "Our service is very exclusive. We only\n"
	.string "accept five members a day.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F2_Text_PtNpc3:
	.string "Oh, I do apologize.\p"
	.string "We can only provide one spa session a\n"
	.string "day to our members.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc3::
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc3, MSGBOX_NPC
	end

ResortArea_RibbonSyndicate_F2_Text_PtNpc4_0:
	.string "We’ve developed a reputation for\n"
	.string "bringing our members closer to\p"
	.string "their POKéMON.$"

ResortArea_RibbonSyndicate_F2_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox ResortArea_RibbonSyndicate_F2_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F2_EventScript_SNSpa::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_SPA, ResortArea_RibbonSyndicate_F2_EventScript_SNSpa_Done
	bufferleadmonspeciesname STR_VAR_1
	msgbox ResortArea_RibbonSyndicate_F2_Text_SNSpaAsk, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, ResortArea_RibbonSyndicate_F2_EventScript_SNSpa_No
	msgbox ResortArea_RibbonSyndicate_F2_Text_SNSpa1, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	playfanfare MUS_HEAL
	waitfanfare
	special SinnohSpaTreatment
	fadescreen FADE_FROM_BLACK
	msgbox ResortArea_RibbonSyndicate_F2_Text_SNSpa2, MSGBOX_DEFAULT
	setflag FLAG_DAILY_SN_SPA
	release
	end
ResortArea_RibbonSyndicate_F2_EventScript_SNSpa_No:
	msgbox ResortArea_RibbonSyndicate_F2_Text_SNSpaNo, MSGBOX_DEFAULT
	release
	end
ResortArea_RibbonSyndicate_F2_EventScript_SNSpa_Done:
	msgbox ResortArea_RibbonSyndicate_F2_Text_SNSpaDone, MSGBOX_DEFAULT
	release
	end

ResortArea_RibbonSyndicate_F2_Text_SNSpaAsk:
	.string "How may we serve you today? Perhaps a\n"
	.string "spa treatment?\p"
	.string "Our spa treatment will make your\n"
	.string "{STR_VAR_1} grow more friendly.\p"
	.string "Would you care to have a spa\n"
	.string "treatment, {PLAYER}?$"

ResortArea_RibbonSyndicate_F2_Text_SNSpa1:
	.string "Ah, yes. Right this way, please...\p"
	.string "We’re ready to begin. Please, relax all\n"
	.string "your muscles.\p"
	.string "This oil contains dissolved diamonds\n"
	.string "for enhanced effectiveness.\p"
	.string "This foam contains an extract taken\n"
	.string "from pearls.$"

ResortArea_RibbonSyndicate_F2_Text_SNSpa2:
	.string "There. All done.\p"
	.string "Our treatment has made your pampered\n"
	.string "baby much more friendly to you.$"

ResortArea_RibbonSyndicate_F2_Text_SNSpaNo:
	.string "We hope to see you again.$"

ResortArea_RibbonSyndicate_F2_Text_SNSpaDone:
	.string "Oh, I do apologize.\p"
	.string "We can only provide one spa session a\n"
	.string "day to our members.$"
