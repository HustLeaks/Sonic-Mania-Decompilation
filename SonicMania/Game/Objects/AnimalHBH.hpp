#ifndef OBJ_ANIMALHBH_H
#define OBJ_ANIMALHBH_H

#include "../SonicMania.hpp"

// Object Class
struct ObjectAnimalHBH : Object {

};

// Entity Class
struct EntityAnimalHBH : Entity {

};

// Object Entity
extern ObjectAnimalHBH AnimalHBH;

// Standard Entity Events
void AnimalHBH_Update();
void AnimalHBH_LateUpdate();
void AnimalHBH_StaticUpdate();
void AnimalHBH_Draw();
void AnimalHBH_Create(void* data);
void AnimalHBH_StageLoad();
void AnimalHBH_EditorDraw();
void AnimalHBH_EditorLoad();
void AnimalHBH_Serialize();

// Extra Entity Functions


#endif //!OBJ_ANIMALHBH_H
