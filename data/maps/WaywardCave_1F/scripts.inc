WaywardCave_1F_MapScripts::
	.byte 0

WaywardCave_1F_EventScript_Diego::
	trainerbattle_single TRAINER_RICKY_3, WaywardCave_1F_Text_DiegoIntro, WaywardCave_1F_Text_DiegoDefeat
	msgbox WaywardCave_1F_Text_DiegoPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_DiegoIntro:
	.string "Humph! You’re lost, aren’t you? I’ll\n"
	.string "guide you if you can beat me.$"

WaywardCave_1F_Text_DiegoDefeat:
	.string "You didn’t really have to win! I’m not\n"
	.string "going to guide you now!$"

WaywardCave_1F_Text_DiegoPost:
	.string "I’m not lost, I tell you! I’m camping!\n"
	.string "That’s my story!$"

WaywardCave_1F_EventScript_Tori::
	trainerbattle_single TRAINER_RICKY_4, WaywardCave_1F_Text_ToriIntro, WaywardCave_1F_Text_ToriDefeat
	msgbox WaywardCave_1F_Text_ToriPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_ToriIntro:
	.string "Where am I? Am I lost? Who are you? Are\n"
	.string "you a POKéMON Trainer?$"

WaywardCave_1F_Text_ToriDefeat:
	.string "OK, so we’re both Trainers. That’s a\n"
	.string "start, right?$"

WaywardCave_1F_Text_ToriPost:
	.string "I just wanted to have a picnic under\n"
	.string "the Cycling Road.\p"
	.string "I didn’t think I would get lost in a\n"
	.string "place like this...$"

WaywardCave_1F_EventScript_Cassidy::
	trainerbattle_single TRAINER_RICKY_5, WaywardCave_1F_Text_CassidyIntro, WaywardCave_1F_Text_CassidyDefeat
	msgbox WaywardCave_1F_Text_CassidyPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_CassidyIntro:
	.string "Hush now, lost little POKéMON, don’t\n"
	.string "you cry.\p"
	.string "I’m here to take care of you!$"

WaywardCave_1F_Text_CassidyDefeat:
	.string "Sniffle... W-who’s crying now?$"

WaywardCave_1F_Text_CassidyPost:
	.string "Speaking of crying, I’m positive I\n"
	.string "heard crying from deeper in the cave.$"

WaywardCave_1F_EventScript_Wayne::
	trainerbattle_single TRAINER_WILTON_1, WaywardCave_1F_Text_WayneIntro, WaywardCave_1F_Text_WayneDefeat
	msgbox WaywardCave_1F_Text_WaynePost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_WayneIntro:
	.string "Did you come to play, too? Wanna play\n"
	.string "battle with me?$"

WaywardCave_1F_Text_WayneDefeat:
	.string "You were just toying with me!$"

WaywardCave_1F_Text_WaynePost:
	.string "I’m playing hide-and-seek here. I like\n"
	.string "some underground tag, too.$"

WaywardCave_1F_EventScript_Reginald::
	trainerbattle_single TRAINER_WILTON_2, WaywardCave_1F_Text_ReginaldIntro, WaywardCave_1F_Text_ReginaldDefeat
	msgbox WaywardCave_1F_Text_ReginaldPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_ReginaldIntro:
	.string "Look! A Trainer lost in Wayward Cave!$"

WaywardCave_1F_Text_ReginaldDefeat:
	.string "I strayed from the battle plan!$"

WaywardCave_1F_Text_ReginaldPost:
	.string "Me? No, I’m not lost. I live here!$"

WaywardCave_1F_EventScript_Terry::
	trainerbattle_single TRAINER_WILTON_3, WaywardCave_1F_Text_TerryIntro, WaywardCave_1F_Text_TerryDefeat
	msgbox WaywardCave_1F_Text_TerryPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_TerryIntro:
	.string "You look like you might just have the\n"
	.string "POKéMON I’ve been looking for!$"

WaywardCave_1F_Text_TerryDefeat:
	.string "You didn’t have a single POKéMON I\n"
	.string "wanted... You’re no Collector!$"

WaywardCave_1F_Text_TerryPost:
	.string "I’m very picky, so I want to collect\n"
	.string "every POKéMON without anyone’s help.\p"
	.string "...I do have friends, though. No,\n"
	.string "seriously! I do!$"

WaywardCave_1F_EventScript_Ana::
	trainerbattle_single TRAINER_WILTON_4, WaywardCave_1F_Text_AnaIntro, WaywardCave_1F_Text_AnaDefeat
	msgbox WaywardCave_1F_Text_AnaPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_AnaIntro:
	.string "What every good picnic needs is a cute\n"
	.string "setting, good food, and a fun\p"
	.string "battle!$"

WaywardCave_1F_Text_AnaDefeat:
	.string "That wasn’t any fun for me!$"

WaywardCave_1F_Text_AnaPost:
	.string "Why have a picnic here? I don’t know.\n"
	.string "There’s no deep meaning to it.$"

WaywardCave_1F_EventScript_Parker::
	trainerbattle_single TRAINER_WILTON_5, WaywardCave_1F_Text_ParkerIntro, WaywardCave_1F_Text_ParkerDefeat
	msgbox WaywardCave_1F_Text_ParkerPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_ParkerIntro:
	.string "Huh? Are you lost too? No? It doesn’t\n"
	.string "matter.\p"
	.string "Let’s have a quick POKéMON battle!$"

WaywardCave_1F_Text_ParkerDefeat:
	.string "Lost? There’s nothing lost about this\n"
	.string "kid!$"

WaywardCave_1F_Text_ParkerPost:
	.string "I got separated from my friends...\p"
	.string "I’ve got my POKéMON with me, so I’m OK,\n"
	.string "but...$"

WaywardCave_1F_EventScript_Gerald::
	trainerbattle_single TRAINER_BROOKE_1, WaywardCave_1F_Text_GeraldIntro, WaywardCave_1F_Text_GeraldDefeat
	msgbox WaywardCave_1F_Text_GeraldPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_GeraldIntro:
	.string "In deep tunnels and caves, there’re a\n"
	.string "couple things you’re sure to see.\p"
	.string "ZUBAT and Ruin Maniacs!$"

WaywardCave_1F_Text_GeraldDefeat:
	.string "Your awesome power... It’s mystifying.$"

WaywardCave_1F_Text_GeraldPost:
	.string "I’ve scoured every inch of this place...\n"
	.string "Most of it while I was lost.\p"
	.string "Anyway, if there’s one thing I can say,\n"
	.string "this place can’t be called ruins!$"

WaywardCave_1F_EventScript_Lorenzo::
	trainerbattle_single TRAINER_BROOKE_2, WaywardCave_1F_Text_LorenzoIntro, WaywardCave_1F_Text_LorenzoDefeat
	msgbox WaywardCave_1F_Text_LorenzoPost, MSGBOX_AUTOCLOSE
	end

WaywardCave_1F_Text_LorenzoIntro:
	.string "Wandering around, I got hungry, so I\n"
	.string "ate some wild mushrooms...\p"
	.string "They gave me gas, and now I can’t stop\n"
	.string "burping! Bluurrf!$"

WaywardCave_1F_Text_LorenzoDefeat:
	.string "Bleff! Hurk! I think...I’m getting\n"
	.string "better...$"

WaywardCave_1F_Text_LorenzoPost:
	.string "I hear there’s a POKéMON that has\n"
	.string "mushrooms growing on its back.\p"
	.string "Not around here, somewhere far away. I\n"
	.string "wonder if they taste any good?$"

WaywardCave_1F_Text_PtNpc1:
	.string "Mira: {PLAYER}, did you get to be so\n"
	.string "good because you’re always with\p"
	.string "your POKéMON?\p"
	.string "Yes! That has to be it! Mira will try\n"
	.string "like you!$"

WaywardCave_1F_EventScript_PtNpc1::
	msgbox WaywardCave_1F_Text_PtNpc1, MSGBOX_NPC
	end
