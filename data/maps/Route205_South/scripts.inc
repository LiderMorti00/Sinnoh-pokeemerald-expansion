Route205_South_MapScripts::
	.byte 0

Route205_South_EventScript_Daniel::
	trainerbattle_single TRAINER_LEAH, Route205_South_Text_DanielIntro, Route205_South_Text_DanielDefeat
	msgbox Route205_South_Text_DanielPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_DanielIntro:
	.string "My GEODUDE are rock solid!$"

Route205_South_Text_DanielDefeat:
	.string "Crumbled...$"

Route205_South_Text_DanielPost:
	.string "ETERNA FOREST is thick with trees.\n"
	.string "Don't get lost!$"

Route205_South_EventScript_Elizabeth::
	trainerbattle_single TRAINER_FELIX, Route205_South_Text_ElizabethIntro, Route205_South_Text_ElizabethDefeat
	msgbox Route205_South_Text_ElizabethPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_ElizabethIntro:
	.string "ROSELIA's scent is heavenly. Care\n"
	.string "to battle?$"

Route205_South_Text_ElizabethDefeat:
	.string "Oh my.$"

Route205_South_Text_ElizabethPost:
	.string "Flowers and POKéMON go so well\n"
	.string "together.$"

Route205_South_EventScript_Jacob::
	trainerbattle_single TRAINER_VIOLET, Route205_South_Text_JacobIntro, Route205_South_Text_JacobDefeat
	msgbox Route205_South_Text_JacobPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_JacobIntro:
	.string "My PONYTA runs faster than the\n"
	.string "wind!$"

Route205_South_Text_JacobDefeat:
	.string "Outrun!$"

Route205_South_Text_JacobPost:
	.string "I'm camping by the river tonight.$"

Route205_South_EventScript_Siena::
	trainerbattle_single TRAINER_CHIP, Route205_South_Text_SienaIntro, Route205_South_Text_SienaDefeat
	msgbox Route205_South_Text_SienaPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_SienaIntro:
	.string "I'm having a picnic! Want to\n"
	.string "battle first?$"

Route205_South_Text_SienaDefeat:
	.string "Lost my appetite...$"

Route205_South_Text_SienaPost:
	.string "The river here is so relaxing.$"

Route205_South_EventScript_Nicholas::
	trainerbattle_single TRAINER_FOSTER, Route205_South_Text_NicholasIntro, Route205_South_Text_NicholasDefeat
	msgbox Route205_South_Text_NicholasPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_NicholasIntro:
	.string "ONIX and I climb mountains\n"
	.string "together!$"

Route205_South_Text_NicholasDefeat:
	.string "Tumbled down...$"

Route205_South_Text_NicholasPost:
	.string "MT. CORONET is huge. You'll see it\n"
	.string "from ETERNA.$"

Route205_South_EventScript_Kelsey::
	trainerbattle_single TRAINER_AUSTINA, Route205_South_Text_KelseyIntro, Route205_South_Text_KelseyDefeat
	msgbox Route205_South_Text_KelseyPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_KelseyIntro:
	.string "My MACHOP and I train every day!\n"
	.string "Hi-yah!$"

Route205_South_Text_KelseyDefeat:
	.string "Knocked out!$"

Route205_South_Text_KelseyPost:
	.string "Training never ends!$"

Route205_South_EventScript_Karina::
	trainerbattle_single TRAINER_GWEN, Route205_South_Text_KarinaIntro, Route205_South_Text_KarinaDefeat
	msgbox Route205_South_Text_KarinaPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_KarinaIntro:
	.string "PIPLUP loves playing in the river!$"

Route205_South_Text_KarinaDefeat:
	.string "Splashed!$"

Route205_South_Text_KarinaPost:
	.string "PIPLUP is a proud little POKéMON.$"

Route205_South_EventScript_Zackary::
	trainerbattle_single TRAINER_SIMON, Route205_South_Text_ZackaryIntro, Route205_South_Text_ZackaryDefeat
	msgbox Route205_South_Text_ZackaryPost, MSGBOX_AUTOCLOSE
	end

Route205_South_Text_ZackaryIntro:
	.string "AIPOM swings from the trees here!$"

Route205_South_Text_ZackaryDefeat:
	.string "Swung and missed!$"

Route205_South_Text_ZackaryPost:
	.string "AIPOM's tail is like a hand. Neat,\n"
	.string "huh?$"

Route205_South_EventScript_BridgeGrunts::
	msgbox Route205_South_Text_BridgeGrunts, MSGBOX_NPC
	end

Route205_South_EventScript_BridgeBlock::
	lockall
	msgbox Route205_South_Text_BridgeBlock, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

Route205_South_EventScript_Girl::
	msgbox Route205_South_Text_Girl, MSGBOX_NPC
	end

Route205_South_Text_BridgeGrunts:
	.string "GRUNT: Nobody crosses this bridge\n"
	.string "while TEAM GALACTIC is working at\l"
	.string "the WINDWORKS!$"

Route205_South_Text_BridgeBlock:
	.string "TEAM GALACTIC GRUNTS are blocking\n"
	.string "the way north. I can't get past\l"
	.string "them.$"

Route205_South_Text_Girl:
	.string "Please help! Scary people in\n"
	.string "strange clothes took over the\l"
	.string "VALLEY WINDWORKS!\p"
	.string "My papa is still inside! The\n"
	.string "WINDWORKS is to the east. Please\l"
	.string "save him!$"

Route205_South_EventScript_PtNpc1::
	msgbox Route205_South_Text_PtNpc1, MSGBOX_NPC
	end

Route205_South_Text_PtNpc1:
	.string "I caught a WURMPLE in ETERNA\n"
	.string "FOREST! The forest is north of the\l"
	.string "bridge.$"

Route205_South_EventScript_GirlScene::
	lockall
	applymovement LOCALID_ROUTE205_GIRL, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox Route205_South_Text_Girl, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_HIDE_FLOAROMA_GRUNTS
	clearflag FLAG_HIDE_MEADOW_GRUNTS
	setvar VAR_SINNOH_STORY, 21
	releaseall
	end

Route205_South_EventScript_Sign5::
	msgbox Route205_South_Text_Sign5, MSGBOX_SIGN
	end

Route205_South_Text_Sign5:
	.string "ROUTE 205\p"
	.string "FLOAROMA TOWN / ETERNA FOREST$"

Route205_South_EventScript_Sign1::
	msgbox Route205_South_Text_Sign1, MSGBOX_SIGN
	end

Route205_South_Text_Sign1:
	.string "ROUTE 205\p"
	.string "FLOAROMA TOWN / ETERNA FOREST$"

Route205_South_EventScript_Sign2::
	msgbox Route205_South_Text_Sign2, MSGBOX_SIGN
	end

Route205_South_Text_Sign2:
	.string "TRAINER TIPS\p"
	.string "Some trees can be cut down with\n"
	.string "the HM move CUT.$"

Route205_South_EventScript_Sign4::
	msgbox Route205_South_Text_Sign4, MSGBOX_SIGN
	end

Route205_South_Text_Sign4:
	.string "ROUTE 205$"

Route205_South_EventScript_Sign3::
	msgbox Route205_South_Text_Sign3, MSGBOX_SIGN
	end

Route205_South_Text_Sign3:
	.string "ROUTE 205\p"
	.string "FLOAROMA TOWN / ETERNA FOREST$"
