#include <interception_macros.h>

namespace app::methods::IdleOverride {
IL2CPP_REGISTER_METHOD(0x00625640, void, Override, (IdleOverride * __this, SeinIdlePuppet * puppet));
IL2CPP_REGISTER_METHOD(0x00625740, void, Revert, (IdleOverride * __this, SeinIdlePuppet * puppet));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (IdleOverride * __this));
}
