HearthomeCity_MapScripts::
	.byte 0

HearthomeCity_EventScript_PtNpc1::
	lock
	faceplayer
	msgbox HearthomeCity_Text_PtNpc1, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, HearthomeCity_EventScript_PtNpc1_No
	msgbox HearthomeCity_Text_PtNpc1_Yes, MSGBOX_DEFAULT
	release
	end

HearthomeCity_EventScript_PtNpc1_No:
	msgbox HearthomeCity_Text_PtNpc1_No, MSGBOX_DEFAULT
	release
	end

HearthomeCity_Text_PtNpc1:
	.string "I'm visiting here all the way from the\n"
	.string "Hoenn region.\p"
	.string "I had been hoping to find the Contest\n"
	.string "Hall, but being new, I lost my way.\p"
	.string "Fortunately, the local people very\n"
	.string "kindly led me to my destination.\p"
	.string "I was impressed by their kindness and\n"
	.string "generosity to a complete stranger.\p"
	.string "Now, may I offer you the courtesy of\n"
	.string "showing you to the Contest Hall?$"

HearthomeCity_Text_PtNpc1_Yes:
	.string "Ah. Please follow me.$"

HearthomeCity_Text_PtNpc1_No:
	.string "Oh, I do apologize. I should mind my\n"
	.string "own business.$"

HearthomeCity_EventScript_PtNpc2::
	msgbox HearthomeCity_Text_PtNpc2, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc2:
	.string "You're a Trainer, are you?\p"
	.string "You've got two choices of challenges,\n"
	.string "either the Gym or a Contest, right?$"

HearthomeCity_EventScript_PtNpc3::
	msgbox HearthomeCity_Text_PtNpc3, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc3:
	.string "When I take my baby out in his\n"
	.string "stroller, I see the town in a different\l"
	.string "way.\p"
	.string "I notice things like stairs and bumps\n"
	.string "in the sidewalk.$"

HearthomeCity_EventScript_PtNpc4::
	msgbox HearthomeCity_Text_PtNpc4, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc4:
	.string "At the Lost Tower, people unburden\n"
	.string "themselves of unbearable sorrow...\p"
	.string "You'll understand what I mean if you\n"
	.string "visit the Lost Tower on Route 209.$"

HearthomeCity_EventScript_PtNpc5::
	msgbox HearthomeCity_Text_PtNpc5, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc5:
	.string "I get to see POKéMON all day long, but\n"
	.string "there sure are many kinds.\p"
	.string "How many are there now?$"

HearthomeCity_EventScript_PtNpc6::
	msgbox HearthomeCity_Text_PtNpc6, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc6:
	.string "They call me Mr. Goods.\p"
	.string "No one knows my real name. No, not\n"
	.string "even I do...\p"
	.string "I dedicate myself to seeking rarities.\n"
	.string "It's what I live for.\p"
	.string "Hm! Hmhmhmhm?!\p"
	.string "I was going to give you something, but\n"
	.string "I just gave a rare thing away.\p"
	.string "I'll find something else for you, so\n"
	.string "just talk to me some other time.$"

HearthomeCity_EventScript_PtNpc7::
	msgbox HearthomeCity_Text_PtNpc7, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc7:
	.string "I can't decide what Accessories I\n"
	.string "should dress up POKéMON with.\p"
	.string "There are just so many kinds.$"

HearthomeCity_EventScript_PtNpc8::
	msgbox HearthomeCity_Text_PtNpc8, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc8:
	.string "I used a Fire Stone on my POKéMON, and\n"
	.string "it evolved!$"

HearthomeCity_EventScript_PtNpc9::
	msgbox HearthomeCity_Text_PtNpc9, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc9:
	.string "I went for a stroll in AMITY SQUARE\n"
	.string "with my PACHIRISU today.\p"
	.string "We came across a POKéMON feather\n"
	.string "while we walked.\p"
	.string "Do you think it'd make my PACHIRISU\n"
	.string "look any cuter?$"

HearthomeCity_EventScript_PtNpc10::
	msgbox HearthomeCity_Text_PtNpc10, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc10:
	.string "I'd like to live in HEARTHOME when I\n"
	.string "get married.\p"
	.string "But my boyfriend wants to live in\n"
	.string "VEILSTONE 'cause of its Game Corner...$"

HearthomeCity_EventScript_PtNpc11::
	msgbox HearthomeCity_Text_PtNpc11, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc11:
	.string "I lived in total seclusion up in the\n"
	.string "mountains for thirty years!\p"
	.string "I'm going to clean up some Contests\n"
	.string "with a dance move I came up with!$"

HearthomeCity_EventScript_PtNpc12::
	msgbox HearthomeCity_Text_PtNpc12, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc12:
	.string "I can feel the baby stroller getting\n"
	.string "heavier each and every day.\p"
	.string "I wonder what kind of POKéMON my child\n"
	.string "will become friends with first?$"

HearthomeCity_EventScript_PtNpc13::
	msgbox HearthomeCity_Text_PtNpc13, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc13:
	.string "This place is beautiful. Perhaps even\n"
	.string "too much so.\p"
	.string "POKéMON, people, and nature are in\n"
	.string "perfect harmony here.$"

HearthomeCity_EventScript_PtNpc14::
	msgbox HearthomeCity_Text_PtNpc14, MSGBOX_NPC
	end

HearthomeCity_Text_PtNpc14:
	.string "I put my Vs. Seeker through its paces\n"
	.string "a lot.\p"
	.string "I battled this one intriguing Trainer\n"
	.string "over and over using it.\p"
	.string "She asked me, “Do you like me?” Like,\n"
	.string "oops! Hahahahah!$"

HearthomeCity_EventScript_PtSign1::
	msgbox HearthomeCity_Text_PtSign1, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign1:
	.string "Rt. 208 Rt. 212$"

HearthomeCity_EventScript_PtSign2::
	msgbox HearthomeCity_Text_PtSign2, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign2:
	.string "Rt. 209 SOLACEON TOWN$"

HearthomeCity_EventScript_PtSign3::
	msgbox HearthomeCity_Text_PtSign3, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign3:
	.string "AMITY SQUARE West Gate Stroll with\n"
	.string "Your POKéMON!$"

HearthomeCity_EventScript_PtSign4::
	msgbox HearthomeCity_Text_PtSign4, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign4:
	.string "POKéMON Contest Hall Calling All\n"
	.string "Enthusiasts!$"

HearthomeCity_EventScript_PtSign5::
	msgbox HearthomeCity_Text_PtSign5, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign5:
	.string "AMITY SQUARE East Gate Stroll with\n"
	.string "Your POKéMON!$"

HearthomeCity_EventScript_PtSign6::
	msgbox HearthomeCity_Text_PtSign6, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign6:
	.string "POKéMON Fan Club All Trainers Welcome$"

HearthomeCity_EventScript_PtSign7::
	msgbox HearthomeCity_Text_PtSign7, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign7:
	.string "HEARTHOME CITY POKéMON Gym Leader:\n"
	.string "FANTINA The Alluring, Soulful Dancer!$"

HearthomeCity_EventScript_PtSign8::
	msgbox HearthomeCity_Text_PtSign8, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign8:
	.string "HEARTHOME CITY Warm & Kind$"

HearthomeCity_EventScript_PtSign9::
	msgbox HearthomeCity_Text_PtSign9, MSGBOX_SIGN
	end

HearthomeCity_Text_PtSign9:
	.string "The Poffin House Delicious\n"
	.string "Poffins--Smiles for All$"
