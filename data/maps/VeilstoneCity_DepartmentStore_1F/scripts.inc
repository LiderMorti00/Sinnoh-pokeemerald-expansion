VeilstoneCity_DepartmentStore_1F_MapScripts::
	.byte 0

VeilstoneCity_DepartmentStore_1F_Text_PtNpc1_0:
	.string "Welcome to the fabulous Veilstone\n"
	.string "Department Store.$"

VeilstoneCity_DepartmentStore_1F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_1F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_1F_Text_PtNpc2_0:
	.string "This department store knows how to\n"
	.string "ensure customer satisfaction.\p"
	.string "They really look after you once you\n"
	.string "become a regular customer.$"

VeilstoneCity_DepartmentStore_1F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_1F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_1F_Text_PtNpc3_0:
	.string "I like the formal air of a luxury\n"
	.string "department store.$"

VeilstoneCity_DepartmentStore_1F_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_1F_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_1F_Text_PtNpc4:
	.string "It’s a that.\p"
	.string "It will give your POKéMON a different\n"
	.string "look for Contests.$"

VeilstoneCity_DepartmentStore_1F_EventScript_PtNpc4::
	msgbox VeilstoneCity_DepartmentStore_1F_Text_PtNpc4, MSGBOX_NPC
	end

VeilstoneCity_DepartmentStore_1F_EventScript_PtNpc5::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

VeilstoneCity_DepartmentStore_1F_EventScript_PtNpc6::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

VeilstoneCity_DepartmentStore_1F_EventScript_PtSign1::
	msgbox VeilstoneCity_DepartmentStore_1F_Text_PtSign1, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_1F_Text_PtSign1:
	.string "Discover a new you! Veilstone\n"
	.string "Department Store$"

VeilstoneCity_DepartmentStore_1F_EventScript_PtSign2::
	msgbox VeilstoneCity_DepartmentStore_1F_Text_PtSign2, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_1F_Text_PtSign2:
	.string "B1F: Food & Produce\p"
	.string "1F: Trainers’ Zone\p"
	.string "2F: Battle Collection\p"
	.string "3F: TM Corner\p"
	.string "4F: Poké Dolls & Goods\p"
	.string "5F: Rooftop Plaza$"
