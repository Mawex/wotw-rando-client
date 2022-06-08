#include <interception_macros.h>

namespace app::methods::Moon::Suspendable {
IL2CPP_REGISTER_METHOD(0x031AC030, void, Awake, (Suspendable * __this));
IL2CPP_REGISTER_METHOD(0x031AC0D0, void, OnDestroy, (Suspendable * __this));
IL2CPP_REGISTER_METHOD(0x00654950, SuspendableMask__Enum, get_Mask, (Suspendable * __this));
IL2CPP_REGISTER_METHOD(0x031AC170, void, set_Mask, (Suspendable * __this, SuspendableMask__Enum value));
IL2CPP_REGISTER_METHOD(0x00444DD0, void, __ctor, (Suspendable * __this));
}
