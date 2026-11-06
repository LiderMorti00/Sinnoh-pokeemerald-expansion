CanalaveCity_House3_MapScripts::
	.byte 0

CanalaveCity_House3_Text_PtNpc1:
	.string "The little boy is thrashing about in his\n"
	.string "sleep.\p"
	.string "He appears to be in torment... He is\n"
	.string "muttering something...\p"
	.string "“DAR... DARK...is watching...me...”$"

CanalaveCity_House3_EventScript_PtNpc1::
	lock
	goto_if_unset FLAG_SYS_GAME_CLEAR, CanalaveCity_House3_EventScript_SNBoyAwake
	goto_if_set FLAG_SN_ELDRITCH_SON_WOKE, CanalaveCity_House3_EventScript_SNBoyScary
	checkitem ITEM_LUNAR_WING
	goto_if_eq VAR_RESULT, FALSE, CanalaveCity_House3_EventScript_SNBoyThrash
	msgbox CanalaveCity_House3_Text_SNWingGlows, MSGBOX_DEFAULT
	playfanfare MUS_HEAL
	waitfanfare
	applymovement LOCALID_ELDRITCH_BOY, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox CanalaveCity_House3_Text_SNWokeUp, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_ELDRITCH_SON_WOKE
	applymovement LOCALID_ELDRITCH_MOM, Common_Movement_ExclamationMark
	waitmovement 0
	sn_walktoplayer LOCALID_ELDRITCH_MOM, SN_SPEED_FAST, 0, 0
	waitmovement LOCALID_ELDRITCH_MOM
	sn_playerface LOCALID_ELDRITCH_MOM, 1
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox CanalaveCity_House3_Text_SNYoureAwake, MSGBOX_DEFAULT
	msgbox CanalaveCity_House3_Text_SNNeverForget, MSGBOX_DEFAULT
	release
	end
CanalaveCity_House3_EventScript_SNBoyAwake:
	faceplayer
	msgbox CanalaveCity_House3_Text_SNSailor, MSGBOX_DEFAULT
	release
	end
CanalaveCity_House3_EventScript_SNBoyScary:
	faceplayer
	msgbox CanalaveCity_House3_Text_SNScary, MSGBOX_DEFAULT
	release
	end
CanalaveCity_House3_EventScript_SNBoyThrash:
	msgbox CanalaveCity_House3_Text_PtNpc1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_House3_Text_PtNpc2:
	.string "I never thought our boy would fall into\n"
	.string "this endless nightmare...\p"
	.string "It’s happened in the past in Canalave...\p"
	.string "There were people who never woke up\n"
	.string "from their nightmares...\p"
	.string "...That is, until they were awoken using\n"
	.string "something called the Lunar Wing.\p"
	.string "My husband went to find a Lunar Wing\n"
	.string "on Fullmoon Island, but he failed...\p"
	.string "Does it take a Trainer to do that? We\n"
	.string "feel so frustrated by this...$"

CanalaveCity_House3_EventScript_PtNpc2::
	lock
	faceplayer
	goto_if_set FLAG_SN_ELDRITCH_SON_WOKE, CanalaveCity_House3_EventScript_SNMomThanks
	goto_if_set FLAG_SYS_GAME_CLEAR, CanalaveCity_House3_EventScript_SNMomWorried
	msgbox CanalaveCity_House3_Text_SNEnergy, MSGBOX_DEFAULT
	release
	end
CanalaveCity_House3_EventScript_SNMomWorried:
	msgbox CanalaveCity_House3_Text_PtNpc2, MSGBOX_DEFAULT
	release
	end
CanalaveCity_House3_EventScript_SNMomThanks:
	msgbox CanalaveCity_House3_Text_SNCantThank, MSGBOX_DEFAULT
	release
	end

CanalaveCity_House3_Text_SNWingGlows:
	.string "The little boy is thrashing about in his\n"
	.string "sleep.\p"
	.string "{PLAYER}’s Lunar Wing began to glow...\p"
	.string "The boy’s sleeping face became\n"
	.string "untroubled and serene!$"

CanalaveCity_House3_Text_SNWokeUp:
	.string "The little boy woke up!$"

CanalaveCity_House3_Text_SNYoureAwake:
	.string "Oh, my gosh! You’re awake!\p"
	.string "Oh, my son... I... I don’t know what to\n"
	.string "say...$"

CanalaveCity_House3_Text_SNNeverForget:
	.string "Thank you! We’ll never forget you!$"

CanalaveCity_House3_Text_SNSailor:
	.string "I’m going to be a Sailor like my daddy!\p"
	.string "He’s a real man among men! Even the sea\n"
	.string "doesn’t scare him!\p"
	.string "Oh, but a Gym Leader’d be cool, too!\n"
	.string "Byron is so awesome!$"

CanalaveCity_House3_Text_SNScary:
	.string "I couldn’t wake up... I saw it...\p"
	.string "It was a scary dream... It was a dark\n"
	.string "place...\p"
	.string "And there was a dark POKéMON...\p"
	.string "But, Daddy, Mommy... I could always hear\n"
	.string "your voices...$"

CanalaveCity_House3_Text_SNEnergy:
	.string "Our boy has too much energy! ...That’s\n"
	.string "the best way to be!$"

CanalaveCity_House3_Text_SNCantThank:
	.string "Thank you! We can’t thank you enough,\n"
	.string "but thank you!$"
