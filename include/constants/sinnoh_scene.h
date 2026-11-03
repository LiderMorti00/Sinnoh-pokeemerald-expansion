#ifndef GUARD_CONSTANTS_SINNOH_SCENE_H
#define GUARD_CONSTANTS_SINNOH_SCENE_H

// Velocidades (VAR_0x8006)
#define SN_SPEED_NORMAL   0
#define SN_SPEED_FAST     1
#define SN_SPEED_FASTER   2
#define SN_SPEED_SLOW     3
#define SN_SPEED_RUN      4

// Opciones (VAR_0x8007)
#define SN_MOVE_EMOTE     (1 << 0)   // exclamación antes de andar
#define SN_MOVE_ADJACENT  (1 << 1)   // SinnohPathTo: parar junto al destino y mirarlo

// Orientación final (VAR_0x800A) para SinnohPathTo: DIR_SOUTH..DIR_EAST o:
#define SN_FACE_PLAYER    5

#endif // GUARD_CONSTANTS_SINNOH_SCENE_H
