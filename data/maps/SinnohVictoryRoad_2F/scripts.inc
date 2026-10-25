SinnohVictoryRoad_2F_MapScripts::
	.byte 0

SinnohVictoryRoad_2F_EventScript_Omar::
	trainerbattle_single TRAINER_JESSICA_5, SinnohVictoryRoad_2F_Text_OmarIntro, SinnohVictoryRoad_2F_Text_OmarDefeat
	msgbox SinnohVictoryRoad_2F_Text_OmarPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_2F_Text_OmarIntro:
	.string "You... One look at you tells me you’re a\n"
	.string "real contender!$"

SinnohVictoryRoad_2F_Text_OmarDefeat:
	.string "You’re as tough as you look.$"

SinnohVictoryRoad_2F_Text_OmarPost:
	.string "One day, people will run to the other\n"
	.string "side of the road when I walk by ’em.\p"
	.string "It’s a goal of mine I’m working on.$"

SinnohVictoryRoad_2F_EventScript_Sydney::
	trainerbattle_single TRAINER_WINSTON_1, SinnohVictoryRoad_2F_Text_SydneyIntro, SinnohVictoryRoad_2F_Text_SydneyDefeat
	msgbox SinnohVictoryRoad_2F_Text_SydneyPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_2F_Text_SydneyIntro:
	.string "This total stranger’ll be a good way to\n"
	.string "see if I have what it takes to own\p"
	.string "the POKéMON League’s Elite Four!$"

SinnohVictoryRoad_2F_Text_SydneyDefeat:
	.string "That battle just now must make you\n"
	.string "tougher than everyone in the world.$"

SinnohVictoryRoad_2F_Text_SydneyPost:
	.string "It doesn’t appear as if anyone could\n"
	.string "even try to stand against your might.\p"
	.string "The Elite Four should just surrender.$"

SinnohVictoryRoad_2F_EventScript_Clayton::
	trainerbattle_single TRAINER_WINSTON_2, SinnohVictoryRoad_2F_Text_ClaytonIntro, SinnohVictoryRoad_2F_Text_ClaytonDefeat
	msgbox SinnohVictoryRoad_2F_Text_ClaytonPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_2F_Text_ClaytonIntro:
	.string "Let me see how well your POKéMON can\n"
	.string "battle!$"

SinnohVictoryRoad_2F_Text_ClaytonDefeat:
	.string "Brilliant!$"

SinnohVictoryRoad_2F_Text_ClaytonPost:
	.string "Rather than navigating Victory Road, I\n"
	.string "have a much better time putting\p"
	.string "young Trainers like you to the test.$"

SinnohVictoryRoad_2F_EventScript_AlKay::
	trainerbattle_double TRAINER_WINSTON_3, SinnohVictoryRoad_2F_Text_AlKayIntro, SinnohVictoryRoad_2F_Text_AlKayDefeat, SinnohVictoryRoad_2F_Text_AlKayNotEnough
	msgbox SinnohVictoryRoad_2F_Text_AlKayPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_2F_Text_AlKayIntro:
	.string "Let’s battle!$"

SinnohVictoryRoad_2F_Text_AlKayDefeat:
	.string "I lost!$"

SinnohVictoryRoad_2F_Text_AlKayPost:
	.string "That was a good battle.$"

SinnohVictoryRoad_2F_Text_AlKayNotEnough:
	.string "You need two POKéMON to battle us!$"
