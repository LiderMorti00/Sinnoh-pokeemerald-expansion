VeilstoneCity_House4_MapScripts::
	.byte 0

VeilstoneCity_House4_Text_PtNpc1:
	.string "Me, I am but a tearful clown. Though I\n"
	.string "smile, I cry inside.$"

VeilstoneCity_House4_EventScript_PtNpc1::
	msgbox VeilstoneCity_House4_Text_PtNpc1, MSGBOX_NPC
	end

VeilstoneCity_House4_Text_PtNpc2_0:
	.string "There are many magicians in the world.\n"
	.string "You know, the performance artists?\p"
	.string "Don’t you think that maybe, say, five\n"
	.string "percent are actually psychics?$"

VeilstoneCity_House4_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_House4_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
