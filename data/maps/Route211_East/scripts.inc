Route211_East_MapScripts::
	.byte 0

Route211_East_EventScript_Katherine::
	trainerbattle_single TRAINER_DUDLEY, Route211_East_Text_KatherineIntro, Route211_East_Text_KatherineDefeat
	msgbox Route211_East_Text_KatherinePost, MSGBOX_AUTOCLOSE
	end

Route211_East_Text_KatherineIntro:
	.string "I go everywhere with my NOCTOWL. We're\n"
	.string "gonna show you owl best! Ha!$"

Route211_East_Text_KatherineDefeat:
	.string "We did our best. That's what matters.\n"
	.string "Right?$"

Route211_East_Text_KatherinePost:
	.string "Even on cold days, just being with my\n"
	.string "NOCTOWL keeps me warm!$"

Route211_East_EventScript_Nick::
	trainerbattle_single TRAINER_CHAD, Route211_East_Text_NickIntro, Route211_East_Text_NickDefeat
	msgbox Route211_East_Text_NickPost, MSGBOX_AUTOCLOSE
	end

Route211_East_Text_NickIntro:
	.string "Speed is a ninja's best weapon! Can\n"
	.string "you keep up?$"

Route211_East_Text_NickDefeat:
	.string "I did a lot to conceal myself, too...$"

Route211_East_Text_NickPost:
	.string "I'll wait here for a weaker-looking\n"
	.string "Trainer and then ambush them!$"

Route211_East_EventScript_Sean::
	trainerbattle_single TRAINER_HITOSHI, Route211_East_Text_SeanIntro, Route211_East_Text_SeanDefeat
	msgbox Route211_East_Text_SeanPost, MSGBOX_AUTOCLOSE
	end

Route211_East_Text_SeanIntro:
	.string "Hah! Hah! I'm psyched for this! Here\n"
	.string "goes!$"

Route211_East_Text_SeanDefeat:
	.string "I don't get why we can't win.$"

Route211_East_Text_SeanPost:
	.string "I don't reminisce over yesterday. I\n"
	.string "don't think about tomorrow.\p"
	.string "I only live today to the fullest.\p"
	.string "That's my policy!$"

Route211_East_EventScript_Harry::
	trainerbattle_single TRAINER_KIYO, Route211_East_Text_HarryIntro, Route211_East_Text_HarryDefeat
	msgbox Route211_East_Text_HarryPost, MSGBOX_AUTOCLOSE
	end

Route211_East_Text_HarryIntro:
	.string "Whilst exploring the ruins, I spotted\n"
	.string "a Trainer! I must investigate!$"

Route211_East_Text_HarryDefeat:
	.string "My investigation has revealed the\n"
	.string "Trainer to be tough! Ouch...$"

Route211_East_Text_HarryPost:
	.string "CELESTIC TOWN is an old town. I'm sure\n"
	.string "to find something cool.$"

Route211_East_EventScript_PtSign1::
	msgbox Route211_East_Text_PtSign1, MSGBOX_SIGN
	end

Route211_East_Text_PtSign1:
	.string "Trainer Tips Even Veterans can get\n"
	.string "lost inside of MT. CORONET.\p"
	.string "Trainers should check their supply of\n"
	.string "medicine and items before trying to\l"
	.string "venture through.$"

Route211_East_EventScript_PtSign2::
	msgbox Route211_East_Text_PtSign2, MSGBOX_SIGN
	end

Route211_East_Text_PtSign2:
	.string "Rt. 211 MT. CORONET$"

Route211_East_EventScript_PtSign3::
	msgbox Route211_East_Text_PtSign3, MSGBOX_SIGN
	end

Route211_East_Text_PtSign3:
	.string "Rt. 211 CELESTIC TOWN$"
