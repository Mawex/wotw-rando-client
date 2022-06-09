#include <interception_macros.h>

namespace app::methods::Moon_EffectsFramework::InspectorColorAttribute {
    IL2CPP_REGISTER_METHOD(0x01980420, void, __ctor, (app::InspectorColorAttribute * this_ptr, float r, float g, float b, float a));
    IL2CPP_REGISTER_METHOD(0x01746A40, app::Color, get_Color, (app::InspectorColorAttribute * this_ptr));
}
