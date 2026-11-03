#ifndef GUARD_SINNOH_SCENE_H
#define GUARD_SINNOH_SCENE_H

#include "constants/sinnoh_scene.h"

extern u8 gSinnohMoveBuf0[];
extern u8 gSinnohMoveBuf1[];
extern u8 gSinnohMoveBuf2[];
extern u8 gSinnohMoveBuf3[];

void SinnohPathToPlayer(void);
void SinnohPathTo(void);
void SinnohPlayerFaceObject(void);
void SinnohGetObjectPos(void);

#endif // GUARD_SINNOH_SCENE_H
