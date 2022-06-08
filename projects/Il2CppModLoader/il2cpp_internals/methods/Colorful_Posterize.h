#include <interception_macros.h>

namespace app::methods::Colorful::Posterize {
IL2CPP_REGISTER_METHOD(0x0304CC60, void, OnRenderImage, (Posterize * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x0304CE50, String *, GetShaderName, (Posterize * __this));
IL2CPP_REGISTER_METHOD(0x0304CED0, void, __ctor, (Posterize * __this));
}
