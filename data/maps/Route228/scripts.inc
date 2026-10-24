Route228_MapScripts::
	.byte 0

Route228_EventScript_Jose::
	trainerbattle_single TRAINER_MAY_ROUTE_119_TREECKO, Route228_Text_JoseIntro, Route228_Text_JoseDefeat
	msgbox Route228_Text_JosePost, MSGBOX_AUTOCLOSE
	end

Route228_Text_JoseIntro:
	.string "Have you any knowledge of levels or\n"
	.string "the stats of POKéMON? Well, I do!$"

Route228_Text_JoseDefeat:
	.string "Hmm. I like how you attack.$"

Route228_Text_JosePost:
	.string "POKéMON and numbers... Who cares\n"
	.string "about that stuff?\p"
	.string "Winning is what's important. Numbers\n"
	.string "aren't everything.$"

Route228_EventScript_Moira::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, Route228_Text_MoiraIntro, Route228_Text_MoiraDefeat
	msgbox Route228_Text_MoiraPost, MSGBOX_AUTOCLOSE
	end

Route228_Text_MoiraIntro:
	.string "Please don't hold anything back.$"

Route228_Text_MoiraDefeat:
	.string "Hmm...$"

Route228_Text_MoiraPost:
	.string "I feel invigorated from that battle,\n"
	.string "even though we lost.\p"
	.string "After all, we gave it everything we\n"
	.string "had.$"

Route228_EventScript_Kyler::
	trainerbattle_single TRAINER_MAY_ROUTE_110_TORCHIC, Route228_Text_KylerIntro, Route228_Text_KylerDefeat
	msgbox Route228_Text_KylerPost, MSGBOX_AUTOCLOSE
	end

Route228_Text_KylerIntro:
	.string "People! Nature! POKéMON! Harmony is\n"
	.string "essential!$"

Route228_Text_KylerDefeat:
	.string "You're A-OK!$"

Route228_Text_KylerPost:
	.string "Protecting POKéMON and nature. Think\n"
	.string "of what that means.$"

Route228_EventScript_Krista::
	trainerbattle_single TRAINER_MAY_ROUTE_119_TORCHIC, Route228_Text_KristaIntro, Route228_Text_KristaDefeat
	msgbox Route228_Text_KristaPost, MSGBOX_AUTOCLOSE
	end

Route228_Text_KristaIntro:
	.string "Are you getting worn out from all the\n"
	.string "running you've done?$"

Route228_Text_KristaDefeat:
	.string "You're not tired at all?!$"

Route228_Text_KristaPost:
	.string "The world is full of POKéMON and all\n"
	.string "sorts of Trainers.$"

Route228_EventScript_Keegan::
	trainerbattle_single TRAINER_DAVIS, Route228_Text_KeeganIntro, Route228_Text_KeeganDefeat
	msgbox Route228_Text_KeeganPost, MSGBOX_AUTOCLOSE
	end

Route228_Text_KeeganIntro:
	.string "Dragon POKéMON are sacred beings...\n"
	.string "That's what my master taught me.\p"
	.string "And now I'll prove it to you!$"

Route228_Text_KeeganDefeat:
	.string "Not good enough! We're still not\n"
	.string "strong enough!$"

Route228_Text_KeeganPost:
	.string "It's not good enough for a POKéMON to\n"
	.string "just be tough.\p"
	.string "It's not good enough for a Trainer to\n"
	.string "just work hard.\p"
	.string "Both have to grow together!$"

Route228_EventScript_Corbin::
	trainerbattle_single TRAINER_MITCHELL, Route228_Text_CorbinIntro, Route228_Text_CorbinDefeat
	msgbox Route228_Text_CorbinPost, MSGBOX_AUTOCLOSE
	end

Route228_Text_CorbinIntro:
	.string "You're going to win! That's the future\n"
	.string "I saw!$"

Route228_Text_CorbinDefeat:
	.string "What I saw in the future turned out to\n"
	.string "be true...$"

Route228_Text_CorbinPost:
	.string "I lost, but my vision of the future\n"
	.string "came true...$"

Route228_EventScript_Meagan::
	trainerbattle_single TRAINER_HALLE, Route228_Text_MeaganIntro, Route228_Text_MeaganDefeat
	msgbox Route228_Text_MeaganPost, MSGBOX_AUTOCLOSE
	end

Route228_Text_MeaganIntro:
	.string "What sort of moves have you taught?\n"
	.string "That tells me how good you are!$"

Route228_Text_MeaganDefeat:
	.string "Yowch!$"

Route228_Text_MeaganPost:
	.string "I heard that somewhere there's\n"
	.string "someone who teaches POKéMON moves.$"

Route228_EventScript_Davon::
	trainerbattle_single TRAINER_GARRISON, Route228_Text_DavonIntro, Route228_Text_DavonDefeat
	msgbox Route228_Text_DavonPost, MSGBOX_AUTOCLOSE
	end

Route228_Text_DavonIntro:
	.string "My quest for power brought me here.\p"
	.string "It was beneath the desert sand that I\n"
	.string "toughened my body and soul.\p"
	.string "Accept my challenge! Uraah!$"

Route228_Text_DavonDefeat:
	.string "My spirit is broken...$"

Route228_Text_DavonPost:
	.string "I thought I couldn't win before it\n"
	.string "became a fact...\p"
	.string "I've let down my POKéMON...\p"
	.string "They go to battle with faith in their\n"
	.string "Trainer...$"

Route228_EventScript_PtSign1::
	msgbox Route228_Text_PtSign1, MSGBOX_SIGN
	end

Route228_Text_PtSign1:
	.string "Rt. 228 Rt. 226$"

Route228_EventScript_PtSign2::
	msgbox Route228_Text_PtSign2, MSGBOX_SIGN
	end

Route228_Text_PtSign2:
	.string "Rt. 228 Rt. 229$"
