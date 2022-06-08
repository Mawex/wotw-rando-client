#include <interception_macros.h>

namespace app::methods::ShaderAnimationTimeDriver {
IL2CPP_REGISTER_METHOD(0x005A60E0, ShaderAnimationTimeDriver *, get_Instance, ());
IL2CPP_REGISTER_METHOD(0x00447340, float, get_GameTime, (ShaderAnimationTimeDriver * __this));
IL2CPP_REGISTER_METHOD(0x005A6160, void, Awake, (ShaderAnimationTimeDriver * __this));
IL2CPP_REGISTER_METHOD(0x005A6210, void, OnDestroy, (ShaderAnimationTimeDriver * __this));
IL2CPP_REGISTER_METHOD(0x005A62B0, void, FixedUpdate, (ShaderAnimationTimeDriver * __this));
IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, (ShaderAnimationTimeDriver * __this));
IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, (ShaderAnimationTimeDriver * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FC830, SuspendableMask__Enum, get_Mask, (ShaderAnimationTimeDriver * __this));
IL2CPP_REGISTER_METHOD(0x004C5130, void, set_Mask, (ShaderAnimationTimeDriver * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x005A6500, void, __ctor, (ShaderAnimationTimeDriver * __this));
}
