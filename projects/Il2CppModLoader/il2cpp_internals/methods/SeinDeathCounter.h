using namespace app;

namespace app::methods::SeinDeathCounter {
IL2CPP_REGISTER_METHOD(0x006FF030, int32_t, get_Count, (MethodInfo * method));
IL2CPP_REGISTER_METHOD(0x006FF140, void, Awake, (SeinDeathCounter * __this));
IL2CPP_REGISTER_METHOD(0x006FF1F0, void, OnDestroy, (SeinDeathCounter * __this));
IL2CPP_REGISTER_METHOD(0x006FF290, void, UpdateValueStoreOnDeath, (SeinDeathCounter * __this, UberStateValueStore * valueStore));
IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (SeinDeathCounter * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x0044C850, void, __ctor, (SeinDeathCounter * __this));
}
