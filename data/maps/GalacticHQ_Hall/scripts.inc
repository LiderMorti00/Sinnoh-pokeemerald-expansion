GalacticHQ_Hall_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GalacticHQ_Hall_OnTransitionSN
	.byte 0

GalacticHQ_Hall_OnTransitionSN:
	call GalacticHQ_Hall_EventScript_SNVis_HALL_SPEECH
	end

GalacticHQ_Hall_EventScript_SNVis_HALL_SPEECH:
	setflag FLAG_SN_HIDE_HALL_SPEECH
	goto_if_set FLAG_SN_HEARD_CYRUS_SPEECH, GalacticHQ_Hall_EventScript_SNVis_HALL_SPEECH_End
	goto_if_ge VAR_SINNOH_STORY, 32, GalacticHQ_Hall_EventScript_SNVis_HALL_SPEECH_End
	clearflag FLAG_SN_HIDE_HALL_SPEECH
GalacticHQ_Hall_EventScript_SNVis_HALL_SPEECH_End:
	return

GalacticHQ_Hall_EventScript_SNSpeech::
	lock
	faceplayer
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T0, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T1, MSGBOX_DEFAULT
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T2, MSGBOX_DEFAULT
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T3, MSGBOX_DEFAULT
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T4, MSGBOX_DEFAULT
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_SN_HALL_CYRUS
	fadescreen FADE_FROM_BLACK
	applymovement LOCALID_SN_HALL_LOOKER, Common_Movement_FacePlayer
	waitmovement 0
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T5, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_SN_HEARD_CYRUS_SPEECH
	setflag FLAG_SN_HIDE_HALL_SPEECH
	sn_walkto LOCALID_SN_HALL_LOOKER, 10, 12, SN_SPEED_NORMAL, 0, 0, 0
	waitmovement LOCALID_SN_HALL_LOOKER
	removeobject LOCALID_SN_HALL_LOOKER
	release
	end

GalacticHQ_Hall_EventScript_SNSpeech_Cyrus::
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T1, MSGBOX_NPC
	end

GalacticHQ_Hall_EventScript_SNSpeech_Grunt::
	msgbox GalacticHQ_Hall_EventScript_SNSpeech_T6, MSGBOX_NPC
	end

GalacticHQ_Hall_EventScript_SNSpeech_T0:
	.string "Looker: Psst! Here. Over here.\p"
	.string "This gathering of the Team Galactic...\n"
	.string "What is the meaning of it?$"

GalacticHQ_Hall_EventScript_SNSpeech_T1:
	.string "Cyrus: Fellow members of Team Galactic!\n"
	.string "Hear me!\p"
	.string "My name, as I appear to you today, is\n"
	.string "Cyrus.\p"
	.string "This world of ours is a crude one. In a\n"
	.string "word, it is incomplete.\p"
	.string "It has been, and always will be, a\n"
	.string "struggle to survive in this world.\p"
	.string "We humans and POKéMON are likewise\n"
	.string "incomplete.\p"
	.string "Because we are all so lacking, we fight,\n"
	.string "we maim... It is ugly.\p"
	.string "I hate the incompleteness.\p"
	.string "That we are all incomplete, I hate it\n"
	.string "with my entire body and being.\p"
	.string "The world should be complete. The world\n"
	.string "must change.$"

GalacticHQ_Hall_EventScript_SNSpeech_T2:
	.string "Then, who will change it?\p"
	.string "Me, Cyrus. And Team Galactic. Yes, all of\n"
	.string "you.\p"
	.string "Together we pored over myths and\n"
	.string "exposed their secrets.\p"
	.string "Together we captured legendary\n"
	.string "POKéMON.\p"
	.string "And now, Team Galactic has obtained\n"
	.string "the energy to change the world!\p"
	.string "The power of dreams is within our\n"
	.string "grasp!$"

GalacticHQ_Hall_EventScript_SNSpeech_T3:
	.string "Understand it, fellow members!\p"
	.string "My long-held dreamworld is on the\n"
	.string "verge of becoming reality.\p"
	.string "All those headed to Mt. Coronet, and\n"
	.string "those who remain here...\p"
	.string "Though our missions may differ, our\n"
	.string "hearts beat as one.\p"
	.string "Let there be glory for Team Galactic!$"

GalacticHQ_Hall_EventScript_SNSpeech_T4:
	.string "Grunts: WROOOAR!!$"

GalacticHQ_Hall_EventScript_SNSpeech_T5:
	.string "Looker: ...Whew.\p"
	.string "So, that was Cyrus, the boss of the\n"
	.string "Team Galactic.\p"
	.string "Quite the performance, no? Mesmerizing\n"
	.string "for one only 27 years old.\p"
	.string "...But to make a world for Team Galactic\n"
	.string "and none other?\p"
	.string "It is preposterous. So much so that it\n"
	.string "makes my head spin.\p"
	.string "A new world? What is that? And what is\n"
	.string "this incomplete world?\p"
	.string "Very well. To investigate such matters\n"
	.string "is the job of the International Police.\p"
	.string "Of which I am a member in good stead.\n"
	.string "And it is my job, therefore.\p"
	.string "We shall part ways here. Take extra\n"
	.string "care, my friend!$"

GalacticHQ_Hall_EventScript_SNSpeech_T6:
	.string "Grunt: Master Cyrus is the greatest!$"
