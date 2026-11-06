Route218_West_MapScripts::
	.byte 0

Route218_West_EventScript_PtNpc1::
	msgbox Route218_West_Text_PtNpc1, MSGBOX_NPC
	end

Route218_West_Text_PtNpc1:
	.string "Route 218 up ahead is a great fishing\n"
	.string "hole that's almost unknown to people.$"

Route218_West_EventScript_SNScientist::
	goto_if_set FLAG_SN_R218_SCIENTIST_DONE, Route218_West_EventScript_SNScientist_End
	lockall
	setflag FLAG_SN_R218_SCIENTIST_DONE
	applymovement LOCALID_SN_GATE_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_SN_GATE_SCIENTIST, SN_SPEED_NORMAL, 0, 0
	waitmovement LOCALID_SN_GATE_SCIENTIST
	sn_playerface LOCALID_SN_GATE_SCIENTIST, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route218_West_EventScript_SNScientistF
	msgbox Route218_West_Text_SNUpgradeM, MSGBOX_DEFAULT
	goto Route218_West_EventScript_SNScientistN
Route218_West_EventScript_SNScientistF:
	msgbox Route218_West_Text_SNUpgradeF, MSGBOX_DEFAULT
Route218_West_EventScript_SNScientistN:
	msgbox Route218_West_Text_SNUpgrade, MSGBOX_DEFAULT
	closemessage
	sn_walkto LOCALID_SN_GATE_SCIENTIST, 11, 5, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_GATE_SCIENTIST
	playse SE_EXIT
	removeobject LOCALID_SN_GATE_SCIENTIST
	releaseall
Route218_West_EventScript_SNScientist_End:
	end

Route218_West_Text_SNUpgradeM:
	.string "{PLAYER}, long time, no see!\p"
	.string "Oh? You look puzzled. You’re wondering\n"
	.string "who I am.\p"
	.string "I’m Professor Rowan’s assistant and\n"
	.string "Dawn’s father.\p"
	.string "The professor asked that I upgrade\n"
	.string "your POKéDEX, you see.\p"
	.string "So I’d chosen this spot on a hunch\n"
	.string "that you’d pass through.\p"
	.string "{PLAYER}, may I have your POKéDEX for a\n"
	.string "moment?$"

Route218_West_Text_SNUpgradeF:
	.string "{PLAYER}, long time, no see!\p"
	.string "Oh? You look puzzled. You’re wondering\n"
	.string "who I am.\p"
	.string "I’m Professor Rowan’s assistant and\n"
	.string "Lucas’s father.\p"
	.string "The professor asked that I upgrade\n"
	.string "your POKéDEX, you see.\p"
	.string "So I’d chosen this spot on a hunch\n"
	.string "that you’d pass through.\p"
	.string "{PLAYER}, may I have your POKéDEX for a\n"
	.string "moment?$"

Route218_West_Text_SNUpgrade:
	.string "Let’s see... Was I supposed to put in\n"
	.string "the software here...?\p"
	.string "Ka-chunk. Ka-chunk!\p"
	.string "All done! I’ve upgraded your POKéDEX!\p"
	.string "I should explain how it’s been\n"
	.string "upgraded, shouldn’t I?\p"
	.string "It can now display images of male and\n"
	.string "female POKéMON.\p"
	.string "OK, I’ll leave you to carry on with your\n"
	.string "project for the professor...\p"
	.string "...May I also ask you to keep an eye on\n"
	.string "Team Galactic?\p"
	.string "The professor is concerned about what\n"
	.string "happened in Jubilife City...\p"
	.string "It’s probably nothing to worry over!\n"
	.string "I’ll be on my way now.$"
