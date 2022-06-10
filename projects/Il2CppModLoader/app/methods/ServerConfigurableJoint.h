#pragma once
#include <interception_macros.h>

namespace app::methods::ServerConfigurableJoint {
    IL2CPP_REGISTER_METHOD(0x0059D6C0, void, ctor, (app::ServerConfigurableJoint * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x00ABA990, app::Object *, CreateData, (app::ServerConfigurableJoint * this_ptr, app::Object * data))
    IL2CPP_REGISTER_METHOD(0x00ABCFA0, app::Component_1 *, ApplyData, (app::ServerConfigurableJoint * this_ptr, app::GameObject * * gameobj))
    IL2CPP_REGISTER_METHOD(0x00ABE0C0, void, RebuildReferences, (app::ServerConfigurableJoint * this_ptr))
}
