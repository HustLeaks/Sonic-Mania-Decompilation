#ifndef OBJ_UIPICTURE_H
#define OBJ_UIPICTURE_H

#include "../SonicMania.hpp"

// Object Class
struct ObjectUIPicture : Object {

};

// Entity Class
struct EntityUIPicture : Entity {

};

// Object Entity
extern ObjectUIPicture UIPicture;

// Standard Entity Events
void UIPicture_Update();
void UIPicture_LateUpdate();
void UIPicture_StaticUpdate();
void UIPicture_Draw();
void UIPicture_Create(void* data);
void UIPicture_StageLoad();
void UIPicture_EditorDraw();
void UIPicture_EditorLoad();
void UIPicture_Serialize();

// Extra Entity Functions


#endif //!OBJ_UIPICTURE_H
