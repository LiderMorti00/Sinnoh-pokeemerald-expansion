StarkMountain_Room2_West_MapScripts::
	.byte 0

StarkMountain_Room2_EventScript_Keenan::
	trainerbattle_single TRAINER_DALTON_1, StarkMountain_Room2_Text_KeenanIntro, StarkMountain_Room2_Text_KeenanDefeat
	msgbox StarkMountain_Room2_Text_KeenanPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_KeenanIntro:
	.string "What it means to win battles... That is\n"
	.string "what I seek.\p"
	.string "Teach me if you will!$"

StarkMountain_Room2_Text_KeenanDefeat:
	.string "I grow less certain still...$"

StarkMountain_Room2_Text_KeenanPost:
	.string "Perhaps there is no meaning to victory,\n"
	.string "but still I will battle!\p"
	.string "That is what makes me a Trainer!$"

StarkMountain_Room2_EventScript_Kassandra::
	trainerbattle_single TRAINER_DALTON_2, StarkMountain_Room2_Text_KassandraIntro, StarkMountain_Room2_Text_KassandraDefeat
	msgbox StarkMountain_Room2_Text_KassandraPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_KassandraIntro:
	.string "You’ve come all this way for POKéMON?\n"
	.string "You must be dedicated.$"

StarkMountain_Room2_Text_KassandraDefeat:
	.string "Your dedication won out.$"

StarkMountain_Room2_Text_KassandraPost:
	.string "The POKéMON here must battle each\n"
	.string "other all the time.\p"
	.string "That must be why they are so strong in\n"
	.string "this area.$"

StarkMountain_Room2_EventScript_Skylar::
	trainerbattle_single TRAINER_DALTON_3, StarkMountain_Room2_Text_SkylarIntro, StarkMountain_Room2_Text_SkylarDefeat
	msgbox StarkMountain_Room2_Text_SkylarPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_SkylarIntro:
	.string "I was born in Floaroma Town. I’m sure\n"
	.string "thrilled to be here.\p"
	.string "It took a long time to get here. We’re\n"
	.string "not going to lose again!$"

StarkMountain_Room2_Text_SkylarDefeat:
	.string "We went down... We couldn’t stick it\n"
	.string "out...$"

StarkMountain_Room2_Text_SkylarPost:
	.string "You can level all you want, but that\n"
	.string "won’t guarantee you any wins.\p"
	.string "But we keep trying to get better.\n"
	.string "That’s what makes us Trainers.$"

StarkMountain_Room2_EventScript_Natasha::
	trainerbattle_single TRAINER_DALTON_4, StarkMountain_Room2_Text_NatashaIntro, StarkMountain_Room2_Text_NatashaDefeat
	msgbox StarkMountain_Room2_Text_NatashaPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_NatashaIntro:
	.string "I came here after winning my way\n"
	.string "through the Battle Tower!$"

StarkMountain_Room2_Text_NatashaDefeat:
	.string "But... I had a win streak going...$"

StarkMountain_Room2_Text_NatashaPost:
	.string "Train more at the Battle Tower... That’s\n"
	.string "what I’ll do.$"

StarkMountain_Room2_EventScript_Chelsey::
	trainerbattle_single TRAINER_DALTON_5, StarkMountain_Room2_Text_ChelseyIntro, StarkMountain_Room2_Text_ChelseyDefeat
	msgbox StarkMountain_Room2_Text_ChelseyPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_ChelseyIntro:
	.string "I’ll use my mystifying psychic power to\n"
	.string "pulverize you!$"

StarkMountain_Room2_Text_ChelseyDefeat:
	.string "That’s what I get for making idle\n"
	.string "claims...$"

StarkMountain_Room2_Text_ChelseyPost:
	.string "Psychic power is a mystery that defies\n"
	.string "explanation.\p"
	.string "But if everything could be explained,\n"
	.string "it would be a boring world.$"

StarkMountain_Room2_EventScript_Sterling::
	trainerbattle_single TRAINER_BERNIE_1, StarkMountain_Room2_Text_SterlingIntro, StarkMountain_Room2_Text_SterlingDefeat
	msgbox StarkMountain_Room2_Text_SterlingPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_SterlingIntro:
	.string "I had a revelation this morning.\p"
	.string "I knew that I would have a wonderful\n"
	.string "encounter here today.$"

StarkMountain_Room2_Text_SterlingDefeat:
	.string "There’s nothing wonderful about this!$"

StarkMountain_Room2_Text_SterlingPost:
	.string "Is my sense of premonition nothing to\n"
	.string "write home about?$"

StarkMountain_Room2_EventScript_Krystal::
	trainerbattle_single TRAINER_BERNIE_2, StarkMountain_Room2_Text_KrystalIntro, StarkMountain_Room2_Text_KrystalDefeat
	msgbox StarkMountain_Room2_Text_KrystalPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_KrystalIntro:
	.string "With one mighty flap, my birds blow\n"
	.string "away the embers of aggression!$"

StarkMountain_Room2_Text_KrystalDefeat:
	.string "We failed to get off the ground...$"

StarkMountain_Room2_Text_KrystalPost:
	.string "The HM Fly isn’t useful inside caves.\n"
	.string "It’s such a shame.$"

StarkMountain_Room2_EventScript_Ray::
	trainerbattle_single TRAINER_BERNIE_3, StarkMountain_Room2_Text_RayIntro, StarkMountain_Room2_Text_RayDefeat
	msgbox StarkMountain_Room2_Text_RayPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_RayIntro:
	.string "My POKéMON can destroy anything. And\n"
	.string "you think you can win?!$"

StarkMountain_Room2_Text_RayDefeat:
	.string "We weren’t up to the task!$"

StarkMountain_Room2_Text_RayPost:
	.string "Even though my team could break bricks\n"
	.string "and shatter boulders, they\p"
	.string "failed to dent your spirits!$"

StarkMountain_Room2_EventScript_Stefan::
	trainerbattle_single TRAINER_BERNIE_4, StarkMountain_Room2_Text_StefanIntro, StarkMountain_Room2_Text_StefanDefeat
	msgbox StarkMountain_Room2_Text_StefanPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_StefanIntro:
	.string "Let me ask to see if you know. What is\n"
	.string "time?$"

StarkMountain_Room2_Text_StefanDefeat:
	.string "Another memory... In a chain of\n"
	.string "memories.$"

StarkMountain_Room2_Text_StefanPost:
	.string "For me, time is the fabric woven by\n"
	.string "memories, one after another...$"

StarkMountain_Room2_EventScript_Jasmin::
	trainerbattle_single TRAINER_BERNIE_5, StarkMountain_Room2_Text_JasminIntro, StarkMountain_Room2_Text_JasminDefeat
	msgbox StarkMountain_Room2_Text_JasminPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_JasminIntro:
	.string "Can you answer this for me? What is\n"
	.string "space?$"

StarkMountain_Room2_Text_JasminDefeat:
	.string "And another... A new memory was born.$"

StarkMountain_Room2_Text_JasminPost:
	.string "For me, space is where memories are\n"
	.string "made...$"

StarkMountain_Room2_EventScript_Drake::
	trainerbattle_single TRAINER_ETHAN_1, StarkMountain_Room2_Text_DrakeIntro, StarkMountain_Room2_Text_DrakeDefeat
	msgbox StarkMountain_Room2_Text_DrakePost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_DrakeIntro:
	.string "Dragons and a fiery mountain... It’s a\n"
	.string "totally classic setup!$"

StarkMountain_Room2_Text_DrakeDefeat:
	.string "Losing isn’t a happy occasion...$"

StarkMountain_Room2_Text_DrakePost:
	.string "My POKéMON seem to like it here a lot.$"

StarkMountain_Room2_EventScript_Jarrett::
	trainerbattle_single TRAINER_ETHAN_2, StarkMountain_Room2_Text_JarrettIntro, StarkMountain_Room2_Text_JarrettDefeat
	msgbox StarkMountain_Room2_Text_JarrettPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_JarrettIntro:
	.string "Hear the howl of my iron fists! Howdy!\n"
	.string "I’m crazy for karate!$"

StarkMountain_Room2_Text_JarrettDefeat:
	.string "Losing made it clear to me. You’re crazy\n"
	.string "about POKéMON!$"

StarkMountain_Room2_Text_JarrettPost:
	.string "I love seeing people who love POKéMON\n"
	.string "more than anything!$"

StarkMountain_Room2_EventScript_Abel::
	trainerbattle_single TRAINER_ETHAN_3, StarkMountain_Room2_Text_AbelIntro, StarkMountain_Room2_Text_AbelDefeat
	msgbox StarkMountain_Room2_Text_AbelPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_AbelIntro:
	.string "The Trainers and POKéMON that gather\n"
	.string "here aren’t pushovers.\p"
	.string "They all have tricks up their sleeves!$"

StarkMountain_Room2_Text_AbelDefeat:
	.string "You’re not a Trainer that can be taken\n"
	.string "lightly!$"

StarkMountain_Room2_Text_AbelPost:
	.string "The POKéMON you’ll meet here won’t\n"
	.string "make it easy for you to move onward.$"

StarkMountain_Room2_EventScript_Monique::
	trainerbattle_single TRAINER_ETHAN_4, StarkMountain_Room2_Text_MoniqueIntro, StarkMountain_Room2_Text_MoniqueDefeat
	msgbox StarkMountain_Room2_Text_MoniquePost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_MoniqueIntro:
	.string "We’re all good to go! We just have to\n"
	.string "battle now!$"

StarkMountain_Room2_Text_MoniqueDefeat:
	.string "Aww... I’m out of useful items!$"

StarkMountain_Room2_Text_MoniquePost:
	.string "We came completely unprepared for this\n"
	.string "little adventure...$"

StarkMountain_Room2_EventScript_Harlan::
	trainerbattle_single TRAINER_ETHAN_5, StarkMountain_Room2_Text_HarlanIntro, StarkMountain_Room2_Text_HarlanDefeat
	msgbox StarkMountain_Room2_Text_HarlanPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_HarlanIntro:
	.string "What do you expect to achieve here?\n"
	.string "I’ll be the one to make that call!$"

StarkMountain_Room2_Text_HarlanDefeat:
	.string "You’ve earned the right to be here.\n"
	.string "Both you and your POKéMON.$"

StarkMountain_Room2_Text_HarlanPost:
	.string "You may find it odd, but the stink of\n"
	.string "sulfur from the volcanic gas\p"
	.string "is what draws me here.$"

StarkMountain_Room2_EventScript_Kenny::
	trainerbattle_single TRAINER_JEFFREY_1, StarkMountain_Room2_Text_KennyIntro, StarkMountain_Room2_Text_KennyDefeat
	msgbox StarkMountain_Room2_Text_KennyPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Room2_Text_KennyIntro:
	.string "Are you seeking the mythical POKéMON,\n"
	.string "too? Let’s battle, then!$"

StarkMountain_Room2_Text_KennyDefeat:
	.string "There’s nothing left...$"

StarkMountain_Room2_Text_KennyPost:
	.string "The mythical POKéMON that sleeps deep\n"
	.string "in a volcano...\p"
	.string "Could it be a dragon POKéMON?$"
