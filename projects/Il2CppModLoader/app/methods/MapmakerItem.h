#pragma once
#include <interception_macros.h>

namespace app::methods::MapmakerItem {
    IL2CPP_REGISTER_METHOD(0x00A0B250, int32_t, GetCost, (app::MapmakerItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A0B3D0, int32_t, GetCostForLevel, (app::MapmakerItem * this_ptr, int32_t level))
    IL2CPP_REGISTER_METHOD(0x00A0B3E0, void, ctor, (app::MapmakerItem * this_ptr))
}
