CanalaveCity_House4_MapScripts::
	.byte 0

CanalaveCity_House4_Text_PtNpc1_0:
	.string "Somewhere far beyond the vast sea...\p"
	.string "There are other lands populated by\n"
	.string "POKéMON and Trainers.$"

CanalaveCity_House4_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CanalaveCity_House4_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_House4_Text_PtNpc2_0:
	.string "Hello, Trainer! This is something I\n"
	.string "found.\p"
	.string "It was mixed in with a load of cargo\n"
	.string "from another country.\p"
	.string "It’s not anything that I can use, so I\n"
	.string "think you should take it.$"

CanalaveCity_House4_Text_PtNpc2_1:
	.string "You know how POKéMON have their own\n"
	.string "abilities?\p"
	.string "Well, the move Skill Swap exchanges the\n"
	.string "user’s ability with that of its\p"
	.string "target POKéMON.\p"
	.string "How you use Skill Swap is a measure of\n"
	.string "your expertise as a Trainer.$"

CanalaveCity_House4_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_CANALAVE_CITY_SOUTHEAST_HOUSE_TM48, CanalaveCity_House4_EventScript_PtNpc2_ExplainSkillSwap
	msgbox CanalaveCity_House4_Text_PtNpc2_0, MSGBOX_DEFAULT
	giveitem ITEM_TM48, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_CANALAVE_CITY_SOUTHEAST_HOUSE_TM48
	goto CanalaveCity_House4_EventScript_PtNpc2_ExplainSkillSwap
	release
	end

CanalaveCity_House4_EventScript_PtNpc2_ExplainSkillSwap:
	msgbox CanalaveCity_House4_Text_PtNpc2_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_House4_EventScript_PtNpc2_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end
