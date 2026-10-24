FightArea_MapScripts::
	.byte 0

FightArea_EventScript_PtNpc1::
	msgbox FightArea_Text_PtNpc1, MSGBOX_NPC
	end

FightArea_Text_PtNpc1:
	.string "Whenever I go to a new place, I get\n"
	.string "excited over what I might discover.\p"
	.string "But places I've visited before...\p"
	.string "Even those places thrill me with new\n"
	.string "discoveries!$"

FightArea_EventScript_PtNpc2::
	msgbox FightArea_Text_PtNpc2, MSGBOX_NPC
	end

FightArea_Text_PtNpc2:
	.string "Because of the volcano, the land\n"
	.string "around here is craggy.\p"
	.string "The rough terrain and all the ups and\n"
	.string "downs make it hard to hike.$"

FightArea_EventScript_PtNpc3::
	msgbox FightArea_Text_PtNpc3, MSGBOX_NPC
	end

FightArea_Text_PtNpc3:
	.string "The way the Battle Tower looms...\p"
	.string "It really is a wall that stands before\n"
	.string "every Trainer.$"

FightArea_EventScript_PtNpc4::
	msgbox FightArea_Text_PtNpc4, MSGBOX_NPC
	end

FightArea_Text_PtNpc4:
	.string "I've battled many Trainers over the\n"
	.string "years.\p"
	.string "I've gained some confidence in my\n"
	.string "skill levels, too.\p"
	.string "But the world is still a huge place.\n"
	.string "It's not easy to win in life!$"

FightArea_EventScript_PtNpc5::
	msgbox FightArea_Text_PtNpc5, MSGBOX_NPC
	end

FightArea_Text_PtNpc5:
	.string "The POKéMON LEAGUE's Elite Four come\n"
	.string "here sometimes!$"

FightArea_EventScript_PtNpc6::
	msgbox FightArea_Text_PtNpc6, MSGBOX_NPC
	end

FightArea_Text_PtNpc6:
	.string "Your POKéMON are from SINNOH, aren't\n"
	.string "they?\p"
	.string "They're not what we're used to seeing\n"
	.string "around here.$"

FightArea_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox FightArea_Text_PtNpc7, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, FightArea_EventScript_PtNpc7_No
	msgbox FightArea_Text_PtNpc7_Yes, MSGBOX_DEFAULT
	release
	end

FightArea_EventScript_PtNpc7_No:
	msgbox FightArea_Text_PtNpc7_No, MSGBOX_DEFAULT
	release
	end

FightArea_Text_PtNpc7:
	.string "What's up? Do you want to sail to\n"
	.string "SNOWPOINT CITY?$"

FightArea_Text_PtNpc7_Yes:
	.string "Aye, right! It's anchors aweigh, then!$"

FightArea_Text_PtNpc7_No:
	.string "Oh, right. You'd rather just fly\n"
	.string "everywhere in some big hurry.$"

FightArea_EventScript_PtNpc8::
	msgbox FightArea_Text_PtNpc8, MSGBOX_NPC
	end

FightArea_Text_PtNpc8:
	.string "There's no end to becoming tough!\p"
	.string "I just made that up, but it sounds\n"
	.string "kind of cool, huh?$"
