using namespace app;

namespace app::methods::OrbSpawnerManager {
IL2CPP_REGISTER_METHOD(0x002FD750, int32_t, get_SmallOrbXPAmount, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHOD(0x003FF3C0, int32_t, get_MediumOrbXPAmount, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHOD(0x003FF610, int32_t, get_LargeOrbXPAmount, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHOD(0x0061CDA0, void, OnGameReset, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHODINFO(0x0475BBD8, OrbSpawnerManager_OnGameReset__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0061CE80, void, Spawn, (OrbSpawnerManager * __this, OrbSpawnerManager_ItemType__Enum itemType, Vector2 position, Vector2 velocity, DropPickup_State__Enum initialState, bool overrideGravity, Vector3 gravityOverride, Transform * transformSource, int32_t overrideValue));
IL2CPP_REGISTER_METHOD(0x0061D060, void, Awake, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHOD(0x0061D3A0, void, OnDestroy, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHOD(0x0061D690, void, OnGameSerializeLoad, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHODINFO(0x04742C58, OrbSpawnerManager_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0061D770, void, FixedUpdate, (OrbSpawnerManager * __this));
IL2CPP_REGISTER_METHOD(0x0061DC90, void, __ctor, (OrbSpawnerManager * __this));
}
