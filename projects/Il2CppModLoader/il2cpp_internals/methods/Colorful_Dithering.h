#include <interception_macros.h>

namespace app::methods::Colorful::Dithering {
IL2CPP_REGISTER_METHOD(0x030427D0, void, OnRenderImage, (Dithering * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03042AB0, String *, GetShaderName, (Dithering * __this));
IL2CPP_REGISTER_METHOD(0x03042B30, void, __ctor, (Dithering * __this));
}
