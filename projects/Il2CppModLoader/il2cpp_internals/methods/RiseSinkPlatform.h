#include <interception_macros.h>

namespace app::methods::RiseSinkPlatform {
IL2CPP_REGISTER_METHOD(0x01355070, void, Awake, (RiseSinkPlatform * __this));
IL2CPP_REGISTER_METHOD(0x01355110, void, OnDestroy, (RiseSinkPlatform * __this));
IL2CPP_REGISTER_METHOD(0x013551B0, void, Start, (RiseSinkPlatform * __this));
IL2CPP_REGISTER_METHOD(0x01355240, void, OnCollisionStay, (RiseSinkPlatform * __this, Collision * collision));
IL2CPP_REGISTER_METHOD(0x01355340, void, FixedUpdate, (RiseSinkPlatform * __this));
IL2CPP_REGISTER_METHOD(0x01355820, void, Serialize, (RiseSinkPlatform * __this, Archive * ar));
IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_IsSuspended, (RiseSinkPlatform * __this));
IL2CPP_REGISTER_METHOD(0x004F2330, void, set_IsSuspended, (RiseSinkPlatform * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD750, SuspendableMask__Enum, get_Mask, (RiseSinkPlatform * __this));
IL2CPP_REGISTER_METHOD(0x013559D0, void, set_Mask, (RiseSinkPlatform * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x01355A80, void, __ctor, (RiseSinkPlatform * __this));
}
