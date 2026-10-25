CanalaveCity_House3_MapScripts::
	.byte 0

CanalaveCity_House3_Text_PtNpc1:
	.string "The little boy is thrashing about in his\n"
	.string "sleep.\p"
	.string "He appears to be in torment... He is\n"
	.string "muttering something...\p"
	.string "“DAR... DARK...is watching...me...”$"

CanalaveCity_House3_EventScript_PtNpc1::
	msgbox CanalaveCity_House3_Text_PtNpc1, MSGBOX_NPC
	end

CanalaveCity_House3_Text_PtNpc2:
	.string "I never thought our boy would fall into\n"
	.string "this endless nightmare...\p"
	.string "It’s happened in the past in Canalave...\p"
	.string "There were people who never woke up\n"
	.string "from their nightmares...\p"
	.string "...That is, until they were awoken using\n"
	.string "something called the Lunar Wing.\p"
	.string "My husband went to find a Lunar Wing\n"
	.string "on Fullmoon Island, but he failed...\p"
	.string "Does it take a Trainer to do that? We\n"
	.string "feel so frustrated by this...$"

CanalaveCity_House3_EventScript_PtNpc2::
	msgbox CanalaveCity_House3_Text_PtNpc2, MSGBOX_NPC
	end
