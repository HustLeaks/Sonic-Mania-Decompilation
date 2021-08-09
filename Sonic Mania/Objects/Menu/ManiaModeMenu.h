#ifndef OBJ_MANIAMODEMENU_H
#define OBJ_MANIAMODEMENU_H

#include "SonicMania.h"

#if RETRO_USE_PLUS
// Object Class
typedef struct {
    RSDK_OBJECT
    int field_4;
    Entity *saveSelectMenu;
    Entity *noSaveMenu;
    Entity *secretsMenu;
    Entity *prompt1;
    Entity *encoreSaveSelect;
    Entity *prompt2;
    Entity *noSaveMenuEncore;
    int field_24;
    int field_28;
} ObjectManiaModeMenu;

// Entity Class
typedef struct {
	RSDK_ENTITY
} EntityManiaModeMenu;

// Object Struct
extern ObjectManiaModeMenu *ManiaModeMenu;

// Standard Entity Events
void ManiaModeMenu_Update(void);
void ManiaModeMenu_LateUpdate(void);
void ManiaModeMenu_StaticUpdate(void);
void ManiaModeMenu_Draw(void);
void ManiaModeMenu_Create(void* data);
void ManiaModeMenu_StageLoad(void);
void ManiaModeMenu_EditorDraw(void);
void ManiaModeMenu_EditorLoad(void);
void ManiaModeMenu_Serialize(void);

// Extra Entity Functions
void ManiaModeMenu_Initialize(void);
bool32 ManiaModeMenu_InitUserdata(void);
void ManiaModeMenu_InitLocalization(int a1);
int ManiaModeMenu_GetActiveMenu(void);
void ManiaModeMenu_ChangeMenuTrack(void);
int ManiaModeMenu_StartReturnToTitle(void);
void ManiaModeMenu_SetBGColours(void);
void ManiaModeMenu_ReturnToTitle(void);
void ManiaModeMenu_Unknown13(void);
void ManiaModeMenu_Unknown3(void);
void ManiaModeMenu_Unknown7(void);
#endif

#endif //!OBJ_MANIAMODEMENU_H
