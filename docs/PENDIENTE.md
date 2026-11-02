# Proyecto Sinnoh — Lo que queda por hacer y mejorar

Lista única de tareas pendientes. Cuando se termine una tarea, se borra de aquí.
Fuentes de referencia: Bulbapedia (guía de Platino), WikiDex, pret/pokeplatinum (textos y eventos originales).

Última revisión: 2 de noviembre de 2026 (segunda tanda).

---

## 1. Historia

No queda ninguna escena de la historia sin hacer. Lo que falta es probarlas todas en el emulador (apartado 5).

## 2. Gráficos

| # | Qué | Notas |
|---|-----|-------|
| 2.1 | Sprite de Dawn en el mapa (sigue usando el de Leaf). | Hace falta una hoja de sprites de Dawn al estilo GBA (16×32, mismos fotogramas que Leaf). |
| 2.3 | Buzones delante de las casas de Hojaverde. | Son decorativos; en Platino se pueden leer. |
| 2.4 | Roca musgo (Bosque Vetusta) y roca helada (Ruta 217). | Eevee ya evoluciona en esas zonas, pero las rocas no se ven en el mapa. |

## 3. Funciones y servicios

| # | Dónde | Qué falta | Notas |
|---|-------|-----------|-------|
| 3.2 | TV de Jubileo, 2F | Galería (fondos) y los NPC de esa planta. | Algunos textos hablan del Terminal Global, que se eliminó. |
| 3.3 | Túnel Maníaco (Ruta 214) | Se alarga según los Unown que hayas visto. | Necesita varios mapas o cambiar baldosas por script. |
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
- Reencuentro de la niña con su padre en el Valle Eólico (tras vencer a Mars).
- Charla de Riley en la Isla Hierro (frase al azar al hablarle mientras te acompaña).
- Garitas de la Ruta Ciclista: hay que ir en bici para entrar en la cuesta.
- Casino de Rocavelo: gente de Platino y muñecos de Pikachu, Clefairy y Jigglypuff.

## 6. Prueba final

- Jugar una partida completa, de principio a fin, con chico y con chica.
- Partidas guardadas antiguas: el nombre del rival corrupto ya se corrige solo (pasa a BARRY). Revisar si hay otros datos nuevos que en partidas viejas quedan sin iniciar.
