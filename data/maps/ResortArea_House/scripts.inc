ResortArea_House_MapScripts::
	.byte 0

ResortArea_House_Text_PtNpc1:
	.string "All I need to be happy is my TV. That’s\n"
	.string "all I need.\p"
	.string "I learn so much just sitting here. I\n"
	.string "absorb knowledge!\p"
	.string "I learned about the POKéTCH app\n"
	.string "Marking Map, for instance.\p"
	.string "They say the Marking Map can track\n"
	.string "POKéMON that travel around.\p"
	.string "...I’ve never met any traveling POKéMON,\n"
	.string "but I’ve heard about them.$"

ResortArea_House_EventScript_PtNpc1::
	msgbox ResortArea_House_Text_PtNpc1, MSGBOX_NPC
	end

ResortArea_House_Text_PtNpc2_0:
	.string "The best Trainers from all over\n"
	.string "congregate at the Battle Frontier.\p"
	.string "It’s not limited to Sinnoh, no.\p"
	.string "It must be a happy achievement to be\n"
	.string "able to win there with your favorite\p"
	.string "POKéMON you’ve caught yourself.$"

ResortArea_House_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox ResortArea_House_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

ResortArea_House_Text_PtNpc3:
	.string "You’ve seen every POKéMON in Sinnoh!\n"
	.string "That is so cool!\p"
	.string "I’m going to travel with POKéMON when I\n"
	.string "get bigger!$"

ResortArea_House_EventScript_PtNpc3::
	msgbox ResortArea_House_Text_PtNpc3, MSGBOX_NPC
	end
