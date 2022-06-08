#include <interception_macros.h>

namespace app::methods::TiggerWithConditionOrWaitTime {
IL2CPP_REGISTER_METHOD(0x010ED520, void, Awake, (TiggerWithConditionOrWaitTime * __this));
IL2CPP_REGISTER_METHOD(0x010ED5C0, void, OnDestroy, (TiggerWithConditionOrWaitTime * __this));
IL2CPP_REGISTER_METHOD(0x010ED660, void, FixedUpdate, (TiggerWithConditionOrWaitTime * __this));
IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, (TiggerWithConditionOrWaitTime * __this));
IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, (TiggerWithConditionOrWaitTime * __this, bool value));
IL2CPP_REGISTER_METHOD(0x002FD490, SuspendableMask__Enum, get_Mask, (TiggerWithConditionOrWaitTime * __this));
IL2CPP_REGISTER_METHOD(0x010ED740, void, set_Mask, (TiggerWithConditionOrWaitTime * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x010ED7F0, void, __ctor, (TiggerWithConditionOrWaitTime * __this));
}
