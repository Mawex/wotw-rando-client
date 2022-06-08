#include <interception_macros.h>

namespace app::methods::Colorful::Letterbox {
IL2CPP_REGISTER_METHOD(0x03048570, void, OnRenderImage, (Letterbox * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030488E0, String *, GetShaderName, (Letterbox * __this));
IL2CPP_REGISTER_METHOD(0x03048960, void, __ctor, (Letterbox * __this));
}
