#pragma once
#include <interception_macros.h>

namespace app::methods::Moon::InstantStopBehaviour {
    IL2CPP_REGISTER_METHOD(0x01102CC0, app::BehaviourStatus__Enum, OnExecute, (app::InstantStopBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x0060C1C0, void, ctor, (app::InstantStopBehaviour * this_ptr))
}
