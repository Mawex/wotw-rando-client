#include <interception_macros.h>

namespace app::methods::LightColliderGroup {
IL2CPP_REGISTER_METHOD(0x0114A750, void, Awake, (LightColliderGroup * __this));
IL2CPP_REGISTER_METHOD(0x0114A990, void, FixedUpdate, (LightColliderGroup * __this));
IL2CPP_REGISTER_METHOD(0x0114AD60, void, EnableCollider, (LightColliderGroup * __this, Collider * collider, bool enable));
IL2CPP_REGISTER_METHOD(0x0114ADE0, void, __ctor, (LightColliderGroup * __this));
}
