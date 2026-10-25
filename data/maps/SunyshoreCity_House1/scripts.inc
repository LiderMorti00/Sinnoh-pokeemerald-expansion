SunyshoreCity_House1_MapScripts::
	.byte 0

SunyshoreCity_House1_Text_PtNpc1_0:
	.string "I’d heard that Team Galactic was up to\n"
	.string "no good.\p"
	.string "But here in Sunyshore, we’ve never\n"
	.string "even seen any of them around.\p"
	.string "Of course, our Gym Leader Volkner is\n"
	.string "invincible in every way.$"

SunyshoreCity_House1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SunyshoreCity_House1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SunyshoreCity_House1_Text_PtNpc2_0:
	.string "A long time ago, there was a boy named\n"
	.string "Cyrus who lived here.\p"
	.string "He seemed to shun others, and he\n"
	.string "preferred the company of machines.\p"
	.string "He was a brilliant student, I recall. I\n"
	.string "often wonder what became of him.$"

SunyshoreCity_House1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SunyshoreCity_House1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
