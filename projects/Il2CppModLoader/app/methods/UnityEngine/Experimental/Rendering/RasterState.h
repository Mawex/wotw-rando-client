#pragma once
#include <interception_macros.h>

namespace app::methods::UnityEngine::Experimental::Rendering::RasterState {
    IL2CPP_REGISTER_METHOD(0x001EC7D0, void, ctor, (app::RasterState__Boxed * this_ptr, app::CullMode__Enum culling_mode, int32_t offset_units, float offset_factor, bool depth_clip))
    IL2CPP_REGISTER_METHOD(0x024345D0, void, cctor, ())
}
