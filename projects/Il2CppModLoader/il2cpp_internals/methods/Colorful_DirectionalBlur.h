#include <interception_macros.h>

namespace app::methods::Colorful::DirectionalBlur {
IL2CPP_REGISTER_METHOD(0x030424C0, void, OnRenderImage, (DirectionalBlur * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03042730, String *, GetShaderName, (DirectionalBlur * __this));
IL2CPP_REGISTER_METHOD(0x030427B0, void, __ctor, (DirectionalBlur * __this));
}
