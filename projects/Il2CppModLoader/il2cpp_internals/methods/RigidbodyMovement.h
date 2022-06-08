#include <interception_macros.h>

namespace app::methods::RigidbodyMovement {
IL2CPP_REGISTER_METHOD(0x00913C50, void, Awake, (RigidbodyMovement * __this));
IL2CPP_REGISTER_METHOD(0x00913CE0, void, ApplyForce, (RigidbodyMovement * __this, Vector3 force));
IL2CPP_REGISTER_METHOD(0x00913EE0, void, ApplyImpulseForce, (RigidbodyMovement * __this, Vector3 force));
IL2CPP_REGISTER_METHOD(0x00914080, void, ApplySpringForce, (RigidbodyMovement * __this, float forcePerUnit, Vector3 position));
IL2CPP_REGISTER_METHOD(0x00914330, void, MultiplySpeedOverTime, (RigidbodyMovement * __this, float multiplier));
IL2CPP_REGISTER_METHOD(0x00914530, void, ApplyDrag, (RigidbodyMovement * __this, float drag));
IL2CPP_REGISTER_METHOD(0x00911F20, Vector3, get_Velocity, (RigidbodyMovement * __this));
IL2CPP_REGISTER_METHOD(0x00911FB0, void, set_Velocity, (RigidbodyMovement * __this, Vector3 value));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (RigidbodyMovement * __this));
}
