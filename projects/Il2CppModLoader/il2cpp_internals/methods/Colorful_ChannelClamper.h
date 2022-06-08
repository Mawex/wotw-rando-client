#include <interception_macros.h>

namespace app::methods::Colorful::ChannelClamper {
IL2CPP_REGISTER_METHOD(0x0303FEE0, void, OnRenderImage, (ChannelClamper * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03040200, String *, GetShaderName, (ChannelClamper * __this));
IL2CPP_REGISTER_METHOD(0x03040280, void, __ctor, (ChannelClamper * __this));
}
