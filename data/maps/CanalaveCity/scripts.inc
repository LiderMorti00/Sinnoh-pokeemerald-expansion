CanalaveCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CanalaveCity_OnTransitionSN
	.byte 0

CanalaveCity_EventScript_PtNpc1::
	msgbox CanalaveCity_Text_PtNpc1, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc1:
	.string "What's up? Your clothes look damp.\p"
	.string "Maybe you took the boat to Iron\n"
	.string "Island to get a Hidden Machine, right?$"

CanalaveCity_EventScript_PtNpc2::
	msgbox CanalaveCity_Text_PtNpc2, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc2:
	.string "My PSYDUCK is very close to me. That\n"
	.string "makes its Return move powerful!$"

CanalaveCity_EventScript_PtNpc3::
	msgbox CanalaveCity_Text_PtNpc3, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc3:
	.string "Welcome to CANALAVE CITY, the Canal\n"
	.string "City!\p"
	.string "In the old days, this port used to be a\n"
	.string "hub of cargo transportation.$"

CanalaveCity_EventScript_PtNpc4::
	msgbox CanalaveCity_Text_PtNpc4, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc4:
	.string "I'm going to study at the library.\p"
	.string "I've taken an interest in the subject\n"
	.string "of time and space.$"

CanalaveCity_EventScript_PtNpc5::
	msgbox CanalaveCity_Text_PtNpc5, MSGBOX_NPC
	end

CanalaveCity_Text_PtNpc5:
	.string "The Gym Leader and Trainers of this\n"
	.string "Gym often go out to Iron Island.\p"
	.string "They not only train their POKéMON, but\n"
	.string "they work out as well.$"

CanalaveCity_EventScript_PtSign1::
	msgbox CanalaveCity_Text_PtSign1, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign1:
	.string "CANALAVE Library$"

CanalaveCity_EventScript_PtSign2::
	msgbox CanalaveCity_Text_PtSign2, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign2:
	.string "CANALAVE CITY POKéMON Gym Leader:\n"
	.string "BYRON The Man with the Steel Body!$"

CanalaveCity_EventScript_PtSign3::
	msgbox CanalaveCity_Text_PtSign3, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign3:
	.string "CANALAVE Dock$"

CanalaveCity_EventScript_PtSign4::
	msgbox CanalaveCity_Text_PtSign4, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign4:
	.string "CANALAVE CITY Cargo Port$"

CanalaveCity_EventScript_PtSign5::
	msgbox CanalaveCity_Text_PtSign5, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign5:
	.string "Sailor Eldritch's House$"

CanalaveCity_EventScript_PtSign6::
	msgbox CanalaveCity_Text_PtSign6, MSGBOX_SIGN
	end

CanalaveCity_Text_PtSign6:
	.string "Harbor Inn A Roost for Restless\n"
	.string "Sailors “Enjoy sweet dreams in our\l"
	.string "sumptuous beds!”$"

CanalaveCity_Text_SailorAllAboard:
	.string "All right! All aboard!$"

CanalaveCity_Text_PtNpc6_0:
	.string "PSYDUCK: Gua?$"

CanalaveCity_Text_PtNpc6_1:
	.string "PSYDUCK: Gua! Gua! Gwa? Guaa!\n"
	.string "Guuagwa?!$"

CanalaveCity_EventScript_PtNpc6::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_4, CanalaveCity_EventScript_PtNpc6_PsyduckCryGuaagwa
	msgbox CanalaveCity_Text_PtNpc6_0, MSGBOX_DEFAULT
	goto CanalaveCity_EventScript_PtNpc6_NPCEnd

CanalaveCity_EventScript_PtNpc6_PsyduckCryGuaagwa:
	msgbox CanalaveCity_Text_PtNpc6_1, MSGBOX_DEFAULT
	goto CanalaveCity_EventScript_PtNpc6_NPCEnd

CanalaveCity_EventScript_PtNpc6_NPCEnd:
	release
	end

CanalaveCity_EventScript_SailorEldritch::
	lock
	faceplayer
	msgbox CanalaveCity_Text_DoYouWannaSetSail, MSGBOX_DEFAULT
	dynmultipush CanalaveCity_Text_DestIronIsland, 0
	goto_if_unset FLAG_SYS_GAME_CLEAR, CanalaveCity_EventScript_SailorMenu
	dynmultipush CanalaveCity_Text_DestFullmoon, 1
	dynmultipush CanalaveCity_Text_DestNewmoon, 2
CanalaveCity_EventScript_SailorMenu:
	dynmultipush CanalaveCity_Text_DestCancel, 3
	dynmultistack 0, 0, FALSE, 4, FALSE, 0, DYN_MULTICHOICE_CB_NONE
	switch VAR_RESULT
	case 0, CanalaveCity_EventScript_SailIronIsland
	case 1, CanalaveCity_EventScript_SailFullmoon
	case 2, CanalaveCity_EventScript_SailNewmoon
	msgbox CanalaveCity_Text_TellWheneverSetSail, MSGBOX_DEFAULT
	release
	end

CanalaveCity_EventScript_SailIronIsland:
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_IRON_ISLAND, 4, 22
	waitstate
	release
	end

CanalaveCity_EventScript_SailFullmoon:
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_FULLMOON_ISLAND, 8, 20
	waitstate
	release
	end

CanalaveCity_EventScript_SailNewmoon:
	msgbox CanalaveCity_Text_SailorAllAboard, MSGBOX_DEFAULT
	closemessage
	warp MAP_NEWMOON_ISLAND, 23, 20
	waitstate
	release
	end

CanalaveCity_Text_DestIronIsland:
	.string "IRON ISLAND$"

CanalaveCity_Text_DestFullmoon:
	.string "FULLMOON ISLAND$"

CanalaveCity_Text_DestNewmoon:
	.string "NEWMOON ISLAND$"

CanalaveCity_Text_DestCancel:
	.string "CANCEL$"
CanalaveCity_Text_DoYouWannaSetSail:
	.string "Ahoy! I’m Eldritch, a sailor. Do you\n"
	.string "wanna set sail?$"

CanalaveCity_Text_TellWheneverSetSail:
	.string "You just tell me whenever you need to\n"
	.string "set sail!$"

CanalaveCity_OnTransitionSN:
	call CanalaveCity_EventScript_SNVis_CANAL_BARRY
	end

CanalaveCity_EventScript_SNVis_CANAL_BARRY:
	setflag FLAG_SN_HIDE_CANAL_BARRY
	goto_if_defeated TRAINER_ELLIOT_5, CanalaveCity_EventScript_SNVis_CANAL_BARRY_End
	goto_if_defeated TRAINER_BENJAMIN_1, CanalaveCity_EventScript_SNVis_CANAL_BARRY_End
	goto_if_defeated TRAINER_BENJAMIN_2, CanalaveCity_EventScript_SNVis_CANAL_BARRY_End
	clearflag FLAG_SN_HIDE_CANAL_BARRY
CanalaveCity_EventScript_SNVis_CANAL_BARRY_End:
	return

CanalaveCity_EventScript_SNBarry::
	lock
	faceplayer
	checkitem ITEM_HM_STRENGTH
	goto_if_eq VAR_RESULT, FALSE, CanalaveCity_EventScript_SNBarry_NoHM
	msgbox CanalaveCity_EventScript_SNBarry_Intro, MSGBOX_DEFAULT
	closemessage
	switch VAR_STARTER_MON
	case 0, CanalaveCity_EventScript_SNBarry_B0
	case 1, CanalaveCity_EventScript_SNBarry_B1
	case 2, CanalaveCity_EventScript_SNBarry_B2
CanalaveCity_EventScript_SNBarry_B0:
	trainerbattle_no_intro TRAINER_ELLIOT_5, CanalaveCity_EventScript_SNBarry_Defeat
	goto CanalaveCity_EventScript_SNBarry_After
CanalaveCity_EventScript_SNBarry_B1:
	trainerbattle_no_intro TRAINER_BENJAMIN_1, CanalaveCity_EventScript_SNBarry_Defeat
	goto CanalaveCity_EventScript_SNBarry_After
CanalaveCity_EventScript_SNBarry_B2:
	trainerbattle_no_intro TRAINER_BENJAMIN_2, CanalaveCity_EventScript_SNBarry_Defeat
	goto CanalaveCity_EventScript_SNBarry_After
CanalaveCity_EventScript_SNBarry_After:
	msgbox CanalaveCity_EventScript_SNBarry_Post, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_CANAL_BARRY
	fadescreen FADE_FROM_BLACK
	release
	end

CanalaveCity_EventScript_SNBarry_NoHM:
	msgbox CanalaveCity_EventScript_SNBarry_NoHMT, MSGBOX_DEFAULT
	release
	end
CanalaveCity_EventScript_SNBarry_Intro:
	.string "BARRY: Whoops! Hey, {PLAYER}!\p"
	.string "You’re going to challenge the Gym\n"
	.string "Leader up past here, eh?\p"
	.string "Someone should check to see if you’re\n"
	.string "ready for this challenge!\p"
	.string "That someone is me! With my brand-new\n"
	.string "Gym Badge!$"

CanalaveCity_EventScript_SNBarry_Defeat:
	.string "BARRY: Argh! Not again!$"

CanalaveCity_EventScript_SNBarry_Post:
	.string "BARRY: Yeah, yeah, you’re just a bit\n"
	.string "better than me, as usual.\p"
	.string "But listen up!\p"
	.string "Let me tell you who’s going to take on\n"
	.string "the POKéMON League and become the\p"
	.string "Champion.\p"
	.string "You guessed right! It’s going to be me!\p"
	.string "Anyway, you should go to Iron Island\n"
	.string "and toughen up some more.\p"
	.string "Yeah, train at Iron Island! That’s what\n"
	.string "I did before going to the Gym!$"

CanalaveCity_EventScript_SNBarry_NoHMT:
	.string "BARRY: Hey, you’re here! Finally!\p"
	.string "Oh, but what the...\p"
	.string "Aww, you haven’t gone to Iron Island,\n"
	.string "have you?\p"
	.string "You didn’t get the HM Strength, did\n"
	.string "you?\p"
	.string "Aww, sheesh! I’ll wait here for you!\n"
	.string "Hurry up and go already!$"


