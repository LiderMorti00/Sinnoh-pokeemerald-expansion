Route211_West_MapScripts::
	.byte 0

Route211_West_EventScript_Alexandra::
	trainerbattle_single TRAINER_KOICHI, Route211_West_Text_AlexandraIntro, Route211_West_Text_AlexandraDefeat
	msgbox Route211_West_Text_AlexandraPost, MSGBOX_AUTOCLOSE
	end

Route211_West_Text_AlexandraIntro:
	.string "Look at these beautiful wings!$"

Route211_West_Text_AlexandraDefeat:
	.string "Oh, you! I'm going to peck you for\n"
	.string "that!$"

Route211_West_Text_AlexandraPost:
	.string "There's a bird POKéMON that can learn\n"
	.string "human speech! Did you know that?$"

Route211_West_EventScript_Louis::
	trainerbattle_single TRAINER_YUJI, Route211_West_Text_LouisIntro, Route211_West_Text_LouisDefeat
	msgbox Route211_West_Text_LouisPost, MSGBOX_AUTOCLOSE
	end

Route211_West_Text_LouisIntro:
	.string "See how MT. CORONET towers above us. I\n"
	.string "want to be big like that one day!$"

Route211_West_Text_LouisDefeat:
	.string "You loom before me as a giant\n"
	.string "presence!$"

Route211_West_Text_LouisPost:
	.string "MT. CORONET has long been known as an\n"
	.string "ancient and mysterious mountain.$"

Route211_West_EventScript_Zach::
	trainerbattle_single TRAINER_DAISUKE, Route211_West_Text_ZachIntro, Route211_West_Text_ZachDefeat
	msgbox Route211_West_Text_ZachPost, MSGBOX_AUTOCLOSE
	end

Route211_West_Text_ZachIntro:
	.string "ZUBAT! Doesn't that sound like a ninja\n"
	.string "bursting from cover?$"

Route211_West_Text_ZachDefeat:
	.string "Oh! My ZUBAT tristars...$"

Route211_West_Text_ZachPost:
	.string "Sowing confusion among the foe is one\n"
	.string "way a ninja battles.\p"
	.string "A POKéMON can't overcome its\n"
	.string "confusion unless it switches out.$"

Route211_West_EventScript_PtSign1::
	msgbox Route211_West_Text_PtSign1, MSGBOX_SIGN
	end

Route211_West_Text_PtSign1:
	.string "Rt. 211 MT. CORONET$"

Route211_West_EventScript_PtSign2::
	msgbox Route211_West_Text_PtSign2, MSGBOX_SIGN
	end

Route211_West_Text_PtSign2:
	.string "Rt. 211 ETERNA CITY$"
