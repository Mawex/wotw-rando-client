#include <interception_macros.h>

namespace app::methods::SpawnOnKill {
IL2CPP_REGISTER_METHOD(0x00EF5370, GameObject *, GetSpawnOnKillObjectsParent, ());
IL2CPP_REGISTER_METHOD(0x00EF54F0, void, OnKill, (SpawnOnKill * __this, Vector2 direction));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, (SpawnOnKill * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (SpawnOnKill * __this));
IL2CPP_REGISTER_METHOD(0x003FD3F0, int32_t, GetPrewarmAmount, (SpawnOnKill * __this, GameObject * entry));
IL2CPP_REGISTER_METHOD(0x00EF5C80, void, __ctor, (SpawnOnKill * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor, ());
}
