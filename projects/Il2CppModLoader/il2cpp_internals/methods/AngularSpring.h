#include <interception_macros.h>

namespace app::methods::AngularSpring {
IL2CPP_REGISTER_METHOD(0x004FA050, void, Awake, (AngularSpring * __this));
IL2CPP_REGISTER_METHOD(0x004FA200, void, OnDestroy, (AngularSpring * __this));
IL2CPP_REGISTER_METHOD(0x004FA2A0, void, FixedUpdate, (AngularSpring * __this));
IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_IsSuspended, (AngularSpring * __this));
IL2CPP_REGISTER_METHOD(0x004C6650, void, set_IsSuspended, (AngularSpring * __this, bool value));
IL2CPP_REGISTER_METHOD(0x003FD3F0, SuspendableMask__Enum, get_Mask, (AngularSpring * __this));
IL2CPP_REGISTER_METHOD(0x004FA580, void, set_Mask, (AngularSpring * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x004FA630, void, __ctor, (AngularSpring * __this));
}
