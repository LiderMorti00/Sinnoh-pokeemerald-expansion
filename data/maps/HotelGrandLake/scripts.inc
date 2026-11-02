HotelGrandLake_MapScripts::
	.byte 0

HotelGrandLake_Text_PtNpc1_0:
	.string "This hotel is so romantic...\p"
	.string "I hope a knight on a POKéMON will sweep\n"
	.string "me away for a honeymoon here!$"

HotelGrandLake_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HotelGrandLake_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

HotelGrandLake_Text_PtNpc2:
	.string "Ah, hello. You wish to stay a night? Ah,\n"
	.string "but you’ve no reservations.\p"
	.string "I’m afraid we are totally booked. You\n"
	.string "may rest a while, if you wish.$"

HotelGrandLake_EventScript_PtNpc2::
	msgbox HotelGrandLake_Text_PtNpc2, MSGBOX_NPC
	end

HotelGrandLake_EventScript_SNGameDirector::
	lock
	faceplayer
	msgbox HotelGrandLake_Text_SNDirector, MSGBOX_DEFAULT
	specialvar VAR_RESULT, HasAllHoennMons
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_CoveLilyMotel_2F_EventScript_AllHoennMonsFanfare
	release
	end
HotelGrandLake_Text_SNDirector:
	.string "I’m the game director! I love POKéMON\n"
	.string "and I made a game about them.\p"
	.string "If you complete the Sinnoh POKéDEX,\n"
	.string "show it to me! I will give you something\l"
	.string "special.$"
