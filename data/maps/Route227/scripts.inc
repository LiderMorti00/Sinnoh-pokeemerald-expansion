Route227_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route227_OnTransitionSN
	.byte 0

Route227_EventScript_Saul::
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, Route227_Text_SaulIntro, Route227_Text_SaulDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route227_EventScript_Saul_Rematch
	msgbox Route227_Text_SaulPost, MSGBOX_AUTOCLOSE
	end

Route227_EventScript_Saul_Rematch:
	trainerbattle_rematch TRAINER_MAY_ROUTE_110_MUDKIP, Route227_Text_SaulIntro, Route227_Text_SaulDefeat
	msgbox Route227_Text_SaulPost, MSGBOX_AUTOCLOSE
	end

Route227_Text_SaulIntro:
	.string "I've got the urge to battle with you.\n"
	.string "Hope you're willing to oblige!$"

Route227_Text_SaulDefeat:
	.string "I shouldn't have paid attention to my\n"
	.string "urge...$"

Route227_Text_SaulPost:
	.string "So long as my partner's alongside me,\n"
	.string "I'm willing to take on the world!$"

Route227_EventScript_Felicia::
	trainerbattle_single TRAINER_MAY_ROUTE_119_MUDKIP, Route227_Text_FeliciaIntro, Route227_Text_FeliciaDefeat
	msgbox Route227_Text_FeliciaPost, MSGBOX_AUTOCLOSE
	end

Route227_Text_FeliciaIntro:
	.string "We've grown strong together in nature\n"
	.string "and in the concrete jungle.\p"
	.string "We make everywhere we go our\n"
	.string "playground!$"

Route227_Text_FeliciaDefeat:
	.string "You're really tough, aren't you?!$"

Route227_Text_FeliciaPost:
	.string "Look around you at this wildly\n"
	.string "contorted terrain.\p"
	.string "It's no wonder that POKéMON would\n"
	.string "grow tough in a place like this.$"

Route227_EventScript_Griffin::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, Route227_Text_GriffinIntro, Route227_Text_GriffinDefeat
	msgbox Route227_Text_GriffinPost, MSGBOX_AUTOCLOSE
	end

Route227_Text_GriffinIntro:
	.string "I have meditated under a waterfall to\n"
	.string "temper my spirit.\p"
	.string "Allow me to demonstrate its strength!$"

Route227_Text_GriffinDefeat:
	.string "Ha-choo! Sniffle...$"

Route227_Text_GriffinPost:
	.string "All that time under the waterfall...\n"
	.string "Seems I've caught a cold.$"

Route227_EventScript_Mikayla::
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, Route227_Text_MikaylaIntro, Route227_Text_MikaylaDefeat
	msgbox Route227_Text_MikaylaPost, MSGBOX_AUTOCLOSE
	end

Route227_Text_MikaylaIntro:
	.string "The world is huge, and there are so\n"
	.string "many different POKéMON!\p"
	.string "What kinds of POKéMON are with you?\n"
	.string "Please, I want to have a look!$"

Route227_Text_MikaylaDefeat:
	.string "Wow, there are POKéMON that\n"
	.string "wonderful!$"

Route227_Text_MikaylaPost:
	.string "There is always something to like\n"
	.string "about any POKéMON.\p"
	.string "It's so hard to decide which ones I\n"
	.string "should raise.$"

Route227_EventScript_PtSign1::
	msgbox Route227_Text_PtSign1, MSGBOX_SIGN
	end

Route227_Text_PtSign1:
	.string "Rt. 227 Stark Mountain$"

Route227_OnTransitionSN:
	call Route227_EventScript_SNVis_R227_BUCK
	call Route227_EventScript_SNVis_R227_WAKE
	end

Route227_EventScript_SNVis_R227_BUCK:
	setflag FLAG_SN_HIDE_R227_BUCK
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route227_EventScript_SNVis_R227_BUCK_End
	goto_if_set FLAG_SN_R227_BUCK_DONE, Route227_EventScript_SNVis_R227_BUCK_End
	goto_if_set FLAG_SN_STARK_BUCK_MET, Route227_EventScript_SNVis_R227_BUCK_End
	clearflag FLAG_SN_HIDE_R227_BUCK
Route227_EventScript_SNVis_R227_BUCK_End:
	return

Route227_EventScript_SNVis_R227_WAKE:
	setflag FLAG_SN_HIDE_R227_WAKE
	goto_if_unset FLAG_SYS_GAME_CLEAR, Route227_EventScript_SNVis_R227_WAKE_End
	goto_if_set FLAG_SN_R227_WAKE_DONE, Route227_EventScript_SNVis_R227_WAKE_End
	clearflag FLAG_SN_HIDE_R227_WAKE
Route227_EventScript_SNVis_R227_WAKE_End:
	return

Route227_EventScript_SNBuck::
	lock
	faceplayer
	msgbox Route227_EventScript_SNBuck_T1, MSGBOX_DEFAULT
	msgbox Route227_EventScript_SNBuck_T2, MSGBOX_DEFAULT
Route227_EventScript_SNBuck_Ask:
	msgbox Route227_EventScript_SNBuck_T3, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route227_EventScript_SNBuck_No
	msgbox Route227_EventScript_SNBuck_T5, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_R227_BUCK_DONE
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_R227_BUCK
	setflag FLAG_SN_HIDE_R227_BUCK
	fadescreen FADE_FROM_BLACK
	release
	end
Route227_EventScript_SNBuck_No:
	msgbox Route227_EventScript_SNBuck_T4, MSGBOX_DEFAULT
	goto Route227_EventScript_SNBuck_Ask

Route227_EventScript_SNBuck_T1:
	.string "Buck: Yo, if it isn’t {PLAYER}! Out\n"
	.string "training right away, are you?\p"
	.string "So, uh, since you’re training anyway,\n"
	.string "can you do me a favor?\p"
	.string "I’d like you to patrol Stark Mountain\n"
	.string "for me.$"

Route227_EventScript_SNBuck_T2:
	.string "Buck: Up past here, there’s this\n"
	.string "volcano. It’s Stark Mountain.\p"
	.string "Deep inside it is this special rock\n"
	.string "called the Magma Stone.\p"
	.string "I can’t explain it well, but it’s really\n"
	.string "important. It keeps a POKéMON asleep.\p"
	.string "But lately, I’ve been hearing rumors\n"
	.string "about vandals in Stark Mountain.\p"
	.string "They say goons in space suits are\n"
	.string "causing trouble there.$"

Route227_EventScript_SNBuck_T3:
	.string "Huh? What, me?\p"
	.string "I was on my way to the POKéMON Center\n"
	.string "because my POKéMON’s low on HP.\p"
	.string "So, if you could get up to Stark\n"
	.string "Mountain now, that’d be great. Thanks!$"

Route227_EventScript_SNBuck_T4:
	.string "I’ll keep asking the same thing over\n"
	.string "and over until you say “Yes!”$"

Route227_EventScript_SNBuck_T5:
	.string "Buck: OK! You’re in charge! Patrol Stark\n"
	.string "Mountain for me!\p"
	.string "Don’t worry about me. Not even a little\n"
	.string "bit, OK?$"

Route227_EventScript_SNWake::
	lock
	faceplayer
	msgbox Route227_EventScript_SNWake_T1, MSGBOX_DEFAULT
	msgbox Route227_EventScript_SNWake_T2, MSGBOX_DEFAULT
	msgbox Route227_EventScript_SNWake_T3, MSGBOX_DEFAULT
	msgbox Route227_EventScript_SNWake_T4, MSGBOX_DEFAULT
	msgbox Route227_EventScript_SNWake_T5, MSGBOX_DEFAULT
	msgbox Route227_EventScript_SNWake_T6, MSGBOX_DEFAULT
	msgbox Route227_EventScript_SNWake_T7, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_R227_WAKE_DONE
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_R227_WAKE
	removeobject LOCALID_SN_R227_BARRY
	setflag FLAG_SN_HIDE_R227_WAKE
	fadescreen FADE_FROM_BLACK
	release
	end

Route227_EventScript_SNWake_T1:
	.string "Wake: Oh, if it isn’t {PLAYER}! It’s been\n"
	.string "a while!\p"
	.string "You’ve grown so tough that you’re\n"
	.string "training out here now...\p"
	.string "Everyone keeps getting tougher and\n"
	.string "tougher...\p"
	.string "And, in doing that, they develop closer\n"
	.string "bonds with their POKéMON...$"

Route227_EventScript_SNWake_T2:
	.string "BARRY: That’s my master! Those are\n"
	.string "words of wisdom!$"

Route227_EventScript_SNWake_T3:
	.string "Wake: What? Are you still having\n"
	.string "trouble understanding?\p"
	.string "I don’t for a second ever recall\n"
	.string "accepting you as an apprentice!\p"
	.string "I mean, if it’s wrestling moves, I can\n"
	.string "show you all you like, but...$"

Route227_EventScript_SNWake_T4:
	.string "BARRY: Awww, master, don’t be that way!\p"
	.string "You’ve got to get me into that club in\n"
	.string "the Survival Area!$"

Route227_EventScript_SNWake_T5:
	.string "Wake: ...How’d I get involved in this...?\p"
	.string "So, anyway, {PLAYER}. You’re going to\n"
	.string "Stark Mountain?\p"
	.string "Even the wild POKéMON there are very,\n"
	.string "very tough...\p"
	.string "If your POKéMON aren’t well trained,\n"
	.string "they’ll have a miserable time...\p"
	.string "Then again, that kind of challenge is\n"
	.string "an exciting prospect...\p"
	.string "But no matter what, you’d better be\n"
	.string "fully prepared!\p"
	.string "I’ve got to get ready for another\n"
	.string "tournament. Farewell!$"

Route227_EventScript_SNWake_T6:
	.string "BARRY: You know, I think I got a little\n"
	.string "tougher again.\p"
	.string "That’s why I’m off to the Battle\n"
	.string "Frontier so I can make some\l"
	.string "challenges!$"

Route227_EventScript_SNWake_T7:
	.string "Master! Wait for me!$"
