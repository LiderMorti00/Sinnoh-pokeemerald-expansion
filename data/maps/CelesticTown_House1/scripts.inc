CelesticTown_House1_MapScripts::
	.byte 0

CelesticTown_House1_EventScript_PtNpc1::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

CelesticTown_House1_EventScript_PtNpc2::
	lock
	faceplayer
	goto Sinnoh_EventScript_GenericMart
	release
	end

CelesticTown_House1_Text_PtNpc3:
	.string "Putting on a pair of glasses changes\n"
	.string "how the world looks.\p"
	.string "Taking off a pair of glasses changes\n"
	.string "how the world looks, too. Deep, man.$"

CelesticTown_House1_EventScript_PtNpc3::
	msgbox CelesticTown_House1_Text_PtNpc3, MSGBOX_NPC
	end
