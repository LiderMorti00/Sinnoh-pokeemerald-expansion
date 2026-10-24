Route215_MapScripts::
	.byte 0

Route215_EventScript_Derek::
	trainerbattle_single TRAINER_CARTER, Route215_Text_DerekIntro, Route215_Text_DerekDefeat
	msgbox Route215_Text_DerekPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_DerekIntro:
	.string "Check the sharpness of my fighting\n"
	.string "POKéMON's moves.$"

Route215_Text_DerekDefeat:
	.string "You've dulled its sharpness...$"

Route215_Text_DerekPost:
	.string "Back to training for us!$"

Route215_EventScript_Gregory::
	trainerbattle_single TRAINER_RONALD, Route215_Text_GregoryIntro, Route215_Text_GregoryDefeat
	msgbox Route215_Text_GregoryPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_GregoryIntro:
	.string "You come along with your heart\n"
	.string "pounding!\p"
	.string "You think you can win like that?!\n"
	.string "Hiyah!$"

Route215_Text_GregoryDefeat:
	.string "Gurgle...$"

Route215_Text_GregoryPost:
	.string "If I lose here, I wouldn't stand a\n"
	.string "chance at the Battle Frontier.\p"
	.string "Not against those hard-core pros, I\n"
	.string "wouldn't!$"

Route215_EventScript_Nathaniel::
	trainerbattle_single TRAINER_JACOB, Route215_Text_NathanielIntro, Route215_Text_NathanielDefeat
	msgbox Route215_Text_NathanielPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_NathanielIntro:
	.string "Every drop of sweat I shed makes me\n"
	.string "that much stronger!$"

Route215_Text_NathanielDefeat:
	.string "I should be lighter by the amount of\n"
	.string "sweat I just shed!$"

Route215_Text_NathanielPost:
	.string "It's time for another workout. The\n"
	.string "more I sweat, the tougher I get!$"

Route215_EventScript_Scott::
	trainerbattle_single TRAINER_ANTHONY, Route215_Text_ScottIntro, Route215_Text_ScottDefeat
	msgbox Route215_Text_ScottPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_ScottIntro:
	.string "Hufff-huff, huff-huff. Want-huff a\n"
	.string "battle-huff?$"

Route215_Text_ScottDefeat:
	.string "Huff-huff, we-huff lose-huff.$"

Route215_Text_ScottPost:
	.string "Bye-huff now-huff. Huff-huff,\n"
	.string "huff-huff.$"

Route215_EventScript_Calvin::
	trainerbattle_single TRAINER_JASMINE, Route215_Text_CalvinIntro, Route215_Text_CalvinDefeat
	msgbox Route215_Text_CalvinPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_CalvinIntro:
	.string "I'm a treasure hunter.\p"
	.string "Today, the loot is a victory from you!$"

Route215_Text_CalvinDefeat:
	.string "I can't win. You're too strong for me\n"
	.string "to win.$"

Route215_Text_CalvinPost:
	.string "If one's after treasures, maybe the\n"
	.string "UNDERGROUND is the better choice.$"

Route215_EventScript_Dennis::
	trainerbattle_single TRAINER_CAMDEN, Route215_Text_DennisIntro, Route215_Text_DennisDefeat
	msgbox Route215_Text_DennisPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_DennisIntro:
	.string "I'll take on anyone! It can only make\n"
	.string "me stronger!$"

Route215_Text_DennisDefeat:
	.string "You won and I lost, but the both of us\n"
	.string "gained something from this.$"

Route215_Text_DennisPost:
	.string "In a POKéMON battle, it doesn't matter\n"
	.string "how old or young you are.\p"
	.string "Your gender doesn't matter, either.\n"
	.string "Nothing like that means anything!$"

Route215_EventScript_Maya::
	trainerbattle_single TRAINER_DEMETRIUS, Route215_Text_MayaIntro, Route215_Text_MayaDefeat
	msgbox Route215_Text_MayaPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_MayaIntro:
	.string "I'm taking the VEILSTONE Gym\n"
	.string "challenge. But first...$"

Route215_Text_MayaDefeat:
	.string "...My confidence is crushed.$"

Route215_Text_MayaPost:
	.string "I think about POKéMON all day long. I\n"
	.string "was confident, you know.$"

Route215_EventScript_Craig::
	trainerbattle_single TRAINER_CHASE, Route215_Text_CraigIntro, Route215_Text_CraigDefeat
	msgbox Route215_Text_CraigPost, MSGBOX_AUTOCLOSE
	end

Route215_Text_CraigIntro:
	.string "If I battle now, won't it mess up my\n"
	.string "usual pace?$"

Route215_Text_CraigDefeat:
	.string "My pace is completely off...$"

Route215_Text_CraigPost:
	.string "Sticking to one's own goal is more\n"
	.string "important than it seems.\p"
	.string "If you match your goal with someone\n"
	.string "else, you'll lose your identity.$"

Route215_EventScript_PtSign1::
	msgbox Route215_Text_PtSign1, MSGBOX_SIGN
	end

Route215_Text_PtSign1:
	.string "CELESTIC TOWN SOLACEON TOWN$"

Route215_EventScript_PtSign2::
	msgbox Route215_Text_PtSign2, MSGBOX_SIGN
	end

Route215_Text_PtSign2:
	.string "Rt. 215 VEILSTONE CITY$"

Route215_EventScript_PtSign3::
	msgbox Route215_Text_PtSign3, MSGBOX_SIGN
	end

Route215_Text_PtSign3:
	.string "Trainer Tips POKéMON attacks are\n"
	.string "classified as being either physical or\l"
	.string "special.\p"
	.string "A physical attack is based on the\n"
	.string "Attack stat of the POKéMON.\p"
	.string "Likewise, a special attack is based on\n"
	.string "the Special Attack stat.$"
