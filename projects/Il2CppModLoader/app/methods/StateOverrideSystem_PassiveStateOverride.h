#pragma once
#include <interception_macros.h>

namespace app::methods::StateOverrideSystem_PassiveStateOverride {
    IL2CPP_REGISTER_METHOD(0x002498D0, void, ApplyDynamic, (app::StateOverrideSystem_PassiveStateOverride__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002498E0, void, ApplyStatic, (app::StateOverrideSystem_PassiveStateOverride__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002498F0, bool, get_IsValid, (app::StateOverrideSystem_PassiveStateOverride__Boxed * this_ptr))
}
