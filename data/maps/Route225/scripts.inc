Route225_MapScripts::
	.byte 0

Route225_EventScript_Rodolfo::
	trainerbattle_single TRAINER_HECTOR, Route225_Text_RodolfoIntro, Route225_Text_RodolfoDefeat
	msgbox Route225_Text_RodolfoPost, MSGBOX_AUTOCLOSE
	end

Route225_Text_RodolfoIntro:
	.string "There is something missing in the way\n"
	.string "I battle...\p"
	.string "I've come here to find it.$"

Route225_Text_RodolfoDefeat:
	.string "I see it now... I know what I lack.$"

Route225_Text_RodolfoPost:
	.string "Battling you was an eye-opener.\p"
	.string "I learned something very important in\n"
	.string "that short time.$"

Route225_EventScript_Ashlee::
	trainerbattle_single TRAINER_TABITHA_MOSSDEEP, Route225_Text_AshleeIntro, Route225_Text_AshleeDefeat
	msgbox Route225_Text_AshleePost, MSGBOX_AUTOCLOSE
	end

Route225_Text_AshleeIntro:
	.string "In the embrace of Mother Nature,\n"
	.string "people and POKéMON grow strong!$"

Route225_Text_AshleeDefeat:
	.string "Your POKéMON are so muscular. It\n"
	.string "makes me sigh seeing them...$"

Route225_Text_AshleePost:
	.string "It doesn't matter where they grow.\p"
	.string "POKéMON can be made tougher anywhere\n"
	.string "if you set your mind to it.$"

Route225_EventScript_Audrey::
	trainerbattle_single TRAINER_WALLY_VR_1, Route225_Text_AudreyIntro, Route225_Text_AudreyDefeat
	msgbox Route225_Text_AudreyPost, MSGBOX_AUTOCLOSE
	end

Route225_Text_AudreyIntro:
	.string "I let my bird POKéMON carry me to\n"
	.string "wherever. And so, here I am!$"

Route225_Text_AudreyDefeat:
	.string "Sheesh... I arrive in a new place, and it\n"
	.string "turns out to be the Battle Zone...$"

Route225_Text_AudreyPost:
	.string "I was born in the Hoenn region. I've\n"
	.string "only just recently flown here.$"

Route225_EventScript_Daisy::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route225_Text_DaisyIntro, Route225_Text_DaisyDefeat
	msgbox Route225_Text_DaisyPost, MSGBOX_AUTOCLOSE
	end

Route225_Text_DaisyIntro:
	.string "Right after this, you will send out\n"
	.string "your POKéMON to do battle!$"

Route225_Text_DaisyDefeat:
	.string "After this, I will reluctantly hand\n"
	.string "over the prize money to you...$"

Route225_Text_DaisyPost:
	.string "What will you do after this?\p"
	.string "Why don't you decide for yourself? It\n"
	.string "would be much more fun that way!$"

Route225_EventScript_Geoffrey::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route225_Text_GeoffreyIntro, Route225_Text_GeoffreyDefeat
	msgbox Route225_Text_GeoffreyPost, MSGBOX_AUTOCLOSE
	end

Route225_Text_GeoffreyIntro:
	.string "See the potential of dragon POKéMON!\n"
	.string "The Championship is within my sights!$"

Route225_Text_GeoffreyDefeat:
	.string "Potential doesn't mean I can win...$"

Route225_Text_GeoffreyPost:
	.string "A Dragon Tamer Champion...\p"
	.string "I'll need to train so much more to even\n"
	.string "come close to coming close...$"

Route225_EventScript_Deanna::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_119_MUDKIP, Route225_Text_DeannaIntro, Route225_Text_DeannaDefeat
	msgbox Route225_Text_DeannaPost, MSGBOX_AUTOCLOSE
	end

Route225_Text_DeannaIntro:
	.string "Worthy opponents... The search for\n"
	.string "them drives me to travel far.$"

Route225_Text_DeannaDefeat:
	.string "I've certainly found a tough\n"
	.string "adversary in you...$"

Route225_Text_DeannaPost:
	.string "How much you believe in your POKéMON...\p"
	.string "That's a critical factor in how a\n"
	.string "battle will turn out.$"

Route225_EventScript_Dwayne::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, Route225_Text_DwayneIntro, Route225_Text_DwayneDefeat
	msgbox Route225_Text_DwaynePost, MSGBOX_AUTOCLOSE
	end

Route225_Text_DwayneIntro:
	.string "We go on patrol to make sure there's\n"
	.string "nothing strange going on.\p"
	.string "And occasionally, we battle!$"

Route225_Text_DwayneDefeat:
	.string "Thanks much!$"

Route225_Text_DwaynePost:
	.string "Using the POKéMON ability Pickup for\n"
	.string "gathering dropped items is a good\l"
	.string "thing.\p"
	.string "I think it's ecological, even. I am\n"
	.string "cleaning up the environment!$"

Route225_EventScript_Quinn::
	trainerbattle_single TRAINER_BRENDAN_ROUTE_110_TREECKO, Route225_Text_QuinnIntro, Route225_Text_QuinnDefeat
	msgbox Route225_Text_QuinnPost, MSGBOX_AUTOCLOSE
	end

Route225_Text_QuinnIntro:
	.string "I've pumped up my gang till they can't\n"
	.string "get pumped no more.\p"
	.string "They're going to school your POKéMON!$"

Route225_Text_QuinnDefeat:
	.string "My bunch got schooled, and how!$"

Route225_Text_QuinnPost:
	.string "I fed my gang Protein, Carbos... You\n"
	.string "name it, I pumped 'em full of it.$"

Route225_EventScript_PtSign1::
	msgbox Route225_Text_PtSign1, MSGBOX_SIGN
	end

Route225_Text_PtSign1:
	.string "Rt. 225 Fight Area$"

Route225_EventScript_PtSign2::
	msgbox Route225_Text_PtSign2, MSGBOX_SIGN
	end

Route225_Text_PtSign2:
	.string "Rt. 225 Survival Area$"
