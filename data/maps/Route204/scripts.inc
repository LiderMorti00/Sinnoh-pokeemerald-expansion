Route204_MapScripts::
	.byte 0

Route204_EventScript_Sarah::
	trainerbattle_single TRAINER_MARCEL, Route204_Text_SarahIntro, Route204_Text_SarahDefeat
	msgbox Route204_Text_SarahPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_SarahIntro:
	.string "Oh, a weak-looking Trainer... Do you\n"
	.string "want to have a go?$"

Route204_Text_SarahDefeat:
	.string "Aww... I should have said no.$"

Route204_Text_SarahPost:
	.string "Oh, you're so mean! I just started\n"
	.string "training POKéMON!$"

Route204_EventScript_Samantha::
	trainerbattle_single TRAINER_ALBERTO, Route204_Text_SamanthaIntro, Route204_Text_SamanthaDefeat
	msgbox Route204_Text_SamanthaPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_SamanthaIntro:
	.string "May I please trouble you for a battle?$"

Route204_Text_SamanthaDefeat:
	.string "Oh... You're so strong...$"

Route204_Text_SamanthaPost:
	.string "Maybe I could have won if my POKéMON\n"
	.string "was holding a Berry...$"

Route204_EventScript_Tyler::
	trainerbattle_single TRAINER_ED, Route204_Text_TylerIntro, Route204_Text_TylerDefeat
	msgbox Route204_Text_TylerPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_TylerIntro:
	.string "I'll beat you with the MAGIKARP my dad\n"
	.string "gave me!$"

Route204_Text_TylerDefeat:
	.string "But they're POKéMON I got from my\n"
	.string "dad...$"

Route204_Text_TylerPost:
	.string "Who gave you your first POKéMON?\p"
	.string "Your first POKéMON is the one with the\n"
	.string "most fond memories, I think.$"

Route204_EventScript_Brandon::
	trainerbattle_single TRAINER_DECLAN, Route204_Text_BrandonIntro, Route204_Text_BrandonDefeat
	msgbox Route204_Text_BrandonPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_BrandonIntro:
	.string "Hey, hey, let me show off my bug\n"
	.string "POKéMON!$"

Route204_Text_BrandonDefeat:
	.string "I'm not going to be able to explain the\n"
	.string "charms of bug POKéMON this way!$"

Route204_Text_BrandonPost:
	.string "Bug POKéMON grow quickly, and they do\n"
	.string "stuff like poison and paralyze, and\l"
	.string "they're cute and yet cool.\p"
	.string "You gotta believe me. They're good!$"

Route204_EventScript_Taylor::
	trainerbattle_single TRAINER_FREDRICK, Route204_Text_TaylorIntro, Route204_Text_TaylorDefeat
	msgbox Route204_Text_TaylorPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_TaylorIntro:
	.string "What kind of person are you, to be\n"
	.string "drawn here by the scent of flowers?$"

Route204_Text_TaylorDefeat:
	.string "It was a strong Trainer who was drawn\n"
	.string "here by the scent of flowers!$"

Route204_Text_TaylorPost:
	.string "By the way, have you collected new\n"
	.string "apps from the POKéTCH Company?$"

Route204_EventScript_Twins::
	trainerbattle_double TRAINER_ZANDER, Route204_Text_TwinsIntro, Route204_Text_TwinsDefeat, Route204_Text_TwinsNotEnough
	msgbox Route204_Text_TwinsPost, MSGBOX_AUTOCLOSE
	end

Route204_Text_TwinsIntro:
	.string "Liv: We can one-shot this Trainer,\n"
	.string "can't we, Liz?$"

Route204_Text_TwinsDefeat:
	.string "Liv: Oh, oh, oh?$"

Route204_Text_TwinsPost:
	.string "Liv: This Trainer...will brag about\n"
	.string "beating us, Liz.$"

Route204_Text_TwinsNotEnough:
	.string "We battle as a team! Come back\n"
	.string "with two POKéMON!$"

Route204_EventScript_PtNpc1::
	msgbox Route204_Text_PtNpc1, MSGBOX_NPC
	end

Route204_Text_PtNpc1:
	.string "There are boulders blocking the way\n"
	.string "inside the cavern...\p"
	.string "I think a POKéMON's hidden move will be\n"
	.string "able to smash those boulders, though.$"

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
	.string "Are you raising different kinds of\n"
	.string "POKéMON?\p"
	.string "If you only have the same type of\n"
	.string "POKéMON, you'll have a hard time\l"
	.string "against types it's weak to.$"

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
