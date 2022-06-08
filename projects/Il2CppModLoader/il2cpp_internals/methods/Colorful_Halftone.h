#include <interception_macros.h>

namespace app::methods::Colorful::Halftone {
IL2CPP_REGISTER_METHOD(0x03046A50, void, OnRenderImage, (Halftone * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03046FF0, Vector4, CMYKRot, (Halftone * __this, float angle));
IL2CPP_REGISTER_METHOD(0x030470D0, String *, GetShaderName, (Halftone * __this));
IL2CPP_REGISTER_METHOD(0x03047150, void, __ctor, (Halftone * __this));
}
