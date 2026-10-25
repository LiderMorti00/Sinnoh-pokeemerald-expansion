Route210_Cafe_MapScripts::
	.byte 0

Route210_Cafe_EventScript_Fernando::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, Route210_Cafe_Text_FernandoIntro, Route210_Cafe_Text_FernandoDefeat
	msgbox Route210_Cafe_Text_FernandoPost, MSGBOX_AUTOCLOSE
	end

Route210_Cafe_Text_FernandoIntro:
	.string "We were having a heated discussion\n"
	.string "over POKéMON the way Collectors do.$"

Route210_Cafe_Text_FernandoDefeat:
	.string "Knowledge alone isn’t everything, you\n"
	.string "know...$"

Route210_Cafe_Text_FernandoPost:
	.string "I’m more knowledgeable than anyone\n"
	.string "else!\p"
	.string "I have a rare POKéMON!\p"
	.string "But, I’m weak at battling... That’s a\n"
	.string "POKéMON Collector for you...$"

Route210_Cafe_EventScript_Edwin::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, Route210_Cafe_Text_EdwinIntro, Route210_Cafe_Text_EdwinDefeat
	msgbox Route210_Cafe_Text_EdwinPost, MSGBOX_AUTOCLOSE
	end

Route210_Cafe_Text_EdwinIntro:
	.string "I’m a Collector, and I love Honey!$"

Route210_Cafe_Text_EdwinDefeat:
	.string "What’ve you done to my POKéMON?!\p"
	.string "It took me forever to catch it using\n"
	.string "Honey!$"

Route210_Cafe_Text_EdwinPost:
	.string "I went through a lot of bother to\n"
	.string "catch my POKéMON.\p"
	.string "But since I’ve not raised it, it’s as\n"
	.string "weak as when I caught it.$"

Route210_Cafe_EventScript_Kati::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_4, Route210_Cafe_Text_KatiIntro, Route210_Cafe_Text_KatiDefeat
	msgbox Route210_Cafe_Text_KatiPost, MSGBOX_AUTOCLOSE
	end

Route210_Cafe_Text_KatiIntro:
	.string "Welcome! This place is my pride and joy!$"

Route210_Cafe_Text_KatiDefeat:
	.string "I take losses with an unusually big\n"
	.string "smile! Do you find that odd at all?$"

Route210_Cafe_Text_KatiPost:
	.string "After a match, you should have some\n"
	.string "Moomoo Milk to quench your thirst!\p"
	.string "Just chug it right down! Glug glug!$"

Route210_Cafe_Text_PtNpc1_0:
	.string "Howdy, traveler!\p"
	.string "Some of our customers are rowdy types\n"
	.string "that want to battle.\p"
	.string "Do what you will with them. I don’t mind.$"

Route210_Cafe_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox Route210_Cafe_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

Route210_Cafe_Text_PtNpc2:
	.string "How are ya doing? Whatcha having?\p"
	.string "Course, all we ever have is Moomoo Milk.\p"
	.string "Moomoo Milk, $500 a bottle.\p"
	.string "Would you like to add some to your\n"
	.string "traveling supplies?$"

Route210_Cafe_EventScript_PtNpc2::
	msgbox Route210_Cafe_Text_PtNpc2, MSGBOX_NPC
	end

Route210_Cafe_Text_PtNpc3_0:
	.string "Youngster, you’ve seen the PSYDUCK\n"
	.string "huddled outside?\p"
	.string "PSYDUCK are POKéMON that suffer from\n"
	.string "chronic headaches...\p"
	.string "I’m afraid we’ll have to wait for them\n"
	.string "to get better.$"

Route210_Cafe_Text_PtNpc3_1:
	.string "Well, well! So I hear you’ve relieved the\n"
	.string "PSYDUCK of their headaches.\p"
	.string "The person who gave you the\n"
	.string "SecretPotion must be quite the\l"
	.string "Trainer!$"

Route210_Cafe_EventScript_PtNpc3::
	lock
	faceplayer
	goto_if_set FLAG_SN_USED_SECRETPOTION, Route210_Cafe_EventScript_PtNpc3_RelievedPsyduckOfHeadaches
	msgbox Route210_Cafe_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

Route210_Cafe_EventScript_PtNpc3_RelievedPsyduckOfHeadaches:
	msgbox Route210_Cafe_Text_PtNpc3_1, MSGBOX_DEFAULT
	release
	end
