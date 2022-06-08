using namespace app;

namespace app::methods::TeleportDebugMenuPage {
IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ColumnOffset, (TeleportDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, String *, get_Name, (TeleportDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00CE7CD0, void, Awake, (TeleportDebugMenuPage * __this));
IL2CPP_REGISTER_METHOD(0x00CE7D70, void, GetItems, (TeleportDebugMenuPage * __this, List_1_List_1_IDebugMenuItem_ * items));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, GoToScene, (TeleportDebugMenuPage * __this));
IL2CPP_REGISTER_METHODINFO(0x047166C8, TeleportDebugMenuPage_GoToScene__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00CE8550, bool, GoToScene, (TeleportDebugMenuPage * __this, String * sceneName));
IL2CPP_REGISTER_METHOD(0x00CE8580, IEnumerator *, GoToSceneRoutine, (String * sceneName, Action * onComplete));
IL2CPP_REGISTER_METHOD(0x00CE86E0, void, __ctor, (TeleportDebugMenuPage * __this));
}
