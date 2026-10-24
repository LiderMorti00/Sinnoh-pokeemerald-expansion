Route212_North_MapScripts::
	.byte 0

Route212_North_EventScript_Jason::
	trainerbattle_single TRAINER_ATSUSHI, Route212_North_Text_JasonIntro, Route212_North_Text_JasonDefeat
	msgbox Route212_North_Text_JasonPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_JasonIntro:
	.string "My POKéMON sleeps in a bed I got from\n"
	.string "overseas.\p"
	.string "I'm very well off, if you haven't\n"
	.string "noticed!$"

Route212_North_Text_JasonDefeat:
	.string "What? Over already? Well, that's fine.\p"
	.string "Rich people like me don't fight.$"

Route212_North_Text_JasonPost:
	.string "Oh, no. My POKéMON is worn out.\p"
	.string "I'd better let it sleep it off in the\n"
	.string "bed I had sent from overseas.$"

Route212_North_EventScript_Melissa::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, Route212_North_Text_MelissaIntro, Route212_North_Text_MelissaDefeat
	msgbox Route212_North_Text_MelissaPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_MelissaIntro:
	.string "I'd like to begin now. Are you quite\n"
	.string "prepared?$"

Route212_North_Text_MelissaDefeat:
	.string "Oh! How terrible of you...$"

Route212_North_Text_MelissaPost:
	.string "You... You must have one fantastic\n"
	.string "teacher to be so good.$"

Route212_North_EventScript_Jeremy::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, Route212_North_Text_JeremyIntro, Route212_North_Text_JeremyDefeat
	msgbox Route212_North_Text_JeremyPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_JeremyIntro:
	.string "If it pleases you, may I challenge you\n"
	.string "to a battle?$"

Route212_North_Text_JeremyDefeat:
	.string "Bravo! Your technique is impeccable\n"
	.string "for someone so young.$"

Route212_North_Text_JeremyPost:
	.string "Hahaha! I was invited by the master of\n"
	.string "the POKéMON Mansion.\p"
	.string "He's promised to show me through his\n"
	.string "prized garden of POKéMON.$"

Route212_North_EventScript_Reina::
	trainerbattle_single TRAINER_DREW, Route212_North_Text_ReinaIntro, Route212_North_Text_ReinaDefeat
	msgbox Route212_North_Text_ReinaPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_ReinaIntro:
	.string "I've never battled a young Trainer\n"
	.string "like yourself. It's quite nerve\l"
	.string "wracking.$"

Route212_North_Text_ReinaDefeat:
	.string "Oh, dear... That wasn't anything like\n"
	.string "battling with my friends.$"

Route212_North_Text_ReinaPost:
	.string "Usually, I'll have matches with\n"
	.string "members of my social club.$"

Route212_North_EventScript_Bobby::
	trainerbattle_single TRAINER_BEAU, Route212_North_Text_BobbyIntro, Route212_North_Text_BobbyDefeat
	msgbox Route212_North_Text_BobbyPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_BobbyIntro:
	.string "Hold it right there, citizen! Walking\n"
	.string "around at night is unsafe!$"

Route212_North_Text_BobbyDefeat:
	.string "You've got tough partners with you.\n"
	.string "Carry on, citizen. Carry on.$"

Route212_North_Text_BobbyPost:
	.string "Out so late? Does your mother know\n"
	.string "you're out so late?$"

Route212_North_EventScript_Alex::
	trainerbattle_single TRAINER_LARRY, Route212_North_Text_AlexIntro, Route212_North_Text_AlexDefeat
	msgbox Route212_North_Text_AlexPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_AlexIntro:
	.string "I'm keeping my eyes open for crime.\n"
	.string "Anyone arousing suspicion here?$"

Route212_North_Text_AlexDefeat:
	.string "Now, just hold on. I didn't say that\n"
	.string "you were shady looking!$"

Route212_North_Text_AlexPost:
	.string "Don't go hanging out with any\n"
	.string "shady-looking characters! You hear?$"

Route212_North_EventScript_Dylan::
	trainerbattle_single TRAINER_SHANE, Route212_North_Text_DylanIntro, Route212_North_Text_DylanDefeat
	msgbox Route212_North_Text_DylanPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_DylanIntro:
	.string "Let's enjoy a fierce battle in the\n"
	.string "chilly night winds! Brrrr! Refreshing!$"

Route212_North_Text_DylanDefeat:
	.string "I need to explain, all right? It was\n"
	.string "too dark and hard to see.$"

Route212_North_Text_DylanPost:
	.string "Oops, I'd better get back to my beat\n"
	.string "before the boss radios me...$"

Route212_North_EventScript_Caleb::
	trainerbattle_single TRAINER_JUSTIN, Route212_North_Text_CalebIntro, Route212_North_Text_CalebDefeat
	msgbox Route212_North_Text_CalebPost, MSGBOX_AUTOCLOSE
	end

Route212_North_Text_CalebIntro:
	.string "Whether there are problems or not, or\n"
	.string "if crimes have been committed or not,\l"
	.string "I still go out on patrol.$"

Route212_North_Text_CalebDefeat:
	.string "Big trouble! Officer in need of\n"
	.string "assistance!$"

Route212_North_Text_CalebPost:
	.string "Your toughness is too much! I'm in\n"
	.string "serious trouble!$"

Route212_North_EventScript_PtNpc1::
	msgbox Route212_North_Text_PtNpc1, MSGBOX_NPC
	end

Route212_North_Text_PtNpc1:
	.string "Mr. Backlot in the POKéMON Mansion\n"
	.string "looks forward to seeing visitors.\p"
	.string "He must be able to wait around\n"
	.string "because he wants to brag about\l"
	.string "something.$"

Route212_North_EventScript_PtNpc2::
	msgbox Route212_North_Text_PtNpc2, MSGBOX_NPC
	end

Route212_North_Text_PtNpc2:
	.string "There are good trees that you can\n"
	.string "smear with Honey, and some you can't.\p"
	.string "If you want to lure rare POKéMON, you\n"
	.string "have to find an attractive tree.$"

Route212_North_EventScript_PtSign1::
	msgbox Route212_North_Text_PtSign1, MSGBOX_SIGN
	end

Route212_North_Text_PtSign1:
	.string "Rt. 212 HEARTHOME CITY$"

Route212_North_EventScript_PtSign2::
	msgbox Route212_North_Text_PtSign2, MSGBOX_SIGN
	end

Route212_North_Text_PtSign2:
	.string "POKéMON Mansion Please Visit for\n"
	.string "POKéMON Viewings$"

Route212_North_EventScript_PtSign3::
	msgbox Route212_North_Text_PtSign3, MSGBOX_SIGN
	end

Route212_North_Text_PtSign3:
	.string "Trainer Tips The items in the Bag can\n"
	.string "be reorganized by pressing SELECT.$"
