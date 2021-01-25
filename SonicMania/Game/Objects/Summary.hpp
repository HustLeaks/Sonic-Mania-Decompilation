#ifndef OBJ_SUMMARY_H
#define OBJ_SUMMARY_H

#include "../SonicMania.hpp"

// Object Class
struct ObjectSummary : Object {

};

// Entity Class
struct EntitySummary : Entity {

};

// Object Entity
extern ObjectSummary Summary;

// Standard Entity Events
void Summary_Update();
void Summary_LateUpdate();
void Summary_StaticUpdate();
void Summary_Draw();
void Summary_Create(void* data);
void Summary_StageLoad();
void Summary_EditorDraw();
void Summary_EditorLoad();
void Summary_Serialize();

// Extra Entity Functions


#endif //!OBJ_SUMMARY_H
