GreatMarsh_MapScripts::
	.byte 0

GreatMarsh_Text_PtNpc1_0:
	.string "Go upstairs in the Observatory before\n"
	.string "you start your Safari Game.\p"
	.string "Check the marsh with the binoculars to\n"
	.string "see where the POKéMON you want\p"
	.string "happen to be. That’s how you win!$"

GreatMarsh_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox GreatMarsh_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

GreatMarsh_Text_PtNpc2_0:
	.string "The POKéMON you see here are\n"
	.string "different from day to day. Don’t you\l"
	.string "think so?$"

GreatMarsh_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox GreatMarsh_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

GreatMarsh_Text_PtNpc3_0:
	.string "Throwing food at POKéMON makes them\n"
	.string "more likely to bolt.\p"
	.string "But when they’re eating, it makes them\n"
	.string "easier to catch.\p"
	.string "If you throw mud at them, they get\n"
	.string "harder to catch...\p"
	.string "But they also get less likely to bolt\n"
	.string "out of anger.\p"
	.string "Urgh, what to do...?$"

GreatMarsh_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox GreatMarsh_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

GreatMarsh_Text_PtNpc4_0:
	.string "When you’re walking on boggy parts,\n"
	.string "sometimes you get sucked down.\p"
	.string "POKéMON may appear while you’re\n"
	.string "struggling to get out, too.$"

GreatMarsh_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox GreatMarsh_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

GreatMarsh_Text_PtNpc5_0:
	.string "Quick, quick, out in the sticks. To and\n"
	.string "fro we go, we’re quick~?\p"
	.string "If you’re thinking about going deep\n"
	.string "into the marsh, I recommend you take\p"
	.string "the Great Marsh Quick Trams.$"

GreatMarsh_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox GreatMarsh_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

GreatMarsh_Text_PtNpc6:
	.string "Do those Shards turn into something\n"
	.string "good if you collect them?\p"
	.string "I’ll try finding more tomorrow.$"

GreatMarsh_EventScript_PtNpc6::
	msgbox GreatMarsh_Text_PtNpc6, MSGBOX_NPC
	end
