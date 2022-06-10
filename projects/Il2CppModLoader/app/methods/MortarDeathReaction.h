#pragma once
#include <interception_macros.h>

namespace app::methods::MortarDeathReaction {
    IL2CPP_REGISTER_METHOD(0x00F134D0, void, OnInitializeTask, (app::MortarDeathReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x014759E0, void, OnEnterTask, (app::MortarDeathReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, OnExecuteTask, (app::MortarDeathReaction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x01475BF0, void, EndReaction, (app::MortarDeathReaction * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476F378, MortarDeathReaction_EndReaction__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::MortarDeathReaction * this_ptr))
}
