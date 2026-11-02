Route206_North_MapScripts::
	.byte 0

Route206_North_EventScript_SNDawnFather::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_EXP_SHARE, Route206_North_EventScript_SNDawnFather_After
	setvar VAR_0x8004, 0
	special ScriptGetPokedexInfo
	buffernumberstring STR_VAR_1, VAR_0x8005
	msgbox Route206_North_EventScript_SNDawnFather_T1, MSGBOX_DEFAULT
	goto_if_lt VAR_0x8005, 35, Route206_North_EventScript_SNDawnFather_NotYet
	msgbox Route206_North_EventScript_SNDawnFather_T2, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Route206_North_EventScript_SNDawnFather_End
	setflag FLAG_SN_RECEIVED_EXP_SHARE
	msgbox Route206_North_EventScript_SNDawnFather_T3, MSGBOX_DEFAULT
Route206_North_EventScript_SNDawnFather_End:
	release
	end
Route206_North_EventScript_SNDawnFather_NotYet:
	msgbox Route206_North_EventScript_SNDawnFather_NotYetT, MSGBOX_DEFAULT
	release
	end
Route206_North_EventScript_SNDawnFather_After:
	msgbox Route206_North_EventScript_SNDawnFather_T3, MSGBOX_DEFAULT
	release
	end

Route206_North_EventScript_SNDawnFather_T1:
	.string "Oh, hello! I’m a POKéMON researcher, and\n"
	.string "an aide to Professor Rowan. My child\l"
	.string "helps the professor, too.\p"
	.string "May I see your POKéDEX? Hmm... You’ve\n"
	.string "seen {STR_VAR_1} kinds of POKéMON.$"

Route206_North_EventScript_SNDawnFather_NotYetT:
	.string "When you’ve seen 35 kinds of POKéMON,\n"
	.string "come see me. I’ll have a reward for you.$"

Route206_North_EventScript_SNDawnFather_T2:
	.string "Excellent! You’ve already seen more\n"
	.string "than 35 kinds! Please, take this as a\l"
	.string "token of my appreciation.$"

Route206_North_EventScript_SNDawnFather_T3:
	.string "The EXP. SHARE lets the POKéMON\n"
	.string "holding it share the EXP. points from\l"
	.string "battles, even if it doesn’t fight.$"
