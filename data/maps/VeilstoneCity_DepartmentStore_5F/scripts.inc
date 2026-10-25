VeilstoneCity_DepartmentStore_5F_MapScripts::
	.byte 0

VeilstoneCity_DepartmentStore_5F_Text_PtNpc1_0:
	.string "I’ve had enough of shopping for a\n"
	.string "while.\p"
	.string "I’ll grab a drink and unwind a bit.$"

VeilstoneCity_DepartmentStore_5F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_5F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_5F_Text_PtNpc2_0:
	.string "I’ve shopped here loyally for years.\n"
	.string "Now they consider me a regular! Ha!$"

VeilstoneCity_DepartmentStore_5F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_5F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_5F_Text_PtNpc3:
	.string "That Sticky Barb is a hold item. If the\n"
	.string "POKéMON holding it is hit...\p"
	.string "The Sticky Barb sticks to the foe and\n"
	.string "inflicts damage!$"

VeilstoneCity_DepartmentStore_5F_EventScript_PtNpc3::
	msgbox VeilstoneCity_DepartmentStore_5F_Text_PtNpc3, MSGBOX_NPC
	end

VeilstoneCity_DepartmentStore_5F_Text_PtNpc4_0:
	.string "Two buff guys standing side by side.\n"
	.string "That’s all. What? What’s the problem?$"

VeilstoneCity_DepartmentStore_5F_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_5F_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_5F_EventScript_PtSign1::
	msgbox VeilstoneCity_DepartmentStore_5F_Text_PtSign1, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_5F_Text_PtSign1:
	.string "It’s a Vending Machine. Which drink\n"
	.string "would you like?$"

VeilstoneCity_DepartmentStore_5F_EventScript_PtSign2::
	msgbox VeilstoneCity_DepartmentStore_5F_Text_PtSign2, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_5F_Text_PtSign2:
	.string "It’s a Vending Machine. Which drink\n"
	.string "would you like?$"

VeilstoneCity_DepartmentStore_5F_EventScript_PtSign3::
	msgbox VeilstoneCity_DepartmentStore_5F_Text_PtSign3, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_5F_Text_PtSign3:
	.string "B1F: Food & Produce\p"
	.string "1F: Trainers’ Zone\p"
	.string "2F: Battle Collection\p"
	.string "3F: TM Corner\p"
	.string "4F: Poké Dolls & Goods\p"
	.string "5F: Rooftop Plaza$"
