ResortArea_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ResortArea_OnTransitionSN
	.byte 0

ResortArea_EventScript_PtNpc1::
	msgbox ResortArea_Text_PtNpc1, MSGBOX_NPC
	end

ResortArea_Text_PtNpc1:
	.string "I've traveled a long way to make my\n"
	.string "beloved POKéMON even more beautiful.\p"
	.string "That will make it love me even more.\n"
	.string "Giggle!$"

ResortArea_EventScript_PtNpc2::
	msgbox ResortArea_Text_PtNpc2, MSGBOX_NPC
	end

ResortArea_Text_PtNpc2:
	.string "Nothing is too good for my POKéMON.\n"
	.string "There's no mountain too high to climb.\p"
	.string "That's how I look at it.$"

ResortArea_EventScript_PtNpc3::
	msgbox ResortArea_Text_PtNpc3, MSGBOX_NPC
	end

ResortArea_Text_PtNpc3:
	.string "You know how you can dig up cool stuff\n"
	.string "in the UNDERGROUND?\p"
	.string "People are saying they're digging up\n"
	.string "new, different stuff.$"

ResortArea_EventScript_PtNpc4::
	msgbox ResortArea_Text_PtNpc4, MSGBOX_NPC
	end

ResortArea_Text_PtNpc4:
	.string "Nobody believes me, but something\n"
	.string "lurks in the Resort Area.\p"
	.string "It's the hidden ruler of the area! You\n"
	.string "have to believe me!\p"
	.string "If you believe me, whip out your Super\n"
	.string "Rod and go fishing.\p"
	.string "Who knows, you may just catch the\n"
	.string "mind-blowing ruler!$"

ResortArea_OnTransitionSN:
	call ResortArea_EventScript_SNVis_VILLA_OWNER
	call ResortArea_EventScript_SNVis_SYND_GUARD
	end

ResortArea_EventScript_SNVis_VILLA_OWNER:
	setflag FLAG_SN_HIDE_VILLA_OWNER
	goto_if_set FLAG_SN_OWN_VILLA, ResortArea_EventScript_SNVis_VILLA_OWNER_End
	clearflag FLAG_SN_HIDE_VILLA_OWNER
ResortArea_EventScript_SNVis_VILLA_OWNER_End:
	return

ResortArea_EventScript_SNVis_SYND_GUARD:
	setflag FLAG_SN_HIDE_SYND_GUARD
	goto_if_set FLAG_SN_RIBBON_MEMBER, ResortArea_EventScript_SNVis_SYND_GUARD_End
	clearflag FLAG_SN_HIDE_SYND_GUARD
ResortArea_EventScript_SNVis_SYND_GUARD_End:
	return

ResortArea_EventScript_SNVillaOwner::
	lockall
	applymovement LOCALID_SN_VILLA_OWNER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox ResortArea_Text_SNVilla1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, ResortArea_EventScript_SNVillaOwner_Yes
	msgbox ResortArea_Text_SNVillaNo, MSGBOX_DEFAULT
	releaseall
	end
ResortArea_EventScript_SNVillaOwner_Yes:
	msgbox ResortArea_Text_SNVilla2, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_OWN_VILLA
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_VILLA_OWNER
	setflag FLAG_SN_HIDE_VILLA_OWNER
	fadescreen FADE_FROM_BLACK
	releaseall
	end

ResortArea_EventScript_SNVillaDoor::
	goto_if_set FLAG_SN_OWN_VILLA, ResortArea_EventScript_SNVillaDoor_End
	lockall
	msgbox ResortArea_Text_SNVillaLocked, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
	waitmovement 0
	releaseall
ResortArea_EventScript_SNVillaDoor_End:
	end

ResortArea_Text_SNVilla1:
	.string "Psst, hey, traveler! Yes, you! I want\n"
	.string "you to have this Villa!\p"
	.string "Oh, wait, no, no, no! It’s not what\n"
	.string "you’re thinking!\p"
	.string "This is no scam, see. In fact, you’ll be\n"
	.string "doing me a favor!\p"
	.string "See, I was given this Villa. But, to be\n"
	.string "honest, I don’t need it, either.\p"
	.string "So don’t say a word. Just nod and this\n"
	.string "Villa is yours!$"

ResortArea_Text_SNVillaNo:
	.string "What, I still strike you as shady? I\n"
	.string "daresay I can’t blame you, though.\p"
	.string "An offer to get a Villa for free... That\n"
	.string "does throw up red flags, I agree.$"

ResortArea_Text_SNVilla2:
	.string "Whew, that’s a load off my mind.\p"
	.string "The original owner was from Hoenn, see?\p"
	.string "The owner collected up all the rare\n"
	.string "stones of Sinnoh and went back home.\p"
	.string "I somehow got saddled with this place\n"
	.string "as if it were some gift.\p"
	.string "There’s no figuring what rich folks will\n"
	.string "think of next.\p"
	.string "Still, I thank you for helping me out.\n"
	.string "Come with me, will you?\p"
	.string "None too shabby, you have to agree.\n"
	.string "Step inside for a look-see.$"

ResortArea_Text_SNVillaLocked:
	.string "The door is locked. It seems someone is\n"
	.string "selling this Villa...$"

ResortArea_EventScript_SNSyndicate::
	lock
	faceplayer
	special SinnohPartyMaxRibbons
	goto_if_ge VAR_RESULT, 10, ResortArea_EventScript_SNSyndicate_Member
	msgbox ResortArea_Text_SNSyndNo, MSGBOX_DEFAULT
	release
	end
ResortArea_EventScript_SNSyndicate_Member:
	msgbox ResortArea_Text_SNSyndYes, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_RIBBON_MEMBER
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_SYND_GUARD
	setflag FLAG_SN_HIDE_SYND_GUARD
	fadescreen FADE_FROM_BLACK
	release
	end

ResortArea_Text_SNSyndNo:
	.string "This is the Ribbon Syndicate. Only\n"
	.string "Trainers whose POKéMON have earned at\l"
	.string "least ten Ribbons may join.\p"
	.string "Oh, how I long to become a member of\n"
	.string "the Ribbon Syndicate...$"

ResortArea_Text_SNSyndYes:
	.string "A member of the Ribbon Syndicate? You\n"
	.string "are? Really?\p"
	.string "How did you manage to collect so many\n"
	.string "POKéMON Ribbons?$"

ResortArea_EventScript_SNPtACETRAINERF::
	msgbox ResortArea_EventScript_SNPtACETRAINERF_Text, MSGBOX_NPC
	end

ResortArea_EventScript_SNPtACETRAINERF_Text:
	.string "Oh, how I long to become a member of\n"
	.string "the Ribbon Syndicate.\p"
	.string "My dearest POKéMON will be treated to\n"
	.string "dreamy experiences!$"
