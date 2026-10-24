Route206_MapScripts::
	.byte 0

Route206_EventScript_Axel::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, Route206_Text_AxelIntro, Route206_Text_AxelDefeat
	msgbox Route206_Text_AxelPost, MSGBOX_AUTOCLOSE
	end

Route206_Text_AxelIntro:
	.string "Yo! Cycling and POKéMON! Which do you\n"
	.string "prefer?$"

Route206_Text_AxelDefeat:
	.string "Hey, not bad, you!$"

Route206_Text_AxelPost:
	.string "This Cycling Road is one fine place--\n"
	.string "great bikes, superb POKéMON, and\l"
	.string "awesome Trainers all around!$"

Route206_EventScript_Megan::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Route206_Text_MeganIntro, Route206_Text_MeganDefeat
	msgbox Route206_Text_MeganPost, MSGBOX_AUTOCLOSE
	end

Route206_Text_MeganIntro:
	.string "Cycling feels great!\p"
	.string "It will feel even better when I beat\n"
	.string "you in a battle!$"

Route206_Text_MeganDefeat:
	.string "Whew! You worked us over.$"

Route206_Text_MeganPost:
	.string "I like spinning the pedals backward\n"
	.string "while sailing downhill.$"

Route206_EventScript_James::
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, Route206_Text_JamesIntro, Route206_Text_JamesDefeat
	msgbox Route206_Text_JamesPost, MSGBOX_AUTOCLOSE
	end

Route206_Text_JamesIntro:
	.string "Ding-ding! Watch out, you! Or, did you\n"
	.string "want to battle?$"

Route206_Text_JamesDefeat:
	.string "Despite all the effort, I'm just\n"
	.string "spinning my wheels...\p"
	.string "It's always that way with me!$"

Route206_Text_JamesPost:
	.string "I might try racing through Cycling\n"
	.string "Road in one long shot.$"

Route206_EventScript_Nicole::
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, Route206_Text_NicoleIntro, Route206_Text_NicoleDefeat
	msgbox Route206_Text_NicolePost, MSGBOX_AUTOCLOSE
	end

Route206_Text_NicoleIntro:
	.string "The both of us are on Bikes, and we\n"
	.string "both have POKéMON!\p"
	.string "I can't let you get the better of me!$"

Route206_Text_NicoleDefeat:
	.string "Oh, geez... I seem to have fallen off my\n"
	.string "Bike.$"

Route206_Text_NicolePost:
	.string "I should have challenged you to a\n"
	.string "race, not a battle!$"

Route206_EventScript_John::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Route206_Text_JohnIntro, Route206_Text_JohnDefeat
	msgbox Route206_Text_JohnPost, MSGBOX_AUTOCLOSE
	end

Route206_Text_JohnIntro:
	.string "That Bike you've got there...it's the\n"
	.string "type that can change gears!\p"
	.string "You gotta love that! Sure, I'll give\n"
	.string "you a battle!$"

Route206_Text_JohnDefeat:
	.string "Crash! Tinkle...$"

Route206_Text_JohnPost:
	.string "The 3-speed makes for easy turning,\n"
	.string "and the 4-speed's for going fast.\p"
	.string "I love them both!$"

Route206_EventScript_Kayla::
	trainerbattle_single TRAINER_GRUNT_MUSEUM_1, Route206_Text_KaylaIntro, Route206_Text_KaylaDefeat
	msgbox Route206_Text_KaylaPost, MSGBOX_AUTOCLOSE
	end

Route206_Text_KaylaIntro:
	.string "If you beat me, you can count on\n"
	.string "something rotten coming your way!$"

Route206_Text_KaylaDefeat:
	.string "Kerrrash!$"

Route206_Text_KaylaPost:
	.string "Aww! Why did you beat me?!\p"
	.string "I hope you get so lost in Wayward Cave\n"
	.string "you cry! Boo-hoo-hoo!$"

Route206_EventScript_Ryan::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, Route206_Text_RyanIntro, Route206_Text_RyanDefeat
	msgbox Route206_Text_RyanPost, MSGBOX_AUTOCLOSE
	end

Route206_Text_RyanIntro:
	.string "A bike will carry you a long way.\p"
	.string "The only thing that limits you is your\n"
	.string "own endurance!$"

Route206_Text_RyanDefeat:
	.string "Gasp... Gasp... Gasp...$"

Route206_Text_RyanPost:
	.string "My POKéMON and I are plumb worn out.\n"
	.string "We should be getting home to rest...$"

Route206_EventScript_Rachel::
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, Route206_Text_RachelIntro, Route206_Text_RachelDefeat
	msgbox Route206_Text_RachelPost, MSGBOX_AUTOCLOSE
	end

Route206_Text_RachelIntro:
	.string "Some people compete over speed, and\n"
	.string "some compete over technique.\p"
	.string "Which kind are you?$"

Route206_Text_RachelDefeat:
	.string "You're a speedy technician!$"

Route206_Text_RachelPost:
	.string "I enjoy the scenery.\p"
	.string "Don't you think the area below Cycling\n"
	.string "Road looks nice?$"

Route206_EventScript_Theodore::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, Route206_Text_TheodoreIntro, Route206_Text_TheodoreDefeat
	msgbox Route206_Text_TheodorePost, MSGBOX_AUTOCLOSE
	end

Route206_Text_TheodoreIntro:
	.string "Whoa! You startled me! Well, we may as\n"
	.string "well battle!$"

Route206_Text_TheodoreDefeat:
	.string "Your power startles me!$"

Route206_Text_TheodorePost:
	.string "We Hikers are bighearted guys! Losing\n"
	.string "doesn't bother us!$"

Route206_EventScript_PtNpc1::
	msgbox Route206_Text_PtNpc1, MSGBOX_NPC
	end

Route206_Text_PtNpc1:
	.string "This is odd... I heard there were two\n"
	.string "caves on Route 206.\p"
	.string "But I can only find one entrance.$"

Route206_EventScript_PtSign1::
	msgbox Route206_Text_PtSign1, MSGBOX_SIGN
	end

Route206_Text_PtSign1:
	.string "Rt. 206 OREBURGH CITY$"
