#include <interception_macros.h>

namespace app::methods::Colorful::DirectionalBlur {
IL2CPP_REGISTER_METHOD(0x030424C0, void, OnRenderImage, (app::DirectionalBlur * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03042730, String *, GetShaderName, (app::DirectionalBlur * this_ptr));
IL2CPP_REGISTER_METHOD(0x030427B0, void, __ctor, (app::DirectionalBlur * this_ptr));
}
