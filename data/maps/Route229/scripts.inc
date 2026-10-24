Route229_MapScripts::
	.byte 0

Route229_EventScript_Deshawn::
	trainerbattle_single TRAINER_LORENZO, Route229_Text_DeshawnIntro, Route229_Text_DeshawnDefeat
	msgbox Route229_Text_DeshawnPost, MSGBOX_AUTOCLOSE
	end

Route229_Text_DeshawnIntro:
	.string "I work to protect beautiful, natural\n"
	.string "environments.\p"
	.string "My POKéMON are my constant\n"
	.string "companions while I work.$"

Route229_Text_DeshawnDefeat:
	.string "Oh, my gosh! My poor POKéMON!$"

Route229_Text_DeshawnPost:
	.string "Everyone can do their part to keep\n"
	.string "nature clean. It doesn't take much.$"

Route229_EventScript_Felix::
	trainerbattle_single TRAINER_SEBASTIAN, Route229_Text_FelixIntro, Route229_Text_FelixDefeat
	msgbox Route229_Text_FelixPost, MSGBOX_AUTOCLOSE
	end

Route229_Text_FelixIntro:
	.string "Welcome to my POKéMON show!$"

Route229_Text_FelixDefeat:
	.string "Did you enjoy the show? Super\n"
	.string "fabulous, wasn't it?$"

Route229_Text_FelixPost:
	.string "I'll be happy to battle you again!\n"
	.string "Let's battle again sometime, yeah?$"

Route229_EventScript_Dana::
	trainerbattle_single TRAINER_JENNA, Route229_Text_DanaIntro, Route229_Text_DanaDefeat
	msgbox Route229_Text_DanaPost, MSGBOX_AUTOCLOSE
	end

Route229_Text_DanaIntro:
	.string "You're willing to battle? Let me see\n"
	.string "what you have?$"

Route229_Text_DanaDefeat:
	.string "Your love of POKéMON really shows!$"

Route229_Text_DanaPost:
	.string "I grew up together with Felix and my\n"
	.string "team, right from my childhood.\p"
	.string "All our memories, we've always shared\n"
	.string "them.$"

Route229_EventScript_Sandra::
	trainerbattle_single TRAINER_SOPHIA, Route229_Text_SandraIntro, Route229_Text_SandraDefeat
	msgbox Route229_Text_SandraPost, MSGBOX_AUTOCLOSE
	end

Route229_Text_SandraIntro:
	.string "When eyes meet... That's when a battle\n"
	.string "starts!$"

Route229_Text_SandraDefeat:
	.string "You won't let me win?$"

Route229_Text_SandraPost:
	.string "I suddenly remembered what it was like\n"
	.string "when I had my first battle.\p"
	.string "I wonder why that would be?$"

Route229_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_ROUTE229_NUGGET, Route229_EventScript_PtNpc1_Received
	msgbox Route229_Text_PtNpc1, MSGBOX_DEFAULT
	giveitem ITEM_NUGGET, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ROUTE229_NUGGET
	release
	end

Route229_EventScript_PtNpc1_Received:
	msgbox Route229_Text_PtNpc1_Received, MSGBOX_DEFAULT
	release
	end

Route229_Text_PtNpc1:
	.string "Were you looking for me? Did you miss\n"
	.string "me?\p"
	.string "I wish I had a new nugget of wisdom to\n"
	.string "share with you, but alas, I don't!\p"
	.string "So, I'll have to make it up to you with\n"
	.string "this!$"

Route229_Text_PtNpc1_Received:
	.string "Those are my Nuggets! Try to spend\n"
	.string "them wisely!\p"
	.string "Nuggets of gold have to be worth more\n"
	.string "than nuggets of my wisdom!$"

Route229_EventScript_PtSign1::
	msgbox Route229_Text_PtSign1, MSGBOX_SIGN
	end

Route229_Text_PtSign1:
	.string "Rt. 229 Resort Area$"
