CelesticTown_House3_MapScripts::
	.byte 0

CelesticTown_House3_Text_PtNpc1_0:
	.string "Mt. Coronet towers at the center of\n"
	.string "Sinnoh.\p"
	.string "In a way, it’s the closest place to the\n"
	.string "sky, and to space, in this region.$"

CelesticTown_House3_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox CelesticTown_House3_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CelesticTown_House3_Text_PtNpc2_0:
	.string "If I climb on top of Mt. Coronet, will I\n"
	.string "be able to see all of Sinnoh?$"

CelesticTown_House3_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox CelesticTown_House3_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end
