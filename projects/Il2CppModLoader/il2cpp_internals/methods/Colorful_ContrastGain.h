#include <interception_macros.h>

namespace app::methods::Colorful::ContrastGain {
IL2CPP_REGISTER_METHOD(0x03041760, void, OnRenderImage, (ContrastGain * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030418E0, String *, GetShaderName, (ContrastGain * __this));
IL2CPP_REGISTER_METHOD(0x00B5D320, void, __ctor, (ContrastGain * __this));
}
