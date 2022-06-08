#include <interception_macros.h>

namespace app::methods::Colorful::Led {
IL2CPP_REGISTER_METHOD(0x03048010, void, OnRenderImage, (Led * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03048250, String *, GetShaderName, (Led * __this));
IL2CPP_REGISTER_METHOD(0x030482D0, void, __ctor, (Led * __this));
}
