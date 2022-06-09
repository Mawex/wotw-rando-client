#include <interception_macros.h>

namespace app::methods::OverridableFloatProperty {
    IL2CPP_REGISTER_METHOD(0x00443210, int32_t, get_ID, (app::OverridableFloatProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00443280, void, __ctor_1, (app::OverridableFloatProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x004432F0, void, __ctor_2, (app::OverridableFloatProperty * this_ptr, app::OverridableFloatProperty * float_property));
    IL2CPP_REGISTER_METHOD(0x00443320, void, Apply, (app::OverridableFloatProperty * this_ptr, app::OverridableFloatProperty * float_property));
}
