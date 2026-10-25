ManiacTunnel_MapScripts::
	.byte 0

ManiacTunnel_Text_PtNpc1_0:
	.string "Wow... My digging punched me through to\n"
	.string "this weird place.\p"
	.string "I’d say you can thank me for being a\n"
	.string "Ruin Maniac!$"

ManiacTunnel_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox ManiacTunnel_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end
