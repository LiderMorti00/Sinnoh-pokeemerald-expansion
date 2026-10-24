Route205_North_MapScripts::
	.byte 0

Route205_North_EventScript_Andrew::
	trainerbattle_single TRAINER_JULIE, Route205_North_Text_AndrewIntro, Route205_North_Text_AndrewDefeat
	msgbox Route205_North_Text_AndrewPost, MSGBOX_AUTOCLOSE
	end

Route205_North_Text_AndrewIntro:
	.string "Nothing's biting... I could use a break,\n"
	.string "I suppose.$"

Route205_North_Text_AndrewDefeat:
	.string "Well, that didn't do anything for me...$"

Route205_North_Text_AndrewPost:
	.string "!\p"
	.string "Yank your fishing rod when that\n"
	.string "appears. That's how you fish.$"

Route205_North_EventScript_Joseph::
	trainerbattle_single TRAINER_PATRICIA, Route205_North_Text_JosephIntro, Route205_North_Text_JosephDefeat
	msgbox Route205_North_Text_JosephPost, MSGBOX_AUTOCLOSE
	end

Route205_North_Text_JosephIntro:
	.string "How about that! I've netted me a\n"
	.string "feisty Trainer!$"

Route205_North_Text_JosephDefeat:
	.string "I let a big win slip away...$"

Route205_North_Text_JosephPost:
	.string "Do you have a fishing rod? Catch some\n"
	.string "big ones!$"

Route205_North_EventScript_Zachary::
	trainerbattle_single TRAINER_SAMUEL, Route205_North_Text_ZacharyIntro, Route205_North_Text_ZacharyDefeat
	msgbox Route205_North_Text_ZacharyPost, MSGBOX_AUTOCLOSE
	end

Route205_North_Text_ZacharyIntro:
	.string "I fished up some tough POKéMON! Let's\n"
	.string "have ourselves a battle!$"

Route205_North_Text_ZacharyDefeat:
	.string "Losing to a kid has me gasping like a\n"
	.string "MAGIKARP...$"

Route205_North_Text_ZacharyPost:
	.string "My feet are tangled, too! Ouch! Ouch!$"

Route205_North_EventScript_PtNpc1::
	msgbox Route205_North_Text_PtNpc1, MSGBOX_NPC
	end

Route205_North_Text_PtNpc1:
	.string "To sit back and fish casually... It's a\n"
	.string "grown-up's hobby.$"

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
