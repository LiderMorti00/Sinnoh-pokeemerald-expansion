JubilifeCity_Flat1_F1_MapScripts::
	.byte 0

JubilifeCity_Flat1_F1_EventScript_PtNpc1::
	msgbox JubilifeCity_Flat1_F1_Text_PtNpc1, MSGBOX_NPC
	end

JubilifeCity_Flat1_F1_Text_PtNpc1:
	.string "I got my PIKACHU through a trade from\n"
	.string "someone somewhere in the world.\p"
	.string "It grows quickly, so its level goes up\n"
	.string "quickly, too.\p"
	.string "But it doesn't always listen to me...\p"
	.string "That's because I only have one Gym\n"
	.string "Badge.\p"
	.string "We don't always have an easy time, but\n"
	.string "it's still my irreplaceable partner!$"

JubilifeCity_Flat1_F1_EventScript_PtNpc2::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox JubilifeCity_Flat1_F1_Text_PtNpc2, MSGBOX_DEFAULT
	waitmoncry
	release
	end

JubilifeCity_Flat1_F1_Text_PtNpc2:
	.string "PIKACHU: Pikapikapikaaah!$"

JubilifeCity_Flat1_F1_EventScript_PtNpc3::
	msgbox JubilifeCity_Flat1_F1_Text_PtNpc3, MSGBOX_NPC
	end

JubilifeCity_Flat1_F1_Text_PtNpc3:
	.string "I work at the TV station. Long\n"
	.string "hours, but it's fun!$"
