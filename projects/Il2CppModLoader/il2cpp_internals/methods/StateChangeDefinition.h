#include <interception_macros.h>

namespace app::methods::StateChangeDefinition {
IL2CPP_REGISTER_METHOD(0x01E945E0, void, Perform, (StateChangeDefinition * __this, bool alwaysPlayTransition));
IL2CPP_REGISTER_METHOD(0x01E946F0, MoonTimeline *, GetTransition, (StateChangeDefinition * __this));
IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor, (StateChangeDefinition * __this));
}
