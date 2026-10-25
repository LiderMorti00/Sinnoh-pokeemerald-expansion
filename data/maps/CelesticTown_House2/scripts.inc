CelesticTown_House2_MapScripts::
	.byte 0

CelesticTown_House2_Text_PtNpc1_0:
	.string "Where are you from?\p"
	.string "...\p"
	.string "Hm, Twinleaf Town, you say. Isn’t that\n"
	.string "close to Lake Verity?\p"
	.string "That lake is said to be home to\n"
	.string "MESPRIT, “The Being of Emotion.”\p"
	.string "That POKéMON may well be watching over\n"
	.string "you.\p"
	.string "Would you like to know more about\n"
	.string "MESPRIT?$"

CelesticTown_House2_Text_PtNpc1_1:
	.string "MESPRIT is the legendary POKéMON that\n"
	.string "symbolizes the emotions.\p"
	.string "Beside it are also UXIE, “The Being of\n"
	.string "Knowledge,” and AZELF, “The Being of\p"
	.string "Willpower.”\p"
	.string "These three POKéMON are said to have\n"
	.string "strong and compassionate spirits.\p"
	.string "The power of their spirits maintains\n"
	.string "the natural balance of Sinnoh.$"

CelesticTown_House2_Text_PtNpc1_2:
	.string "Hahaha! Well, of course you wouldn’t.\p"
	.string "It’s a tale from so long ago. It’s no\n"
	.string "wonder you weren’t interested.$"

CelesticTown_House2_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CelesticTown_House2_Text_PtNpc1_0, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CelesticTown_House2_EventScript_PtNpc1_YouWouldnt
	msgbox CelesticTown_House2_Text_PtNpc1_1, MSGBOX_DEFAULT
	goto CelesticTown_House2_EventScript_PtNpc1_ExpertMEnd
	release
	end

CelesticTown_House2_EventScript_PtNpc1_YouWouldnt:
	msgbox CelesticTown_House2_Text_PtNpc1_2, MSGBOX_DEFAULT
	goto CelesticTown_House2_EventScript_PtNpc1_ExpertMEnd
	release
	end

CelesticTown_House2_EventScript_PtNpc1_ExpertMEnd:
	release
	end

CelesticTown_House2_Text_PtNpc2:
	.string "Well, hello! You look good.\p"
	.string "I did some research of my own since\n"
	.string "that spot of trouble last time.\p"
	.string "Mt. Coronet’s acting up had me very\n"
	.string "concerned, too.\p"
	.string "Well, this is what I found in the shrine.\p"
	.string "It’s a book, and it’s quite old. Let me\n"
	.string "read a bit for you.\p"
	.string "“The bearer of the shining Adamant Orb\n"
	.string "summons DIALGA to the Spear Pillar.\p"
	.string "“The guardian POKéMON of time will\n"
	.string "answer the call.\p"
	.string "“The bearer of the shining Lustrous\n"
	.string "Orb summons PALKIA to the Spear Pillar.\p"
	.string "“The POKéMON that binds the spatial\n"
	.string "dimensions will answer the call.”\p"
	.string "It seems the people of long ago met\n"
	.string "both DIALGA and PALKIA, the POKéMON\p"
	.string "of time and space.$"

CelesticTown_House2_EventScript_PtNpc2::
	msgbox CelesticTown_House2_Text_PtNpc2, MSGBOX_NPC
	end

CelesticTown_House2_Text_PtNpc3_0:
	.string "My big sister is studying the myths of\n"
	.string "Sinnoh.\p"
	.string "She wants to know how people and\n"
	.string "POKéMON interacted in the days of\p"
	.string "myths.\p"
	.string "Were things different back then? Or\n"
	.string "were they the same as now?\p"
	.string "She says that’s the focus of her\n"
	.string "research.$"

CelesticTown_House2_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox CelesticTown_House2_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
