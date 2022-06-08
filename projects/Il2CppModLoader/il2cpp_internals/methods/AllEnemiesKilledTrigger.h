using namespace app;

namespace app::methods::AllEnemiesKilledTrigger {
IL2CPP_REGISTER_METHOD(0x004F2830, void, OnValidate, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F2C20, void, Awake, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F2DD0, void, OnDestroy, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F2F80, void, OnPreRestoreCheckpoint, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHODINFO(0x04791E00, AllEnemiesKilledTrigger_OnPreRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F2F90, void, Serialize, (AllEnemiesKilledTrigger * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x004F30B0, void, ResetCount, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F30D0, void, RefreshCount, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F3470, void, OnTriggerEnable, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F34A0, void, OnTriggerDisable, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F34B0, void, Init, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F3630, void, RegisterEvent, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F3E90, void, DeregisterEvent, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F4570, void, EntityKilled, (AllEnemiesKilledTrigger * __this, Damage * damage));
IL2CPP_REGISTER_METHODINFO(0x047953F0, AllEnemiesKilledTrigger_EntityKilled__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F4570, void, EntityKilled, (AllEnemiesKilledTrigger * __this, DamageResult damage));
IL2CPP_REGISTER_METHODINFO(0x0472BBD8, AllEnemiesKilledTrigger_EntityKilled_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x004F4580, void, EnemyKilled, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F4740, bool, IsFulfilled, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F4750, GameObject *, get_VirtualTimelineTarget, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x00417920, VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F47C0, String *, get_NameDisplayedOnClip, (AllEnemiesKilledTrigger * __this));
IL2CPP_REGISTER_METHOD(0x004F4840, void, __ctor, (AllEnemiesKilledTrigger * __this));
}
