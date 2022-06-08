#include <interception_macros.h>

namespace app::methods::EnemyZone {
IL2CPP_REGISTER_METHOD(0x0043D9A0, SelectableCategory__Enum, get_Category, (EnemyZone * __this));
IL2CPP_REGISTER_METHOD(0x00C86850, bool, InSameZone, (Vector2 origin, Vector2 position));
IL2CPP_REGISTER_METHOD(0x00C86A90, bool, IsInside, (EnemyZone * __this, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00C86B90, void, Awake, (EnemyZone * __this));
IL2CPP_REGISTER_METHOD(0x00C87180, void, OnDestroy, (EnemyZone * __this));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (EnemyZone * __this));
IL2CPP_REGISTER_METHOD(0x00C87240, void, __cctor, ());
}
