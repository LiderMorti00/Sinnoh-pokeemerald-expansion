OreburghMine_B1F_MapScripts::
	.byte 0

OreburghMine_B1F_EventScript_Roark::
	lock
	faceplayer
	msgbox OreburghMine_B1F_Text_Roark, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MINE_ROARK
	setflag FLAG_HIDE_MINE_ROARK
	clearflag FLAG_HIDE_GYM_ROARK
	setvar VAR_SINNOH_STORY, 18
	fadescreen FADE_FROM_BLACK
	release
	end

OreburghMine_B1F_Text_Roark:
	.string "ROARK: Hm? A challenger, all the\n"
	.string "way down here? I'm ROARK, the\l"
	.string "OREBURGH GYM LEADER.\p"
	.string "Mining is my other job, you see.\n"
	.string "There's always more coal to dig!\p"
	.string "If you want to battle, head back\n"
	.string "to the GYM. I'll be waiting for\l"
	.string "you there!$"

OreburghMine_B1F_EventScript_PtNpc1::
	msgbox OreburghMine_B1F_Text_PtNpc1, MSGBOX_NPC
	end

OreburghMine_B1F_Text_PtNpc1:
	.string "Careful down here! The ground is\n"
	.string "uneven.$"

OreburghMine_B1F_EventScript_PtNpc2::
	msgbox OreburghMine_B1F_Text_PtNpc2, MSGBOX_NPC
	end

OreburghMine_B1F_Text_PtNpc2:
	.string "I'm here on a field trip. The mine\n"
	.string "is so big!$"

OreburghMine_B1F_EventScript_Mason::
	trainerbattle_single TRAINER_MARY, OreburghMine_B1F_Text_MasonIntro, OreburghMine_B1F_Text_MasonDefeat
	msgbox OreburghMine_B1F_Text_MasonPost, MSGBOX_AUTOCLOSE
	end

OreburghMine_B1F_Text_MasonIntro:
	.string "You're in my way! This is a work\n"
	.string "zone!$"

OreburghMine_B1F_Text_MasonDefeat:
	.string "Well, you've got guts, kid.$"

OreburghMine_B1F_Text_MasonPost:
	.string "Stay safe down here. The ground\n"
	.string "shifts a lot.$"

OreburghMine_B1F_EventScript_Colin::
	trainerbattle_single TRAINER_ALIX, OreburghMine_B1F_Text_ColinIntro, OreburghMine_B1F_Text_ColinDefeat
	msgbox OreburghMine_B1F_Text_ColinPost, MSGBOX_AUTOCLOSE
	end

OreburghMine_B1F_Text_ColinIntro:
	.string "My POKéMON help me dig! And\n"
	.string "battle, too!$"

OreburghMine_B1F_Text_ColinDefeat:
	.string "Guess I'll get back to digging...$"

OreburghMine_B1F_Text_ColinPost:
	.string "Our boss ROARK is even tougher\n"
	.string "than me!$"
