#include <interception_macros.h>

namespace app::methods::Colorful::WhiteBalance {
IL2CPP_REGISTER_METHOD(0x03055540, void, Reset, (WhiteBalance * __this));
IL2CPP_REGISTER_METHOD(0x030555C0, void, OnRenderImage, (WhiteBalance * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03055740, String *, GetShaderName, (WhiteBalance * __this));
IL2CPP_REGISTER_METHOD(0x030557C0, void, __ctor, (WhiteBalance * __this));
}
