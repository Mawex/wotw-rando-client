#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::BehaviourSystem::IntCondition {
    IL2CPP_REGISTER_METHOD(0x0300E790, app::String *, get_Info, (app::IntCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0300E850, bool, OnCheck, (app::IntCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00CB75E0, void, ctor, (app::IntCondition * this_ptr))
}
