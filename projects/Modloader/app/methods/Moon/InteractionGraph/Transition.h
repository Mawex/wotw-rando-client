#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::InteractionGraph::Transition {
    IL2CPP_REGISTER_METHOD(0x0058D710, void, ctor, (app::Transition * this_ptr, app::IState_1* source_state, app::IState_1* target_state, app::ICondition* condition, app::IContext* context))
}
