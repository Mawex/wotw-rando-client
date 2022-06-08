#include <interception_macros.h>

namespace app::methods::LimitRigidbodyMovement {
IL2CPP_REGISTER_METHOD(0x00FA4000, void, PerformAttachment, (LimitRigidbodyMovement * __this));
IL2CPP_REGISTER_METHOD(0x00FA4450, void, OnUpdatePhysics, (LimitRigidbodyMovement * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00FA49F0, Transform *, get_ConnectedTransform, (LimitRigidbodyMovement * __this));
IL2CPP_REGISTER_METHOD(0x00FA4AC0, void, __ctor, (LimitRigidbodyMovement * __this));
}
