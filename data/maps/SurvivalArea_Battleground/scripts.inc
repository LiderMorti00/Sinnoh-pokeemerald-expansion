SurvivalArea_Battleground_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SurvivalArea_Battleground_OnTransitionSN
	.byte 0

SurvivalArea_Battleground_Text_PtNpc1_0:
	.string "What should we talk about today? ...Ah,\n"
	.string "I know.\p"
	.string "Let me tell you about the volcano\n"
	.string "named Stark Mountain.\p"
	.string "That volcano dates to when Sinnoh was\n"
	.string "made by the melding of time and space.\p"
	.string "Fiery lava spilled out and pooled, and\n"
	.string "then it became a POKéMON.\p"
	.string "It’s said the Magma Stone was used to\n"
	.string "keep the POKéMON pinned down.\p"
	.string "It kept the POKéMON from rampaging\n"
	.string "and the volcano from erupting.$"

SurvivalArea_Battleground_Text_PtNpc1_1:
	.string "Welcome to the Battleground! Make\n"
	.string "yourself at home like always.$"

SurvivalArea_Battleground_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_BATTLED_STARK_MOUNTAIN_ROOM_3_HEATRAN, SurvivalArea_Battleground_EventScript_PtNpc1_MakeYourselfAtHome
	msgbox SurvivalArea_Battleground_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_PtNpc1_MakeYourselfAtHome:
	msgbox SurvivalArea_Battleground_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_OnTransitionSN:
	setflag FLAG_SN_VISITED_BATTLEGROUND
	call SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK
	call SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA
	call SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA
	call SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE
	call SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE
	call SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON
	call SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE
	call SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER
	call SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK
	call SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL
	call SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY
	call SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY
	call SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA
	end

SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK:
	setflag FLAG_SN_HIDE_BG_ROARK
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK_End
	clearflag FLAG_SN_HIDE_BG_ROARK
SurvivalArea_Battleground_EventScript_SNVis_BG_ROARK_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA:
	setflag FLAG_SN_HIDE_BG_GARDENIA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA_End
	clearflag FLAG_SN_HIDE_BG_GARDENIA
SurvivalArea_Battleground_EventScript_SNVis_BG_GARDENIA_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA:
	setflag FLAG_SN_HIDE_BG_FANTINA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA_End
	clearflag FLAG_SN_HIDE_BG_FANTINA
SurvivalArea_Battleground_EventScript_SNVis_BG_FANTINA_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE:
	setflag FLAG_SN_HIDE_BG_MAYLENE
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE_End
	clearflag FLAG_SN_HIDE_BG_MAYLENE
SurvivalArea_Battleground_EventScript_SNVis_BG_MAYLENE_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE:
	setflag FLAG_SN_HIDE_BG_WAKE
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE_End
	clearflag FLAG_SN_HIDE_BG_WAKE
SurvivalArea_Battleground_EventScript_SNVis_BG_WAKE_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON:
	setflag FLAG_SN_HIDE_BG_BYRON
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON_End
	clearflag FLAG_SN_HIDE_BG_BYRON
SurvivalArea_Battleground_EventScript_SNVis_BG_BYRON_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE:
	setflag FLAG_SN_HIDE_BG_CANDICE
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE_End
	clearflag FLAG_SN_HIDE_BG_CANDICE
SurvivalArea_Battleground_EventScript_SNVis_BG_CANDICE_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER:
	setflag FLAG_SN_HIDE_BG_VOLKNER
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER_End
	clearflag FLAG_SN_HIDE_BG_VOLKNER
SurvivalArea_Battleground_EventScript_SNVis_BG_VOLKNER_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK:
	setflag FLAG_SN_HIDE_BG_BUCK
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK_End
	clearflag FLAG_SN_HIDE_BG_BUCK
SurvivalArea_Battleground_EventScript_SNVis_BG_BUCK_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL:
	setflag FLAG_SN_HIDE_BG_CHERYL
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL_End
	clearflag FLAG_SN_HIDE_BG_CHERYL
SurvivalArea_Battleground_EventScript_SNVis_BG_CHERYL_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY:
	setflag FLAG_SN_HIDE_BG_RILEY
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY_End
	clearflag FLAG_SN_HIDE_BG_RILEY
SurvivalArea_Battleground_EventScript_SNVis_BG_RILEY_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY:
	setflag FLAG_SN_HIDE_BG_MARLEY
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY_End
	clearflag FLAG_SN_HIDE_BG_MARLEY
SurvivalArea_Battleground_EventScript_SNVis_BG_MARLEY_End:
	return

SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA:
	setflag FLAG_SN_HIDE_BG_MIRA
	goto_if_unset FLAG_SYS_GAME_CLEAR, SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA_End
	clearflag FLAG_SN_HIDE_BG_MIRA
SurvivalArea_Battleground_EventScript_SNVis_BG_MIRA_End:
	return

SurvivalArea_Battleground_EventScript_SNRoark::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_ROARK, SurvivalArea_Battleground_EventScript_SNRoark_Done
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNRoark_No
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_CHARLOTTE, SurvivalArea_Battleground_EventScript_SNRoark_Lose
	setflag FLAG_DAILY_SN_BG_ROARK
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRoark_No:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRoark_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNRoark_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNRoark_Ask:
	.string "Roark: I went down to the Underground\n"
	.string "every day.\p"
	.string "I toughened up my POKéMON by digging\n"
	.string "up Fossils nonstop.\p"
	.string "Could I show you how tough I made them\n"
	.string "in a battle?$"

SurvivalArea_Battleground_EventScript_SNRoark_Intro:
	.string "Roark: Here goes! These are my rocking\n"
	.string "POKéMON, my pride and joy!$"

SurvivalArea_Battleground_EventScript_SNRoark_NoT:
	.string "Roark: This is another topic, but you\n"
	.string "know those Spheres you can dig up?\p"
	.string "Yes, those Spheres. The ones in the\n"
	.string "Underground.\p"
	.string "Why do you suppose Spheres grow if you\n"
	.string "leave them buried?\p"
	.string "It’s not a huge issue or anything, but\n"
	.string "doesn’t it strike you as odd?$"

SurvivalArea_Battleground_EventScript_SNRoark_Done_T:
	.string "Roark: ...We lost control there.\p"
	.string "Next time, I’d like to challenge you to\n"
	.string "a Fossil-digging race underground.$"

SurvivalArea_Battleground_EventScript_SNRoark_Lose:
	.string "Roark: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNGardenia::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_GARDENIA, SurvivalArea_Battleground_EventScript_SNGardenia_Done
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNGardenia_No
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_DEANDRE, SurvivalArea_Battleground_EventScript_SNGardenia_Lose
	setflag FLAG_DAILY_SN_BG_GARDENIA
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNGardenia_No:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNGardenia_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNGardenia_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNGardenia_Ask:
	.string "Gardenia: Hi, have you been keeping\n"
	.string "well?\p"
	.string "Let’s cut to the good stuff! Let’s get\n"
	.string "down to battle!$"

SurvivalArea_Battleground_EventScript_SNGardenia_Intro:
	.string "Gardenia: Yes, that’s right!\p"
	.string "A battle will tell you if someone you\n"
	.string "haven’t seen’s been keeping well!$"

SurvivalArea_Battleground_EventScript_SNGardenia_NoT:
	.string "Gardenia: You won’t battle? You’re not\n"
	.string "in the mood, huh?\p"
	.string "Well, why not polish your Badges, then?\n"
	.string "That might put a shine on your day,\l"
	.string "too.$"

SurvivalArea_Battleground_EventScript_SNGardenia_Done_T:
	.string "Gardenia: Out of the Gym, a Gym Leader\n"
	.string "is just another Trainer.\p"
	.string "But wherever I go, I still try to be as\n"
	.string "tough as I can.\p"
	.string "It’s not fair to my POKéMON if we were\n"
	.string "to lose because of me.$"

SurvivalArea_Battleground_EventScript_SNGardenia_Lose:
	.string "Gardenia: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNFantina::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_FANTINA, SurvivalArea_Battleground_EventScript_SNFantina_Done
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNFantina_No
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_1, SurvivalArea_Battleground_EventScript_SNFantina_Lose
	setflag FLAG_DAILY_SN_BG_FANTINA
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNFantina_No:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNFantina_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNFantina_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNFantina_Ask:
	.string "Fantina: Finally, you have arrived!\p"
	.string "So, you shall challenge me. And I shall\n"
	.string "win.\p"
	.string "You will be startled by how much\n"
	.string "stronger I have become!$"

SurvivalArea_Battleground_EventScript_SNFantina_Intro:
	.string "Ohohoho!!$"

SurvivalArea_Battleground_EventScript_SNFantina_NoT:
	.string "Fantina: You... You disappoint me. It is\n"
	.string "very sad.\p"
	.string "But, realize, you have not beaten me if\n"
	.string "you refuse.$"

SurvivalArea_Battleground_EventScript_SNFantina_Done_T:
	.string "Fantina: You are an amazing person!\n"
	.string "Très fantastique!\p"
	.string "I am delighted--for now I have a\n"
	.string "purpose!\p"
	.string "My purpose, it is to defeat you! It is a\n"
	.string "gift from you to me!$"

SurvivalArea_Battleground_EventScript_SNFantina_Lose:
	.string "Fantina: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNMaylene::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_MAYLENE, SurvivalArea_Battleground_EventScript_SNMaylene_Done
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNMaylene_No
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_2, SurvivalArea_Battleground_EventScript_SNMaylene_Lose
	setflag FLAG_DAILY_SN_BG_MAYLENE
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMaylene_No:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMaylene_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNMaylene_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNMaylene_Ask:
	.string "Maylene: I think it’s OK if I were to\n"
	.string "keep losing to the same Trainer.\p"
	.string "Battling that person tells me how much\n"
	.string "my POKéMON and I have changed.\p"
	.string "That’s why I would like to challenge\n"
	.string "you for a rematch now, {PLAYER}.$"

SurvivalArea_Battleground_EventScript_SNMaylene_Intro:
	.string "Maylene: OK! Rei! Oh, that’s my bow\n"
	.string "before a match.\p"
	.string "{PLAYER}, I’m throwing everything I\n"
	.string "have at you!$"

SurvivalArea_Battleground_EventScript_SNMaylene_NoT:
	.string "Maylene: Sigh...\p"
	.string "I braced myself for a battle. This is a\n"
	.string "little deflating...$"

SurvivalArea_Battleground_EventScript_SNMaylene_Done_T:
	.string "Maylene: I love visiting here.\p"
	.string "Buck’s grandpa cooks for us, and it’s\n"
	.string "all delicious.\p"
	.string "That’s not all! We can eat all we want.\n"
	.string "Isn’t that amazing, {PLAYER}?$"

SurvivalArea_Battleground_EventScript_SNMaylene_Lose:
	.string "Maylene: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNWake::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_WAKE, SurvivalArea_Battleground_EventScript_SNWake_Done
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNWake_No
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_3, SurvivalArea_Battleground_EventScript_SNWake_Lose
	setflag FLAG_DAILY_SN_BG_WAKE
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNWake_No:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNWake_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNWake_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNWake_Ask:
	.string "Wake: What’s there to do for Trainers\n"
	.string "here?\p"
	.string "Seems to me there’s nothing to do but\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNWake_Intro:
	.string "Wake: My POKéMON have new Water-type\n"
	.string "moves under their belts!\p"
	.string "Let’s see how you bear up under them!$"

SurvivalArea_Battleground_EventScript_SNWake_NoT:
	.string "Wake: Then, you get my song instead!\n"
	.string "Er-hem!\p"
	.string "The ring is my roiling sea. ? The\n"
	.string "towering waves shaped me.\p"
	.string "Crash! Crash! Crasher Wake! Crash!\n"
	.string "Crash! Crasher Wake!\p"
	.string "I’m the tidal wave of power to wash you\n"
	.string "away!\p"
	.string "Put out the fire, Crasher Wake! Run\n"
	.string "from electricity, Crasher Wake!\p"
	.string "Ah, ah, aaaah! The ring is my sea. ?$"

SurvivalArea_Battleground_EventScript_SNWake_Done_T:
	.string "Wake: Battles that end with both sides\n"
	.string "enjoying the experience without\l"
	.string "caring\p"
	.string "about the winner or loser...\p"
	.string "That’s what I strive for.\p"
	.string "One of these days, I hope to battle\n"
	.string "everyone in the world...\p"
	.string "Isn’t that right, {PLAYER}?!$"

SurvivalArea_Battleground_EventScript_SNWake_Lose:
	.string "Wake: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNByron::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_BYRON, SurvivalArea_Battleground_EventScript_SNByron_Done
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNByron_No
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_4, SurvivalArea_Battleground_EventScript_SNByron_Lose
	setflag FLAG_DAILY_SN_BG_BYRON
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNByron_No:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNByron_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNByron_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNByron_Ask:
	.string "Byron: I’ve faced many a challenger at\n"
	.string "my Gym.\p"
	.string "I trained on Iron Island while\n"
	.string "contemplating my worth for days...\p"
	.string "I have the confidence now to batter\n"
	.string "down your defenses.\p"
	.string "Could I ask you for a rematch?$"

SurvivalArea_Battleground_EventScript_SNByron_Intro:
	.string "Byron: We are tempered and honed by\n"
	.string "battling the strong.\p"
	.string "Here’s to our showdown!$"

SurvivalArea_Battleground_EventScript_SNByron_NoT:
	.string "Byron: When you came to the Gym, you\n"
	.string "had a glint that’s dulled now.$"

SurvivalArea_Battleground_EventScript_SNByron_Done_T:
	.string "Byron: I trained by pummeling steel\n"
	.string "continuously on Iron Island alongside\p"
	.string "POKéMON...\p"
	.string "Gwahahahaha! I could still use more\n"
	.string "toughening up!$"

SurvivalArea_Battleground_EventScript_SNByron_Lose:
	.string "Byron: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNCandice::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_CANDICE, SurvivalArea_Battleground_EventScript_SNCandice_Done
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNCandice_No
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_5, SurvivalArea_Battleground_EventScript_SNCandice_Lose
	setflag FLAG_DAILY_SN_BG_CANDICE
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCandice_No:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCandice_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNCandice_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNCandice_Ask:
	.string "Candice: Hiya! What’s up?\p"
	.string "I bet you can’t tell what I’m thinking!\p"
	.string "I’ll give the answer away. I want to\n"
	.string "battle with you!$"

SurvivalArea_Battleground_EventScript_SNCandice_Intro:
	.string "Candice: This time, Candice is going to\n"
	.string "push through on willpower!$"

SurvivalArea_Battleground_EventScript_SNCandice_NoT:
	.string "Candice: Oh... Did my willpower\n"
	.string "intimidate you?$"

SurvivalArea_Battleground_EventScript_SNCandice_Done_T:
	.string "Candice: Oh, wow, your scarf is totally\n"
	.string "in fashion.\p"
	.string "I wish I had one like that.$"

SurvivalArea_Battleground_EventScript_SNCandice_Lose:
	.string "Candice: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNVolkner::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_VOLKNER, SurvivalArea_Battleground_EventScript_SNVolkner_Done
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNVolkner_No
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_6, SurvivalArea_Battleground_EventScript_SNVolkner_Lose
	setflag FLAG_DAILY_SN_BG_VOLKNER
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNVolkner_No:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNVolkner_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNVolkner_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNVolkner_Ask:
	.string "Volkner: Your POKéMON... I can feel\n"
	.string "their power!\p"
	.string "Of course, you can sense the power of\n"
	.string "my POKéMON, can’t you?\p"
	.string "Let us battle with you!$"

SurvivalArea_Battleground_EventScript_SNVolkner_Intro:
	.string "Volkner: Yeah! It’s electric, this\n"
	.string "feeling of anticipation!\p"
	.string "Let’s do it! We’re going to make some\n"
	.string "sparks fly!$"

SurvivalArea_Battleground_EventScript_SNVolkner_NoT:
	.string "Volkner: Aww, come on now. Don’t\n"
	.string "disappoint me...$"

SurvivalArea_Battleground_EventScript_SNVolkner_Done_T:
	.string "Volkner: Winning makes me happy, and\n"
	.string "losing leaves me angry...\p"
	.string "That’s no great revelation, but it’s\n"
	.string "what makes me stronger.$"

SurvivalArea_Battleground_EventScript_SNVolkner_Lose:
	.string "Volkner: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNBuck::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_BUCK, SurvivalArea_Battleground_EventScript_SNBuck_Done
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNBuck_No
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_7, SurvivalArea_Battleground_EventScript_SNBuck_Lose
	setflag FLAG_DAILY_SN_BG_BUCK
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNBuck_No:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNBuck_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNBuck_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNBuck_Ask:
	.string "Buck: Ehehehe! You’re here at last!\n"
	.string "Let’s not waste time! Let’s do this!$"

SurvivalArea_Battleground_EventScript_SNBuck_Intro:
	.string "Buck: ...I’m telling you right now. I’m\n"
	.string "seriously tough. Act surprised!$"

SurvivalArea_Battleground_EventScript_SNBuck_NoT:
	.string "Buck: Huh, what? That takes the wind\n"
	.string "out of my sails.\p"
	.string "Well, since you’re here, kick back, make\n"
	.string "yourself at home, and all that.$"

SurvivalArea_Battleground_EventScript_SNBuck_Done_T:
	.string "Buck: Fweh! Too much!\p"
	.string "I guess I’ll better my team at the\n"
	.string "Battle Tower.$"

SurvivalArea_Battleground_EventScript_SNBuck_Lose:
	.string "Buck: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNCheryl::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_CHERYL, SurvivalArea_Battleground_EventScript_SNCheryl_Done
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNCheryl_No
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_8, SurvivalArea_Battleground_EventScript_SNCheryl_Lose
	setflag FLAG_DAILY_SN_BG_CHERYL
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCheryl_No:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNCheryl_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNCheryl_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNCheryl_Ask:
	.string "Cheryl: Oh, hello, {PLAYER}. You’re my\n"
	.string "opponent of the day?$"

SurvivalArea_Battleground_EventScript_SNCheryl_Intro:
	.string "Cheryl: My POKéMON have been itching\n"
	.string "for a battle.$"

SurvivalArea_Battleground_EventScript_SNCheryl_NoT:
	.string "Cheryl: Oh, but my POKéMON were itching\n"
	.string "for a battle...$"

SurvivalArea_Battleground_EventScript_SNCheryl_Done_T:
	.string "Cheryl: Thank you, {PLAYER}!\p"
	.string "Thanks to you, my adorable POKéMON\n"
	.string "became a little tougher.$"

SurvivalArea_Battleground_EventScript_SNCheryl_Lose:
	.string "Cheryl: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNRiley::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_RILEY, SurvivalArea_Battleground_EventScript_SNRiley_Done
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNRiley_No
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_9, SurvivalArea_Battleground_EventScript_SNRiley_Lose
	setflag FLAG_DAILY_SN_BG_RILEY
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRiley_No:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNRiley_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNRiley_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNRiley_Ask:
	.string "Riley: You and I, we’re both Trainers.\p"
	.string "Let’s forego the small talk and\n"
	.string "proceed right to battle.\p"
	.string "That’s my style!$"

SurvivalArea_Battleground_EventScript_SNRiley_Intro:
	.string "Riley: Battling is our way of greeting!$"

SurvivalArea_Battleground_EventScript_SNRiley_NoT:
	.string "Riley: All right, then. So, what’ve you\n"
	.string "got to tell me?$"

SurvivalArea_Battleground_EventScript_SNRiley_Done_T:
	.string "Riley: Know your enemy.\p"
	.string "If you know your opponent’s POKéMON\n"
	.string "and what moves they use...\p"
	.string "If you have intelligence like that,\n"
	.string "your chances of winning are much\l"
	.string "improved.$"

SurvivalArea_Battleground_EventScript_SNRiley_Lose:
	.string "Riley: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNMarley::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_MARLEY, SurvivalArea_Battleground_EventScript_SNMarley_Done
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNMarley_No
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_10, SurvivalArea_Battleground_EventScript_SNMarley_Lose
	setflag FLAG_DAILY_SN_BG_MARLEY
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMarley_No:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMarley_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNMarley_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNMarley_Ask:
	.string "Marley: I... Is it OK to battle?$"

SurvivalArea_Battleground_EventScript_SNMarley_Intro:
	.string "Marley: ...OK. I’ll do my best.$"

SurvivalArea_Battleground_EventScript_SNMarley_NoT:
	.string "Marley: ...Oh? ...You can be that mean?$"

SurvivalArea_Battleground_EventScript_SNMarley_Done_T:
	.string "Marley: ...You’re so strong. It makes me\n"
	.string "feel happy.\p"
	.string "...I don’t know why. This is a strange\n"
	.string "feeling...$"

SurvivalArea_Battleground_EventScript_SNMarley_Lose:
	.string "Marley: Well done! That was a great\n"
	.string "battle!$"

SurvivalArea_Battleground_EventScript_SNMira::
	lock
	faceplayer
	goto_if_set FLAG_DAILY_SN_BG_MIRA, SurvivalArea_Battleground_EventScript_SNMira_Done
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, SurvivalArea_Battleground_EventScript_SNMira_No
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Intro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_MAGMA_HIDEOUT_11, SurvivalArea_Battleground_EventScript_SNMira_Lose
	setflag FLAG_DAILY_SN_BG_MIRA
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Done_T, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMira_No:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_NoT, MSGBOX_DEFAULT
	release
	end
SurvivalArea_Battleground_EventScript_SNMira_Done:
	msgbox SurvivalArea_Battleground_EventScript_SNMira_Done_T, MSGBOX_DEFAULT
	release
	end

SurvivalArea_Battleground_EventScript_SNMira_Ask:
	.string "Mira: {PLAYER}! Please teach Mira about\n"
	.string "POKéMON!$"

SurvivalArea_Battleground_EventScript_SNMira_Intro:
	.string "Mira: {PLAYER}!\p"
	.string "Mira will show you that Mira doesn’t get\n"
	.string "lost anymore, {PLAYER}!$"

SurvivalArea_Battleground_EventScript_SNMira_NoT:
	.string "Mira: Mira is a little sad... Mira’s\n"
	.string "POKéMON are stronger now.$"

SurvivalArea_Battleground_EventScript_SNMira_Done_T:
	.string "Mira: {PLAYER}, please teach Mira about\n"
	.string "POKéMON again!\p"
	.string "Mira wants to get a lot, lot stronger,\n"
	.string "like {PLAYER}!$"

SurvivalArea_Battleground_EventScript_SNMira_Lose:
	.string "Mira: Well done! That was a great\n"
	.string "battle!$"
