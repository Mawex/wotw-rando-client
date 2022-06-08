#include <interception_macros.h>

namespace app::methods::Colorful::LensDistortionBlur {
IL2CPP_REGISTER_METHOD(0x03048300, void, OnRenderImage, (LensDistortionBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030484C0, String *, GetShaderName, (LensDistortionBlur * __this));
IL2CPP_REGISTER_METHOD(0x03048540, void, __ctor, (LensDistortionBlur * __this));
}
