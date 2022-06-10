#pragma once
#include <interception_macros.h>

namespace app::methods::ActivateBasedOnCondition {
    IL2CPP_REGISTER_METHOD(0x004C8280, app::GameObject *, get_EffectiveTarget, (app::ActivateBasedOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8360, void, Awake, (app::ActivateBasedOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C84B0, void, FixedUpdate, (app::ActivateBasedOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8600, app::GameObject *, GetDynamicGraphicTarget, (app::ActivateBasedOnCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8610, void, ctor, (app::ActivateBasedOnCondition * this_ptr))
}
