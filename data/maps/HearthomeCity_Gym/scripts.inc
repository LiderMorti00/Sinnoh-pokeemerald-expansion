HearthomeCity_Gym_MapScripts::
	.byte 0



HearthomeCity_Gym_EventScript_Donny::
	trainerbattle_single TRAINER_JEFFREY_4, HearthomeCity_Gym_Text_DonnyIntro, HearthomeCity_Gym_Text_DonnyDefeat
	msgbox HearthomeCity_Gym_Text_DonnyPost, MSGBOX_AUTOCLOSE
	end

HearthomeCity_Gym_Text_DonnyIntro:
	.string "Hey, now! You’re not even close to the\n"
	.string "door yet.\p"
	.string "You have to beat me before you can go,\n"
	.string "you know?$"

HearthomeCity_Gym_Text_DonnyDefeat:
	.string "Argh! I should’ve dazzled you by\n"
	.string "shining my light in your eyes!$"

HearthomeCity_Gym_Text_DonnyPost:
	.string "Just walk around and look for the blue\n"
	.string "marks on the tiles.$"

HearthomeCity_Gym_EventScript_Molly::
	trainerbattle_single TRAINER_JEFFREY_5, HearthomeCity_Gym_Text_MollyIntro, HearthomeCity_Gym_Text_MollyDefeat
	msgbox HearthomeCity_Gym_Text_MollyPost, MSGBOX_AUTOCLOSE
	end

HearthomeCity_Gym_Text_MollyIntro:
	.string "Boo! Did I scare you? This battle will!$"

HearthomeCity_Gym_Text_MollyDefeat:
	.string "Uh, whoopsie! That didn’t end well!$"

HearthomeCity_Gym_Text_MollyPost:
	.string "Since you’re here, you might as well\n"
	.string "take on every Trainer.$"

HearthomeCity_Gym_EventScript_Mackenzie::
	trainerbattle_single TRAINER_CAMERON_1, HearthomeCity_Gym_Text_MackenzieIntro, HearthomeCity_Gym_Text_MackenzieDefeat
	msgbox HearthomeCity_Gym_Text_MackenziePost, MSGBOX_AUTOCLOSE
	end

HearthomeCity_Gym_Text_MackenzieIntro:
	.string "Eek! That’s so bright!\p"
	.string "Surprise attack!$"

HearthomeCity_Gym_Text_MackenzieDefeat:
	.string "Your strength is dazzling! I have to\n"
	.string "shield my eyes!$"

HearthomeCity_Gym_Text_MackenziePost:
	.string "I’m going over the reasons why I lost.\n"
	.string "That way, I’ll win next time.$"

HearthomeCity_Gym_EventScript_Allen::
	trainerbattle_single TRAINER_CAMERON_2, HearthomeCity_Gym_Text_AllenIntro, HearthomeCity_Gym_Text_AllenDefeat
	msgbox HearthomeCity_Gym_Text_AllenPost, MSGBOX_AUTOCLOSE
	end

HearthomeCity_Gym_Text_AllenIntro:
	.string "What, were you just dawdling around\n"
	.string "hoping I’d notice you for a battle?\p"
	.string "You know you’re going to get whupped\n"
	.string "here, don’t you?$"

HearthomeCity_Gym_Text_AllenDefeat:
	.string "I kinda deserved that, didn’t I? I\n"
	.string "gotta stop mouthing off like that...$"

HearthomeCity_Gym_Text_AllenPost:
	.string "I’ll remember you and your shifty\n"
	.string "POKéMON, too. I’m watching you...$"

HearthomeCity_Gym_EventScript_Chance::
	trainerbattle_single TRAINER_CAMERON_3, HearthomeCity_Gym_Text_ChanceIntro, HearthomeCity_Gym_Text_ChanceDefeat
	msgbox HearthomeCity_Gym_Text_ChancePost, MSGBOX_AUTOCLOSE
	end

HearthomeCity_Gym_Text_ChanceIntro:
	.string "Are you lost? Are you enjoying\n"
	.string "yourself?$"

HearthomeCity_Gym_Text_ChanceDefeat:
	.string "Let me guess. You are enjoying\n"
	.string "yourself.$"

HearthomeCity_Gym_Text_ChancePost:
	.string "Whatever happens in life, it’s better\n"
	.string "to try to enjoy it the best one can.\p"
	.string "Being in the dark here, I came to\n"
	.string "realize that.$"

HearthomeCity_Gym_EventScript_Catherine::
	trainerbattle_single TRAINER_CAMERON_4, HearthomeCity_Gym_Text_CatherineIntro, HearthomeCity_Gym_Text_CatherineDefeat
	msgbox HearthomeCity_Gym_Text_CatherinePost, MSGBOX_AUTOCLOSE
	end

HearthomeCity_Gym_Text_CatherineIntro:
	.string "What does it feel like, taking one step\n"
	.string "after another into darkness?$"

HearthomeCity_Gym_Text_CatherineDefeat:
	.string "You’re the kind of person who can keep\n"
	.string "going forward even into the unknown.$"

HearthomeCity_Gym_Text_CatherinePost:
	.string "I think, sometimes, one has to make\n"
	.string "mistakes to learn what is right.$"

HearthomeCity_Gym_EventScript_Leader::
	trainerbattle_single TRAINER_JEFFREY_3, HearthomeCity_Gym_Text_LeaderIntro, HearthomeCity_Gym_Text_LeaderDefeat, HearthomeCity_Gym_EventScript_LeaderDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_ITEM_TM65_FROM_FANTINA, HearthomeCity_Gym_EventScript_GiveTM
	msgbox HearthomeCity_Gym_Text_LeaderPostBattle, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_LeaderDefeated::
	message HearthomeCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox HearthomeCity_Gym_Text_ExplainBadge, MSGBOX_DEFAULT
	setflag FLAG_BADGE03_GET
	settrainerflag TRAINER_JEFFREY_4
	settrainerflag TRAINER_JEFFREY_5
	settrainerflag TRAINER_CAMERON_1
	settrainerflag TRAINER_CAMERON_2
	settrainerflag TRAINER_CAMERON_3
	settrainerflag TRAINER_CAMERON_4
	goto HearthomeCity_Gym_EventScript_GiveTM

HearthomeCity_Gym_EventScript_GiveTM::
	giveitem ITEM_TM65
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_ITEM_TM65_FROM_FANTINA
	msgbox HearthomeCity_Gym_Text_ExplainTM, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_PtGymGuide::
	lock
	faceplayer
	goto_if_set FLAG_BADGE03_GET, HearthomeCity_Gym_EventScript_PtGymGuideAfter
	msgbox HearthomeCity_Gym_Text_PtGymGuide, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_PtGymGuideAfter::
	msgbox HearthomeCity_Gym_Text_PtGymGuideAfter, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Gym_EventScript_PtGymStatue::
	msgbox HearthomeCity_Gym_Text_PtGymStatue, MSGBOX_SIGN
	end


HearthomeCity_Gym_Text_LeaderIntro:
	.string "Ohohoho!!\p"
	.string "Finally, you have arrived!\p"
	.string "Since I came to this country, always I\n"
	.string "try to learn new things.\p"
	.string "They hold Contests in this city? I say\n"
	.string "to myself, enfin, I will excel.\p"
	.string "That is why I dress this way. C’est une\n"
	.string "performance!\p"
	.string "Also, I study POKéMON very much. I have\n"
	.string "come to be Gym Leader.\p"
	.string "And, uh, so it shall be that you\n"
	.string "challenge me.\p"
	.string "But I shall win. That is what a Gym\n"
	.string "Leader does, non?$"

HearthomeCity_Gym_Text_LeaderDefeat:
	.string "I am dumbfounded!\p"
	.string "So very, very strong! You, your\n"
	.string "POKéMON, so strong!\p"
	.string "Your power is admirable! I shall honor\n"
	.string "it with this Gym Badge!$"

HearthomeCity_Gym_Text_LeaderPostBattle:
	.string "Three Gym Badges...\p"
	.string "But you must not forget this. There\n"
	.string "are many other Trainers.\p"
	.string "Strong Trainers, too. There are many\n"
	.string "more in Sinnoh.\p"
	.string "Have patience! You must become\n"
	.string "stronger, one at a time.$"

HearthomeCity_Gym_Text_ReceivedBadge:
	.string "{PLAYER} received the Relic Badge from\n"
	.string "Fantina!$"

HearthomeCity_Gym_Text_ExplainBadge:
	.string "That Badge will let you use the hidden\n"
	.string "move Defog outside of battle.\p"
	.string "Also, you can make use of this\n"
	.string "Technical Machine.\p"
	.string "That is what I think.$"

HearthomeCity_Gym_Text_ExplainTM:
	.string "That TM65... It contains SHADOW CLAW.\p"
	.string "A very startling move it is. Its hits\n"
	.string "turn critical often!$"

HearthomeCity_Gym_Text_PtGymGuide:
	.string "Hey, there! Hello, Champ-to-be! Let me\n"
	.string "tell you how this Gym is wicked!\p"
	.string "I’ll tell you! First, it’s pitch-black!\p"
	.string "Also, there are the usual Gym Trainers.\n"
	.string "They have flashlights, too.\p"
	.string "If you cast a light on one, or they\n"
	.string "catch you in the light, the battle’s on!\p"
	.string "OK, now this is really important! It’s\n"
	.string "about the tiles on the floor.\p"
	.string "First, find the one blue tile in the\n"
	.string "room, and memorize the mark on it.\p"
	.string "Next, head for the red door with the\n"
	.string "same mark on it.\p"
	.string "Advance through the correct red doors\n"
	.string "to reach the Gym Leader.\p"
	.string "If you choose a wrong red door, you get\n"
	.string "sent back here, though.\p"
	.string "Oops! How silly of me! I forgot to tell\n"
	.string "you something vital!\p"
	.string "The Gym Leader here is a user of\n"
	.string "Ghost-type POKéMON.\p"
	.string "Beware, Normal-type moves have no\n"
	.string "effect at all on ghosts!\p"
	.string "It’s as if they weren’t there! But\n"
	.string "you’ll have to see for yourself.\p"
	.string "Go get ’em, challenger! I believe in you!$"

HearthomeCity_Gym_Text_PtGymGuideAfter:
	.string "Oh! {PLAYER}! You’ve beaten the Gym\n"
	.string "Leader!\p"
	.string "There seems to be no end to how tough\n"
	.string "you are getting!\p"
	.string "At least that’s how I see it!\p"
	.string "...You do realize I say that to\n"
	.string "everyone, right?$"

HearthomeCity_Gym_Text_PtGymStatue:
	.string "Hearthome City POKéMON Gym Leader:\n"
	.string "Fantina\p"
	.string "Certified Trainers: {PLAYER}$"
