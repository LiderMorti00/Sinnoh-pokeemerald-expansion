Route212_Access_MapScripts::
	.byte 0

Route212_Access_EventScript_PtNpc1::
	msgbox Route212_Access_Text_PtNpc1, MSGBOX_NPC
	end

Route212_Access_Text_PtNpc1:
	.string "I traveled a long way to take part in\n"
	.string "these Contests.$"

Route212_Access_Text_PtNpc2_0:
	.string "I’ve given my POKéMON lots of POKéBLOCKS.\p"
	.string "I’m confident that we’ll win our share\n"
	.string "of Contests.$"

Route212_Access_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox Route212_Access_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
