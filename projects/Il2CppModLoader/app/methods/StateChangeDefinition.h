#pragma once
#include <interception_macros.h>

namespace app::methods::StateChangeDefinition {
    IL2CPP_REGISTER_METHOD(0x01E945E0, void, Perform, (app::StateChangeDefinition * this_ptr, bool always_play_transition))
    IL2CPP_REGISTER_METHOD(0x01E946F0, app::MoonTimeline *, GetTransition, (app::StateChangeDefinition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::StateChangeDefinition * this_ptr))
}
