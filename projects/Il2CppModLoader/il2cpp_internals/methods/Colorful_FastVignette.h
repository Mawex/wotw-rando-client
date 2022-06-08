#include <interception_macros.h>

namespace app::methods::Colorful::FastVignette {
IL2CPP_REGISTER_METHOD(0x030435A0, void, OnRenderImage, (FastVignette * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030437F0, String *, GetShaderName, (FastVignette * __this));
IL2CPP_REGISTER_METHOD(0x03043870, void, __ctor, (FastVignette * __this));
}
