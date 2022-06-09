#include <interception_macros.h>

namespace app::methods::Colorful::ChannelClamper {
IL2CPP_REGISTER_METHOD(0x0303FEE0, void, OnRenderImage, (app::ChannelClamper * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03040200, String *, GetShaderName, (app::ChannelClamper * this_ptr));
IL2CPP_REGISTER_METHOD(0x03040280, void, __ctor, (app::ChannelClamper * this_ptr));
}
