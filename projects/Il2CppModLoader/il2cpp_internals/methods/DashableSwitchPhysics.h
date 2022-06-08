#include <interception_macros.h>

namespace app::methods::DashableSwitchPhysics {
IL2CPP_REGISTER_METHOD(0x00DD2EE0, bool, get_IsOn, (DashableSwitchPhysics * __this));
IL2CPP_REGISTER_METHOD(0x002FB990, IMoonSetupLogic *, get_MoonSetupLogic, (DashableSwitchPhysics * __this));
IL2CPP_REGISTER_METHOD(0x00DD2F00, void, set_MoonSetupLogic, (DashableSwitchPhysics * __this, IMoonSetupLogic * value));
IL2CPP_REGISTER_METHOD(0x00DD2FD0, void, OnDashHit, (DashableSwitchPhysics * __this, Vector3 impactVelocity));
IL2CPP_REGISTER_METHOD(0x00DD3120, void, OnCollisionEnter, (DashableSwitchPhysics * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (DashableSwitchPhysics * __this));
}
