using namespace app;

namespace app::methods::LegacyRespawner {
IL2CPP_REGISTER_METHOD(0x00A32B00, void, UpdateRespawners, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00A32C70, void, ProvideComponents, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x0094FCE0, void, set_IsSuspended, (LegacyRespawner * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005065F0, SuspendableMask__Enum, get_Mask, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A32D00, void, set_Mask, (LegacyRespawner * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00A32DC0, void, ResetStatics, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x00A32EA0, void, Awake, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A33130, void, OnDestroy, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A33370, void, OnSceneStartLateBeforeSerialize, (LegacyRespawner * __this, SceneRoot * sceneRoot));
IL2CPP_REGISTER_METHODINFO(0x04775EF8, LegacyRespawner_OnSceneStartLateBeforeSerialize__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A334F0, void, Start, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A33860, void, OnEnable, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A33A00, void, OnDisable, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A33BA0, void, OnRestoreCheckpoint, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHODINFO(0x04720090, LegacyRespawner_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A33BB0, void, PerformRespawnOffscreen, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A33CE0, void, Prepare, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A33DC0, void, OnTargetDestroyed, (LegacyRespawner * __this, Damage * damage));
IL2CPP_REGISTER_METHOD(0x00A33DC0, void, OnTargetDestroyed, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHODINFO(0x04769620, LegacyRespawner_OnTargetDestroyed_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00A33E90, void, UpdateRespawner, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A34110, bool, get_IsOnScreen, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A34340, void, PerformTimedRespawn, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A34630, void, PerformRespawn, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A34660, void, Serialize, (LegacyRespawner * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00A34750, void, __ctor, (LegacyRespawner * __this));
IL2CPP_REGISTER_METHOD(0x00A34770, void, __cctor, (MethodInfo * method));
}
