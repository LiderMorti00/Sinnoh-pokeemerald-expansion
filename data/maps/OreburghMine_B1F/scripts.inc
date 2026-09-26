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
	setvar VAR_SINNOH_STORY, 14
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
