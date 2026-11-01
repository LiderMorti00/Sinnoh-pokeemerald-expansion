Route218_East_MapScripts::
	.byte 0

Route218_East_EventScript_PtNpc1::
	msgbox Route218_East_Text_PtNpc1, MSGBOX_NPC
	end

Route218_East_Text_PtNpc1:
	.string "Boy... I sure am thirsty...$"

Route218_East_Text_PtNpc2:
	.string "You should fish wherever there is a\n"
	.string "body of water.\p"
	.string "Oh, and by the way, did you need any\n"
	.string "tips on using that fishing rod?$"

Route218_East_EventScript_PtNpc2::
	msgbox Route218_East_Text_PtNpc2, MSGBOX_NPC
	end

Route218_East_EventScript_SNFisher::
	lock
	faceplayer
	goto_if_set FLAG_SN_RECEIVED_OLD_ROD, Route218_East_EventScript_SNFisher_Done
	msgbox Route218_East_EventScript_SNFisher_Ask, MSGBOX_YESNO
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_SN_RECEIVED_OLD_ROD
Route218_East_EventScript_SNFisher_Done:
	msgbox Route218_East_EventScript_SNFisher_After, MSGBOX_DEFAULT
	release
	end
Route218_East_EventScript_SNFisher_Ask:
	.string "Yes, sir! An Old Rod is a good thing!\p"
	.string "You think so too, am I right?$"

Route218_East_EventScript_SNFisher_After:
	.string "First, you face any body of water, then\n"
	.string "you use your fishing rod.\p"
	.string "Next, you focus! If a POKéMON bites,\n"
	.string "“!” appears.\p"
	.string "That’s your cue to reel it in!$"
