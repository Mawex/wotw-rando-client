#include <interception_macros.h>

namespace app::methods::Colorful::RadialBlur {
IL2CPP_REGISTER_METHOD(0x0304D1E0, void, OnRenderImage, (app::RadialBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0304D4F0, String *, GetShaderName, (app::RadialBlur * this_ptr));
IL2CPP_REGISTER_METHOD(0x0304D570, void, __ctor, (app::RadialBlur * this_ptr));
}
