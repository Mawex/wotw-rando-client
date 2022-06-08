#include <interception_macros.h>

namespace app::methods::Colorful::Wiggle {
IL2CPP_REGISTER_METHOD(0x030557E0, void, Update, (Wiggle * __this));
IL2CPP_REGISTER_METHOD(0x03055880, void, OnRenderImage, (Wiggle * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03055A90, String *, GetShaderName, (Wiggle * __this));
IL2CPP_REGISTER_METHOD(0x03055B10, void, __ctor, (Wiggle * __this));
}
