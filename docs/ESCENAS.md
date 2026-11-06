# Escenas: lista completa y desarrollo

Revisión de todas las escenas de Platino (pret/pokeplatinum) comparadas con el hack: eventos de coordenadas, escenas al entrar en un mapa y NPC con coreografía. Para cada una se indica el estado en el hack y, en las pendientes, el guion de Platino paso a paso, que es lo que hay que reproducir con `sn_walkto`, `sn_walktoplayer` y `sn_playerface`.

Fuentes: scripts y textos de pret/pokeplatinum (`res/field/scripts`, `res/text`), y Bulbapedia/WikiDex para el orden de la historia.

Herramientas: `rev/scenes.py` (auditoría), `rev/story.py` (guion de Platino), `rev/cards.py` (textos que faltan).

## Resumen

| Estado | Escenas |
|---|---|
| Hecha (sinnoh29) | 18 |
| Hecha (sinnoh27-28) | 25 |
| Pendiente · alta | 0 |
| Pendiente · media | 0 |
| Pendiente · baja | 0 |
| Ya estaba | 65 |
| Excluida | 22 |

Leyenda del guion: 💬 texto, 🚶 movimiento (anda/corre + dirección y casillas, «mira», «¡!»), ➕/➖ aparece/se quita un personaje, ⚔ combate, 🎁 regalo, ❓ pregunta sí/no, ⚑ flag o variable, ↪ rama.

## Pendientes

No queda ninguna escena pendiente: todas están hechas, ya estaban o se han excluido con su motivo.

## Hechas en sinnoh29

### Route202 · `Route202_Counterpart`

Posliga: Dawn/Lucas te espera en la Ruta 202 y explica el Radar Pokémon.

### EternaCity · `EternaCity_CoordEvent_CynthiaBlockBikeShop`

Cynthia te para para darte el Huevo.

### HearthomeCity · `HearthomeCity_Fisherman`

El pescador te acompaña a la Sala de Concursos.

### ValorLakefront · `ValorLakefront_CoordEvent_BlockSunyshore`

Camino a Marina cortado por el apagón hasta después de la Columna Lanza.

### ValorLakefront_Restaurant · `Restaurant_OnFrame_Closed`

Restaurante con horario de cierre.

### CelesticTown · `CelesticTown_CoordEvent_Elder`

La anciana espera fuera.

### CanalaveCity_Library_F1 · `CanalaveLibrary1F_Lucian`

Lucian en la biblioteca.

### CanalaveCity · `CanalaveCity_SailorEldritch`

Eldritch te pide el Ala Lunar.

### CanalaveCity_House3 · `CanalaveCitySailorEldritchHouse_LittleBoy`

El hijo despierta con el Ala Lunar.

### SpearPillar · `SpearPillar_CoordEvent_Grunts`

Textos de Platino y, si solo tienes un Pokémon, te echan atrás.

### SurvivalArea_Battleground · `Battleground_Buck`

Buck en la entrada tras el Monte Dura.

### SurvivalArea_Battleground · `Battleground_OnFrame_Welcome`

Bienvenida, líderes distintos cada día y los dos juegos de frases diarios de Platino.

### Route224 · `Route224_CoordEvent_Marley`

Marley llega a la losa.

### Route218_West · `Route218GateToCanalaveCity_CoordEvent_ScientistM`

El padre de Dawn/Lucas en la garita.

### PokemonMansion · `PokemonMansion_MaidWest`

Reto de las 5 doncellas.

### PokemonMansion_Office · `PokemonMansionOffice_MrBacklot`

Backlot presume del Jardín Trofeo.

### PokemonMansion_Office · `PokemonMansionOffice_OldMan`

Mayordomo con frases.

### PokemonMansion_Office · `PokemonMansionOffice_CoordEvent_BlockStatue`

Policía que no deja tocar la estatua.

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

### Route201 · `Route201_CoordEvent_PickAPokemon`

El hack ya te para con el maletín (Rowan te dice que lo abras).

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

### EternaForest · `EternaForest_CoordEvent_PlayerLeaveCheryl`

Cheryl se queda esperando si vuelves a la entrada.

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

### IronIsland_B2F_Left · `IronIslandB2FLeftRoom_CoordEvent_PlayerLeaveRiley`

Riley se queda esperando si vuelves atrás.

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

### Route201 · `Route201_CoordEvent_FollowingRivalStopPlayerSouth`

En el hack Barry no te acompaña por la Ruta 201, así que no hay nada que frenar.

### Route201 · `Route201_CoordEvent_FollowingRivalStopPlayerEast`

Igual que la anterior.

### JubilifeCity · `JubilifeCity_CoordEvent_LookerPalPad`

Pal Pad (Wi‑Fi) no existe en GBA.

### JubilifeCity_JubilifeTV_F2 · `JubilifeTV2FGallery_Hiker`

Probador de Accesorios: no existe en Esmeralda.

### OreburghMine_B1F · `OreburghMineB1F_Hiker`

Depende del evento de Arceus (Sala del Origen), que no se hace.

### EternaForest · `EternaForest_OnFrame_CherylOldChateauCutscene`

En Platino solo salta si cortas el árbol con Cheryl; en el hack no se puede tener Corte en ese momento.

### Route213_FootstepHouse · `FootstepHouse_DrFootstep`

Cintas y huellas: no existen en Esmeralda.

### CanalaveCity_Library_F2 · `CanalaveLibrary2F_OnFrame_Hiker`

Depende del evento de Arceus (Sala del Origen), que no se hace.

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

### ResortArea_Villa · `Villa_OnFrame_FirstEntry`

La Villa no se hace (decisión del usuario).

### ResortArea_Villa · `Villa_SchoolKidM`

La Villa no se hace.

### ResortArea_Villa · `Villa_CoordEvent_DontGoYet`

La Villa no se hace.

### ResortArea_Villa · `Villa_Volkner`

La Villa no se hace.

### ResortArea_Villa · `Villa_Flint`

La Villa no se hace.

### AmitySquare · `AmitySquare_CoordEvent_WestGate`

Paseo con Pokémon de la Plaza Amistad: necesita acompañante Pokémon.

### AmitySquare · `AmitySquare_CoordEvent_EastGate`

Igual que la anterior.

### AmitySquare · `AmitySquare_CoordEvent_ExitAmitySquare`

Igual que la anterior.

