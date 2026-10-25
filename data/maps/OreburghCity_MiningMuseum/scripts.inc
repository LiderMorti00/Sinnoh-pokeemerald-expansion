OreburghCity_MiningMuseum_MapScripts::
	.byte 0

OreburghCity_MiningMuseum_Text_PtNpc1_0:
	.string "Whoa! So this is coal? I never expected\n"
	.string "something this big!\p"
	.string "And that color! It really is as black as\n"
	.string "they say!$"

OreburghCity_MiningMuseum_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox OreburghCity_MiningMuseum_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

OreburghCity_MiningMuseum_Text_PtNpc2_0:
	.string "Wow! The POKéMON that carried this\n"
	.string "must be terribly strong!$"

OreburghCity_MiningMuseum_EventScript_PtNpc2::
	lock
	faceplayer
	msgbox OreburghCity_MiningMuseum_Text_PtNpc2_0, MSGBOX_DEFAULT
	release
	end

OreburghCity_MiningMuseum_Text_PtNpc3_0:
	.string "Well, how about that!\p"
	.string "The Oreburgh Mine extends under the\n"
	.string "seafloor!$"

OreburghCity_MiningMuseum_EventScript_PtNpc3::
	lock
	faceplayer
	msgbox OreburghCity_MiningMuseum_Text_PtNpc3_0, MSGBOX_DEFAULT
	release
	end

OreburghCity_MiningMuseum_Text_PtNpc4:
	.string "I am in the process of extracting your\n"
	.string "POKéMON from a Fossil.\p"
	.string "You go outside, yes, please. Now! Time\n"
	.string "alone is what I now need. NOW!!!$"

OreburghCity_MiningMuseum_EventScript_PtNpc4::
	msgbox OreburghCity_MiningMuseum_Text_PtNpc4, MSGBOX_NPC
	end

OreburghCity_MiningMuseum_Text_PtNpc5_0:
	.string "Hello! Welcome to the Oreburgh Mining\n"
	.string "Museum!$"

OreburghCity_MiningMuseum_EventScript_PtNpc5::
	lock
	faceplayer
	msgbox OreburghCity_MiningMuseum_Text_PtNpc5_0, MSGBOX_DEFAULT
	release
	end

OreburghCity_MiningMuseum_Text_PtNpc6_0:
	.string "It’s a little far from here, but there is\n"
	.string "a city called Eterna City.\p"
	.string "I’ve heard a curious person named the\n"
	.string "Underground Man lives there.\p"
	.string "With a name like that, he must be an\n"
	.string "authority on the Underground.$"

OreburghCity_MiningMuseum_EventScript_PtNpc6::
	lock
	faceplayer
	msgbox OreburghCity_MiningMuseum_Text_PtNpc6_0, MSGBOX_DEFAULT
	release
	end

OreburghCity_MiningMuseum_Text_PtNpc7_0:
	.string "Mining must take a strong mind, not\n"
	.string "just a tough body.\p"
	.string "Think about it. You’re in darkness,\n"
	.string "digging desperately through rock.$"

OreburghCity_MiningMuseum_EventScript_PtNpc7::
	lock
	faceplayer
	msgbox OreburghCity_MiningMuseum_Text_PtNpc7_0, MSGBOX_DEFAULT
	release
	end

OreburghCity_MiningMuseum_Text_PtNpc8_0:
	.string "The history of Oreburgh Mine...\p"
	.string "You could call it a history of effort\n"
	.string "and friendship between people and\l"
	.string "POKéMON.$"

OreburghCity_MiningMuseum_EventScript_PtNpc8::
	lock
	faceplayer
	msgbox OreburghCity_MiningMuseum_Text_PtNpc8_0, MSGBOX_DEFAULT
	release
	end

OreburghCity_MiningMuseum_EventScript_PtSign1::
	msgbox OreburghCity_MiningMuseum_Text_PtSign1, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign1:
	.string "How Coal Is Made 1\p"
	.string "“In a time long before history,\n"
	.string "vegetative matter was swept along\p"
	.string "by rain and rivers. It came to be buried\n"
	.string "under the ground.”$"

OreburghCity_MiningMuseum_EventScript_PtSign2::
	msgbox OreburghCity_MiningMuseum_Text_PtSign2, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign2:
	.string "How Coal Is Made 1\p"
	.string "“In a time long before history,\n"
	.string "vegetative matter was swept along\p"
	.string "by rain and rivers. It came to be buried\n"
	.string "under the ground.”$"

OreburghCity_MiningMuseum_EventScript_PtSign3::
	msgbox OreburghCity_MiningMuseum_Text_PtSign3, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign3:
	.string "How Coal Is Made 2\p"
	.string "“The buried plant matter was forced\n"
	.string "ever deeper under the ground\p"
	.string "due to tremors and fissures caused by\n"
	.string "the shifting landmasses.”$"

OreburghCity_MiningMuseum_EventScript_PtSign4::
	msgbox OreburghCity_MiningMuseum_Text_PtSign4, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign4:
	.string "How Coal Is Made 2\p"
	.string "“The buried plant matter was forced\n"
	.string "ever deeper under the ground\p"
	.string "due to tremors and fissures caused by\n"
	.string "the shifting landmasses.”$"

OreburghCity_MiningMuseum_EventScript_PtSign5::
	msgbox OreburghCity_MiningMuseum_Text_PtSign5, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign5:
	.string "How Coal Is Made 3\p"
	.string "“Deep under the ground, the plant\n"
	.string "matter was subjected to heavy\p"
	.string "pressure and the heat of magma. It\n"
	.string "gradually turned into coal.”$"

OreburghCity_MiningMuseum_EventScript_PtSign6::
	msgbox OreburghCity_MiningMuseum_Text_PtSign6, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign6:
	.string "How Coal Is Made 3\p"
	.string "“Deep under the ground, the plant\n"
	.string "matter was subjected to heavy\p"
	.string "pressure and the heat of magma. It\n"
	.string "gradually turned into coal.”$"

OreburghCity_MiningMuseum_EventScript_PtSign7::
	msgbox OreburghCity_MiningMuseum_Text_PtSign7, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign7:
	.string "Samples of coal from different regions\n"
	.string "are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign8::
	msgbox OreburghCity_MiningMuseum_Text_PtSign8, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign8:
	.string "Samples of coal from different regions\n"
	.string "are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign9::
	msgbox OreburghCity_MiningMuseum_Text_PtSign9, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign9:
	.string "The box contains categorized samples\n"
	.string "of coal.$"

OreburghCity_MiningMuseum_EventScript_PtSign10::
	msgbox OreburghCity_MiningMuseum_Text_PtSign10, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign10:
	.string "The box contains categorized samples\n"
	.string "of coal.$"

OreburghCity_MiningMuseum_EventScript_PtSign11::
	msgbox OreburghCity_MiningMuseum_Text_PtSign11, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign11:
	.string "Different kinds of lamps are displayed.\p"
	.string "They appear to have been worn on\n"
	.string "someone’s head while underground.$"

OreburghCity_MiningMuseum_EventScript_PtSign12::
	msgbox OreburghCity_MiningMuseum_Text_PtSign12, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign12:
	.string "Different kinds of lamps are displayed.\p"
	.string "They appear to have been worn on\n"
	.string "someone’s head while underground.$"

OreburghCity_MiningMuseum_EventScript_PtSign13::
	msgbox OreburghCity_MiningMuseum_Text_PtSign13, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign13:
	.string "Different kinds of lamps are displayed.\p"
	.string "They appear to have been worn on\n"
	.string "someone’s head while underground.$"

OreburghCity_MiningMuseum_EventScript_PtSign14::
	msgbox OreburghCity_MiningMuseum_Text_PtSign14, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign14:
	.string "Badly scarred wooden tools are\n"
	.string "displayed.\p"
	.string "They apparently dug out coal using\n"
	.string "these tools in the olden days.$"

OreburghCity_MiningMuseum_EventScript_PtSign15::
	msgbox OreburghCity_MiningMuseum_Text_PtSign15, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign15:
	.string "Badly scarred wooden tools are\n"
	.string "displayed.\p"
	.string "They apparently dug out coal using\n"
	.string "these tools in the olden days.$"

OreburghCity_MiningMuseum_EventScript_PtSign16::
	msgbox OreburghCity_MiningMuseum_Text_PtSign16, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign16:
	.string "Badly scarred wooden tools are\n"
	.string "displayed.\p"
	.string "They apparently dug out coal using\n"
	.string "these tools in the olden days.$"

OreburghCity_MiningMuseum_EventScript_PtSign17::
	msgbox OreburghCity_MiningMuseum_Text_PtSign17, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign17:
	.string "The everyday items and tools of past\n"
	.string "mine workers are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign18::
	msgbox OreburghCity_MiningMuseum_Text_PtSign18, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign18:
	.string "The everyday items and tools of past\n"
	.string "mine workers are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign19::
	msgbox OreburghCity_MiningMuseum_Text_PtSign19, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign19:
	.string "The everyday items and tools of past\n"
	.string "mine workers are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign20::
	msgbox OreburghCity_MiningMuseum_Text_PtSign20, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign20:
	.string "Samples of coal from different regions\n"
	.string "are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign21::
	msgbox OreburghCity_MiningMuseum_Text_PtSign21, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign21:
	.string "Samples of coal from different regions\n"
	.string "are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign22::
	msgbox OreburghCity_MiningMuseum_Text_PtSign22, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign22:
	.string "Different kinds of lamps are displayed.\p"
	.string "They appear to have been worn on\n"
	.string "someone’s head while underground.$"

OreburghCity_MiningMuseum_EventScript_PtSign23::
	msgbox OreburghCity_MiningMuseum_Text_PtSign23, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign23:
	.string "Different kinds of lamps are displayed.\p"
	.string "They appear to have been worn on\n"
	.string "someone’s head while underground.$"

OreburghCity_MiningMuseum_EventScript_PtSign24::
	msgbox OreburghCity_MiningMuseum_Text_PtSign24, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign24:
	.string "Different kinds of lamps are displayed.\p"
	.string "They appear to have been worn on\n"
	.string "someone’s head while underground.$"

OreburghCity_MiningMuseum_EventScript_PtSign25::
	msgbox OreburghCity_MiningMuseum_Text_PtSign25, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign25:
	.string "Badly scarred wooden tools are\n"
	.string "displayed.\p"
	.string "They apparently dug out coal using\n"
	.string "these tools in the olden days.$"

OreburghCity_MiningMuseum_EventScript_PtSign26::
	msgbox OreburghCity_MiningMuseum_Text_PtSign26, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign26:
	.string "Badly scarred wooden tools are\n"
	.string "displayed.\p"
	.string "They apparently dug out coal using\n"
	.string "these tools in the olden days.$"

OreburghCity_MiningMuseum_EventScript_PtSign27::
	msgbox OreburghCity_MiningMuseum_Text_PtSign27, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign27:
	.string "Badly scarred wooden tools are\n"
	.string "displayed.\p"
	.string "They apparently dug out coal using\n"
	.string "these tools in the olden days.$"

OreburghCity_MiningMuseum_EventScript_PtSign28::
	msgbox OreburghCity_MiningMuseum_Text_PtSign28, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign28:
	.string "The everyday items and tools of past\n"
	.string "mine workers are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign29::
	msgbox OreburghCity_MiningMuseum_Text_PtSign29, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign29:
	.string "The everyday items and tools of past\n"
	.string "mine workers are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign30::
	msgbox OreburghCity_MiningMuseum_Text_PtSign30, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign30:
	.string "The everyday items and tools of past\n"
	.string "mine workers are displayed.$"

OreburghCity_MiningMuseum_EventScript_PtSign31::
	msgbox OreburghCity_MiningMuseum_Text_PtSign31, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign31:
	.string "The box contains categorized samples\n"
	.string "of coal.$"

OreburghCity_MiningMuseum_EventScript_PtSign32::
	msgbox OreburghCity_MiningMuseum_Text_PtSign32, MSGBOX_SIGN
	end

OreburghCity_MiningMuseum_Text_PtSign32:
	.string "The box contains categorized samples\n"
	.string "of coal.$"
