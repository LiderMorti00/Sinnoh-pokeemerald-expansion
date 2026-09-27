OreburghMine_B2F_MapScripts::
	.byte 0

OreburghMine_B2F_EventScript_Roark::
	lock
	faceplayer
	msgbox OreburghMine_B2F_Text_Roark, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MINE_ROARK
	setflag FLAG_HIDE_MINE_ROARK
	clearflag FLAG_HIDE_GYM_ROARK
	setvar VAR_SINNOH_STORY, 18
	fadescreen FADE_FROM_BLACK
	release
	end

OreburghMine_B2F_Text_Roark:
	.string "ROARK: Hm? A challenger, all the\n"
	.string "way down here? I'm ROARK, the\l"
	.string "OREBURGH GYM LEADER.\p"
	.string "Mining is my other job, you see.\n"
	.string "There's always more coal to dig!\p"
	.string "If you want to battle, head back\n"
	.string "to the GYM. I'll be waiting for\l"
	.string "you there!$"

OreburghMine_B2F_EventScript_Mason::
	trainerbattle_single TRAINER_MARY, OreburghMine_B2F_Text_MasonIntro, OreburghMine_B2F_Text_MasonDefeat
	msgbox OreburghMine_B2F_Text_MasonPost, MSGBOX_AUTOCLOSE
	end

OreburghMine_B2F_Text_MasonIntro:
	.string "You're in my way! This is a work\n"
	.string "zone!$"

OreburghMine_B2F_Text_MasonDefeat:
	.string "Well, you've got guts, kid.$"

OreburghMine_B2F_Text_MasonPost:
	.string "Stay safe down here. The ground\n"
	.string "shifts a lot.$"

OreburghMine_B2F_EventScript_Colin::
	trainerbattle_single TRAINER_ALIX, OreburghMine_B2F_Text_ColinIntro, OreburghMine_B2F_Text_ColinDefeat
	msgbox OreburghMine_B2F_Text_ColinPost, MSGBOX_AUTOCLOSE
	end

OreburghMine_B2F_Text_ColinIntro:
	.string "My POKéMON help me dig! And\n"
	.string "battle, too!$"

OreburghMine_B2F_Text_ColinDefeat:
	.string "Guess I'll get back to digging...$"

OreburghMine_B2F_Text_ColinPost:
	.string "Our boss ROARK is even tougher\n"
	.string "than me!$"

OreburghMine_B2F_EventScript_Worker::
	msgbox OreburghMine_B2F_Text_Worker, MSGBOX_NPC
	end

OreburghMine_B2F_Text_Worker:
	.string "ROARK is always the first to start\n"
	.string "digging and the last to leave.\l"
	.string "He's a great boss!$"


OreburghMine_B2F_EventScript_Machop1::
	msgbox OreburghMine_B2F_Text_Machop1, MSGBOX_NPC
	end

OreburghMine_B2F_Text_Machop1:
	.string "MACHOP: Machop! Machoo!$"


OreburghMine_B2F_EventScript_Machop2::
	msgbox OreburghMine_B2F_Text_Machop2, MSGBOX_NPC
	end

OreburghMine_B2F_Text_Machop2:
	.string "MACHOP: Maaachop!$"


OreburghMine_B2F_EventScript_Machop3::
	msgbox OreburghMine_B2F_Text_Machop3, MSGBOX_NPC
	end

OreburghMine_B2F_Text_Machop3:
	.string "MACHOP: Mach! Machop!$"
