Route204_MapScripts::
	.byte 0

Route204_EventScript_Sarah::
	trainerbattle_single TRAINER_MARCEL, Route204_Text_SarahIntro, Route204_Text_SarahDefeat
	msgbox Route204_Text_SarahPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_SarahIntro:
	.string "My SHINX is full of energy! Let's\n"
	.string "battle!$"

Route204_Text_SarahDefeat:
	.string "Zapped out...$"

Route204_Text_SarahPost:
	.string "I'll train more on this route.$"

Route204_EventScript_Samantha::
	trainerbattle_single TRAINER_ALBERTO, Route204_Text_SamanthaIntro, Route204_Text_SamanthaDefeat
	msgbox Route204_Text_SamanthaPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_SamanthaIntro:
	.string "BUDEW is so cute, but it's tough\n"
	.string "too!$"

Route204_Text_SamanthaDefeat:
	.string "Oh no, BUDEW!$"

Route204_Text_SamanthaPost:
	.string "Grass-types love the sunshine\n"
	.string "here.$"

Route204_EventScript_Tyler::
	trainerbattle_single TRAINER_ED, Route204_Text_TylerIntro, Route204_Text_TylerDefeat
	msgbox Route204_Text_TylerPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_TylerIntro:
	.string "I fished up a MAGIKARP! It's super\n"
	.string "strong, I promise!$"

Route204_Text_TylerDefeat:
	.string "It just splashed around...$"

Route204_Text_TylerPost:
	.string "Someday it'll evolve into\n"
	.string "something amazing!$"

Route204_EventScript_Brandon::
	trainerbattle_single TRAINER_DECLAN, Route204_Text_BrandonIntro, Route204_Text_BrandonDefeat
	msgbox Route204_Text_BrandonPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_BrandonIntro:
	.string "I caught these BUG POKéMON in the\n"
	.string "grass!$"

Route204_Text_BrandonDefeat:
	.string "Squashed...$"

Route204_Text_BrandonPost:
	.string "ETERNA FOREST has even more BUG\n"
	.string "POKéMON!$"

Route204_EventScript_Taylor::
	trainerbattle_single TRAINER_FREDRICK, Route204_Text_TaylorIntro, Route204_Text_TaylorDefeat
	msgbox Route204_Text_TaylorPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_TaylorIntro:
	.string "The flowers here smell lovely.\n"
	.string "Shall we battle?$"

Route204_Text_TaylorDefeat:
	.string "What a sweet battle.$"

Route204_Text_TaylorPost:
	.string "FLOAROMA TOWN is just ahead.\n"
	.string "You'll love it.$"

Route204_EventScript_Twins::
	trainerbattle_double TRAINER_ZANDER, Route204_Text_TwinsIntro, Route204_Text_TwinsDefeat, Route204_Text_TwinsNotEnough
	msgbox Route204_Text_TwinsPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_TwinsIntro:
	.string "LIV: We're twins! LIZ: And we\n"
	.string "battle together!$"

Route204_Text_TwinsDefeat:
	.string "LIV & LIZ: Aww, we lost!$"

Route204_Text_TwinsPost:
	.string "LIV: Our PACHIRISU are twins too!\n"
	.string "LIZ: Isn't that cute?$"

Route204_Text_TwinsNotEnough:
	.string "We battle as a team! Come back\n"
	.string "with two POKéMON!$"

Route204_EventScript_PtNpc1::
	msgbox Route204_Text_PtNpc1, MSGBOX_NPC
	end

Route204_Text_PtNpc1:
	.string "The path through RAVAGED PATH is\n"
	.string "full of rocks. ROCK SMASH comes in\l"
	.string "handy!$"

Route204_EventScript_PtNpc2::
	msgbox Route204_Text_PtNpc2, MSGBOX_NPC
	end

Route204_Text_PtNpc2:
	.string "I love this route. The flowers\n"
	.string "smell so nice as you head north!$"

Route204_EventScript_PtNpcN1::
	msgbox Route204_Text_PtNpcN1, MSGBOX_NPC
	end

Route204_Text_PtNpcN1:
	.string "FLOAROMA TOWN is just up ahead.\n"
	.string "It's full of flowers!$"

Route204_EventScript_PtNpcN2::
	msgbox Route204_Text_PtNpcN2, MSGBOX_NPC
	end

Route204_Text_PtNpcN2:
	.string "I climbed these stairs a hundred\n"
	.string "times today. My legs hurt!$"

Route204_EventScript_PtNpcN3::
	msgbox Route204_Text_PtNpcN3, MSGBOX_NPC
	end

Route204_Text_PtNpcN3:
	.string "Some Trainers battle in pairs.\n"
	.string "Make sure you have two POKéMON\l"
	.string "ready!$"

Route204_EventScript_Sign3::
	msgbox Route204_Text_Sign3, MSGBOX_SIGN
	end

Route204_Text_Sign3:
	.string "ROUTE 204$"

Route204_EventScript_Sign1::
	msgbox Route204_Text_Sign1, MSGBOX_SIGN
	end

Route204_Text_Sign1:
	.string "ROUTE 204\p"
	.string "JUBILIFE CITY / FLOAROMA TOWN$"

Route204_EventScript_Sign2::
	msgbox Route204_Text_Sign2, MSGBOX_SIGN
	end

Route204_Text_Sign2:
	.string "ROUTE 204\p"
	.string "JUBILIFE CITY / FLOAROMA TOWN$"

Route204_EventScript_Sign4::
	msgbox Route204_Text_Sign4, MSGBOX_SIGN
	end

Route204_Text_Sign4:
	.string "ROUTE 204\p"
	.string "JUBILIFE CITY / FLOAROMA TOWN$"
