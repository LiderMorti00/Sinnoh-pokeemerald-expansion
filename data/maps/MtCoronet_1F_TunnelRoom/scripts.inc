MtCoronet_1F_TunnelRoom_MapScripts::
	.byte 0

MtCoronet_1F_TunnelRoom_EventScript_Grunt::
	trainerbattle_single TRAINER_BROOKE_3, MtCoronet_1F_TunnelRoom_Text_GruntIntro, MtCoronet_1F_TunnelRoom_Text_GruntDefeat
	msgbox MtCoronet_1F_TunnelRoom_Text_GruntPost, MSGBOX_AUTOCLOSE
	end

MtCoronet_1F_TunnelRoom_Text_GruntIntro:
	.string "I can’t believe you chased me here...\n"
	.string "OK, let’s see how tough you are.$"

MtCoronet_1F_TunnelRoom_Text_GruntDefeat:
	.string "Where do you get that power?!$"

MtCoronet_1F_TunnelRoom_Text_GruntPost:
	.string "Mt. Coronet...\p"
	.string "I might be just a grunt, but even I can\n"
	.string "tell it has a weird energy!$"

MtCoronet_1F_TunnelRoom_EventScript_Grunt2::
	trainerbattle_single TRAINER_BROOKE_4, MtCoronet_1F_TunnelRoom_Text_Grunt2Intro, MtCoronet_1F_TunnelRoom_Text_Grunt2Defeat
	msgbox MtCoronet_1F_TunnelRoom_Text_Grunt2Post, MSGBOX_AUTOCLOSE
	end

MtCoronet_1F_TunnelRoom_Text_Grunt2Intro:
	.string "This is our final operation. No one will\n"
	.string "interfere!$"

MtCoronet_1F_TunnelRoom_Text_Grunt2Defeat:
	.string "You turned the tables on me... I call\n"
	.string "interference...$"

MtCoronet_1F_TunnelRoom_Text_Grunt2Post:
	.string "The closer you are to the peak, the\n"
	.string "closer you are to space!\p"
	.string "Soon, Team Galactic will... Uh... Team\n"
	.string "Galactic will achieve greatness!$"

MtCoronet_1F_TunnelRoom_EventScript_Grunt3::
	trainerbattle_single TRAINER_BROOKE_5, MtCoronet_1F_TunnelRoom_Text_Grunt3Intro, MtCoronet_1F_TunnelRoom_Text_Grunt3Defeat
	msgbox MtCoronet_1F_TunnelRoom_Text_Grunt3Post, MSGBOX_AUTOCLOSE
	end

MtCoronet_1F_TunnelRoom_Text_Grunt3Intro:
	.string "Say, listen, do you realize you’re\n"
	.string "breaking hearts by being successful?\p"
	.string "It’s your fault that Team Galactic\n"
	.string "members are in so much pain...$"

MtCoronet_1F_TunnelRoom_Text_Grunt3Defeat:
	.string "See? You’ve left me brokenhearted,\n"
	.string "too...$"

MtCoronet_1F_TunnelRoom_Text_Grunt3Post:
	.string "Someone’s joy is another person’s\n"
	.string "sorrow...\p"
	.string "Everyone be happy and laughing? How\n"
	.string "ridiculous!\p"
	.string "Team Galactic should be doing all the\n"
	.string "laughing!$"

MtCoronet_1F_TunnelRoom_Text_PtNpc1:
	.string "Yeah, right! You’re absolutely right!\n"
	.string "I’m hopelessly lost!\p"
	.string "Please don’t pay attention to a lowly\n"
	.string "grunt like me without any POKéMON!$"

MtCoronet_1F_TunnelRoom_EventScript_PtNpc1::
	msgbox MtCoronet_1F_TunnelRoom_Text_PtNpc1, MSGBOX_NPC
	end
