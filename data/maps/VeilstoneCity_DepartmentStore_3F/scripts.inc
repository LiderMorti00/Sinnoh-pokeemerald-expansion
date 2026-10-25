VeilstoneCity_DepartmentStore_3F_MapScripts::
	.byte 0

VeilstoneCity_DepartmentStore_3F_Text_PtNpc1:
	.string "Hello, {PLAYER}. May I help you with\n"
	.string "anything?$"

VeilstoneCity_DepartmentStore_3F_EventScript_PtNpc1::
	msgbox VeilstoneCity_DepartmentStore_3F_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_DepartmentStore_3F_Text_PtNpc2_0:
	.string "A friend traded me a MACHOKE using DS\n"
	.string "Wireless Communications.\p"
	.string "But instead of a MACHOKE, I got a\n"
	.string "different POKéMON!$"

VeilstoneCity_DepartmentStore_3F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_3F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_3F_Text_PtNpc3_0:
	.string "I wrote some secrets in my Mail as a\n"
	.string "reminder...\p"
	.string "If someone reads it... I’m in deep\n"
	.string "trouble.$"

VeilstoneCity_DepartmentStore_3F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_3F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_3F_EventScript_PtNpc4::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

VeilstoneCity_DepartmentStore_3F_EventScript_PtNpc5::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

VeilstoneCity_DepartmentStore_3F_Text_PtNpc6_0:
	.string "I would love to buy up all the\n"
	.string "merchandise here.\p"
	.string "Even once would do!$"

VeilstoneCity_DepartmentStore_3F_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_3F_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_3F_EventScript_PtSign1::
	msgbox VeilstoneCity_DepartmentStore_3F_Text_PtSign1, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_3F_Text_PtSign1:
	.string "B1F: Food & Produce\p"
	.string "1F: Trainers’ Zone\p"
	.string "2F: Battle Collection\p"
	.string "3F: TM Corner\p"
	.string "4F: Poké Dolls & Goods\p"
	.string "5F: Rooftop Plaza$"
