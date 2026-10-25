VeilstoneCity_DepartmentStore_4F_MapScripts::
	.byte 0

VeilstoneCity_DepartmentStore_4F_Text_PtNpc1_0:
	.string "If you encounter a wild POKéMON, chuck\n"
	.string "a Quick Ball right off the bat!\p"
	.string "If it’s taking a long time to catch, the\n"
	.string "situation calls for a Timer Ball!$"

VeilstoneCity_DepartmentStore_4F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_4F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_4F_Text_PtNpc2_0:
	.string "That boy doesn’t have any POKéMON, but\n"
	.string "he says he’s training his image!$"

VeilstoneCity_DepartmentStore_4F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_4F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_4F_Text_PtNpc3:
	.string "Hello, {PLAYER}. May I help you with\n"
	.string "anything?$"

VeilstoneCity_DepartmentStore_4F_EventScript_PtNpc3::
	msgbox VeilstoneCity_DepartmentStore_4F_Text_PtNpc3, MSGBOX_NPC
	end

VeilstoneCity_DepartmentStore_4F_Text_PtNpc4_0:
	.string "We need another copy of the game so I\n"
	.string "can challenge my papa!$"

VeilstoneCity_DepartmentStore_4F_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_4F_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_4F_EventScript_PtSign1::
	msgbox VeilstoneCity_DepartmentStore_4F_Text_PtSign1, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_4F_Text_PtSign1:
	.string "B1F: Food & Produce\p"
	.string "1F: Trainers’ Zone\p"
	.string "2F: Battle Collection\p"
	.string "3F: TM Corner\p"
	.string "4F: Poké Dolls & Goods\p"
	.string "5F: Rooftop Plaza$"
