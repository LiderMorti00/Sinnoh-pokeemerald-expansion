FightArea_House1_MapScripts::
	.byte 0

FightArea_House1_Text_PtNpc1_0:
	.string "Even from here, we could see the peak\n"
	.string "of Mt. Coronet.\p"
	.string "Most people didn’t notice what\n"
	.string "happened up there, but I did.\p"
	.string "But I don’t know what took place\n"
	.string "exactly, or anything like that.$"

FightArea_House1_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox FightArea_House1_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

FightArea_House1_Text_PtNpc2_0:
	.string "Everyone’s fanatical about battling\n"
	.string "here.$"

FightArea_House1_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox FightArea_House1_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

FightArea_House1_Text_PtNpc3_0:
	.string "People are people, and I’m me. I don’t\n"
	.string "like to be compared.\p"
	.string "But comparing with other people\n"
	.string "reveals things about yourself\l"
	.string "sometimes, too.\p"
	.string "That’s why you should check out the\n"
	.string "Global Terminal in Jubilife City.$"

FightArea_House1_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox FightArea_House1_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end
