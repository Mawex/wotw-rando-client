#pragma once
#include <interception_macros.h>

namespace app::methods::IsChinaRegionCondition {
    IL2CPP_REGISTER_METHOD(0x00645E60, bool, Validate, (app::IsChinaRegionCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsChinaRegionCondition * this_ptr))
}
