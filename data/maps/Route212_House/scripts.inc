Route212_House_MapScripts::
	.byte 0

Route212_House_Text_PtNpc1_0:
	.string "My daddy likes Blue Shards.\p"
	.string "There are other people who like shards\n"
	.string "in Sinnoh.\p"
	.string "One person likes Red Shards. Another\n"
	.string "collects Yellow Shards.$"

Route212_House_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox Route212_House_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

Route212_House_Text_PtNpc2:
	.string "If you’d share your shards with me, I\n"
	.string "can teach your POKéMON some moves.\p"
	.string "Would you like me to teach a move?$"

Route212_House_EventScript_PtNpc2::
	msgbox Route212_House_Text_PtNpc2, MSGBOX_NPC
	end

Route212_House_Text_PtNpc3_0:
	.string "My daddy collects shards.\p"
	.string "If you find any, like in the\n"
	.string "Underground, please bring them to us.$"

Route212_House_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox Route212_House_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
