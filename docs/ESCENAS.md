# Escenas: lista completa y desarrollo

Revisión de todas las escenas de Platino (pret/pokeplatinum) comparadas con el hack: eventos de coordenadas, escenas al entrar en un mapa y NPC con coreografía. Para cada una se indica el estado en el hack y, en las pendientes, el guion de Platino paso a paso, que es lo que hay que reproducir con `sn_walkto`, `sn_walktoplayer` y `sn_playerface`.

Fuentes: scripts y textos de pret/pokeplatinum (`res/field/scripts`, `res/text`), y Bulbapedia/WikiDex para el orden de la historia.

Herramientas: `rev/scenes.py` (auditoría), `rev/story.py` (guion de Platino), `rev/cards.py` (textos que faltan).

## Resumen

| Estado | Escenas |
|---|---|
| Hecha (sinnoh27-28) | 25 |
| Pendiente · alta | 7 |
| Pendiente · media | 9 |
| Pendiente · baja | 15 |
| Ya estaba | 62 |
| Excluida | 12 |

Leyenda del guion: 💬 texto, 🚶 movimiento (anda/corre + dirección y casillas, «mira», «¡!»), ➕/➖ aparece/se quita un personaje, ⚔ combate, 🎁 regalo, ❓ pregunta sí/no, ⚑ flag o variable, ↪ rama.

## Pendientes

### Route201 · `Route201_CoordEvent_FollowingRivalStopPlayerSouth` (Pendiente · baja)

Barry te frena si vuelves a Hojaverde mientras te sigue. En el hack Barry no te sigue como acompañante, así que solo serviría como barrera con texto.

<details><summary>Guion de Platino</summary>

```
🚶 PLAYER: mira N
🚶 RIVAL: mira S
💬 ‹N0›: Heheh, ‹N1›. The lake’s not that way!
🚶 PLAYER: anda N
🚶 RIVAL: anda N, mira S
```
</details>

### Route201 · `Route201_CoordEvent_FollowingRivalStopPlayerEast` (Pendiente · baja)

Igual que la anterior, hacia Arena.

<details><summary>Guion de Platino</summary>

```
🚶 PLAYER: mira W
🚶 RIVAL: mira E
💬 ‹N0›: Hey, ‹N1›! I said, the lake’s not that way!
🚶 PLAYER: anda W
🚶 RIVAL: anda W, mira E
```
</details>

### Route201 · `Route201_CoordEvent_PickAPokemon` (Pendiente · baja)

Barry te recuerda que abras el maletín si intentas irte. El hack ya bloquea con el maletín.

<details><summary>Guion de Platino</summary>

```
🚶 RIVAL: mira S
💬 ‹N0›: What’s up with you? Open the briefcase and pick a Pokémon!
🚶 PLAYER: anda W
```
</details>

### Route202 · `Route202_Counterpart` (Pendiente · media)

Posliga: Dawn/Lucas te espera en la Ruta 202 y explica el Radar Pokémon (hierba que se mueve, cadenas). El Radar ya existe; falta la escena.

<details><summary>Guion de Platino</summary>

```
💬 Dawn: Hi, ‹N0›! I was waiting for you. Let me show you how the Poké Radar works. Let’s not waste any time. So, when you use the Poké Radar..
💬 Lucas: ‹N0›. Let me explain how the Poké Radar works. Let’s give it a go. When you use the Poké Radar...
🚶 COUNTERPART: mira E
🚶 PLAYER: mira E
💬 Dawn: See? Did you notice the tall grass rustling? There’s a Pokémon in that patch of tall grass. If you go there, the Pokémon will come bur
💬 Lucas: There! Did you see the tall grass rustling? There’s a Pokémon in that patch of tall grass. Go in there, and the Pokémon will come lea
🚶 COUNTERPART: mira S
🚶 PLAYER: mira N
🚶 COUNTERPART: mira N
🚶 PLAYER: mira S
🚶 PLAYER: mira W
🚶 COUNTERPART: mira W
💬 Now, this is where it gets interesting. If you see another patch of rustling grass some distance away, go into it. You’ll see the same kind 
💬 Now, here’s the strange part. If you see another patch of rustling grass far away, it means the same kind of Pokémon is hiding there. So, if
🚶 COUNTERPART: anda W, anda S3, anda W10
🚶 COUNTERPART: anda S3, anda W10
➖ se quita COUNTERPART
⚑ SetVar VAR_ROUTE_202_STATE, 3
```
</details>

### OreburghMine_B1F · `OreburghMineB1F_Hiker` (Pendiente · baja)

Montañero filósofo que da la Tabla Llama (cadena de las Tablas/Arceus).

<details><summary>Guion de Platino</summary>

```
↪ si FLAG_COULD_NOT_RECEIVE_OREBURGH_MINE_B1F_FLAME_PLATE: TryGiveFlamePlateAgain
💬 Hello! How do you do! I’m a student of philosophy. If I had to explain very simply, I study how people came to be. That could explain why I 
⚑ SetVar VAR_0x8004, ITEM_FLAME_PLATE
⚑ SetVar VAR_0x8005, 1
⚑ SetFlag FLAG_COULD_NOT_RECEIVE_OREBURGH_MINE_B1F_FLAME_PLATE
💬 Oh? You have an overabundance of things! I’ll wait for you with this.
```
</details>

### EternaForest · `EternaForest_CoordEvent_PlayerLeaveCheryl` (Pendiente · media)

Si vuelves a la entrada con Cheryl: «¿Vuelves? Te espero aquí» y se separa.

<details><summary>Guion de Platino</summary>

```
🚶 CHERYL: mira S
💬 Cheryl: Oh? Are you going back? I’ll wait here for you, then.
🚶 CHERYL: anda N2, mira S
⚑ SetVar VAR_ETERNA_FOREST_FOLLOWER_CHERYL_STATE, 0
```
</details>

### EternaForest · `EternaForest_OnFrame_CherylOldChateauCutscene` (Pendiente · baja)

Cheryl comenta la Vieja Chateau al pasar delante.

<details><summary>Guion de Platino</summary>

```
⚑ SetVar VAR_ETERNA_FOREST_CHERYL_OLD_CHATEAU_CUTSCENE_STATE, 2
🚶 CHERYL: mira N
💬 Cheryl: There is an Old Chateau ahead. No one lives there now. They say it’s haunted.
```
</details>

### EternaCity · `EternaCity_CoordEvent_CynthiaBlockBikeShop` (Pendiente · media)

Cynthia te para si te vas sin el Huevo de Togepi.

<details><summary>Guion de Platino</summary>

```
🚶 CYNTHIA: mira E
💬 Cynthia: Oh, wait! Don’t leave without this Pokémon Egg. Please? I want you to have it.
🚶 PLAYER: anda W
```
</details>

### HearthomeCity · `HearthomeCity_Fisherman` (Pendiente · baja)

Pescador de Hoenn que te acompaña a la Sala de Concursos.

<details><summary>Guion de Platino</summary>

```
↪ si FLAG_MAP_LOCAL_0x01: ItMakesMeHappy
💬 I’m visiting here all the way from the Hoenn region. I had been hoping to find the Contest Hall, but being new, I lost my way. Fortunately, 
❓ sí/no
↪ si VAR_RESULT MENU_NO: IDoApologize
💬 Ah. Please follow me.
🚶 FISHERMAN: anda W20, anda N13, anda E12, anda N4, mira S
🚶 PLAYER: anda N, anda W20, anda N13, anda E12, anda N3
⚑ SetFlag FLAG_MAP_LOCAL_0x01
💬 This is the Contest Hall. Please, do go inside.
```
</details>

### ValorLakefront · `ValorLakefront_CoordEvent_BlockSunyshore` (Pendiente · media)

Hombre que corta el camino a Marina por el apagón hasta derrotar a los Galaxia.

<details><summary>Guion de Platino</summary>

```
🚶 COLLECTOR: ¡!
🚶 COLLECTOR: anda E, anda S
🚶 COLLECTOR: anda E, anda S2
🚶 COLLECTOR: anda E, anda S3
🚶 COLLECTOR: anda W
🚶 PLAYER: LockDir, anda W, UnlockDir
💬 Stop, stop! Yes, you! Sunyshore City, which is down this road, had a major blackout! Crews are working on restoring power, but the road’s cl
🚶 COLLECTOR: anda N, mira S
🚶 COLLECTOR: anda N2, mira S
🚶 COLLECTOR: anda N3, mira S
```
</details>

### ValorLakefront_Restaurant · `Restaurant_OnFrame_Closed` (Pendiente · baja)

Restaurante cerrado por la noche.

<details><summary>Guion de Platino</summary>

```
🚶 PLAYER: mira E
💬 I am so sorry. We are now closed. Please do visit while we are open.
🚪 warp MAP_HEADER_VALOR_LAKEFRONT
```
</details>

### CelesticTown · `CelesticTown_CoordEvent_Elder` (Pendiente · baja)

La anciana fuera de casa avisa del «astronauta» ante las ruinas.

<details><summary>Guion de Platino</summary>

```
🚶 PLAYER: mira W
🚶 ELDER: mira E
⚑ SetVar VAR_CELESTIC_TOWN_ELDER_STATE, 1
💬 There’s an odd spaceman in front of the ruins. There isn’t anything there, but that only seemed to make him get angry. He’s saying he will b
```
</details>

### CanalaveCity_Library_F1 · `CanalaveLibrary1F_Lucian` (Pendiente · baja)

Lucian leyendo libros distintos según el día.

<details><summary>Guion de Platino</summary>

```
💬 Lucian: ...Ah, hello. You’re here to read, too? Books are wonderful things. The thoughts of people written in books stretch beyond time and 
💬 I was just reading a collection of letters written by an artist long ago. More precisely, they were written to the artist’s younger brother.
💬 I was just reading an analytical tome on humankind. It examines the human species from cultural and social perspectives. This is a thought-p
💬 I was just reading a collection of observations on Pokémon in the wild. One article addresses the question why Pokémon would go into a Poké 
💬 I was just reading a collection of essays on the science-fiction genre. There was one quote attributed to a novelist I found remarkable. “Th
💬 I was just reading a book of philosophy from an ancient, far-off land. Their “universe” was a word that described both space and time. That 
💬 I imagine we’ll see each other again at the Pokémon League. Take care.
🚶 LUCIAN: anda W5, anda S6
🚶 PLAYER: mira W
🚶 LUCIAN: anda W5, anda S6
🚶 LUCIAN: anda S, anda W5, anda S5
🚶 PLAYER: mira W
➖ se quita LUCIAN
```
</details>

### CanalaveCity_Library_F2 · `CanalaveLibrary2F_OnFrame_Hiker` (Pendiente · baja)

Montañero de las Tablas (cadena Arceus).

<details><summary>Guion de Platino</summary>

```
🚶 HIKER: mira E, ¡!, anda E, anda N, mira E
💬 Well, hello! We meet again! After we parted, I went from Oreburgh to Hearthome, Celestic, then Eterna. Yes, the town and cities surrounding 
❓ sí/no
↪ si VAR_RESULT MENU_YES: TheWayISeeIt
↪ si VAR_RESULT MENU_NO: LetsNotBeHasty
```
</details>

### CanalaveCity · `CanalaveCity_SailorEldritch` (Pendiente · media)

Marinero Eldritch: viaje a Isla Lunallena y Ala Lunar para despertar a su hijo.

<details><summary>Guion de Platino</summary>

```
↪ si VAR_LUNAR_WING_EVENT_STATE 2: AskGoingToFullmoonIsland
💬 Do you wanna set sail?
↪ si FLAG_TALKED_TO_CANALAVE_CITY_SAILOR_ELDRITCH_HOUSE_LITTLE_BOY: AddMenuEntryFullmoonIsland
↪ si FLAG_TRAVELED_TO_NEWMOON_ISLAND: AddMenuEntryNewmoonIsland
↪ si VAR_RESULT 0: TakeShipToIronIsland
↪ si VAR_RESULT 1: TakeShipToFullmoonIsland
↪ si VAR_RESULT 2: TakeShipToNewmoonIsland
↪ si VAR_RESULT 3: DontTakeShip
💬 You just tell me whenever you need to set sail!
```
</details>

### CanalaveCity_House3 · `CanalaveCitySailorEldritchHouse_LittleBoy` (Pendiente · media)

El hijo dormido despierta con el Ala Lunar.

<details><summary>Guion de Platino</summary>

```
↪ si VAR_LUNAR_WING_EVENT_STATE 1: BoyThrashingInSleep
↪ si VAR_LUNAR_WING_EVENT_STATE 2: BoyThrashingInSleep
↪ si VAR_LUNAR_WING_EVENT_STATE 3: ScaryDreamDarkPokemon
💬 I’m going to be a Sailor like my daddy! He’s a real man among men! Even the sea doesn’t scare him! Oh, but a Gym Leader’d be cool, too! Byro
```
</details>

### SpearPillar · `SpearPillar_CoordEvent_Grunts` (Pendiente · media)

Grunts de la Columna Lanza: «Solo un Pokémon...» antes del combate doble.

<details><summary>Guion de Platino</summary>

```
🚶 GRUNT_F: mira E
🚶 GRUNT_M: mira W
↪ si VAR_RESULT FALSE: BattleGrunts
💬 Our boss is about to do something spectacular! Don’t get in the way! Of course you will, won’t you? That’s why the two of us will team up to
🚶 PLAYER: anda S
🚶 GRUNT_F: mira S
🚶 GRUNT_M: mira S
```
</details>

### IronIsland_B2F_Left · `IronIslandB2FLeftRoom_CoordEvent_PlayerLeaveRiley` (Pendiente · media)

Si vuelves atrás con Riley: «¿Te vas? Estaré por aquí».

<details><summary>Guion de Platino</summary>

```
🚶 PLAYER: mira W
🚶 RILEY: mira E
💬 Riley: ...Are you going back? I’ll be hanging around here. It would be good if you came back.
⚑ SetVar VAR_IRON_ISLAND_B2F_LEFT_ROOM_FOLLOWER_RILEY_STATE, 0
🚶 RILEY: anda W, anda S, mira W
🚶 RILEY: anda W
```
</details>

### ResortArea_Villa · `Villa_OnFrame_FirstEntry` (Pendiente · alta)

Villa: catálogo de muebles y visitantes (Dawn/Lucas, Barry, Cynthia, Rowan, Gardenia, Volkner y Flint) que vienen según los muebles. Es un sistema entero.

<details><summary>Guion de Platino</summary>

```
⚑ SetVar VAR_VILLA_STATE, 1
💬 The original owner’s furniture is gone, and I didn’t buy any. So, yeah, I know, it’s barren. Still, not bad, eh? But anyway, I feel kind of 
💬 Go ahead, order a Table from this order form!
```
</details>

### ResortArea_Villa · `Villa_SchoolKidM` (Pendiente · alta)

Parte del sistema de la Villa.

<details><summary>Guion de Platino</summary>

```
💬 Go ahead, order a Table from this order form!
```
</details>

### ResortArea_Villa · `Villa_CoordEvent_DontGoYet` (Pendiente · alta)

Parte del sistema de la Villa.

<details><summary>Guion de Platino</summary>

```
🚶 SCHOOL_KID_M: mira S
💬 Whoa, whoa! Don’t go yet! Not until you order a Table from this order form!
🚶 PLAYER: anda N
```
</details>

### ResortArea_Villa · `Villa_Volkner` (Pendiente · alta)

Visita de Volkner y Flint a la Villa.

<details><summary>Guion de Platino</summary>

```
↪ si VAR_RESORT_VILLA_VISITOR VILLA_VISITOR_FLINT_VOLKNER: FlintAndVolkner
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 0: VolknerMessage0
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 1: VolknerMessage1
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 2: VolknerMessage2
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 3: VolknerMessage3
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 4: VolknerMessage4
```
</details>

### ResortArea_Villa · `Villa_Flint` (Pendiente · alta)

Visita de Flint a la Villa.

<details><summary>Guion de Platino</summary>

```
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 0: FlintMessage0
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 1: FlintMessage1
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 2: FlintMessage2
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 3: FlintMessage3
↪ si VAR_RESORT_VILLA_VISITOR_MESSAGE_NUM 4: FlintMessage4
```
</details>

### SurvivalArea_Battleground · `Battleground_Buck` (Pendiente · alta)

Campo de Batalla: Buck te deja entrar.

<details><summary>Guion de Platino</summary>

```
⚑ SetFlag FLAG_TALKED_TO_BATTLEGROUND_BUCK
💬 Buck: My place is open only to the toughest Trainers--I’m serious. You’re supposed to be introduced by a Gym Leader, but you’re special. Wel
🚶 PLAYER: mira W
🚶 BUCK: anda W, anda S, anda W3, anda S2
🚶 PLAYER: mira S, mira W
🚶 BUCK: anda S, anda W4, anda S2
🚶 PLAYER: mira W
🚶 BUCK: anda W, anda S, anda W3, anda S2
➖ se quita BUCK
⚑ SetFlag FLAG_BUCK_LEFT_BATTLEGROUND
```
</details>

### SurvivalArea_Battleground · `Battleground_OnFrame_Welcome` (Pendiente · alta)

Campo de Batalla: bienvenida y revanchas diarias con líderes y Alto Mando.

<details><summary>Guion de Platino</summary>

```
⚑ SetVar VAR_BATTLEGROUND_STATE, 1
🚶 EXPERT_M: ¡!
🚶 PLAYER: anda N2, anda E4
💬 Oh? So, you are?! You’re Buck’s friend, yes! I’ve heard about you from both Buck and Wake. Well, my young friend, you’re always welcome here
```
</details>

### Route224 · `Route224_CoordEvent_Marley` (Pendiente · baja)

Marley ante la losa (evento de Shaymin).

<details><summary>Guion de Platino</summary>

```
➕ aparece MARLEY
🚶 MARLEY: anda N8, mira E
🚶 PLAYER: mira W
💬 Marley: I... I don’t like to talk... I choose my words carefully, but they may still hurt someone accidentally... When I think of that, I cl
🚶 MARLEY: anda S, anda E5, anda N4
🚶 PLAYER: mira E, mira N
⚑ SetVar VAR_SHAYMIN_EVENT_STATE, 2
⚑ SetVar VAR_ROUTE_224_STATE, 2
💬 Marley: That stone tablet... It has a strange feel to it...
```
</details>

### Route218_West · `Route218GateToCanalaveCity_CoordEvent_ScientistM` (Pendiente · baja)

Científico que instala el programa macho/hembra en la Pokédex.

<details><summary>Guion de Platino</summary>

```
🚶 SCIENTIST_M: ¡!, anda E, anda N2, mira E
💬 ‹N0›, long time, no see! Oh? You look puzzled. You’re wondering who I am. I’m Professor Rowan’s assistant and ‹N1›’s father. The professor a
💬 Let’s see... Was I supposed to put in the software here...? Ka-chunk. Ka-chunk! All done! I’ve upgraded your Pokédex! I should explain how i
🚶 SCIENTIST_M: anda S2, anda E4
➖ se quita SCIENTIST_M
⚑ SetVar VAR_ROUTE_218_GATE_TO_CANALAVE_CITY_STATE, 1
```
</details>

### PokemonMansion · `PokemonMansion_MaidWest` (Pendiente · media)

Reto de las 5 Doncellas (combates seguidos con turnos objetivo).

<details><summary>Guion de Platino</summary>

```
↪ si TRAINER_RICH_BOY_LIAM: VisitAgainTomorrow
↪ si TRAINER_LADY_CELESTE: VisitAgainTomorrow
🚶 MAID_FAR_WEST: mira E
🚶 PLAYER: anda E, anda N, mira W
↪ si FLAG_STARTED_FIVE_MAID_KNOCKOUT_CHALLENGE: ExplainChallenge
↪ si FLAG_STARTED_FIVE_MAID_KNOCKOUT_CHALLENGE: TargetedTurnsIsThis
⚑ SetFlag FLAG_STARTED_FIVE_MAID_KNOCKOUT_CHALLENGE
❓ sí/no
↪ si VAR_RESULT MENU_NO: DontDoChallenge
💬 Very well! Our first maid, please!
🚶 MAID_FAR_WEST: anda N, mira S
⚑ SetVar VAR_TOTAL_TURNS_LAST_BATTLE, 0
⚑ SetVar VAR_0x8005, 0
➕ aparece FIVE_MAID_KNOCKOUT_MAID
🚶 FIVE_MAID_KNOCKOUT_MAID: SetVisible, mira E
💬 First up! My favorite color is blue! I will open the proceedings!
⚔ TrainerBattle TRAINER_MAID_BELINDA
↪ si VAR_RESULT FALSE: BlackOut
💬 The next person up is quite strong, really.
🚶 FIVE_MAID_KNOCKOUT_MAID: mira W, desaparece
🚶 FIVE_MAID_KNOCKOUT_MAID: SetVisible, mira E
💬 I’m pleased to meet you in battle. My best color is green!
⚔ TrainerBattle TRAINER_MAID_SOPHIE
↪ si VAR_RESULT FALSE: BlackOut
💬 I was no. 2, and a little bit tough! The next maid is even tougher!
🚶 FIVE_MAID_KNOCKOUT_MAID: mira W, desaparece
🚶 FIVE_MAID_KNOCKOUT_MAID: SetVisible, mira E
💬 My lucky color is yellow! The sunshine girl! That’s me!
⚔ TrainerBattle TRAINER_MAID_EMILY
↪ si VAR_RESULT FALSE: BlackOut
💬 The next maid is a wee bit stronger than I am.
🚶 FIVE_MAID_KNOCKOUT_MAID: mira W, desaparece
🚶 FIVE_MAID_KNOCKOUT_MAID: SetVisible, mira E
💬 Pink is the color I can’t do without! I’m the fourth in line!
⚔ TrainerBattle TRAINER_MAID_ELENA
↪ si VAR_RESULT FALSE: BlackOut
💬 Th-the next maid up is really strong!
🚶 FIVE_MAID_KNOCKOUT_MAID: mira W, desaparece
🚶 MAID_FAR_WEST: anda S, mira E
💬 Congratulations! You have defeated four maids so far. You have taken turns up to now. The target is turns.
🚶 MAID_FAR_WEST: anda N, mira S
🚶 FIVE_MAID_KNOCKOUT_MAID: SetVisible, mira E
💬 My symbolic color is red! Prepare for no. 5!
⚔ TrainerBattle TRAINER_MAID_CLARE
↪ si VAR_RESULT FALSE: BlackOut
💬 You knocked out the five of us! You have to be splendid!
🚶 FIVE_MAID_KNOCKOUT_MAID: mira W, desaparece
➖ se quita FIVE_MAID_KNOCKOUT_MAID
🚶 MAID_FAR_WEST: anda S, mira E
💬 Congratulations for your sweep. The targeted number of turns was . The number of turns you needed to defeat the maids was .
💬 Ooh... How disappointing for you. That said, you swept the five maids. That’s plenty to be proud of!
💬 Please visit again tomorrow.
```
</details>

### PokemonMansion_Office · `PokemonMansionOffice_MrBacklot` (Pendiente · baja)

Frases sueltas de Backlot y el mayordomo.

<details><summary>Guion de Platino</summary>

```
↪ si FLAG_DAILY_ADDED_TROPHY_GARDEN_MON: ThereAreCutePokemon
↪ si VAR_MAP_LOCAL_0x0B 1: ThereAreCutePokemon
↪ si VAR_RESULT TRUE: YouAreEnviousYes
💬 Backlot: Hello, hello! Welcome to my opulent mansion! There’s a lot for me to be proud of inside, and outside, of this home... But what make
```
</details>

### PokemonMansion_Office · `PokemonMansionOffice_OldMan` (Pendiente · baja)

Mayordomo con frases según el día.

<details><summary>Guion de Platino</summary>

```
↪ si VAR_RESULT TRUE: OldManNationalDexEnabled
↪ si FLAG_DAILY_ADDED_TROPHY_GARDEN_MON: ThereWereSomePokemon
↪ si VAR_RESULT TRUE: MessageGameCompleted
↪ si VAR_RESULT 0: MasterIsWonderful
↪ si VAR_RESULT 1: MasterEnjoysShowingGarden
🚶 OLD_MAN: mira S
```
</details>

### PokemonMansion_Office · `PokemonMansionOffice_CoordEvent_BlockStatue` (Pendiente · baja)

Policía que no deja tocar la estatua.

<details><summary>Guion de Platino</summary>

```
🚶 POLICEMAN: mira W
💬 I’m very sorry. But please refrain from touching this statue.
🚶 PLAYER: anda S, mira N
🚶 POLICEMAN: mira S
```
</details>

## Hechas en sinnoh27 y sinnoh28

### TwinleafTown_MainHouse_1F · `TwinleafTownPlayerHouse1F_Mom`

Mamá cambia de frase según la historia (Barry impaciente, «¿no te espera Barry?», instrucciones de las Deportivas, descanso según la hora, preocupación durante la crisis Galaxia).

### JubilifeCity · `JubilifeCity_CoordEvent_FirstArrival`

Dawn/Lucas se acerca, pregunta cuántos Pokémon llevas, te lleva hacia la escuela, conocéis a Looker (sí/no, Grabadora), y te deja en la Escuela de Entrenadores.

### JubilifeCity_PokemonSchool · `TrainersSchool_Rival`

Barry se acerca, recibe el Paquete, te da el Mapa y sale corriendo, con los textos de Platino.

### Route203 · `Route203_CoordEvent_Rival`

Barry se acerca andando, combate y se va, con los textos de Platino.

### OreburghGate_1F · `OreburghGate1F_CoordEvent_Hiker`

El montañero te ve, se acerca y te da Golpe Roca.

### OreburghCity · `OreburghCity_CoordEvent_Youngster`

El chico ve que no tienes medallas y te lleva al gimnasio; allí aparece Barry.

### ValleyWindoworks_Indoor · `ValleyWindworksBuilding_OnFrame_FirstEntry`

El grunt de la puerta se sorprende de que tengas la llave y huye a avisar a Marte.

### EternaCity_GalacticBuilding_1F · `TeamGalacticEternaBuilding1F_OnFrame_Looker`

Looker disfrazado de grunt te asusta, se quita el disfraz y te avisa de las escaleras trampa.

### EternaCity_GalacticBuilding_RotomsRoom · `RotomsRoom_OnFrame_ProfRowan`

Rowan visita la sala de Rotom la primera vez que cambias su forma.

### HearthomeCity_Gym · `HearthomeGym_OnFrame_FirstVisit`

El guía del gimnasio se acerca la primera vez que entras.

### VeilstoneCity · `VeilstoneCity_Counterpart`

Almacén: sí/no, andar hasta los grunts, combate doble (sinnoh27).

### PastoriaCity · `PastoriaCity_CrasherWake`

Wake y Barry persiguen al grunt (sinnoh28: textos y orden de Platino).

### PastoriaCity · `PastoriaCity_CoordEvent_Bomb`

Explosión: el grunt huye, Wake pide que no le sigáis y Barry se queda vigilando la entrada del Gran Pantano hasta que vences al grunt del Lago Valor.

### PastoriaCity · `PastoriaCity_CoordEvent_BlockGreatMarsh`

Barry te bloquea la entrada: «¿Por qué no te has ido ya?».

### ValorLakefront · `ValorLakefront_GruntM`

Cynthia y Barry en la orilla (sinnoh27); faltan las dos frases del grunt corriendo.

### CelesticTown · `CelesticTown_GruntM`

El grunt pregunta sí/no, combate y se va andando.

### CanalaveCity_Library_F3 · `CanalaveLibrary3F_OnFrame_Explosion`

Escena completa: Barry te lleva con Rowan, discurso de los lagos, reparto, explosión, noticias y salida de todos.

### LakeVerity · `LakeVerity_Mars`

Marte: derrota completa de Platino y retirada andando.

### GalacticHQ_4F · `GalacticHQ4F_CoordEvent_Cyrus`

Cyrus: todo el diálogo antes y después del combate y sale andando.

### GalacticHQ_ControlRoom · `GalacticHQControlRoom_Saturn`

Saturno se queda junto al botón tras perder.

### GalacticHQ_ControlRoom · `GalacticHQControlRoom_CoordEvent_Saturn`

Saturno repite «Pulsa el botón».

### SnowpointCity_PokemonCenter_1F · `SnowpointCityPokecenter1F_Maylene`

Maylene dice otra frase antes de que ganes la medalla de Candice.

### SunyshoreCity · `SunyshoreCity_CoordEvent_RivalAndJasmine`

Al salir con la 8.ª medalla: Barry habla y se va, Jasmine se acerca y te da Cascada.

### PokemonLeague_NorthPokemonCenter_1F · `PokemonLeagueNorthPokecenter1F_CoordEvent_Rival`

Barry en la Liga con los textos de Platino (sinnoh27).

### Route207 · `Route207_CoordEvent_Counterpart`

Dawn/Lucas se acerca y te da el Buscapelea y la Zahorí (su nombre ya sale bien).

Además, fuera de este análisis (porque en Platino son escenas de otro tipo) se hicieron en sinnoh27: Júpiter y Barry en el Lago Agudeza, Barry en la orilla del Lago Agudeza, Wake y Dawn/Lucas ante el Gimnasio de Rocavelo, el grunt de la llave y Looker en Rocavelo, Rowan y Cynthia en el Salón de la Fama y la presentación de Cynthia en la revancha.

## Ya estaban hechas (o el hack usa otra solución válida)

### TwinleafTown · `TwinleafTown_CoordEvent_RivalWasLookingForYou`

El guitarrista te detiene y anda; hecho en sinnoh26.

### Route201 · `Route201_CoordEvent_RivalStartFollowing`

Coreografía de Barry hacia el lago hecha en sinnoh26; falta solo la frase «Me and you together...».

### VerityLakefront · `VerityLakefront_CoordEvent_WereAtTheLake`

La llegada al lago con Barry ya existe (Orilla Veraz) con otro texto.

### SandgemTown · `SandgemTown_CoordEvent_CounterpartLeadToLab`

Dawn/Lucas te lleva al laboratorio y Barry sale corriendo; textos casi iguales a Platino.

### Route202 · `Route202_CoordEvent_CatchingTutorial`

Tutorial de captura con combate real hecho en sinnoh26.

### JubilifeCity · `JubilifeCity_CoordEvent_LookerBlockRoute203`

Looker/bloqueo hacia la Ruta 203 ya existe con otro texto (Poké­tch).

### JubilifeCity · `JubilifeCity_CoordEvent_TeamGalactic`

Combate doble con Dawn/Lucas contra los grunts y Rowan, hecho; faltan frases sueltas (Estuche de Accesorios: excluido).

### OreburghCity · `OreburghCity_CoordEvent_Rival`

Barry choca contigo al salir del gimnasio; hecho en sinnoh25.

### FloaromaMeadow · `FloaromaMeadow_CoordEvent_Grunts`

Grunts y el señor de la Miel, con combate y Llave; correcto.

### Route205_South · `Route205South_CoordEvent_LittleGirl`

La niña te pide ayuda; correcto.

### Route205_South · `Route205South_CoordEvent_Grunts`

Grunts del puente; falta una frase.

### ValleyWindworks · `ValleyWindworksOutside_OnFrame_Looker`

Looker en el Valle Eólico; correcto.

### EternaForest · `EternaForest_CoordEvent_CherylStartFollowing`

Cheryl se une; correcto.

### EternaForest · `EternaForest_CoordEvent_CherylLeavePlayer`

Despedida de Cheryl con regalo; faltan dos frases.

### EternaForest · `EternaForest_Gardenia`

Gardenia ante la Vieja Chateau; correcto.

### EternaCity · `EternaCity_CoordEvent_Rival`

Barry y Cyrus ante la estatua; hecho.

### EternaCity · `EternaCity_CoordEvent_CynthiaGiveCut`

Cynthia y Corte; hecho.

### EternaCity · `EternaCity_CoordEvent_BlockExitSouth`

NPC que bloquea la salida sur; correcto.

### EternaCity · `EternaCity_CoordEvent_BlockExitWest`

NPC que bloquea la salida oeste; correcto.

### EternaCity · `EternaCity_Cynthia`

Cynthia y el Huevo; correcto.

### EternaCity_GalacticBuilding_4F · `TeamGalacticEternaBuilding4F_Jupiter`

Júpiter y el Clefairy; correcto.

### HearthomeCity · `HearthomeCity_CoordEvent_BunearyAndKeira`

Keira y Buneary; correcto.

### HearthomeCity_Gym · `HearthomeGym_Fantina`

Fantina; correcto.

### Route209_Access · `Route209GateToHearthomeCity_CoordEvent_Rival`

Barry en la garita; correcto.

### SolaceonTown · `SolaceonTown_CoordEvent_Rival`

Barry en Sosiego; correcto.

### VeilstoneCity · `VeilstoneCity_OnFrame_CounterpartNeedsHelp`

Dawn/Lucas espera junto al almacén y te habla al acercarte.

### VeilstoneCity · `VeilstoneCity_CoordEvent_GruntBlockWarehouse`

Grunts que guardan el almacén; correcto.

### VeilstoneCity_GalacticWarehouse · `VeilstoneCityGalacticWarehouse_OnFrame_EnterWithLooker`

Looker dentro del almacén; correcto.

### VeilstoneCity_GalacticWarehouse · `VeilstoneCityGalacticWarehouse_CoordEvent_LookerOpenDoor`

Looker abre la puerta de la sede; correcto.

### VeilstoneCity_House4 · `VeilstoneCitySoutheastHouse_Clown`

Payaso de la Caja Monedas; correcto.

### PastoriaCity · `PastoriaCity_CoordEvent_RivalBattle`

Combate con Barry; correcto.

### PastoriaCity · `PastoriaCity_GruntM`

Grunt antes de la bomba; falta la frase del paquete de Rocavelo.

### PastoriaCity_GreatMarshGate · `PastoriaCityObservatoryGate1F_CoordEvent_TryStartSafariGame`

El Safari usa el sistema de Esmeralda.

### PastoriaCity_GreatMarshGate · `PastoriaCityObservatoryGate1F_OnFrame_TryExitEarly`

Vaquera y premio; correcto.

### Route213 · `Route213_GruntM`

Grunt de la bomba y Looker; correcto.

### Route217 · `Route217_CoordEvent_Maylene`

Maylene en la Ruta 217; correcto.

### CelesticTown · `CelesticTown_OnFrame_Cynthia`

Cynthia en Celestic; correcto.

### CelesticTown_Ruins · `CelesticTownCave_Cyrus`

Cyrus en las ruinas; correcto.

### FullmoonIsland · `FullmoonIsland_Sailor`

Marinero de vuelta a Canal; correcto.

### LakeVerity_Cavern · `VerityCavern_Mesprit`

Rowan en la cueva de Mesprit; correcto.

### LakeVerity_LowWater · `LakeVerityLowWater_OnFrame_Cyrus`

Cyrus y Barry en el Lago Veraz seco; correcto.

### MtCoronet_1F_North_Room1 · `MtCoronet1FNorthRoom1_GruntM`

Grunts de la niebla; correcto.

### MtCoronet_1F_South · `MtCoronet1FSouth_CoordEvent_Cyrus`

Cyrus en el Monte Corona; falta una frase.

### MtCoronet_2F · `MtCoronet2F_CoordEvent_Looker`

Looker y la Flauta Negra; correcto.

### SnowpointCity · `SnowpointCity_CoordEvent_TempleGuard`

Guardia del templo y Candice; correcto.

### SnowpointCity · `SnowpointCity_SailorSSSpiral`

Barco a la Zona Combate; correcto.

### SunyshoreCity · `SunyshoreCity_OnFrame_Flint`

Flint en Marina; correcto.

### SunyshoreCity · `SunyshoreCity_Flint`

Flint; correcto.

### SunyshoreCity_VistaLighthouse · `VistaLighthouse_Volkner`

Volkner en el faro; correcto.

### PokemonLeague_NorthPokemonCenter_1F · `PokemonLeagueNorthPokecenter1F_DoorGuard`

Se usa el guardia de Esmeralda que comprueba las medallas.

### SinnohVictoryRoad_1F_Room2 · `VictoryRoad1FRoom2_CoordEvent_PlayerLeaveMarley`

Marley; correcto.

### SinnohVictoryRoad_1F_Room2 · `VictoryRoad1FRoom2_CoordEvent_MarleyLeavePlayer`

Marley; correcto.

### FightArea · `FightArea_OnFrame_Rival`

Barry, Flint y Volkner, combate doble y Palmer; faltan tres frases de Barry/Palmer.

### FightArea · `FightArea_Rival`

Igual que la anterior.

### FightArea · `FightArea_Sailor2`

Barco a Puntaneva; correcto.

### IronIsland · `IronIsland_Sailor`

Barco de la Isla Hierro; correcto.

### IronIsland_B2F_Left · `IronIslandB2FLeftRoom_CoordEvent_RileyStartFollowing`

Riley se une; correcto.

### ResortArea · `ResortArea_CoordEvent_SchoolKidM`

El chico te regala la Villa; correcto.

### Route227 · `Route227_CoordEvent_WakeRival`

Wake y Barry en la Ruta 227; correcto.

### Route227 · `Route227_CoordEvent_Buck`

Buck; correcto.

### Route224 · `Route224_ProfOak`

Oak en la Ruta 224; correcto.

### WaywardCave_1F · `WaywardCave1F_CoordEvent_Exit`

Mira en la Gruta Desvío; correcto.

## Excluidas

### JubilifeCity · `JubilifeCity_CoordEvent_LookerPalPad`

Pal Pad (Wi‑Fi) no existe en GBA.

### JubilifeCity_JubilifeTV_F2 · `JubilifeTV2FGallery_Hiker`

Probador de Accesorios: no existe en Esmeralda.

### Route213_FootstepHouse · `FootstepHouse_DrFootstep`

Cintas y huellas: no existen en Esmeralda.

### CanalaveCity · `CanalaveCity_OnFrame_AfterDarkrai`

Darkrai necesita la Carta Socio (evento).

### CanalaveCity_HarborInn · `CanalaveCityHarborInn_OnFrame_Sleep`

Evento de Darkrai.

### NewmoonIsland · `NewmoonIsland_Sailor`

Evento de Darkrai.

### HallOfOrigin · `HallOfOrigin_CoordEvent_Arceus`

Arceus necesita la Flauta Azur (evento).

### SendoffSpring · `SendoffSpring_OnFrame_Cynthia`

Fuente Despedida excluida por decisión tuya.

### FightArea_FrontierGate · `BattleFrontierGateToFightArea_OnFrame_FirstEntry`

Se usa el Frente Batalla de Esmeralda.

### AmitySquare · `AmitySquare_CoordEvent_WestGate`

Paseo con Pokémon de la Plaza Amistad: necesita acompañante Pokémon.

### AmitySquare · `AmitySquare_CoordEvent_EastGate`

Igual que la anterior.

### AmitySquare · `AmitySquare_CoordEvent_ExitAmitySquare`

Igual que la anterior.

