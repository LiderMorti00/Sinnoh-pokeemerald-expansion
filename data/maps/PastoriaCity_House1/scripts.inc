PastoriaCity_House1_MapScripts::
	.byte 0

PastoriaCity_House1_Text_PtNpc1_0:
	.string "In the Great Marsh, Quick Trams on\n"
	.string "rails are used for transportation.\p"
	.string "They prevent damage to the Great\n"
	.string "Marsh’s ecosystem.$"

PastoriaCity_House1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox PastoriaCity_House1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_House1_Text_PtNpc2_0:
	.string "PSYDUCK: Gwah?!$"

PastoriaCity_House1_EventScript_PtNpc2::
	lock
	faceplayer
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
	msgbox PastoriaCity_House1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_House1_Text_PtNpc3_0:
	.string "Though the name says “Quick,” their\n"
	.string "movements are anything but!\p"
	.string "They’re the Quick Trams that traverse\n"
	.string "the Great Marsh.$"

PastoriaCity_House1_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox PastoriaCity_House1_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
