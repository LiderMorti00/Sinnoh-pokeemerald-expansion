VeilstoneCity_DepartmentStore_2F_MapScripts::
	.byte 0

VeilstoneCity_DepartmentStore_2F_Text_PtNpc1_0:
	.string "Where can I find matching dresses for\n"
	.string "myself and my dear POKéMON?$"

VeilstoneCity_DepartmentStore_2F_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_2F_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_2F_Text_PtNpc2_0:
	.string "I’m going to give an HP Up to my\n"
	.string "KRICKETOT.\p"
	.string "This is going to raise its HP, huh?$"

VeilstoneCity_DepartmentStore_2F_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_2F_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_2F_Text_PtNpc3:
	.string "I hope that Counter app I gave you is\n"
	.string "useful.$"

VeilstoneCity_DepartmentStore_2F_EventScript_PtNpc3::
	msgbox VeilstoneCity_DepartmentStore_2F_Text_PtNpc3, MSGBOX_NPC
	end

VeilstoneCity_DepartmentStore_2F_Text_PtNpc4:
	.string "Hello, {PLAYER}. May I help you with\n"
	.string "anything?$"

VeilstoneCity_DepartmentStore_2F_EventScript_PtNpc4::
	msgbox VeilstoneCity_DepartmentStore_2F_Text_PtNpc4, MSGBOX_NPC
	end

VeilstoneCity_DepartmentStore_2F_EventScript_PtNpc5::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

VeilstoneCity_DepartmentStore_2F_EventScript_PtNpc6::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

VeilstoneCity_DepartmentStore_2F_Text_PtNpc7_0:
	.string "I’m getting the Carbos! I should get a\n"
	.string "Protein instead, maybe.\p"
	.string "But Iron’s not bad, either.$"

VeilstoneCity_DepartmentStore_2F_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox VeilstoneCity_DepartmentStore_2F_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_DepartmentStore_2F_EventScript_PtSign1::
	msgbox VeilstoneCity_DepartmentStore_2F_Text_PtSign1, MSGBOX_SIGN
	end

VeilstoneCity_DepartmentStore_2F_Text_PtSign1:
	.string "B1F: Food & Produce\p"
	.string "1F: Trainers’ Zone\p"
	.string "2F: Battle Collection\p"
	.string "3F: TM Corner\p"
	.string "4F: Poké Dolls & Goods\p"
	.string "5F: Rooftop Plaza$"
