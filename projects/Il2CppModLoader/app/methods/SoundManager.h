#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SoundManager {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_WWiseEnabled, (app::SoundManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_WWiseEnabled, (app::SoundManager * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Awake, (app::SoundManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::SoundManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SoundManager * this_ptr))
}
