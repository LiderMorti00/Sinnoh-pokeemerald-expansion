Route207_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route207_OnTransitionSN
	.byte 0

Route207_EventScript_Anthony::
	trainerbattle_single TRAINER_MATT, Route207_Text_AnthonyIntro, Route207_Text_AnthonyDefeat
	msgbox Route207_Text_AnthonyPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_AnthonyIntro:
	.string "Go for it, my POKéMON! I'll do my best,\n"
	.string "too!$"

Route207_Text_AnthonyDefeat:
	.string "Oh... We lost...$"

Route207_Text_AnthonyPost:
	.string "Dig for Fossils in the UNDERGROUND.\p"
	.string "The mining museum might be able to\n"
	.string "bring back the ancient POKéMON!$"

Route207_EventScript_Lauren::
	trainerbattle_single TRAINER_SHELLY_WEATHER_INSTITUTE, Route207_Text_LaurenIntro, Route207_Text_LaurenDefeat
	msgbox Route207_Text_LaurenPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_LaurenIntro:
	.string "Go do it, my POKéMON! I'll work hard,\n"
	.string "too!$"

Route207_Text_LaurenDefeat:
	.string "Oh... We lost...$"

Route207_Text_LaurenPost:
	.string "I think we'll visit the TV station in\n"
	.string "JUBILIFE CITY next.\p"
	.string "Or maybe we should go to the Global\n"
	.string "Terminal?$"

Route207_EventScript_Austin::
	trainerbattle_single TRAINER_SHELLY_SEAFLOOR_CAVERN, Route207_Text_AustinIntro, Route207_Text_AustinDefeat
	msgbox Route207_Text_AustinPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_AustinIntro:
	.string "I wear shorts the whole year! I've got\n"
	.string "energy to burn!$"

Route207_Text_AustinDefeat:
	.string "I couldn't win with just energy...\n"
	.string "Nothing's really that easy!$"

Route207_Text_AustinPost:
	.string "POKéMON don't wear clothes. I worry\n"
	.string "about them getting cold.$"

Route207_EventScript_Justin::
	trainerbattle_single TRAINER_ARCHIE, Route207_Text_JustinIntro, Route207_Text_JustinDefeat
	msgbox Route207_Text_JustinPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_JustinIntro:
	.string "I just got through MT. CORONET, but\n"
	.string "I've still got energy to burn!$"

Route207_Text_JustinDefeat:
	.string "Whoops! Taken down easily!$"

Route207_Text_JustinPost:
	.string "We need to rest up in OREBURGH CITY\n"
	.string "before heading to MT. CORONET again.$"

Route207_EventScript_Kevin::
	trainerbattle_single TRAINER_VINCENT, Route207_Text_KevinIntro, Route207_Text_KevinDefeat
	msgbox Route207_Text_KevinPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_KevinIntro:
	.string "Wahaha! Laughter brings good\n"
	.string "fortune!$"

Route207_Text_KevinDefeat:
	.string "Wahahaha! There's nothing that I can\n"
	.string "do but laugh!$"

Route207_Text_KevinPost:
	.string "Wahahahaha! ...Go ahead, laugh at\n"
	.string "me--the loser!$"

Route207_EventScript_Helen::
	trainerbattle_single TRAINER_LEROY, Route207_Text_HelenIntro, Route207_Text_HelenDefeat
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route207_EventScript_Helen_Rematch
	msgbox Route207_Text_HelenPost, MSGBOX_AUTOCLOSE
	end

Route207_EventScript_Helen_Rematch:
	trainerbattle_rematch TRAINER_LEROY, Route207_Text_HelenIntro, Route207_Text_HelenDefeat
	msgbox Route207_Text_HelenPost, MSGBOX_AUTOCLOSE
	end

Route207_Text_HelenIntro:
	.string "OK, OK! Let's be quick about this!$"

Route207_Text_HelenDefeat:
	.string "Oh, yeah? Let's do this again! ...Oops.\n"
	.string "I'm out of POKéMON!$"

Route207_Text_HelenPost:
	.string "Yup! Good going! I like the way you\n"
	.string "battle!$"

Route207_EventScript_PtNpc1::
	msgbox Route207_Text_PtNpc1, MSGBOX_NPC
	end

Route207_Text_PtNpc1:
	.string "That slope's too slippery. You'll need\n"
	.string "a Bike to get up.\p"
	.string "You don't have a Bicycle? There's a\n"
	.string "Cycle Shop in ETERNA CITY.$"

Route207_EventScript_PtSign1::
	msgbox Route207_Text_PtSign1, MSGBOX_SIGN
	end

Route207_Text_PtSign1:
	.string "Rt. 207 OREBURGH CITY$"

Route207_EventScript_PtSign2::
	msgbox Route207_Text_PtSign2, MSGBOX_SIGN
	end

Route207_Text_PtSign2:
	.string "Rt. 207 MT. CORONET$"

Route207_EventScript_PtSign3::
	msgbox Route207_Text_PtSign3, MSGBOX_SIGN
	end

Route207_Text_PtSign3:
	.string "Trainer Tips POKéMON may become\n"
	.string "immobilized if they are asleep or\l"
	.string "paralyzed.\p"
	.string "If it happens to your POKéMON, it\n"
	.string "could be disastrous.\p"
	.string "If your opponent's POKéMON can't\n"
	.string "move, it's a big opportunity!$"

Route207_OnTransitionSN:
	call Route207_EventScript_SNGfx
	call Route207_EventScript_SNVis_R207_COUNTERPART
	end

Route207_EventScript_SNGfx:
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route207_EventScript_SNGfxDawn
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	return
Route207_EventScript_SNGfxDawn:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	return

Route207_EventScript_SNVis_R207_COUNTERPART:
	setflag FLAG_SN_HIDE_R207_COUNTERPART
	goto_if_unset FLAG_BADGE02_GET, Route207_EventScript_SNVis_R207_COUNTERPART_End
	goto_if_set FLAG_SN_RECEIVED_VS_SEEKER, Route207_EventScript_SNVis_R207_COUNTERPART_End
	clearflag FLAG_SN_HIDE_R207_COUNTERPART
Route207_EventScript_SNVis_R207_COUNTERPART_End:
	return

Route207_EventScript_SNCounterpart::
	lock
	faceplayer
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, Route207_EventScript_SNCounterpart_Lucas
	msgbox Route207_EventScript_SNCounterpart_D1, MSGBOX_DEFAULT
	giveitem ITEM_VS_SEEKER
	giveitem ITEM_DOWSING_MACHINE
	msgbox Route207_EventScript_SNCounterpart_D2, MSGBOX_DEFAULT
	goto Route207_EventScript_SNCounterpart_End
Route207_EventScript_SNCounterpart_Lucas:
	msgbox Route207_EventScript_SNCounterpart_L1, MSGBOX_DEFAULT
	giveitem ITEM_VS_SEEKER
	giveitem ITEM_DOWSING_MACHINE
	msgbox Route207_EventScript_SNCounterpart_L2, MSGBOX_DEFAULT
Route207_EventScript_SNCounterpart_End:
	setflag FLAG_SN_RECEIVED_VS_SEEKER
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	setflag FLAG_SN_HIDE_R207_COUNTERPART
	fadescreen FADE_FROM_BLACK
	release
	end
Route207_EventScript_SNCounterpart_D1:
	.string "Dawn: I see... You want the Vs. Seeker.\p"
	.string "I’m impressed, {PLAYER}. You know what’s\n"
	.string "important.$"

Route207_EventScript_SNCounterpart_D2:
	.string "Dawn: Using that Vs. Seeker, you can\n"
	.string "find Trainers who want a rematch\p"
	.string "with you.\p"
	.string "Oh, {PLAYER}, do you also have a\n"
	.string "POKéTCH?\p"
	.string "Yup, you do. You can have this too,\n"
	.string "then.\p"
	.string "You deserve it for all your hard work,\n"
	.string "{PLAYER}.$"

Route207_EventScript_SNCounterpart_L1:
	.string "Lucas: Oh yeah. You want the Vs.\n"
	.string "Seeker.\p"
	.string "Yup, {PLAYER}, you know what’s\n"
	.string "important.$"

Route207_EventScript_SNCounterpart_L2:
	.string "Lucas: Using that Vs. Seeker, you can\n"
	.string "find Trainers who want to battle with\p"
	.string "you again.\p"
	.string "{PLAYER}, what about a POKéTCH? Do you\n"
	.string "have one?\p"
	.string "Yup, you do. You can have this too,\n"
	.string "then.\p"
	.string "You deserve it for all of your effort,\n"
	.string "{PLAYER}.$"

Route207_EventScript_SNHoneyTree::
	lock
	goto_if_ne VAR_SN_HONEY_TREE, 4, Route207_EventScript_SNHoneyTree_Fresh
	special SinnohHoneyReady
	goto_if_eq VAR_RESULT, TRUE, Route207_EventScript_SNHoneyTree_Battle
	msgbox SN_HoneyTree_Text_Wait, MSGBOX_DEFAULT
	release
	end
Route207_EventScript_SNHoneyTree_Battle:
	setvar VAR_SN_HONEY_TREE, 0
	setwildbattle SPECIES_WURMPLE, 5
	special SinnohHoneyTreeMon
	msgbox SN_HoneyTree_Text_Mon, MSGBOX_DEFAULT
	closemessage
	dowildbattle
	release
	end
Route207_EventScript_SNHoneyTree_Fresh:
	msgbox SN_HoneyTree_Text_Scent, MSGBOX_DEFAULT
	checkitem ITEM_HONEY
	goto_if_eq VAR_RESULT, FALSE, Route207_EventScript_SNHoneyTree_End
	msgbox SN_HoneyTree_Text_Ask, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, Route207_EventScript_SNHoneyTree_End
	removeitem ITEM_HONEY
	setvar VAR_SN_HONEY_TREE, 4
	special SinnohHoneySlather
	msgbox SN_HoneyTree_Text_Done, MSGBOX_DEFAULT
Route207_EventScript_SNHoneyTree_End:
	release
	end
