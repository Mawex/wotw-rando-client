#pragma once
#include <interception_macros.h>

namespace app::methods::TurtleDamageCondition {
    IL2CPP_REGISTER_METHOD(0x013D8350, bool, Validate, (app::TurtleDamageCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TurtleDamageCondition * this_ptr))
}
