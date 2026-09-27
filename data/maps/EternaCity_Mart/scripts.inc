EternaCity_Mart_MapScripts::
	.byte 0

EternaCity_Mart_EventScript_PtNpc1::
	msgbox EternaCity_Mart_Text_PtNpc1, MSGBOX_NPC
	end

EternaCity_Mart_Text_PtNpc1:
	.string "I write songs about this quiet old\n"
	.string "city.$"

EternaCity_Mart_EventScript_PtNpc2::
	msgbox EternaCity_Mart_Text_PtNpc2, MSGBOX_NPC
	end

EternaCity_Mart_Text_PtNpc2:
	.string "I'm stocking up before climbing\n"
	.string "MT. CORONET.$"

EternaCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart EternaCity_Mart_Pokemart_Main
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
EternaCity_Mart_Pokemart_Main:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	pokemartlistend
