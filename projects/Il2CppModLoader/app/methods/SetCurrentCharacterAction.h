#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SetCurrentCharacterAction {
    IL2CPP_REGISTER_METHOD(0x005A2350, void, Perform, (app::SetCurrentCharacterAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005A24B0, app::String *, GetNiceName, (app::SetCurrentCharacterAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetCurrentCharacterAction * this_ptr))
}
