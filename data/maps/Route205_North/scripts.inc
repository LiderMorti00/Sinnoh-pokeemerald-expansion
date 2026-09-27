Route205_North_MapScripts::
	.byte 0

Route205_North_EventScript_Andrew::
	trainerbattle_single TRAINER_JULIE, Route205_North_Text_AndrewIntro, Route205_North_Text_AndrewDefeat
	msgbox Route205_North_Text_AndrewPost, MSGBOX_AUTOCLOSE
	end

Route205_North_Text_AndrewIntro:
	.string "I only catch MAGIKARP... but lots\n"
	.string "of them!$"

Route205_North_Text_AndrewDefeat:
	.string "Splish splash, I lost.$"

Route205_North_Text_AndrewPost:
	.string "One of these days, one will\n"
	.string "evolve!$"

Route205_North_EventScript_Joseph::
	trainerbattle_single TRAINER_PATRICIA, Route205_North_Text_JosephIntro, Route205_North_Text_JosephDefeat
	msgbox Route205_North_Text_JosephPost, MSGBOX_AUTOCLOSE
	end

Route205_North_Text_JosephIntro:
	.string "My GOLDEEN is the queen of the\n"
	.string "river!$"

Route205_North_Text_JosephDefeat:
	.string "She swam away...$"

Route205_North_Text_JosephPost:
	.string "Fishing teaches patience.$"

Route205_North_EventScript_Zachary::
	trainerbattle_single TRAINER_SAMUEL, Route205_North_Text_ZacharyIntro, Route205_North_Text_ZacharyDefeat
	msgbox Route205_North_Text_ZacharyPost, MSGBOX_AUTOCLOSE
	end

Route205_North_Text_ZacharyIntro:
	.string "You scared the fish away! Now you\n"
	.string "owe me a battle!$"

Route205_North_Text_ZacharyDefeat:
	.string "Reeled in by you...$"

Route205_North_Text_ZacharyPost:
	.string "The bridge is the best fishing\n"
	.string "spot around.$"

Route205_North_EventScript_PtNpc1::
	msgbox Route205_North_Text_PtNpc1, MSGBOX_NPC
	end

Route205_North_Text_PtNpc1:
	.string "The fish bite best in the morning.\n"
	.string "Patience is key!$"

Route205_North_EventScript_Sign3::
	msgbox Route205_North_Text_Sign3, MSGBOX_SIGN
	end

Route205_North_Text_Sign3:
	.string "ROUTE 205\p"
	.string "ETERNA FOREST / ETERNA CITY$"

Route205_North_EventScript_Sign2::
	msgbox Route205_North_Text_Sign2, MSGBOX_SIGN
	end

Route205_North_Text_Sign2:
	.string "ROUTE 205$"

Route205_North_EventScript_Sign1::
	msgbox Route205_North_Text_Sign1, MSGBOX_SIGN
	end

Route205_North_Text_Sign1:
	.string "ROUTE 205\p"
	.string "ETERNA FOREST / ETERNA CITY$"
