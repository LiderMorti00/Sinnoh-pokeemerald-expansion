SinnohVictoryRoad_B1F_MapScripts::
	.byte 0

SinnohVictoryRoad_B1F_EventScript_JoPat::
	trainerbattle_double TRAINER_WINSTON_4, SinnohVictoryRoad_B1F_Text_JoPatIntro, SinnohVictoryRoad_B1F_Text_JoPatDefeat, SinnohVictoryRoad_B1F_Text_JoPatNotEnough
	msgbox SinnohVictoryRoad_B1F_Text_JoPatPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_B1F_Text_JoPatIntro:
	.string "Let’s battle!$"

SinnohVictoryRoad_B1F_Text_JoPatDefeat:
	.string "I lost!$"

SinnohVictoryRoad_B1F_Text_JoPatPost:
	.string "That was a good battle.$"

SinnohVictoryRoad_B1F_Text_JoPatNotEnough:
	.string "You need two POKéMON to battle us!$"

SinnohVictoryRoad_B1F_EventScript_Ondrej::
	trainerbattle_single TRAINER_WINSTON_5, SinnohVictoryRoad_B1F_Text_OndrejIntro, SinnohVictoryRoad_B1F_Text_OndrejDefeat
	msgbox SinnohVictoryRoad_B1F_Text_OndrejPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_B1F_Text_OndrejIntro:
	.string "I take POKéMON that are tough to begin\n"
	.string "with and toughen them up even more.\p"
	.string "You can help me!$"

SinnohVictoryRoad_B1F_Text_OndrejDefeat:
	.string "There’s no way I could have won!$"

SinnohVictoryRoad_B1F_Text_OndrejPost:
	.string "How should I teach the most powerful\n"
	.string "of the Dragon-type moves...?$"

SinnohVictoryRoad_B1F_EventScript_Valencia::
	trainerbattle_single TRAINER_STEVE_1, SinnohVictoryRoad_B1F_Text_ValenciaIntro, SinnohVictoryRoad_B1F_Text_ValenciaDefeat
	msgbox SinnohVictoryRoad_B1F_Text_ValenciaPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_B1F_Text_ValenciaIntro:
	.string "I am a Psychic! I can see your past!$"

SinnohVictoryRoad_B1F_Text_ValenciaDefeat:
	.string "Your past... You’ve been through a lot...$"

SinnohVictoryRoad_B1F_Text_ValenciaPost:
	.string "Let me guess. Have you met any\n"
	.string "legendary POKéMON?$"

SinnohVictoryRoad_B1F_EventScript_Henry::
	trainerbattle_single TRAINER_THALIA_1, SinnohVictoryRoad_B1F_Text_HenryIntro, SinnohVictoryRoad_B1F_Text_HenryDefeat
	msgbox SinnohVictoryRoad_B1F_Text_HenryPost, MSGBOX_AUTOCLOSE
	end

SinnohVictoryRoad_B1F_Text_HenryIntro:
	.string "Victory Road... Somehow, it feels as if\n"
	.string "my journey is now coming to an end.\p"
	.string "But, before the final chapter is\n"
	.string "written, I must pen your defeat!$"

SinnohVictoryRoad_B1F_Text_HenryDefeat:
	.string "That wasn’t how I planned the final\n"
	.string "chapter to go in my writing class...$"

SinnohVictoryRoad_B1F_Text_HenryPost:
	.string "If you don’t give up, you can reach\n"
	.string "your goal.\p"
	.string "That perseverance is what’s important\n"
	.string "to Trainers. That’s in my book, too.$"
