#include <interception_macros.h>

namespace app::methods::HealthBarSpawner {
IL2CPP_REGISTER_METHOD(0x010A10D0, void, Awake, (HealthBarSpawner * __this));
IL2CPP_REGISTER_METHOD(0x010A10E0, HealthBar *, Spawn, (HealthBarSpawner * __this));
IL2CPP_REGISTER_METHOD(0x010A1390, void, OnDestroy, (HealthBarSpawner * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (HealthBarSpawner * __this));
}
