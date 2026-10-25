SpearPillar_MapScripts::
	.byte 0

SpearPillar_Text_PtNpc1_0:
	.string "We are not capable of slowing you.\p"
	.string "We will let you pass so you can get\n"
	.string "pulverized by our bosses!$"

SpearPillar_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

SpearPillar_Text_PtNpc2_0:
	.string "Mars: I’m surprised you made it here.\n"
	.string "You can stay if you won’t meddle.$"

SpearPillar_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

SpearPillar_Text_PtNpc3_0:
	.string "We are not capable of slowing you.\p"
	.string "We will let you pass so you can get\n"
	.string "pulverized by our bosses!$"

SpearPillar_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

SpearPillar_Text_PtNpc4_0:
	.string "Jupiter: Be quiet and watch what our\n"
	.string "boss is about to do.$"

SpearPillar_EventScript_PtNpc4::
	lock
	faceplayer
	msgbox SpearPillar_Text_PtNpc4_0, MSGBOX_DEFAULT
	release
	end
