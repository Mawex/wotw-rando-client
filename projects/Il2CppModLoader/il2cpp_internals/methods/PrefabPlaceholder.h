using namespace app;

namespace app::methods::PrefabPlaceholder {
IL2CPP_REGISTER_METHOD(0x002FBB60, GameObject *, get_CurrentInstance, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6D850, void, Start, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6D930, void, Update, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6DA20, void, CleanUpOldInstance, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6DB40, void, OnDisable, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6DB50, void, SpawnPrefab, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Initialize, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6E1A0, void, Serialize, (PrefabPlaceholder * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x00C6E210, bool, CheckCondition, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6E2F0, void, Prewarm, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6E980, void, PoolCurrentInstance, (PrefabPlaceholder * __this));
IL2CPP_REGISTER_METHOD(0x00C6E9E0, void, __ctor, (PrefabPlaceholder * __this));
}
