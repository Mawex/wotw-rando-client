using namespace app;

namespace app::methods::ReplaySetting {
IL2CPP_REGISTER_METHOD(0x006B8960, bool, ShowPositionOverride, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00901820, void, ApplyState, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00901920, void, RevertState, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00901A20, void, CacheInventoryAndDefaultEquipment, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x009023D0, void, ApplyInventory, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x009024E0, void, RevertInventory, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00902630, void, ApplyDefaultEquipment, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x009026C0, void, RevertDefaultEquipment, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00902710, void, Apply, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00902A70, IEnumerator *, ApplyRoutine, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00902BC0, void, SetPosition, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00902D60, void, UnloadScene, (String * sceneName));
IL2CPP_REGISTER_METHOD(0x00902E70, IEnumerator *, GoToSceneRoutine, (String * sceneName, SceneMetaData * metaData, Vector3 position, Action * onComplete, bool exit));
IL2CPP_REGISTER_METHOD(0x00903000, void, RevertToMenu, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00903010, void, RevertToGame, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00903110, void, __ctor, (ReplaySetting * __this));
IL2CPP_REGISTER_METHOD(0x00903120, void, _Apply_b__33_0, (ReplaySetting * __this));
IL2CPP_REGISTER_METHODINFO(0x04754BB0, ReplaySetting__Apply_b__33_0__MethodInfo);
}
