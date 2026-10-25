LostTower_3F_MapScripts::
	.byte 0

LostTower_3F_EventScript_Leonard::
	trainerbattle_single TRAINER_TIMOTHY_2, LostTower_3F_Text_LeonardIntro, LostTower_3F_Text_LeonardDefeat
	msgbox LostTower_3F_Text_LeonardPost, MSGBOX_AUTOCLOSE
	end

LostTower_3F_Text_LeonardIntro:
	.string "I can’t explain it... Being here compels\n"
	.string "me to battle!$"

LostTower_3F_Text_LeonardDefeat:
	.string "Hunh?! What was I just doing?!$"

LostTower_3F_Text_LeonardPost:
	.string "The desire to do battle lingers on...\p"
	.string "Do such spirits of POKéMON still roam\n"
	.string "within these walls?$"

LostTower_3F_EventScript_Kirby::
	trainerbattle_single TRAINER_TIMOTHY_3, LostTower_3F_Text_KirbyIntro, LostTower_3F_Text_KirbyDefeat
	msgbox LostTower_3F_Text_KirbyPost, MSGBOX_AUTOCLOSE
	end

LostTower_3F_Text_KirbyIntro:
	.string "My POKéMON were taken from me... Team\n"
	.string "Galactic did it...\p"
	.string "Ever since, I’ve never forgiven their\n"
	.string "faces...$"

LostTower_3F_Text_KirbyDefeat:
	.string "Gwaaaaaah!$"

LostTower_3F_Text_KirbyPost:
	.string "I’m not doing my POKéMON any favors by\n"
	.string "ruining its memory like this...\p"
	.string "I can’t be wallowing around forever. I\n"
	.string "gotta move on and turn the page.$"
