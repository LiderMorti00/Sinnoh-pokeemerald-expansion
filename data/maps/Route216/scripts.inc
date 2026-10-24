Route216_MapScripts::
	.byte 0

Route216_EventScript_Blake::
	trainerbattle_single TRAINER_ISOBEL, Route216_Text_BlakeIntro, Route216_Text_BlakeDefeat
	msgbox Route216_Text_BlakePost, MSGBOX_AUTOCLOSE
	end

Route216_Text_BlakeIntro:
	.string "I'm an elite battler, but cold is my\n"
	.string "nemesis!$"

Route216_Text_BlakeDefeat:
	.string "But, how...? Am I weak at battling, too?$"

Route216_Text_BlakePost:
	.string "I'd rather be asleep in the lodge's\n"
	.string "bed...\p"
	.string "I can't take this cold...$"

Route216_EventScript_Laura::
	trainerbattle_single TRAINER_DONNY, Route216_Text_LauraIntro, Route216_Text_LauraDefeat
	msgbox Route216_Text_LauraPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_LauraIntro:
	.string "I'm fully kitted up and equipped!\n"
	.string "Anytime will be fine!$"

Route216_Text_LauraDefeat:
	.string "Hunh?!$"

Route216_Text_LauraPost:
	.string "Perhaps I should maybe change into a\n"
	.string "more comfy outfit...$"

Route216_EventScript_Philip::
	trainerbattle_single TRAINER_TALIA, Route216_Text_PhilipIntro, Route216_Text_PhilipDefeat
	msgbox Route216_Text_PhilipPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_PhilipIntro:
	.string "I can withstand this cold. That means\n"
	.string "I can take any kind of attack!$"

Route216_Text_PhilipDefeat:
	.string "Huh? It's over, you say?$"

Route216_Text_PhilipPost:
	.string "Oh, gosh, this is bad! I think I'm\n"
	.string "losing feeling all over my body!$"

Route216_EventScript_Bradley::
	trainerbattle_single TRAINER_ALLISON, Route216_Text_BradleyIntro, Route216_Text_BradleyDefeat
	msgbox Route216_Text_BradleyPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_BradleyIntro:
	.string "I'm skiing right now, but OK. As we\n"
	.string "Skiers say, “Spur thing!”$"

Route216_Text_BradleyDefeat:
	.string "...I've hit an ice patch!$"

Route216_Text_BradleyPost:
	.string "I quite enjoyed that battle! Let us\n"
	.string "meet again. Slalom!$"

Route216_EventScript_Garrett::
	trainerbattle_single TRAINER_AARON, Route216_Text_GarrettIntro, Route216_Text_GarrettDefeat
	msgbox Route216_Text_GarrettPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_GarrettIntro:
	.string "I always play for keeps! This isn't\n"
	.string "practice!$"

Route216_Text_GarrettDefeat:
	.string "Good job! That was an excellent\n"
	.string "battle.$"

Route216_Text_GarrettPost:
	.string "If you don't play for keeps, you'll\n"
	.string "lose battles you should be dominating.$"

Route216_EventScript_Maria::
	trainerbattle_single TRAINER_PERRY, Route216_Text_MariaIntro, Route216_Text_MariaDefeat
	msgbox Route216_Text_MariaPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_MariaIntro:
	.string "To be ready to answer any call! To be\n"
	.string "ready to accept any challenge!\p"
	.string "That is the way of a Trainer!$"

Route216_Text_MariaDefeat:
	.string "Oh, yeah? Eat snowball, punk!$"

Route216_Text_MariaPost:
	.string "You can make all the preparations in\n"
	.string "the world, but if it doesn't work, it\l"
	.string "doesn't work.$"

Route216_EventScript_Kaitlyn::
	trainerbattle_single TRAINER_HUGH, Route216_Text_KaitlynIntro, Route216_Text_KaitlynDefeat
	msgbox Route216_Text_KaitlynPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_KaitlynIntro:
	.string "The fun things about winter! One,\n"
	.string "skiing! Two, POKéMON!$"

Route216_Text_KaitlynDefeat:
	.string "Snivel...$"

Route216_Text_KaitlynPost:
	.string "If it was skiing, I wouldn't lose. I\n"
	.string "should go ski with my POKéMON...$"

Route216_EventScript_Edward::
	trainerbattle_single TRAINER_PHIL, Route216_Text_EdwardIntro, Route216_Text_EdwardDefeat
	msgbox Route216_Text_EdwardPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_EdwardIntro:
	.string "Are you a novice? Or around midlevel?$"

Route216_Text_EdwardDefeat:
	.string "I never expected you to be an\n"
	.string "expert...$"

Route216_Text_EdwardPost:
	.string "You know how to play your POKéMON\n"
	.string "with an edge!$"

Route216_EventScript_Andrea::
	trainerbattle_single TRAINER_PRESLEY, Route216_Text_AndreaIntro, Route216_Text_AndreaDefeat
	msgbox Route216_Text_AndreaPost, MSGBOX_AUTOCLOSE
	end

Route216_Text_AndreaIntro:
	.string "How do you expect to battle in this\n"
	.string "heavy snow?$"

Route216_Text_AndreaDefeat:
	.string "The winds of victory shifted...$"

Route216_Text_AndreaPost:
	.string "It's so cold here, but here you are, so\n"
	.string "full of energy.\p"
	.string "I guess you kids are made tougher\n"
	.string "than people my age.$"

Route216_EventScript_PtSign1::
	msgbox Route216_Text_PtSign1, MSGBOX_SIGN
	end

Route216_Text_PtSign1:
	.string "Rt. 216 MT. CORONET$"

Route216_EventScript_PtSign2::
	msgbox Route216_Text_PtSign2, MSGBOX_SIGN
	end

Route216_Text_PtSign2:
	.string "Snowbound Lodge A Warm Bed and Little\n"
	.string "Else$"
