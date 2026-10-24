Route227_MapScripts::
	.byte 0

Route227_EventScript_Saul::
	trainerbattle_single TRAINER_MAY_ROUTE_110_MUDKIP, Route227_Text_SaulIntro, Route227_Text_SaulDefeat
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
