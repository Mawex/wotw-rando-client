#include <interception_macros.h>

namespace app::methods::ConstrainPlayerMovementZone {
IL2CPP_REGISTER_METHOD(0x011E6240, void, OnTriggerEnter, (ConstrainPlayerMovementZone * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x011E6360, void, OnTriggerExit, (ConstrainPlayerMovementZone * __this, Collider * collider));
IL2CPP_REGISTER_METHOD(0x011E6480, void, Start, (ConstrainPlayerMovementZone * __this));
IL2CPP_REGISTER_METHOD(0x011E6640, void, OnDestroy, (ConstrainPlayerMovementZone * __this));
IL2CPP_REGISTER_METHOD(0x011E6800, void, ModifyHorizontalPlatformMovementSettings, (ConstrainPlayerMovementZone * __this, HorizontalPlatformMovementSettings * settings));
IL2CPP_REGISTER_METHODINFO(0x0472F098, ConstrainPlayerMovementZone_ModifyHorizontalPlatformMovementSettings__MethodInfo);
IL2CPP_REGISTER_METHOD(0x003F8A60, void, __ctor, (ConstrainPlayerMovementZone * __this));
}
