#include <interception_macros.h>

namespace app::methods::Colorful::Letterbox {
    IL2CPP_REGISTER_METHOD(0x03048570, void, OnRenderImage, (app::Letterbox * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
    IL2CPP_REGISTER_METHOD(0x030488E0, app::String *, GetShaderName, (app::Letterbox * this_ptr));
    IL2CPP_REGISTER_METHOD(0x03048960, void, __ctor, (app::Letterbox * this_ptr));
}
