VeilstoneCity_House1_MapScripts::
	.byte 0

VeilstoneCity_House1_Text_PtNpc1_0:
	.string "A myth says that Mt. Coronet parted\n"
	.string "Sinnoh into halves.\p"
	.string "Seeing the POKéMON SHELLOS makes me\n"
	.string "think maybe the myth is real.$"

VeilstoneCity_House1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox VeilstoneCity_House1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House1_Text_PtNpc2_0:
	.string "If there are people who desire to see\n"
	.string "them, POKéMON will appear in\p"
	.string "many different guises.$"

VeilstoneCity_House1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox VeilstoneCity_House1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

VeilstoneCity_House1_Text_PtNpc3_0:
	.string "BUNEARY: Nii nii!$"

VeilstoneCity_House1_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_BUNEARY, CRY_MODE_NORMAL
	msgbox VeilstoneCity_House1_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
