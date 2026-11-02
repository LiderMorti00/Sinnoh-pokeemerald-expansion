PastoriaCity_House2_MapScripts::
	.byte 0

PastoriaCity_House2_Text_PtNpc1:
	.string "Howdy, there!\p"
	.string "Let me examine your POKéMON to see if\n"
	.string "it’s worthy of a scarf!$"

PastoriaCity_House2_Text_PtNpc2_0:
	.string "My brother’s girlfriend is the Massage\n"
	.string "Girl in Veilstone City.\p"
	.string "They stay in touch by having POKéMON\n"
	.string "hold Mail for each other.$"

PastoriaCity_House2_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox PastoriaCity_House2_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_House2_Text_PtNpc3_0:
	.string "PACHIRISU: Suuu pasuu!$"

PastoriaCity_House2_EventScript_PtNpc3::
	lock
	faceplayer
	playmoncry SPECIES_PACHIRISU, CRY_MODE_NORMAL
	msgbox PastoriaCity_House2_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

PastoriaCity_House2_EventScript_SNScarfGuy::
	lock
	faceplayer
	goto_if_ne VAR_SLATEPORT_FAN_CLUB_STATE, 0, SlateportCity_PokemonFanClub_EventScript_ChairmanTryAssessPokemon
	setvar VAR_SLATEPORT_FAN_CLUB_STATE, 1
	msgbox PastoriaCity_House2_Text_SNScarf, MSGBOX_DEFAULT
	goto SlateportCity_PokemonFanClub_EventScript_ChairmanAssessLeadMon
	end
PastoriaCity_House2_Text_SNScarf:
	.string "Howdy, there!\p"
	.string "Let me examine your POKéMON to see if\n"
	.string "it’s worthy of a scarf!$"
