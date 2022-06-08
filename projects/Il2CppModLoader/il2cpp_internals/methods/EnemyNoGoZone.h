#include <interception_macros.h>

namespace app::methods::EnemyNoGoZone {
IL2CPP_REGISTER_METHOD(0x00C82200, void, OnEnableRuntime, (EnemyNoGoZone * __this));
IL2CPP_REGISTER_METHOD(0x00C822C0, void, OnDisableRuntime, (EnemyNoGoZone * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, OnZoneUpdate, (EnemyNoGoZone * __this, float deltaTime));
IL2CPP_REGISTER_METHOD(0x0043BB90, void, __ctor, (EnemyNoGoZone * __this));
IL2CPP_REGISTER_METHOD(0x00C82380, void, __cctor, ());
}
