#include <interception_macros.h>

namespace app::methods::ApplyForceToPhysicsSystem {
IL2CPP_REGISTER_METHOD(0x005061E0, void, OnEnable, (ApplyForceToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x005063F0, void, OnDisable, (ApplyForceToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x005065D0, bool, get_IsSuspended, (ApplyForceToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x005065E0, void, set_IsSuspended, (ApplyForceToPhysicsSystem * __this, bool value));
IL2CPP_REGISTER_METHOD(0x005065F0, SuspendableMask__Enum, get_Mask, (ApplyForceToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00506600, void, set_Mask, (ApplyForceToPhysicsSystem * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00506610, void, OnExplode, (ApplyForceToPhysicsSystem * __this));
IL2CPP_REGISTER_METHODINFO(0x04709AB8, ApplyForceToPhysicsSystem_OnExplode__MethodInfo);
IL2CPP_REGISTER_METHOD(0x00506620, void, Explode, (ApplyForceToPhysicsSystem * __this, float force));
IL2CPP_REGISTER_METHOD(0x00506D20, void, OnUpdatePhysics, (ApplyForceToPhysicsSystem * __this, float dt));
IL2CPP_REGISTER_METHOD(0x00506E30, void, OnDrawGizmosSelected, (ApplyForceToPhysicsSystem * __this));
IL2CPP_REGISTER_METHOD(0x00507220, void, __ctor, (ApplyForceToPhysicsSystem * __this));
}
