#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SmartInput::CachedButtonInput {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, GetButton, (app::CachedButtonInput * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006CA330, void, ctor, (app::CachedButtonInput * this_ptr))
}
