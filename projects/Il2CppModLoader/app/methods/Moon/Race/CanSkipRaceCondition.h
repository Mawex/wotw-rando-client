#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::Race::CanSkipRaceCondition {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, Validate, (app::CanSkipRaceCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanSkipRaceCondition * this_ptr))
}
