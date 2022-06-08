using namespace app;

namespace app::methods::RespawningPlaceholder {
IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetCurrentEntity, (RespawningPlaceholder * __this, LegacyEntity * entity));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CheckForOverlap, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanSpawn, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00908CA0, void, DestroyCurrentInstance, (RespawningPlaceholder * __this, bool destroy));
IL2CPP_REGISTER_METHOD(0x00908DB0, void, Spawn, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x009090E0, void, Awake, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00909510, void, OnEnable, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x009097A0, void, OnDisable, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00909990, void, OnRestoreCheckpoint, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x04732C28, RespawningPlaceholder_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x009099A0, void, OnDestroy, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00909C80, void, OnGameSerializeLoad, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHODINFO(0x04710B90, RespawningPlaceholder_OnGameSerializeLoad__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00909C90, void, OnSceneRootDisabled, (RespawningPlaceholder * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x047647F8, RespawningPlaceholder_OnSceneRootDisabled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00909E10, void, OnDeath, (RespawningPlaceholder * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x0474DF98, RespawningPlaceholder_OnDeath__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004E57D0, bool, get_EntityIsDead, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x008009A0, void, FixedUpdate, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x004FBAC0, bool, get_NeedsToRespawn, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00909F30, void, UpdateSpawnState, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0090A280, bool, get_IsOnScreen, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0090A460, void, PerformRespawn, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0090A470, void, PerformTimedRespawn, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FBBA0, LegacyEntity *, get_CurrentEntity, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00405F50, bool, get_IsSuspended, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00724140, void, set_IsSuspended, (RespawningPlaceholder * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FF7D0, SuspendableMask__Enum, get_Mask, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0090A480, void, set_Mask, (RespawningPlaceholder * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x0058E140, Vector3, get_Position, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0090A530, void, __ctor, (RespawningPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x0090A720, void, __cctor, (MethodInfo * method));
}
