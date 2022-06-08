using namespace app;

namespace app::methods::FallingRocksGroup {
IL2CPP_REGISTER_METHOD(0x00998560, int32_t, get_GroundMask, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsSuspended, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsSuspended, (FallingRocksGroup * __this, bool value));
IL2CPP_REGISTER_METHOD(0x00998570, SuspendableMask__Enum, get_Mask, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00998580, void, set_Mask, (FallingRocksGroup * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00998630, void, RocksPrefabInstantiation, (FallingRocksGroup * __this, List_1_DynamicInstantiationDescriptor_ * instantiations));
IL2CPP_REGISTER_METHOD(0x00998A50, void, Awake, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00998AF0, void, Start, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00998F80, void, OnEnable, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00999120, void, OnDisable, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x009992C0, void, OnDestroy, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00999360, void, SpawnRock, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00999C80, void, TriggerFallingRocks, (FallingRocksGroup * __this, int32_t numgerOfRocks, float minTimeBetweenFalingRock, float maxTimeBetweenFalingRock));
IL2CPP_REGISTER_METHOD(0x00999CB0, Vector3, GetSpawnPosition, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00999E30, void, Update, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x00999F00, void, UpdateDelayedAntics, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x0099A150, int32_t, GetRandomWeightIndex, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHOD(0x0099A380, void, OnRestoreCheckpoint, (FallingRocksGroup * __this));
IL2CPP_REGISTER_METHODINFO(0x04741F00, FallingRocksGroup_OnRestoreCheckpoint__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099A430, void, OnRockExploded, (FallingRocksGroup * __this, Projectile * proj));
IL2CPP_REGISTER_METHODINFO(0x0474BAA0, FallingRocksGroup_OnRockExploded__MethodInfo);
IL2CPP_REGISTER_METHOD(0x0099A680, void, __ctor, (FallingRocksGroup * __this));
}
