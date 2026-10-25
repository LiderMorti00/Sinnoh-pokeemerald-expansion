Route228_House2_MapScripts::
	.byte 0

Route228_House2_Text_PtNpc1_0:
	.string "That Badge... It’s from Sunyshore’s\n"
	.string "Gym?\p"
	.string "You’ve been to that port town, then...\p"
	.string "Would... Would you lend an ear to this\n"
	.string "old man’s tale?$"

Route228_House2_Text_PtNpc1_1:
	.string "No... I shouldn’t burden you with this.\p"
	.string "My grandson grew up in that city by the\n"
	.string "sea.\p"
	.string "Worn down by trying to live up to his\n"
	.string "parents’ expectations, he found\l"
	.string "refuge\p"
	.string "in tinkering with machines.\p"
	.string "I wonder even now if I should have\n"
	.string "taken him in and raised him myself.\p"
	.string "Though I’m not certain if that would\n"
	.string "have been a good choice or not...\p"
	.string "I don’t think anyone could say.\p"
	.string "I’m sorry, I shouldn’t have said any of\n"
	.string "this to you...$"

Route228_House2_Text_PtNpc1_2:
	.string "Ah... Pay me no heed, then.\p"
	.string "I only hoped to unburden myself of\n"
	.string "some guilt...$"

Route228_House2_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox Route228_House2_Text_PtNpc1_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route228_House2_EventScript_PtNpc1_ShouldntBurdenYou
	goto_if_eq VAR_RESULT, NO, Route228_House2_EventScript_PtNpc1_PayMeNoHeed
	release
	end

Route228_House2_EventScript_PtNpc1_ShouldntBurdenYou:
	msgbox Route228_House2_Text_PtNpc1_1, MSGBOX_DEFAULT
	goto Route228_House2_EventScript_PtNpc1_GentlemanEnd
	release
	end

Route228_House2_EventScript_PtNpc1_PayMeNoHeed:
	msgbox Route228_House2_Text_PtNpc1_2, MSGBOX_DEFAULT
	goto Route228_House2_EventScript_PtNpc1_GentlemanEnd
	release
	end

Route228_House2_EventScript_PtNpc1_GentlemanEnd:
	release
	end

Route228_House2_EventScript_PtSign1::
	msgbox Route228_House2_Text_PtSign1, MSGBOX_SIGN
	end

Route228_House2_Text_PtSign1:
	.string "There are many old and\n"
	.string "difficult-looking books here.\p"
	.string "“Mind and Matter” “The Presence of\n"
	.string "Spirit”...$"

Route228_House2_EventScript_PtSign2::
	msgbox Route228_House2_Text_PtSign2, MSGBOX_SIGN
	end

Route228_House2_Text_PtSign2:
	.string "There are many old and\n"
	.string "difficult-looking books here.\p"
	.string "“Machines and Their Construction”\n"
	.string "“The Mechanism of Perfection”...$"

Route228_House2_EventScript_PtSign3::
	msgbox Route228_House2_Text_PtSign3, MSGBOX_SIGN
	end

Route228_House2_Text_PtSign3:
	.string "There are many old and\n"
	.string "difficult-looking books here.\p"
	.string "“Beyond Time and Space” “What Is the\n"
	.string "Space-Time Continuum?”...$"

Route228_House2_EventScript_PtSign4::
	msgbox Route228_House2_Text_PtSign4, MSGBOX_SIGN
	end

Route228_House2_Text_PtSign4:
	.string "There are many old and\n"
	.string "difficult-looking books here.\p"
	.string "“Space and the Galaxies” “The\n"
	.string "Beginning of Space”...$"
