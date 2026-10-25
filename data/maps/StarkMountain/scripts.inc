StarkMountain_MapScripts::
	.byte 0

StarkMountain_EventScript_Darien::
	trainerbattle_single TRAINER_FERNANDO_1, StarkMountain_Text_DarienIntro, StarkMountain_Text_DarienDefeat
	msgbox StarkMountain_Text_DarienPost, MSGBOX_AUTOCLOSE
	end

StarkMountain_Text_DarienIntro:
	.string "My POKéMON and I seek only victory!$"

StarkMountain_Text_DarienDefeat:
	.string "Arrrgh! My POKéMON...$"

StarkMountain_Text_DarienPost:
	.string "I failed my POKéMON! I wasn’t prepared\n"
	.string "enough to lead it!\p"
	.string "I don’t ever want my precious POKéMON\n"
	.string "to be humiliated again!$"
