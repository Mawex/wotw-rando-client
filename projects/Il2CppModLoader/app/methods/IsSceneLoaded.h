#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::IsSceneLoaded {
    IL2CPP_REGISTER_METHOD(0x006478E0, bool, Validate, (app::IsSceneLoaded * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsSceneLoaded * this_ptr))
}
