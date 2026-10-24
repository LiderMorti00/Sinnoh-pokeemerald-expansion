Route207_MapScripts::
	.byte 0

Route207_EventScript_Anthony::
	trainerbattle_single TRAINER_MATT, Route207_Text_AnthonyIntro, Route207_Text_AnthonyDefeat
	msgbox Route207_Text_AnthonyPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_AnthonyIntro:
	.string "Go for it, my POKéMON! I'll do my best,\n"
	.string "too!$"

Route207_Text_AnthonyDefeat:
	.string "Oh... We lost...$"

Route207_Text_AnthonyPost:
	.string "Dig for Fossils in the UNDERGROUND.\p"
	.string "The mining museum might be able to\n"
	.string "bring back the ancient POKéMON!$"

Route207_EventScript_Lauren::
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route207_Text_LaurenIntro, Route207_Text_LaurenDefeat
	msgbox Route207_Text_LaurenPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_LaurenIntro:
	.string "Go do it, my POKéMON! I'll work hard,\n"
	.string "too!$"

Route207_Text_LaurenDefeat:
	.string "Oh... We lost...$"

Route207_Text_LaurenPost:
	.string "I think we'll visit the TV station in\n"
	.string "JUBILIFE CITY next.\p"
	.string "Or maybe we should go to the Global\n"
	.string "Terminal?$"

Route207_EventScript_Austin::
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, Route207_Text_AustinIntro, Route207_Text_AustinDefeat
	msgbox Route207_Text_AustinPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_AustinIntro:
	.string "I wear shorts the whole year! I've got\n"
	.string "energy to burn!$"

Route207_Text_AustinDefeat:
	.string "I couldn't win with just energy...\n"
	.string "Nothing's really that easy!$"

Route207_Text_AustinPost:
	.string "POKéMON don't wear clothes. I worry\n"
	.string "about them getting cold.$"

Route207_EventScript_Justin::
	trainerbattle_single TRAINER_ARCHIE, Route207_Text_JustinIntro, Route207_Text_JustinDefeat
	msgbox Route207_Text_JustinPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_JustinIntro:
	.string "I just got through MT. CORONET, but\n"
	.string "I've still got energy to burn!$"

Route207_Text_JustinDefeat:
	.string "Whoops! Taken down easily!$"

Route207_Text_JustinPost:
	.string "We need to rest up in OREBURGH CITY\n"
	.string "before heading to MT. CORONET again.$"

Route207_EventScript_Kevin::
	trainerbattle_single TRAINER_VINCENT, Route207_Text_KevinIntro, Route207_Text_KevinDefeat
	msgbox Route207_Text_KevinPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_KevinIntro:
	.string "Wahaha! Laughter brings good\n"
	.string "fortune!$"

Route207_Text_KevinDefeat:
	.string "Wahahaha! There's nothing that I can\n"
	.string "do but laugh!$"

Route207_Text_KevinPost:
	.string "Wahahahaha! ...Go ahead, laugh at\n"
	.string "me--the loser!$"

Route207_EventScript_Helen::
	trainerbattle_single TRAINER_LEROY, Route207_Text_HelenIntro, Route207_Text_HelenDefeat
	msgbox Route207_Text_HelenPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_HelenIntro:
	.string "OK, OK! Let's be quick about this!$"

Route207_Text_HelenDefeat:
	.string "Oh, yeah? Let's do this again! ...Oops.\n"
	.string "I'm out of POKéMON!$"

Route207_Text_HelenPost:
	.string "Yup! Good going! I like the way you\n"
	.string "battle!$"

Route207_EventScript_PtNpc1::
	msgbox Route207_Text_PtNpc1, MSGBOX_NPC
	end

Route207_Text_PtNpc1:
	.string "That slope's too slippery. You'll need\n"
	.string "a Bike to get up.\p"
	.string "You don't have a Bicycle? There's a\n"
	.string "Cycle Shop in ETERNA CITY.$"

Route207_EventScript_PtSign1::
	msgbox Route207_Text_PtSign1, MSGBOX_SIGN
	end

Route207_Text_PtSign1:
	.string "Rt. 207 OREBURGH CITY$"

Route207_EventScript_PtSign2::
	msgbox Route207_Text_PtSign2, MSGBOX_SIGN
	end

Route207_Text_PtSign2:
	.string "Rt. 207 MT. CORONET$"

Route207_EventScript_PtSign3::
	msgbox Route207_Text_PtSign3, MSGBOX_SIGN
	end

Route207_Text_PtSign3:
	.string "Trainer Tips POKéMON may become\n"
	.string "immobilized if they are asleep or\l"
	.string "paralyzed.\p"
	.string "If it happens to your POKéMON, it\n"
	.string "could be disastrous.\p"
	.string "If your opponent's POKéMON can't\n"
	.string "move, it's a big opportunity!$"
