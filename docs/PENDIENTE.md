# Proyecto Sinnoh — Lo que queda por hacer y mejorar

Lista única de tareas pendientes. Cuando se termine una tarea, se borra de aquí.
Fuentes de referencia: Bulbapedia (guía de Platino), WikiDex, pret/pokeplatinum (textos y eventos originales).

Última revisión: 2 de noviembre de 2026.

---

## 1. Historia

| # | Dónde | Qué falta | Notas |
|---|-------|-----------|-------|
| 1.1 | Sosiego | Dawn/Lucas te recibe («¡Tengo algo guay!») y te habla de los Unown y las Ruinas. | En Platino te da el Estuche de Sellos. Esmeralda no tiene Sellos: hay que darle otro regalo o dejar solo la conversación. |
| 1.2 | Valle Eólico | La niña de la Ruta 205 se reúne con su padre cuando echas al Equipo Galaxia. | La escena de la Ruta 205 está hecha. Falta el reencuentro dentro de la central. |
| 1.3 | Isla Hierro | Frases de Riley mientras te acompaña: «Sería bueno que volvieras», «Acéptalo como muestra de amistad», «Las minas de acero se agotaron», «¿Conoces a Byron?», «Imagina un combate Acero contra Acero». | Están en los bancos `iron_island_b2f_left_room` y `follower_partners` de pokeplatinum. |
| 1.4 | Área Supervivencia | El abuelo de Buck cuenta la leyenda de Heatran. | Comprobar si Heatran depende de esa charla, como en Platino. |

## 2. Gráficos

| # | Qué | Notas |
|---|-----|-------|
| 2.1 | Sprite de Dawn en el mapa (sigue usando el de Leaf). | Hace falta una hoja de sprites de Dawn al estilo GBA (16×32, mismos fotogramas que Leaf). |
| 2.2 | Casino de Rocavelo: los NPC son los del Casino de Malvalona (Esmeralda). | Cambiarlos por los de Platino (Belleza, Pokéfan, Coleccionista, Guitarrista, Trabajador) con sus textos. La recepcionista y los premios deben seguir funcionando. |
| 2.3 | Buzones delante de las casas de Hojaverde. | Son decorativos; en Platino se pueden leer. |
| 2.4 | Roca musgo (Bosque Vetusta) y roca helada (Ruta 217). | Eevee ya evoluciona en esas zonas, pero las rocas no se ven en el mapa. |

## 3. Funciones y servicios

| # | Dónde | Qué falta | Notas |
|---|-------|-----------|-------|
| 3.1 | TV de Jubileo, 1F | Rincón de la Lotería. | El script de Calagua depende de su mapa (ID del dependiente y baldosas del ordenador). Hay que adaptarlo. |
| 3.2 | TV de Jubileo, 2F | Galería (fondos) y los NPC de esa planta. | Algunos textos hablan del Terminal Global, que se eliminó. |
| 3.3 | Túnel Maníaco (Ruta 214) | Se alarga según los Unown que hayas visto. | Necesita varios mapas o cambiar baldosas por script. |
| 3.4 | Ruta Ciclista (Ruta 206) | Las garitas no obligan a ir en bici. | En Platino la cuesta solo se sube en bici. |
| 3.5 | Gran Pantano | La vaquera da el reto de capturar 5 Pokémon en una partida del Safari. | En Platino el premio es una app del Pokétch; buscar otro premio. |
| 3.6 | Revanchas | Revisar qué entrenadores de Sinnoh tienen revancha con el Buscapelea. | El año pasado faltaban 13. |

## 4. Mapas

| # | Qué | Notas |
|---|-----|-------|
| 4.1 | Montaña Dura «este» (`StarkMountain_Room2_East`) no tiene salidas. | No se puede llegar a él, así que no estorba. Hay que conectarlo o borrarlo. |
| 4.2 | Gimnasio de Puntaneva: es el de hielo de Arrecípolis. | En Platino tiene bolas de nieve y entrenadores en el 1F. Funciona, pero no es el de Platino. |
| 4.3 | Revisión de posiciones contra Platino. | La auditoría (`posaudit.py`) marca unos 300 NPC de historia en otros sitios o con otra forma de aparecer. La mayoría son escenas hechas a mano, pero hay que revisarlos uno a uno en el juego. |

## 5. Escenas hechas pero sin probar en el emulador

- Jubileo: combate doble con Dawn/Lucas (la zona de activación se movió al cambiar el mapa).
- Versiones de Lucas cuando juegas con chica (Arena, Ruta 202, Jubileo, Canal, Lago Veraz).
- Cueva del Lago Veraz (Rowan), Monte Corona 2F (Looker), Ruta 224 (Oak, la losa y Shaymin).
- Barry al salir del Gimnasio Pirita con la medalla.
- Roark en la mina, Gardenia ante la Vieja Chateau, Looker en el Casino, soldados de la niebla en el Monte Corona.
- Buck y Barry en el Área Supervivencia, recepcionista del Gran Pantano.
- NPC nuevos de Pradera, Liga (Centro Pokémon norte), Zona Guay, Rutas 210 y 211, Puntaneva, restaurante de Ribera Valor, TV de Jubileo y Compañía PokéNav, Pokémon de Sosiego.
- Laboratorio de Arena después de la Columna Lanza (Rowan y Dawn).

## 6. Prueba final

- Jugar una partida completa, de principio a fin, con chico y con chica.
- Partidas guardadas antiguas: el nombre del rival corrupto ya se corrige solo (pasa a BARRY). Revisar si hay otros datos nuevos que en partidas viejas quedan sin iniciar.
