#include <interception_macros.h>

namespace app::methods::GameMapSavePedestal {
IL2CPP_REGISTER_METHOD(0x0069FDA0, bool, get_IsTeleporterActive, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x0069FE80, void, set_IsTeleporterActive, (GameMapSavePedestal * __this, bool value));
IL2CPP_REGISTER_METHOD(0x0069FFA0, void, __ctor, (GameMapSavePedestal * __this, SceneMetaData_SceneSavePedestal * savePedestal, SceneMetaData * sceneMetaData));
IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Apply, (GameMapSavePedestal * __this, UberStateApplyContext__Enum context));
IL2CPP_REGISTER_METHOD(0x006A00F0, IUberState__Array *, get_AffectingUberStates, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A0170, List_1_UnityEngine_GameObject_ *, get_AllTargets, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A02C0, void, Show, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A03F0, void, CreateTeleporterIcon, (GameMapSavePedestal * __this, AreaMapUI * areaMap));
IL2CPP_REGISTER_METHOD(0x006A0840, void, Update, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A0A70, Vector2, get_AreaMapIconPosition, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A0B80, void, set_AreaMapIconPosition, (GameMapSavePedestal * __this, Vector2 value));
IL2CPP_REGISTER_METHOD(0x006A0CA0, Vector2, get_WorldProjectedPositon, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A0DB0, RuntimeGameWorldArea *, get_Area, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A0E80, void, Hide, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A0F80, void, Highlight, (GameMapSavePedestal * __this));
IL2CPP_REGISTER_METHOD(0x006A1070, void, Dehighlight, (GameMapSavePedestal * __this));
}
