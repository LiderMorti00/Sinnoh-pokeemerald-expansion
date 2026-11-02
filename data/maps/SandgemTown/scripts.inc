SandgemTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SandgemTown_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SandgemTown_OnFrame
	.byte 0

SandgemTown_OnFrame:
	map_script_2 VAR_SINNOH_STORY, 9, SandgemTown_EventScript_Rowan
	.2byte 0

SandgemTown_OnTransition:
	call_if_eq VAR_SINNOH_HAS_POKEMON, 1, Sinnoh_EventScript_SetPokemonMenu
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, SandgemTown_EventScript_SetDawnGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

SandgemTown_EventScript_SetDawnGfx::
	checkplayergender
	goto_if_eq VAR_RESULT, FEMALE, SandgemTown_EventScript_SetLucasGfx
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_DAWN
	end
SandgemTown_EventScript_SetLucasGfx:
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_SINNOH_LUCAS
	end

SandgemTown_EventScript_Escort::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 7, SandgemTown_EventScript_EscortEnd
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_SANDGEM_DAWN, Common_Movement_ExclamationMark
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_Text_Dawn_ScrD
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_Dawn_ScrL
	closemessage
	applymovement LOCALID_SANDGEM_DAWN, SandgemTown_Movement_DawnToLab
	waitmovement 0
	getplayerxy VAR_0x8004, VAR_0x8005
	call_if_eq VAR_0x8005, 9, SandgemTown_EventScript_PlayerWalk9
	call_if_eq VAR_0x8005, 10, SandgemTown_EventScript_PlayerWalk10
	call_if_eq VAR_0x8005, 11, SandgemTown_EventScript_PlayerWalk11
	call_if_eq VAR_0x8005, 12, SandgemTown_EventScript_PlayerWalk12
	call_if_eq VAR_0x8005, 13, SandgemTown_EventScript_PlayerWalk13
	applymovement LOCALID_SANDGEM_DAWN, Common_Movement_FaceRight
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
	waitmovement 0
	clearflag FLAG_HIDE_SANDGEM_BARRY
	addobject LOCALID_SANDGEM_BARRY
	playse SE_DOOR
	applymovement LOCALID_SANDGEM_BARRY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox SandgemTown_Text_Barry, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SANDGEM_BARRY, SandgemTown_Movement_BarryRuns
	waitmovement 0
	removeobject LOCALID_SANDGEM_BARRY
	setflag FLAG_HIDE_SANDGEM_BARRY
	call Sinnoh_EventScript_BufferCounterpartName
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_Text_DawnGoIn_ScrD
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_DawnGoIn_ScrL
	closemessage
	applymovement LOCALID_SANDGEM_DAWN, SandgemTown_Movement_DawnEnters
	waitmovement 0
	playse SE_DOOR
	removeobject LOCALID_SANDGEM_DAWN
	setflag FLAG_HIDE_SANDGEM_DAWN
	setvar VAR_SINNOH_STORY, 8
SandgemTown_EventScript_EscortEnd::
	releaseall
	end

SandgemTown_EventScript_PlayerWalk9::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab9
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk10::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab10
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk11::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab11
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk12::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab12
	waitmovement 0
	return

SandgemTown_EventScript_PlayerWalk13::
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerToLab13
	waitmovement 0
	return

SandgemTown_EventScript_Rowan::
	lockall
	goto_if_ne VAR_SINNOH_STORY, 9, SandgemTown_EventScript_RowanEnd
	call Sinnoh_EventScript_BufferCounterpartName
	applymovement LOCALID_PLAYER, SandgemTown_Movement_PlayerStepBack
	waitmovement 0
	clearflag FLAG_HIDE_SANDGEM_ROWAN
	addobject LOCALID_SANDGEM_ROWAN
	playse SE_DOOR
	applymovement LOCALID_SANDGEM_ROWAN, SandgemTown_Movement_RowanExits
	waitmovement 0
	addobject LOCALID_SANDGEM_DAWN2
	playse SE_DOOR
	applymovement LOCALID_SANDGEM_DAWN2, Common_Movement_WalkDown
	waitmovement 0
	applymovement LOCALID_SANDGEM_ROWAN, Common_Movement_FaceLeft
	waitmovement 0
	msgbox SandgemTown_Text_Rowan, MSGBOX_DEFAULT
	giveitem ITEM_TM_RETURN
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_Text_Rowan2_ScrD
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_Rowan2_ScrL
	closemessage
	applymovement LOCALID_SANDGEM_ROWAN, SandgemTown_Movement_RowanLeaves
	waitmovement 0
	removeobject LOCALID_SANDGEM_ROWAN
	applymovement LOCALID_SANDGEM_DAWN2, SandgemTown_Movement_DawnTour
	waitmovement 0
	applymovement LOCALID_SANDGEM_DAWN2, Common_Movement_FaceUp
	waitmovement 0
	checkplayergender
	call_if_eq VAR_RESULT, MALE, SandgemTown_Text_Dawn2_ScrD
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_Dawn2_ScrL
	closemessage
	applymovement LOCALID_SANDGEM_DAWN2, SandgemTown_Movement_DawnLeaves
	waitmovement 0
	removeobject LOCALID_SANDGEM_DAWN2
	setflag FLAG_HIDE_SANDGEM_ROWAN
	clearflag FLAG_HIDE_HOME_BARRYS_MOM
	setvar VAR_SINNOH_STORY, 10
SandgemTown_EventScript_RowanEnd::
	releaseall
	end

SandgemTown_EventScript_BlockNorth::
	lockall
	goto_if_eq VAR_SINNOH_STORY, 10, SandgemTown_EventScript_BlockNorthMom
	msgbox SandgemTown_Text_LabFirst, MSGBOX_DEFAULT
	goto SandgemTown_EventScript_BlockNorthEnd
SandgemTown_EventScript_BlockNorthMom::
	msgbox SandgemTown_Text_TellMom, MSGBOX_DEFAULT
SandgemTown_EventScript_BlockNorthEnd::
	closemessage
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
	end

SandgemTown_Text_Dawn:
	.string "{STR_VAR_1}: Oh! There you are! Please,\n"
	.string "come with me!\p"
	.string "The professor is waiting!\p"
	.string "This is it! Our POKéMON Research Lab!\p"
	.string "Let’s go...$"

SandgemTown_Text_Barry:
	.string "{RIVAL}: What the...\p"
	.string "Oh, it’s you, {PLAYER}!\p"
	.string "That old guy... He’s not scary so much\n"
	.string "as he is totally out there!\p"
	.string "Aww, it doesn’t matter, {PLAYER}. I’m out\n"
	.string "of here. See you later!$"

SandgemTown_Text_Rowan:
	.string "Rowan: I have something good here. You\n"
	.string "should take this as well.\p"
	.string "Rowan: That is a Technical Machine.\n"
	.string "That one contains the move Return.\p"
	.string "Using a Technical Machine, or TM for\n"
	.string "short, teaches a move instantly to\p"
	.string "a POKéMON.\p"
	.string "Bear in mind, however, that a TM is\n"
	.string "single-use only.\p"
	.string "The move Return gains power the more\n"
	.string "friendly your POKéMON is with you.\p"
	.string "It’s up to you, of course, if you want\n"
	.string "to use that TM or not.\p"
	.string "I’ll send you off with the wish that\n"
	.string "your journey will be fun.$"

SandgemTown_Text_Rowan2:
	.string "{STR_VAR_1}: Oh, wow. I didn’t know the\n"
	.string "professor had TMs.\p"
	.string "Was he a Trainer when he was young...?\p"
	.string "{STR_VAR_1}: OK, {PLAYER}, I’ll act as\n"
	.string "your mentor.\p"
	.string "I’ve got a bit more experience than you\n"
	.string "as a Trainer and as the professor’s\p"
	.string "assistant.\p"
	.string "OK, follow me!$"

SandgemTown_Text_Dawn2:
	.string "{STR_VAR_1}: This building with the red\n"
	.string "roof is the POKéMON Center.\p"
	.string "It’s the place that heals POKéMON that\n"
	.string "have been hurt in battle.\p"
	.string "You can find a POKéMON Center in most\n"
	.string "towns.\p"
	.string "{STR_VAR_1}: The building with the blue\n"
	.string "roof over here is the POKé MART.\p"
	.string "It’s a shop where you can buy and sell\n"
	.string "items and medicine.\p"
	.string "{PLAYER}, since you’re a novice Trainer,\n"
	.string "you won’t be able to buy\p"
	.string "many kinds of merchandise.\p"
	.string "Don’t let it bother you!\p"
	.string "{STR_VAR_1}: Oh, that’s right!\n"
	.string "{PLAYER}...\p"
	.string "Don’t you need to let your family know\n"
	.string "that you’re going to be helping\p"
	.string "Prof. Rowan with the POKéDEX?\p"
	.string "You may need to go far away, so I think\n"
	.string "you should let someone know.\p"
	.string "Oh, but before you go, heal up your\n"
	.string "POKéMON at the POKéMON Center.\p"
	.string "It will be a lot less scary that way. OK,\n"
	.string "bye now!$"

SandgemTown_Text_LabFirst:
	.string "PROFESSOR ROWAN'S lab is right\n"
	.string "here in SANDGEM. I should go there\l"
	.string "first.$"

SandgemTown_Text_TellMom:
	.string "I should go home to TWINLEAF and\n"
	.string "tell Mom about my journey first.$"

SandgemTown_EventScript_Sign6::
	msgbox SandgemTown_Text_Sign6, MSGBOX_SIGN
	end

SandgemTown_Text_Sign6:
	.string "SANDGEM TOWN\p"
	.string "The town of sand and sea.$"

SandgemTown_EventScript_Sign1::
	msgbox SandgemTown_Text_Sign1, MSGBOX_SIGN
	end

SandgemTown_Text_Sign1:
	.string "POKéMON RESEARCH LAB\p"
	.string "Professor Rowan$"

SandgemTown_EventScript_Sign3::
	msgbox SandgemTown_Text_Sign3, MSGBOX_SIGN
	end

SandgemTown_Text_Sign3:
	.string "Welcome! POKéMON CENTER and POKé\n"
	.string "MART are right here in SANDGEM!$"

SandgemTown_EventScript_Sign4::
	msgbox SandgemTown_Text_Sign4, MSGBOX_SIGN
	end

SandgemTown_Text_Sign4:
	.string "TRAINER TIPS\p"
	.string "Heal your POKéMON for free at any\n"
	.string "POKéMON CENTER.$"

SandgemTown_EventScript_Sign2::
	msgbox SandgemTown_Text_Sign2, MSGBOX_SIGN
	end

SandgemTown_Text_Sign2:
	.string "TRAINER TIPS\p"
	.string "Talk to people you meet. They may\n"
	.string "give you useful hints or items!$"

SandgemTown_EventScript_PtNpc1::
	msgbox SandgemTown_Text_PtNpc1, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc1:
	.string "Oh, wow! POKéMON are so cool!\p"
	.string "You can make yours battle and make\n"
	.string "them stronger!\p"
	.string "I wish I had some! It's so cool!$"

SandgemTown_EventScript_PtNpc2::
	msgbox SandgemTown_Text_PtNpc2, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc2:
	.string "That thing you have!\p"
	.string "It's a Pokédex, isn't it?!\p"
	.string "You're off to see all kinds of POKéMON\n"
	.string "now! Lucky you!$"

SandgemTown_EventScript_PtNpc3::
	msgbox SandgemTown_Text_PtNpc3, MSGBOX_NPC
	end

SandgemTown_Text_PtNpc3:
	.string "So I don't forget what's happened, till\n"
	.string "now, I'd better save this...\p"
	.string "There! Now I can take a break.$"

SandgemTown_Movement_DawnToLab:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SandgemTown_Movement_PlayerToLab9:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

SandgemTown_Movement_PlayerToLab10:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

SandgemTown_Movement_PlayerToLab11:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

SandgemTown_Movement_PlayerToLab12:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

SandgemTown_Movement_PlayerToLab13:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

SandgemTown_Movement_BarryRuns:
	walk_fast_right
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

SandgemTown_Movement_DawnEnters:
	walk_up
	walk_right
	walk_up
	step_end

SandgemTown_Movement_RowanLeaves:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SandgemTown_Movement_DawnTour:
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

SandgemTown_Movement_DawnLeaves:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SandgemTown_Text_DawnGoIn:
	.string "{STR_VAR_1}: Wow, what was that?\p"
	.string "Your friend sure seems to be really\n"
	.string "impatient.\p"
	.string "Well, anyway... Let’s go inside.$"

SandgemTown_Movement_PlayerStepBack:
	walk_down
	face_up
	step_end

SandgemTown_Movement_RowanExits:
	walk_down
	walk_right
	step_end

SandgemTown_EventScript_Sign5::
	msgbox SandgemTown_Text_Sign5, MSGBOX_SIGN
	end

SandgemTown_Text_Sign5:
	.string "SANDGEM TOWN\p"
	.string "Shining, shimmering sands.$"

SandgemTown_Text_Dawn_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_Dawn_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, SandgemTown_Text_Dawn_SNDawnCall
	return
SandgemTown_Text_Dawn_ScrL:
	msgbox SandgemTown_Text_Dawn_Lu, MSGBOX_DEFAULT
	return

SandgemTown_Text_Dawn_Lu:
	.string "{STR_VAR_1}: Hi! I’ve been waiting for\n"
	.string "you! Please, come with me.\p"
	.string "The prof’s waiting to see you.\p"
	.string "{STR_VAR_1}: See? This is our POKéMON\n"
	.string "Research Lab.\p"
	.string "We’ll just go ahead and...$"

SandgemTown_Text_DawnGoIn_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_DawnGoIn_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, SandgemTown_Text_DawnGoIn_SNDawnCall
	return
SandgemTown_Text_DawnGoIn_ScrL:
	msgbox SandgemTown_Text_DawnGoIn_Lu, MSGBOX_DEFAULT
	return

SandgemTown_Text_DawnGoIn_Lu:
	.string "{STR_VAR_1}: What was that?!\p"
	.string "Your friend always seems to be in such\n"
	.string "a rush.\p"
	.string "Anyway... Let’s go in.$"

SandgemTown_Text_Rowan2_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_Rowan2_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, SandgemTown_Text_Rowan2_SNDawnCall
	return
SandgemTown_Text_Rowan2_ScrL:
	msgbox SandgemTown_Text_Rowan2_Lu, MSGBOX_DEFAULT
	return

SandgemTown_Text_Rowan2_Lu:
	.string "{STR_VAR_1}: Well, I’ll be... The\n"
	.string "professor had TMs...?\p"
	.string "Next thing, he’ll tell me he battled\n"
	.string "when he was young.\p"
	.string "{STR_VAR_1}: Hey, {PLAYER}! I want to\n"
	.string "show you a few things.\p"
	.string "So, follow me!$"

SandgemTown_Text_Dawn2_ScrD:
	checkplayergender
	call_if_eq VAR_RESULT, FEMALE, SandgemTown_Text_Dawn2_SNLucasCall
	call_if_ne VAR_RESULT, FEMALE, SandgemTown_Text_Dawn2_SNDawnCall
	return
SandgemTown_Text_Dawn2_ScrL:
	msgbox SandgemTown_Text_Dawn2_Lu, MSGBOX_DEFAULT
	return

SandgemTown_Text_Dawn2_Lu:
	.string "{STR_VAR_1}: This building with the red\n"
	.string "roof is the POKéMON Center.\p"
	.string "You can get your POKéMON healed if it’s\n"
	.string "been hurt in battle.\p"
	.string "You’ll find a POKéMON Center in most\n"
	.string "towns.\p"
	.string "{STR_VAR_1}: Over here, the building\n"
	.string "with the blue roof is the POKé MART.\p"
	.string "It’s a shop where you can buy and sell\n"
	.string "all sorts of items.\p"
	.string "{PLAYER}, since you’re a rookie Trainer,\n"
	.string "you won’t be able to buy\p"
	.string "very much stuff.\p"
	.string "Don’t worry about it, OK?\p"
	.string "Oh, yeah, right! {PLAYER}...\p"
	.string "You should let your family know you’re\n"
	.string "helping Prof. Rowan put\p"
	.string "together his POKéDEX.\p"
	.string "Sometimes, you have to go far away, so\n"
	.string "you should let someone know.\p"
	.string "Oh, but first, go heal up your POKéMON\n"
	.string "at the POKéMON Center.\p"
	.string "You’ll be safe then. OK, be seeing you!$"

SandgemTown_Text_Dawn_SNDawnCall:
	msgbox SandgemTown_Text_Dawn, MSGBOX_DEFAULT
	return

SandgemTown_Text_Dawn_SNLucasCall:
	msgbox SandgemTown_Text_Dawn_SNLu, MSGBOX_DEFAULT
	return

SandgemTown_Text_Dawn_SNLu:
	.string "{STR_VAR_1}: Hi! I’ve been waiting for\n"
	.string "you! Please, come with me.\p"
	.string "The prof’s waiting to see you.\p"
	.string "{STR_VAR_1}: See? This is our POKéMON\n"
	.string "Research Lab.\p"
	.string "We’ll just go ahead and...$"

SandgemTown_Text_DawnGoIn_SNDawnCall:
	msgbox SandgemTown_Text_DawnGoIn, MSGBOX_DEFAULT
	return

SandgemTown_Text_DawnGoIn_SNLucasCall:
	msgbox SandgemTown_Text_DawnGoIn_SNLu, MSGBOX_DEFAULT
	return

SandgemTown_Text_DawnGoIn_SNLu:
	.string "{STR_VAR_1}: What was that?!\p"
	.string "Your friend always seems to be in such\n"
	.string "a rush.\p"
	.string "Anyway... Let’s go in.$"

SandgemTown_Text_Rowan2_SNDawnCall:
	msgbox SandgemTown_Text_Rowan2, MSGBOX_DEFAULT
	return

SandgemTown_Text_Rowan2_SNLucasCall:
	msgbox SandgemTown_Text_Rowan2_SNLu, MSGBOX_DEFAULT
	return

SandgemTown_Text_Rowan2_SNLu:
	.string "{STR_VAR_1}: Well, I’ll be... The\n"
	.string "professor had TMs...?\p"
	.string "Next thing, he’ll tell me he battled\n"
	.string "when he was young.\p"
	.string "{STR_VAR_1}: Hey, {PLAYER}! I want to\n"
	.string "show you a few things.\p"
	.string "So, follow me!$"

SandgemTown_Text_Dawn2_SNDawnCall:
	msgbox SandgemTown_Text_Dawn2, MSGBOX_DEFAULT
	return

SandgemTown_Text_Dawn2_SNLucasCall:
	msgbox SandgemTown_Text_Dawn2_SNLu, MSGBOX_DEFAULT
	return

SandgemTown_Text_Dawn2_SNLu:
	.string "{STR_VAR_1}: This building with the red\n"
	.string "roof is the POKéMON Center.\p"
	.string "You can get your POKéMON healed if it’s\n"
	.string "been hurt in battle.\p"
	.string "You’ll find a POKéMON Center in most\n"
	.string "towns.\p"
	.string "{STR_VAR_1}: Over here, the building\n"
	.string "with the blue roof is the POKé MART.\p"
	.string "It’s a shop where you can buy and sell\n"
	.string "all sorts of items.\p"
	.string "{PLAYER}, since you’re a rookie Trainer,\n"
	.string "you won’t be able to buy\p"
	.string "very much stuff.\p"
	.string "Don’t worry about it, OK?\p"
	.string "{STR_VAR_1}: Oh, yeah, right! {PLAYER}...\p"
	.string "You should let your family know you’re\n"
	.string "helping Prof. Rowan put\p"
	.string "together his POKéDEX.\p"
	.string "Sometimes, you have to go far away, so\n"
	.string "you should let someone know.\p"
	.string "Oh, but first, go heal up your POKéMON\n"
	.string "at the POKéMON Center.\p"
	.string "You’ll be safe then. OK, be seeing you!$"

