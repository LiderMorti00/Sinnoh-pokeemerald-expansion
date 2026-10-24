Route222_MapScripts::
	.byte 0

Route222_EventScript_Brett::
	trainerbattle_single TRAINER_SUSIE, Route222_Text_BrettIntro, Route222_Text_BrettDefeat
	msgbox Route222_Text_BrettPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_BrettIntro:
	.string "Well, I am fishing, but...\p"
	.string "Very well! I accept your challenge!$"

Route222_Text_BrettDefeat:
	.string "A bittersweet smile is on my lips.$"

Route222_Text_BrettPost:
	.string "I've gone down in defeat. Whatever\n"
	.string "more is there to say?$"

Route222_EventScript_Alec::
	trainerbattle_single TRAINER_KARA, Route222_Text_AlecIntro, Route222_Text_AlecDefeat
	msgbox Route222_Text_AlecPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_AlecIntro:
	.string "Hi, traveler! How would you like to\n"
	.string "battle?$"

Route222_Text_AlecDefeat:
	.string "You've bested this fisherman\n"
	.string "traveler.$"

Route222_Text_AlecPost:
	.string "I like to fish. You're a traveler.\p"
	.string "Farewell, until we meet again!$"

Route222_EventScript_George::
	trainerbattle_single TRAINER_DANA, Route222_Text_GeorgeIntro, Route222_Text_GeorgeDefeat
	msgbox Route222_Text_GeorgePost, MSGBOX_AUTOCLOSE
	end

Route222_Text_GeorgeIntro:
	.string "I'm getting bored of fishing. Let's\n"
	.string "have a quick battle!$"

Route222_Text_GeorgeDefeat:
	.string "I've been done in...$"

Route222_Text_GeorgePost:
	.string "Thanks for that! It was a good change\n"
	.string "of pace for me.$"

Route222_EventScript_Cole::
	trainerbattle_single TRAINER_SIENNA, Route222_Text_ColeIntro, Route222_Text_ColeDefeat
	msgbox Route222_Text_ColePost, MSGBOX_AUTOCLOSE
	end

Route222_Text_ColeIntro:
	.string "If I stare at the water's surface for\n"
	.string "too long, I begin to forget what I was\l"
	.string "doing in the first place.$"

Route222_Text_ColeDefeat:
	.string "I don't know how, but I lost!$"

Route222_Text_ColePost:
	.string "Oh, right... I was fishing, wasn't I?$"

Route222_EventScript_Nicola::
	trainerbattle_single TRAINER_DEBRA, Route222_Text_NicolaIntro, Route222_Text_NicolaDefeat
	msgbox Route222_Text_NicolaPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_NicolaIntro:
	.string "After enjoying a meal at the hotel\n"
	.string "restaurant, one has a battle.\p"
	.string "That's the social etiquette.$"

Route222_Text_NicolaDefeat:
	.string "Enchanting.$"

Route222_Text_NicolaPost:
	.string "Personally, I would much rather pamper\n"
	.string "POKéMON than make them battle.$"

Route222_EventScript_Conner::
	trainerbattle_single TRAINER_LINDA, Route222_Text_ConnerIntro, Route222_Text_ConnerDefeat
	msgbox Route222_Text_ConnerPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_ConnerIntro:
	.string "Look, look! Look at my POKéMON! It's\n"
	.string "really cool!$"

Route222_Text_ConnerDefeat:
	.string "Wowee! I had to hold on tight to my\n"
	.string "inflatable tube!$"

Route222_Text_ConnerPost:
	.string "Pools are OK, but I like the sea\n"
	.string "because POKéMON live there.$"

Route222_EventScript_Trey::
	trainerbattle_single TRAINER_KAYLEE, Route222_Text_TreyIntro, Route222_Text_TreyDefeat
	msgbox Route222_Text_TreyPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_TreyIntro:
	.string "I need to escape these doldrums... You\n"
	.string "can keep me company.$"

Route222_Text_TreyDefeat:
	.string "That did liberate me from the\n"
	.string "doldrums, but at what price...$"

Route222_Text_TreyPost:
	.string "I'm going back to the hotel to rest! I\n"
	.string "find you exceedingly tiresome!$"

Route222_EventScript_Luther::
	trainerbattle_single TRAINER_LAUREL, Route222_Text_LutherIntro, Route222_Text_LutherDefeat
	msgbox Route222_Text_LutherPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_LutherIntro:
	.string "My dream's a big one!\p"
	.string "I want to battle every kind of\n"
	.string "POKéMON from around the world!$"

Route222_Text_LutherDefeat:
	.string "I lost, but I am one step closer to\n"
	.string "realizing my dream!$"

Route222_Text_LutherPost:
	.string "Listen, you! Whatever happens, never\n"
	.string "lose sight of your dream!$"

Route222_EventScript_Thomas::
	trainerbattle_single TRAINER_CARLEE, Route222_Text_ThomasIntro, Route222_Text_ThomasDefeat
	msgbox Route222_Text_ThomasPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_ThomasIntro:
	.string "Who's there?! What do you think you're\n"
	.string "doing?!$"

Route222_Text_ThomasDefeat:
	.string "I happen to be rather jumpy, so\n"
	.string "everyone looks suspicious to me.$"

Route222_Text_ThomasPost:
	.string "I'm easy to scare, and yet here I am on\n"
	.string "patrol. Funny how things go.$"

Route222_EventScript_Holly::
	trainerbattle_single TRAINER_HEIDI, Route222_Text_HollyIntro, Route222_Text_HollyDefeat
	msgbox Route222_Text_HollyPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_HollyIntro:
	.string "Listen, listen! Can you tell me what\n"
	.string "kind of POKéMON you have?$"

Route222_Text_HollyDefeat:
	.string "You're so tough. I'm stunned...$"

Route222_Text_HollyPost:
	.string "I want to hang on to a BUIZEL and just\n"
	.string "bob around.$"

Route222_EventScript_Marc::
	trainerbattle_single TRAINER_BECKY, Route222_Text_MarcIntro, Route222_Text_MarcDefeat
	msgbox Route222_Text_MarcPost, MSGBOX_AUTOCLOSE
	end

Route222_Text_MarcIntro:
	.string "Oh, we'll ride upon the sea, in a boat,\n"
	.string "just you and me!\p"
	.string "That's the way of the Sailor! Way of\n"
	.string "the Sailor. Sing it!$"

Route222_Text_MarcDefeat:
	.string "Your POKéMON... They're looking good!$"

Route222_Text_MarcPost:
	.string "You ought to think about becoming a\n"
	.string "Sailor yourself.\p"
	.string "It's been great to be able to visit\n"
	.string "different places around the world.$"

Route222_EventScript_PtNpc1::
	msgbox Route222_Text_PtNpc1, MSGBOX_NPC
	end

Route222_Text_PtNpc1:
	.string "When I first started fishing, catching\n"
	.string "anything made me happy.\p"
	.string "But those days are long gone now...\p"
	.string "Now I get annoyed if I can't beat my\n"
	.string "record by even an inch...$"

Route222_EventScript_PtSign1::
	msgbox Route222_Text_PtSign1, MSGBOX_SIGN
	end

Route222_Text_PtSign1:
	.string "Rt. 222 SUNYSHORE CITY$"

Route222_EventScript_PtSign2::
	msgbox Route222_Text_PtSign2, MSGBOX_SIGN
	end

Route222_Text_PtSign2:
	.string "Rt. 222 Hotel Grand Lake$"

Route222_EventScript_PtSign3::
	msgbox Route222_Text_PtSign3, MSGBOX_SIGN
	end

Route222_Text_PtSign3:
	.string "PIKACHU Fan Club Pikapikapikah!\n"
	.string "Pikapika?$"

Route222_EventScript_PtSign4::
	msgbox Route222_Text_PtSign4, MSGBOX_SIGN
	end

Route222_Text_PtSign4:
	.string "POKéMON Size Contest Big POKéMON\n"
	.string "Wanted!$"
