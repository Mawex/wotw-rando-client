#include <interception_macros.h>

namespace app::methods::Moon::LocomotionContext {
IL2CPP_REGISTER_METHOD(0x002FA490, void, __ctor, (LocomotionContext * __this, Locomotion * locomotion));
IL2CPP_REGISTER_METHOD(0x015F1CF0, Object *, GetLocomotionAs, (LocomotionContext * __this));
IL2CPP_REGISTER_METHOD(0x015F1CF0, AirEntityLocomotion *, GetLocomotionAs, (LocomotionContext * __this));
IL2CPP_REGISTER_METHODINFO(0x04703350, LocomotionContext_GetLocomotionAs_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F1CF0, GroundEntityLocomotion *, GetLocomotionAs, (LocomotionContext * __this));
IL2CPP_REGISTER_METHODINFO(0x047148E8, LocomotionContext_GetLocomotionAs_2__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F1CF0, VolumeEntityLocomotion *, GetLocomotionAs, (LocomotionContext * __this));
IL2CPP_REGISTER_METHODINFO(0x0471CDE8, LocomotionContext_GetLocomotionAs_3__MethodInfo);
IL2CPP_REGISTER_METHOD(0x015F1CF0, SkeetoLocomotion *, GetLocomotionAs, (LocomotionContext * __this));
IL2CPP_REGISTER_METHODINFO(0x04782648, LocomotionContext_GetLocomotionAs_4__MethodInfo);
}
