# Proyecto Sinnoh — Lo que queda por hacer y mejorar

Lista única de tareas pendientes. Cuando se termine una tarea, se borra de aquí.
Fuentes de referencia: Bulbapedia (guía de Platino), WikiDex, pret/pokeplatinum (textos, eventos y datos originales).

Última revisión: 6 de noviembre de 2026 (sinnoh29).

---

## 1. Escenas hechas pero sin probar en el emulador

Ya probadas: Barry en Pirita (antes y después de la medalla), Barry en Sosiego, lotería de la TV de Jubileo, garitas de la Ruta Ciclista, Radar Pokémon, Pokémon de otras regiones tras la Liga, introducción con chica, Dawn en el mapa y en los créditos, Gracídea en Pradera, reencuentro en el Valle Eólico, Casino de Rocavelo, roca musgo, baldosas del Gimnasio Corazón, puertas y payaso de la Caja Monedas.

Faltan:
- Jubileo: combate doble con Dawn/Lucas.
- Versiones de Lucas cuando juegas con chica (Arena, Ruta 202, Jubileo, Canal, Lago Veraz).
- Cueva del Lago Veraz (Rowan), Monte Corona 2F (Looker), Ruta 224 (Oak, la losa y Shaymin).
- Roark en la mina, Gardenia ante la Vieja Chateau, Looker en el Casino, soldados de la niebla en el Monte Corona.
- Buck y Barry en el Área Supervivencia, recepcionista y vaquera del Gran Pantano.
- Charla de Riley en la Isla Hierro.
- Túnel Maníaco con menos y con más de 26 formas de Unown.
- Laboratorio de Arena después de la Columna Lanza (Rowan y Dawn).
- Campo de Batalla: los dos juegos de frases diarios de cada líder, «¿otra vez?» tras decir que no, y Roark/Byron cuando están los dos.
- Gimnasios de Pirita y Vetusta con los textos de Platino y las MT76 (Trampa Rocas) y MT86 (Hierba Lazo).
- Canal: frases de los vecinos tras la explosión del Lago Valor.

## 2. Escenas con la coreografía de Platino (en curso)

Lista completa, escena por escena, con el guion de Platino de cada pendiente: `docs/ESCENAS.md`.

Herramienta: `src/sinnoh_scene.c` y las macros `sn_walktoplayer`, `sn_walkto`, `sn_walkto_vars` y `sn_playerface` (asm/macros/event.inc) calculan los caminos al vuelo.

Hechas: Jubileo (llegada con Dawn/Lucas y Looker, Barry en la escuela), Ruta 203 (Barry), Puerta y ciudad de Pirita (montañero y chico), Edificio Galaxia (Looker), sala de Rotom (Rowan), Valle Eólico (grunt de la puerta), Gimnasio Corazón (guía), Ruta 207 (Buscapelea), Pradera (bomba y Barry vigilando), Celestic (grunt), Biblioteca de Canal (explosión), Lago Veraz (Marte), Sede Galaxia (Cyrus y Saturno), Marina (Barry y Jasmine), Rocavelo (almacén con sí/no, grunt de la llave y Looker, Wake en el gimnasio), Lago Agudeza (Júpiter y Barry) y su orilla (Barry), orilla del Lago Valor (Barry y Cynthia), Salón de la Fama (Rowan y Cynthia), Hojaverde (Barry sale de casa, su habitación, el guitarrista), casa del jugador (TV, Barry, mamá, la madre de Barry), Ruta 201 (escena de los iniciales), Lago Veraz (Cyrus y Barry), las 35 salidas con fundido que en Platino son andando, y todas las aproximaciones de NPC (ya no se calculan por casilla fija).

Ya no queda ninguna escena pendiente (ver `docs/ESCENAS.md`; la Villa está excluida).

Diálogos de NPC que aún no tienen todas las frases de Platino (unas 980 de 2370), casi todos de cosas que no existen en el hack: Villa, Subsuelo (Hombre Topo), Dr. Footstep y cintas, Pokétch, Plaza Amistad, Galería de la TV. Lo que queda fuera de eso son frases sueltas de NPC con ramas que dependen de variables de Platino sin equivalente directo (por ejemplo, Barry en Pradera tras el gimnasio o el concurso de payasos de Jubileo).

## 3. Prueba final

- Jugar una partida completa, de principio a fin, con chico y con chica.

---

## Decisiones tomadas (no son tareas)

- Gimnasio de Puntaneva: se queda el de hielo de Arrecípolis (decisión del usuario).
- Montaña Dura este: está conectada con la parte oeste por el borde del mapa; no hay que tocarla.
- TV de Jubileo 2F: la Galería de fotos y el probador de Platino necesitan Accesorios, que no existen en Esmeralda. Sus NPC sí están.
- Túnel Maníaco: Esmeralda no guarda las formas de Unown «vistas», así que se cuentan las que tienes (equipo y PC). Con 26 o más, el túnel llega a las Ruinas Sosiego.
- Rocas de Golpe Roca y peñascos de Fuerza de Platino que no están: en esos mapas el camino es distinto al de Platino y no caben sin cortar el paso. No se añaden.
- Lago Valor seco: tiene los Pokémon salvajes de la hierba de Platino.
- Vaquera del Gran Pantano: capturar 5 Pokémon en una partida del Safari da 3 Caramelos Raros, una sola vez.
- Radar Pokémon: programado. Rowan lo da en el laboratorio con la Pokédex Nacional. Cadenas de la misma especie; a partir de 40, shiny 1/200. Se recarga en 50 pasos.
- Pokémon de otras regiones: tras ganar la Liga, el 20 % de los encuentros en hierba y surf de Sinnoh son de otras regiones (generaciones 1-3 y 5-9) (sin iniciales, fósiles ni legendarios).
- Barco a Hoenn/Kanto: no se hace (decisión del usuario). El Frente Batalla ya se usa en la Zona Combate y se llega sin barco.
- Dawn jugadora: sus sprites (correr, bicis, surf, pesca, buceo, regar…) se generan a partir de los de Lucas con la cabeza y la ropa de Dawn. El andar es el que dibujó el usuario.
- PC: tras hablar con Bebe en Corazón el PC pasa a llamarse «PC de BEBE», como en Platino.
