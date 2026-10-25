CanalaveCity_Library_F2_MapScripts::
	.byte 0

CanalaveCity_Library_F2_Text_PtNpc1_0:
	.string "The books on the third floor are easy\n"
	.string "to read.\p"
	.string "The ones down here are all too tough\n"
	.string "for me to understand...$"

CanalaveCity_Library_F2_Text_PtNpc1_1:
	.string "That tremor... It was wicked!\p"
	.string "I scrambled to find the book “Disaster\n"
	.string "Strikes Survival Guide!”$"

CanalaveCity_Library_F2_EventScript_PtNpc1::
	lock
	faceplayer
	goto_if_set FLAG_SN_LAKE_VALOR_EXPLODED_2, CanalaveCity_Library_F2_EventScript_PtNpc1_TremorWasWicked
	msgbox CanalaveCity_Library_F2_Text_PtNpc1_0, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F2_EventScript_PtNpc1_TremorWasWicked:
	msgbox CanalaveCity_Library_F2_Text_PtNpc1_1, MSGBOX_DEFAULT
	release
	end

CanalaveCity_Library_F2_EventScript_PtSign1::
	msgbox CanalaveCity_Library_F2_Text_PtSign1, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign1:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign2::
	msgbox CanalaveCity_Library_F2_Text_PtSign2, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign2:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign3::
	msgbox CanalaveCity_Library_F2_Text_PtSign3, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign3:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign4::
	msgbox CanalaveCity_Library_F2_Text_PtSign4, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign4:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign5::
	msgbox CanalaveCity_Library_F2_Text_PtSign5, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign5:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign6::
	msgbox CanalaveCity_Library_F2_Text_PtSign6, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign6:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign7::
	msgbox CanalaveCity_Library_F2_Text_PtSign7, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign7:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign8::
	msgbox CanalaveCity_Library_F2_Text_PtSign8, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign8:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign9::
	msgbox CanalaveCity_Library_F2_Text_PtSign9, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign9:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign10::
	msgbox CanalaveCity_Library_F2_Text_PtSign10, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign10:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign11::
	msgbox CanalaveCity_Library_F2_Text_PtSign11, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign11:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign12::
	msgbox CanalaveCity_Library_F2_Text_PtSign12, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign12:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign13::
	msgbox CanalaveCity_Library_F2_Text_PtSign13, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign13:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign14::
	msgbox CanalaveCity_Library_F2_Text_PtSign14, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign14:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign15::
	msgbox CanalaveCity_Library_F2_Text_PtSign15, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign15:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign16::
	msgbox CanalaveCity_Library_F2_Text_PtSign16, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign16:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign17::
	msgbox CanalaveCity_Library_F2_Text_PtSign17, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign17:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign18::
	msgbox CanalaveCity_Library_F2_Text_PtSign18, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign18:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign19::
	msgbox CanalaveCity_Library_F2_Text_PtSign19, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign19:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign20::
	msgbox CanalaveCity_Library_F2_Text_PtSign20, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign20:
	.string "”Sinnoh’s Beginning as Told on Plates.”\p"
	.string "This is a collection of engravings from\n"
	.string "ancient Plates found in Sinnoh.\p"
	.string "“The Original One breathed alone\n"
	.string "before the universe came.”\p"
	.string "“When the universe was created, its\n"
	.string "shards became this Plate.”\p"
	.string "“The power of defeated giants infuses\n"
	.string "this Plate.”\p"
	.string "“Two beings of time and space set free\n"
	.string "from the Original One.”\p"
	.string "“Three beings were born to bind time\n"
	.string "and space.”\p"
	.string "“Two make matter, and three make\n"
	.string "spirit, shaping the world.”\p"
	.string "“The powers of Plates are shared\n"
	.string "among POKéMON.”\p"
	.string "“The rightful bearer of a Plate draws\n"
	.string "from the Plate it holds.”\p"
	.string "{PLAYER} returned the book to its\n"
	.string "place.$"

CanalaveCity_Library_F2_EventScript_PtSign21::
	msgbox CanalaveCity_Library_F2_Text_PtSign21, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign21:
	.string "Please refrain from bringing food or\n"
	.string "beverages into the library.$"

CanalaveCity_Library_F2_EventScript_PtSign22::
	msgbox CanalaveCity_Library_F2_Text_PtSign22, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign22:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign23::
	msgbox CanalaveCity_Library_F2_Text_PtSign23, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign23:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign24::
	msgbox CanalaveCity_Library_F2_Text_PtSign24, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign24:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign25::
	msgbox CanalaveCity_Library_F2_Text_PtSign25, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign25:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign26::
	msgbox CanalaveCity_Library_F2_Text_PtSign26, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign26:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign27::
	msgbox CanalaveCity_Library_F2_Text_PtSign27, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign27:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign28::
	msgbox CanalaveCity_Library_F2_Text_PtSign28, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign28:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign29::
	msgbox CanalaveCity_Library_F2_Text_PtSign29, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign29:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign30::
	msgbox CanalaveCity_Library_F2_Text_PtSign30, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign30:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign31::
	msgbox CanalaveCity_Library_F2_Text_PtSign31, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign31:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign32::
	msgbox CanalaveCity_Library_F2_Text_PtSign32, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign32:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign33::
	msgbox CanalaveCity_Library_F2_Text_PtSign33, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign33:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign34::
	msgbox CanalaveCity_Library_F2_Text_PtSign34, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign34:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"

CanalaveCity_Library_F2_EventScript_PtSign35::
	msgbox CanalaveCity_Library_F2_Text_PtSign35, MSGBOX_SIGN
	end

CanalaveCity_Library_F2_Text_PtSign35:
	.string "The shelves are lined with books worn\n"
	.string "from being read by many people.$"
