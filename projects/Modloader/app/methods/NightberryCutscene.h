#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::NightberryCutscene {
    IL2CPP_REGISTER_METHOD(0x00609340, void, Start, (app::NightberryCutscene * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::NightberryCutscene * this_ptr))
} // namespace app::classes::NightberryCutscene
