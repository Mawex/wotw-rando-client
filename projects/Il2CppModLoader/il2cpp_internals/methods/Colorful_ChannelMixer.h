#include <interception_macros.h>

namespace app::methods::Colorful::ChannelMixer {
IL2CPP_REGISTER_METHOD(0x030402B0, void, OnRenderImage, (ChannelMixer * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x030406C0, String *, GetShaderName, (ChannelMixer * __this));
IL2CPP_REGISTER_METHOD(0x03040740, void, __ctor, (ChannelMixer * __this));
}
