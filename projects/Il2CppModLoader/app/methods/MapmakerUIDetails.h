#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MapmakerUIDetails {
    IL2CPP_REGISTER_METHOD(0x00A0E4F0, void, Awake, (app::MapmakerUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443CC0, void, Show, (app::MapmakerUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443C10, void, Hide, (app::MapmakerUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0E500, void, SetItem, (app::MapmakerUIDetails * this_ptr, app::MapmakerItem * item))
    IL2CPP_REGISTER_METHOD(0x00A0E680, void, UpdateDetails, (app::MapmakerUIDetails * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0EC00, void, ctor, (app::MapmakerUIDetails * this_ptr))
}
