#include <interception_macros.h>

namespace app::methods::Colorful::Levels {
IL2CPP_REGISTER_METHOD(0x03048980, void, OnRenderImage, (Levels * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030491D0, String *, GetShaderName, (Levels * __this));
IL2CPP_REGISTER_METHOD(0x03049250, void, __ctor, (Levels * __this));
}
