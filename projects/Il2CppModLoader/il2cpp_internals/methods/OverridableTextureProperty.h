#include <interception_macros.h>

namespace app::methods::OverridableTextureProperty {
    IL2CPP_REGISTER_METHOD(0x00443210, int32_t, get_ID, (app::OverridableTextureProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00443390, void, __ctor_1, (app::OverridableTextureProperty * this_ptr));
    IL2CPP_REGISTER_METHOD(0x00443450, void, __ctor_2, (app::OverridableTextureProperty * this_ptr, app::OverridableTextureProperty * texture_property));
    IL2CPP_REGISTER_METHOD(0x00443560, void, Apply, (app::OverridableTextureProperty * this_ptr, app::OverridableTextureProperty * texture_property));
}
