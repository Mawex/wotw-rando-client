#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GetStat {
    IL2CPP_REGISTER_METHOD(0x00E12760, void, ctor, (app::GetStat * this_ptr, app::String* site_id))
}
