Route212_South_MapScripts::
	.byte 0

Route212_South_EventScript_Juan::
	trainerbattle_single TRAINER_BRENT, Route212_South_Text_JuanIntro, Route212_South_Text_JuanDefeat
	msgbox Route212_South_Text_JuanPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_JuanIntro:
	.string "Can't you see I'm fishing? Don't talk!\n"
	.string "You'll spook the fish!$"

Route212_South_Text_JuanDefeat:
	.string "How do you like that? Both my catch\n"
	.string "and the win got away!$"

Route212_South_Text_JuanPost:
	.string "Fishing and battling are delicate\n"
	.string "things--as am I. Is that wrong?$"

Route212_South_EventScript_Josh::
	trainerbattle_single TRAINER_DONALD, Route212_South_Text_JoshIntro, Route212_South_Text_JoshDefeat
	msgbox Route212_South_Text_JoshPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_JoshIntro:
	.string "I wish some fishing-loving lady'd come\n"
	.string "along. But no, it's all just Trainers.$"

Route212_South_Text_JoshDefeat:
	.string "Sure, so I lost. But I'll keep on\n"
	.string "fishing.$"

Route212_South_Text_JoshPost:
	.string "If you know of any ladies that like\n"
	.string "fishing, help me reel 'em in!$"

Route212_South_EventScript_Travis::
	trainerbattle_single TRAINER_TAYLOR, Route212_South_Text_TravisIntro, Route212_South_Text_TravisDefeat
	msgbox Route212_South_Text_TravisPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_TravisIntro:
	.string "Water POKéMON sure get happy when it\n"
	.string "rains. So do I!$"

Route212_South_Text_TravisDefeat:
	.string "Oof. Just got trampled right under\n"
	.string "your feet that time!$"

Route212_South_Text_TravisPost:
	.string "Yup, a kid like you should be running\n"
	.string "around outside, rain or shine.$"

Route212_South_EventScript_Taylor::
	trainerbattle_single TRAINER_DEREK, Route212_South_Text_TaylorIntro, Route212_South_Text_TaylorDefeat
	msgbox Route212_South_Text_TaylorPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_TaylorIntro:
	.string "Hi, Trainer! Can you keep up with me?$"

Route212_South_Text_TaylorDefeat:
	.string "You've got energy to burn!$"

Route212_South_Text_TaylorPost:
	.string "Even if a battle gets heated, don't\n"
	.string "break branches off trees or anything.$"

Route212_South_EventScript_Allison::
	trainerbattle_single TRAINER_EDWARD, Route212_South_Text_AllisonIntro, Route212_South_Text_AllisonDefeat
	msgbox Route212_South_Text_AllisonPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_AllisonIntro:
	.string "Protect the natural environment.\n"
	.string "That's what we Rangers do!$"

Route212_South_Text_AllisonDefeat:
	.string "We've got to get tougher than this...$"

Route212_South_Text_AllisonPost:
	.string "I love how natural it is here. I wish I\n"
	.string "could live out here.$"

Route212_South_EventScript_Jeffrey::
	trainerbattle_single TRAINER_WILLIAM, Route212_South_Text_JeffreyIntro, Route212_South_Text_JeffreyDefeat
	msgbox Route212_South_Text_JeffreyPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_JeffreyIntro:
	.string "Heya, Trainer! Are you being good to\n"
	.string "Mother Nature?$"

Route212_South_Text_JeffreyDefeat:
	.string "Good. You seem to be a kindhearted\n"
	.string "Trainer.$"

Route212_South_Text_JeffreyPost:
	.string "Listen, people and POKéMON, we're all a\n"
	.string "part of Mother Nature.$"

Route212_South_EventScript_Danny::
	trainerbattle_single TRAINER_JOSHUA, Route212_South_Text_DannyIntro, Route212_South_Text_DannyDefeat
	msgbox Route212_South_Text_DannyPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_DannyIntro:
	.string "Your whole atmosphere is shady.\n"
	.string "Cooperate in this investigation!$"

Route212_South_Text_DannyDefeat:
	.string "Defeated by sneakiness...$"

Route212_South_Text_DannyPost:
	.string "I mistook your toughness as\n"
	.string "shadiness! It's an honest mistake!$"

Route212_South_EventScript_Stefano::
	trainerbattle_single TRAINER_JACLYN, Route212_South_Text_StefanoIntro, Route212_South_Text_StefanoDefeat
	msgbox Route212_South_Text_StefanoPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_StefanoIntro:
	.string "I find it reassuring to be on this damp\n"
	.string "soil...$"

Route212_South_Text_StefanoDefeat:
	.string "Ufufufufu... You had to beat me...$"

Route212_South_Text_StefanoPost:
	.string "It feels good to mope here after a\n"
	.string "loss... Ufufufufu...$"

Route212_South_EventScript_Dean::
	trainerbattle_single TRAINER_KAYLA, Route212_South_Text_DeanIntro, Route212_South_Text_DeanDefeat
	msgbox Route212_South_Text_DeanPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_DeanIntro:
	.string "I'm proud of my POKéMON! Here, I'll\n"
	.string "show you why!$"

Route212_South_Text_DeanDefeat:
	.string "Youch! You sure showed me how tough\n"
	.string "you were.$"

Route212_South_Text_DeanPost:
	.string "Oh, what have we here? That's a\n"
	.string "Pokédex!\p"
	.string "It records POKéMON data upon sight?\n"
	.string "I've never seen one before!\p"
	.string "I heard you can move the sun or moon\n"
	.string "icon to check the POKéMON habitat map\l"
	.string "by time of day!$"

Route212_South_EventScript_Shaun::
	trainerbattle_single TRAINER_ALEXIS, Route212_South_Text_ShaunIntro, Route212_South_Text_ShaunDefeat
	msgbox Route212_South_Text_ShaunPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_ShaunIntro:
	.string "Oh? Here comes a nice-looking Trainer.\n"
	.string "This is worth evaluation.$"

Route212_South_Text_ShaunDefeat:
	.string "Our research has arrived at this one\n"
	.string "conclusion: you're a tough one!$"

Route212_South_Text_ShaunPost:
	.string "A huge variety of POKéMON live in the\n"
	.string "Great Marsh.\p"
	.string "You see, countless years ago, this\n"
	.string "whole area was under the sea.$"

Route212_South_EventScript_Alexa::
	trainerbattle_single TRAINER_MICAH, Route212_South_Text_AlexaIntro, Route212_South_Text_AlexaDefeat
	msgbox Route212_South_Text_AlexaPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_AlexaIntro:
	.string "There are POKéMON that grow stronger\n"
	.string "when it's raining.$"

Route212_South_Text_AlexaDefeat:
	.string "Like rain, my tears flow from losing...\n"
	.string "They call me the Rain Woman...$"

Route212_South_Text_AlexaPost:
	.string "I want to show off my pretty parasol,\n"
	.string "but it will get dirty in the rain.\p"
	.string "Oh, such a big dilemma!$"

Route212_South_EventScript_Sabrina::
	trainerbattle_single TRAINER_THOMAS, Route212_South_Text_SabrinaIntro, Route212_South_Text_SabrinaDefeat
	msgbox Route212_South_Text_SabrinaPost, MSGBOX_AUTOCLOSE
	end

Route212_South_Text_SabrinaIntro:
	.string "When it rains, I get more tense!$"

Route212_South_Text_SabrinaDefeat:
	.string "It's not very easy trying to battle\n"
	.string "while holding an umbrella.$"

Route212_South_Text_SabrinaPost:
	.string "If it rained every day, I could have my\n"
	.string "umbrella open all the time.$"

Route212_South_EventScript_PtNpc1::
	msgbox Route212_South_Text_PtNpc1, MSGBOX_NPC
	end

Route212_South_Text_PtNpc1:
	.string "You can zip across fallen logs like\n"
	.string "bridges on your Bike.$"

Route212_South_EventScript_PtNpc2::
	msgbox Route212_South_Text_PtNpc2, MSGBOX_NPC
	end

Route212_South_Text_PtNpc2:
	.string "...Am I stuck in the bog?\p"
	.string "Of course not. How silly! This is a\n"
	.string "full-body mud pack.\p"
	.string "If it weren't, I would be squirming and\n"
	.string "struggling to get out!$"

Route212_South_EventScript_PtNpc3::
	msgbox Route212_South_Text_PtNpc3, MSGBOX_NPC
	end

Route212_South_Text_PtNpc3:
	.string "You've been to the Great Marsh? How\n"
	.string "about the POKéMON Mansion?\p"
	.string "Wherever I go, I get to meet new and\n"
	.string "different POKéMON.\p"
	.string "I feel so privileged and happy about\n"
	.string "that.$"

Route212_South_EventScript_PtSign1::
	msgbox Route212_South_Text_PtSign1, MSGBOX_SIGN
	end

Route212_South_Text_PtSign1:
	.string "Rt. 212 PASTORIA CITY$"

Route212_South_EventScript_PtSign2::
	msgbox Route212_South_Text_PtSign2, MSGBOX_SIGN
	end

Route212_South_Text_PtSign2:
	.string "Shards Wanted POKéMON Moves Taught$"

Route212_South_EventScript_PtSign3::
	msgbox Route212_South_Text_PtSign3, MSGBOX_SIGN
	end

Route212_South_Text_PtSign3:
	.string "Trainer Tips If you get stuck in the\n"
	.string "bog, you can count on being there a\l"
	.string "while.\p"
	.string "There's no need to panic. Just\n"
	.string "struggle and squirm for a bit.\p"
	.string "Bicycles cannot be ridden on marshy\n"
	.string "ground, incidentally.$"
