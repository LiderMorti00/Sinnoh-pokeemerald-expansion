Route218_MapScripts::
	.byte 0

Route218_EventScript_Tony::
	trainerbattle_single TRAINER_LUNG, Route218_Text_TonyIntro, Route218_Text_TonyDefeat
	msgbox Route218_Text_TonyPost, MSGBOX_AUTOCLOSE
	end

Route218_Text_TonyIntro:
	.string "Let it rock! It's the rhythm of battle!$"

Route218_Text_TonyDefeat:
	.string "Can you hear it? That's my guitar\n"
	.string "weeping...$"

Route218_Text_TonyPost:
	.string "I'm too torn up to sing anymore... I am\n"
	.string "so cool that way...$"

Route218_EventScript_Skyler::
	trainerbattle_single TRAINER_CORA, Route218_Text_SkylerIntro, Route218_Text_SkylerDefeat
	msgbox Route218_Text_SkylerPost, MSGBOX_AUTOCLOSE
	end

Route218_Text_SkylerIntro:
	.string "A man of the sea is also a man of\n"
	.string "POKéMON!$"

Route218_Text_SkylerDefeat:
	.string "Anchors away!$"

Route218_Text_SkylerPost:
	.string "You've got what it takes to be a\n"
	.string "Trainer among Trainers!$"

Route218_EventScript_Miguel::
	trainerbattle_single TRAINER_PAULA, Route218_Text_MiguelIntro, Route218_Text_MiguelDefeat
	msgbox Route218_Text_MiguelPost, MSGBOX_AUTOCLOSE
	end

Route218_Text_MiguelIntro:
	.string "Outdoor fishing for the win!\p"
	.string "Shouting doesn't help my fishing any,\n"
	.string "but shout I must!$"

Route218_Text_MiguelDefeat:
	.string "Gwaaah! This is hurting!$"

Route218_Text_MiguelPost:
	.string "Oh, right... My shouting is scaring away\n"
	.string "the POKéMON.$"

Route218_EventScript_Luc::
	trainerbattle_single TRAINER_CLARISSA, Route218_Text_LucIntro, Route218_Text_LucDefeat
	msgbox Route218_Text_LucPost, MSGBOX_AUTOCLOSE
	end

Route218_Text_LucIntro:
	.string "Yeah, yeah... Nothing's biting!$"

Route218_Text_LucDefeat:
	.string "Can't catch a fish! Can't catch a\n"
	.string "break!$"

Route218_Text_LucPost:
	.string "I was counting on strength in\n"
	.string "numbers, but...\p"
	.string "Packing it in and going home sounds\n"
	.string "good at a time like this...$"
