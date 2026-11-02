ResortArea_Villa_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ResortArea_Villa_OnTransitionSN
	.byte 0

ResortArea_Villa_Text_PtNpc1:
	.string "{RIVAL}: Too slooooow!\p"
	.string "You keep me waiting all the time! I’m\n"
	.string "fining you...$1 billion!$"

ResortArea_Villa_EventScript_PtNpc1::
	msgbox ResortArea_Villa_Text_PtNpc1, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc2:
	.string "Rowan: Hm! How are things going for you\n"
	.string "lately?\p"
	.string "Even if you manage to see every kind\n"
	.string "of POKéMON, that’s not the end.\p"
	.string "It would be impossible to know all\n"
	.string "about them based on sightings alone.\p"
	.string "There’s much to be learned from\n"
	.string "traveling with POKéMON.$"

ResortArea_Villa_EventScript_PtNpc2::
	msgbox ResortArea_Villa_Text_PtNpc2, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc3:
	.string "Mom: Oh, {PLAYER}! I’d heard from\n"
	.string "{PLAYER}, but...\p"
	.string "This is quite grand for a Villa. This\n"
	.string "makes me happy, dear!\p"
	.string "I’ll have a fun place to visit!$"

ResortArea_Villa_EventScript_PtNpc3::
	msgbox ResortArea_Villa_Text_PtNpc3, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc4:
	.string "Roark: The Underground extends even\n"
	.string "underneath the Resort Area.\p"
	.string "I wonder... If I really tried, would I be\n"
	.string "able to extend it to even places\p"
	.string "like Kanto and Johto?$"

ResortArea_Villa_EventScript_PtNpc4::
	msgbox ResortArea_Villa_Text_PtNpc4, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc5:
	.string "Gardenia: Sigh... This is so dreamy... The\n"
	.string "Resort Area’s a nice place.\p"
	.string "Of course, Eterna is a good place, too.\n"
	.string "We have the huge forest, first of all.$"

ResortArea_Villa_EventScript_PtNpc5::
	msgbox ResortArea_Villa_Text_PtNpc5, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc6:
	.string "Fantina: Oh, c’est fantastique! This is\n"
	.string "where you practice dancing, non?$"

ResortArea_Villa_EventScript_PtNpc6::
	msgbox ResortArea_Villa_Text_PtNpc6, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc7:
	.string "Maylene: What makes a Gym Leader a\n"
	.string "good one?\p"
	.string "Candice: Gee, I wouldn’t know. That’s a\n"
	.string "tough question.\p"
	.string "...Maybe we should ask Gardenia\n"
	.string "sometime.$"

ResortArea_Villa_EventScript_PtNpc7::
	msgbox ResortArea_Villa_Text_PtNpc7, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc8:
	.string "Byron: Gwahahahaha!\p"
	.string "I spent a long time living on Iron\n"
	.string "Island.\p"
	.string "A place this fancy, I feel a little out\n"
	.string "of place.\p"
	.string "Don’t get me wrong, it’s a great place.\n"
	.string "It’s nothing like my son’s!$"

ResortArea_Villa_EventScript_PtNpc8::
	msgbox ResortArea_Villa_Text_PtNpc8, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc9:
	.string "Wake: Hey! {PLAYER} told me to come.\p"
	.string "This is some spread you’ve got here!\n"
	.string "It’s spectacular, yeah!\p"
	.string "How would I put it now...?\p"
	.string "It’s, uh, spectacular! It is what it is!$"

ResortArea_Villa_EventScript_PtNpc9::
	msgbox ResortArea_Villa_Text_PtNpc9, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc10:
	.string "Maylene: What makes a Gym Leader a\n"
	.string "good one?\p"
	.string "Candice: Gee, I wouldn’t know. That’s a\n"
	.string "tough question.\p"
	.string "...Maybe we should ask Gardenia\n"
	.string "sometime.$"

ResortArea_Villa_EventScript_PtNpc10::
	msgbox ResortArea_Villa_Text_PtNpc10, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc11:
	.string "Volkner: My relationship to Flint?\n"
	.string "There’s no love lost, that’s for sure.$"

ResortArea_Villa_EventScript_PtNpc11::
	msgbox ResortArea_Villa_Text_PtNpc11, MSGBOX_NPC
	end

ResortArea_Villa_Text_PtNpc12:
	.string "Cynthia: I think I could get to like\n"
	.string "this atmosphere.\p"
	.string "It gives me an idea about the kind of\n"
	.string "person that lives here.\p"
	.string "Yes... An honest person who loves\n"
	.string "POKéMON...$"

ResortArea_Villa_EventScript_PtNpc12::
	msgbox ResortArea_Villa_Text_PtNpc12, MSGBOX_NPC
	end

ResortArea_Villa_EventScript_PtSign1::
	msgbox ResortArea_Villa_Text_PtSign1, MSGBOX_SIGN
	end

ResortArea_Villa_Text_PtSign1:
	.string "{PLAYER} opened the order form.$"

ResortArea_Villa_EventScript_PtSign2::
	msgbox ResortArea_Villa_Text_PtSign2, MSGBOX_SIGN
	end

ResortArea_Villa_Text_PtSign2:
	.string "{PLAYER} opened the order form.$"

ResortArea_Villa_EventScript_PtSign3::
	msgbox ResortArea_Villa_Text_PtSign3, MSGBOX_SIGN
	end

ResortArea_Villa_Text_PtSign3:
	.string "{PLAYER} opened the order form.$"

ResortArea_Villa_OnTransitionSN:
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC1
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC2
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC3
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC4
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC5
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC6
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC7
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC8
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC9
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC10
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC11
	call ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC12
	end

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC1:
	setflag FLAG_SN_HIDE_VILLA_PTNPC1
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 1, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC1_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC1
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC1_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC2:
	setflag FLAG_SN_HIDE_VILLA_PTNPC2
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 2, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC2_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC2
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC2_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC3:
	setflag FLAG_SN_HIDE_VILLA_PTNPC3
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 0, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC3_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC3
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC3_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC4:
	setflag FLAG_SN_HIDE_VILLA_PTNPC4
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 3, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC4_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC4
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC4_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC5:
	setflag FLAG_SN_HIDE_VILLA_PTNPC5
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 4, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC5_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC5
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC5_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC6:
	setflag FLAG_SN_HIDE_VILLA_PTNPC6
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 5, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC6_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC6
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC6_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC7:
	setflag FLAG_SN_HIDE_VILLA_PTNPC7
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 6, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC7_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC7
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC7_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC8:
	setflag FLAG_SN_HIDE_VILLA_PTNPC8
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 1, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC8_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC8
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC8_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC9:
	setflag FLAG_SN_HIDE_VILLA_PTNPC9
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 2, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC9_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC9
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC9_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC10:
	setflag FLAG_SN_HIDE_VILLA_PTNPC10
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 3, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC10_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC10
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC10_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC11:
	setflag FLAG_SN_HIDE_VILLA_PTNPC11
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 4, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC11_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC11
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC11_End:
	return

ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC12:
	setflag FLAG_SN_HIDE_VILLA_PTNPC12
	goto_if_unset FLAG_SYS_GAME_CLEAR, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC12_End
	special SinnohDayOfWeek
	goto_if_ne VAR_RESULT, 0, ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC12_End
	clearflag FLAG_SN_HIDE_VILLA_PTNPC12
ResortArea_Villa_EventScript_SNVis_VILLA_PTNPC12_End:
	return

ResortArea_Villa_EventScript_SNFurniture::
	msgbox ResortArea_Villa_Text_SNFurniture, MSGBOX_SIGN
	end
ResortArea_Villa_Text_SNFurniture:
	.string "It’s an order form from the furniture\n"
	.string "shop.\p"
	.string "Different friends drop by the Villa on\n"
	.string "different days of the week.$"
