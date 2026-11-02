ManiacTunnel_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, ManiacTunnel_OnTransitionSN
	.byte 0

ManiacTunnel_Text_PtNpc1_0:
	.string "Wow... My digging punched me through to\n"
	.string "this weird place.\p"
	.string "I’d say you can thank me for being a\n"
	.string "Ruin Maniac!$"

ManiacTunnel_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox ManiacTunnel_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

ManiacTunnel_OnTransitionSN:
	call ManiacTunnel_EventScript_SNVis_MT_WALL
	call ManiacTunnel_EventScript_SNVis_MT_DIGGER
	call ManiacTunnel_EventScript_SNVis_MT_DONE
	end

ManiacTunnel_EventScript_SNVis_MT_WALL:
	setflag FLAG_SN_HIDE_MT_WALL
	specialvar VAR_RESULT, SinnohUnownFormsCount
	goto_if_ge VAR_RESULT, 26, ManiacTunnel_EventScript_SNVis_MT_WALL_End
	clearflag FLAG_SN_HIDE_MT_WALL
ManiacTunnel_EventScript_SNVis_MT_WALL_End:
	return

ManiacTunnel_EventScript_SNVis_MT_DIGGER:
	setflag FLAG_SN_HIDE_MT_DIGGER
	specialvar VAR_RESULT, SinnohUnownFormsCount
	goto_if_ge VAR_RESULT, 26, ManiacTunnel_EventScript_SNVis_MT_DIGGER_End
	clearflag FLAG_SN_HIDE_MT_DIGGER
ManiacTunnel_EventScript_SNVis_MT_DIGGER_End:
	return

ManiacTunnel_EventScript_SNVis_MT_DONE:
	setflag FLAG_SN_HIDE_MT_DONE
	specialvar VAR_RESULT, SinnohUnownFormsCount
	goto_if_lt VAR_RESULT, 26, ManiacTunnel_EventScript_SNVis_MT_DONE_End
	clearflag FLAG_SN_HIDE_MT_DONE
ManiacTunnel_EventScript_SNVis_MT_DONE_End:
	return

ManiacTunnel_EventScript_SNManiac::
	lock
	faceplayer
	specialvar VAR_RESULT, SinnohUnownFormsCount
	goto_if_ge VAR_RESULT, 26, ManiacTunnel_EventScript_SNManiacDone
	goto_if_ge VAR_RESULT, 10, ManiacTunnel_EventScript_SNManiacRare
	msgbox ManiacTunnel_Text_SNGoCatch, MSGBOX_DEFAULT
	release
	end
ManiacTunnel_EventScript_SNManiacRare:
	msgbox ManiacTunnel_Text_SNRare, MSGBOX_DEFAULT
	release
	end
ManiacTunnel_EventScript_SNManiacDone:
	msgbox ManiacTunnel_Text_SNDone, MSGBOX_DEFAULT
	release
	end

ManiacTunnel_EventScript_SNWall::
	msgbox ManiacTunnel_Text_SNWall, MSGBOX_SIGN
	end

ManiacTunnel_Text_SNGoCatch:
	.string "Everyone calls me the Ruin Maniac. I\n"
	.string "don’t care what they call me.\p"
	.string "I’ll just keep on chipping away at the\n"
	.string "rock wall little by little.\p"
	.string "Do you know why? I’m a Ruin Maniac who\n"
	.string "is fascinated by the UNOWN.\p"
	.string "I know it’s a little sudden, but how\n"
	.string "about you and me have a race?\p"
	.string "You go and catch the UNOWN, and I’ll\n"
	.string "keep digging away.\p"
	.string "We’ll have a race to see who can get\n"
	.string "done faster.$"

ManiacTunnel_Text_SNRare:
	.string "Everyone calls me the Ruin Maniac. Or\n"
	.string "they used to call me that.\p"
	.string "Now they call me the Digging Maniac.\p"
	.string "I’ll just go on chipping away at the\n"
	.string "rock wall a little at a time.\p"
	.string "Do you know why? I’m a Ruin Maniac who\n"
	.string "also loves to dig!\p"
	.string "I need to bear down and pound my way\n"
	.string "through the bedrock now.\p"
	.string "I think I’m getting close to some\n"
	.string "exciting and mysterious UNOWN.\p"
	.string "It’s going to be messy. You’d better go\n"
	.string "outside.$"

ManiacTunnel_Text_SNDone:
	.string "Wow... My digging punched me through to\n"
	.string "this weird place.\p"
	.string "I’d say you can thank me for being a\n"
	.string "Ruin Maniac!$"

ManiacTunnel_Text_SNWall:
	.string "The Ruin Maniac is still digging\n"
	.string "through this rock wall.\p"
	.string "It seems he needs more UNOWN to keep\n"
	.string "going...$"
