Route219_MapScripts::
	.byte 0

Route219_EventScript_Trenton::
	trainerbattle_single TRAINER_ANGELICA, Route219_Text_TrentonIntro, Route219_Text_TrentonDefeat
	msgbox Route219_Text_TrentonPost, MSGBOX_AUTOCLOSE
	end

Route219_Text_TrentonIntro:
	.string "I love my inflatable tube. So I admire\n"
	.string "jellyfish POKéMON!$"

Route219_Text_TrentonDefeat:
	.string "I'm drifting away...$"

Route219_Text_TrentonPost:
	.string "I wish PROFESSOR ROWAN would give me\n"
	.string "a Pokédex.\p"
	.string "But that old guy looks kind of scary.$"

Route219_EventScript_Mariel::
	trainerbattle_single TRAINER_BEVERLY, Route219_Text_MarielIntro, Route219_Text_MarielDefeat
	msgbox Route219_Text_MarielPost, MSGBOX_AUTOCLOSE
	end

Route219_Text_MarielIntro:
	.string "I can't swim without my inflatable\n"
	.string "tube. But my POKéMON might be strong!$"

Route219_Text_MarielDefeat:
	.string "They weren't tough, my POKéMON...$"

Route219_Text_MarielPost:
	.string "My mommy said that PROFESSOR ROWAN is\n"
	.string "really kindhearted.$"

Route219_EventScript_PtSign1::
	msgbox Route219_Text_PtSign1, MSGBOX_SIGN
	end

Route219_Text_PtSign1:
	.string "Rt. 219 SANDGEM Beach$"
