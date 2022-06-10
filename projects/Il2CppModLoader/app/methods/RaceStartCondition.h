#pragma once
#include <interception_macros.h>

namespace app::methods::RaceStartCondition {
    IL2CPP_REGISTER_METHOD(0x007198D0, bool, Validate, (app::RaceStartCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00719B60, bool, get_RaceState, (app::RaceStartCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00719C40, bool, get_ButtonPressed, (app::RaceStartCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RaceStartCondition * this_ptr))
}
