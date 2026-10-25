SurvivalArea_House2_MapScripts::
	.byte 0

SurvivalArea_House2_Text_PtNpc1_0:
	.string "There’s a move that doubles in power if\n"
	.string "the POKéMON using it is poisoned,\p"
	.string "paralyzed, or burned.\p"
	.string "I’ve got the Technical Machine for it\n"
	.string "right here. You want it?$"

SurvivalArea_House2_Text_PtNpc1_1:
	.string "Facade’s a good move for your POKéMON\n"
	.string "to have.\p"
	.string "Your opponent will think twice about\n"
	.string "poisoning or paralyzing your POKéMON.$"

SurvivalArea_House2_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SN_SURVIVAL_AREA_SOUTH_HOUSE_TM42, SurvivalArea_House2_EventScript_PtNpc1_ExplainFacade
	msgbox SurvivalArea_House2_Text_PtNpc1_0, MSGBOX_DEFAULT
	giveitem ITEM_TM42, 1
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SN_SURVIVAL_AREA_SOUTH_HOUSE_TM42
	goto SurvivalArea_House2_EventScript_PtNpc1_ExplainFacade

SurvivalArea_House2_EventScript_PtNpc1_ExplainFacade:
	msgbox SurvivalArea_House2_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

SurvivalArea_House2_EventScript_PtNpc1_BagIsFull:
	goto Common_EventScript_ShowBagIsFull
	release
	end
