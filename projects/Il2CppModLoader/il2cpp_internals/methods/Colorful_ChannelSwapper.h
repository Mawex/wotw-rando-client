#include <interception_macros.h>

namespace app::methods::Colorful::ChannelSwapper {
IL2CPP_REGISTER_METHOD(0x030407D0, void, OnRenderImage, (ChannelSwapper * __this, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03040BF0, String *, GetShaderName, (ChannelSwapper * __this));
IL2CPP_REGISTER_METHOD(0x03040C70, void, __ctor, (ChannelSwapper * __this));
IL2CPP_REGISTER_METHOD(0x03040C90, void, __cctor, ());
}
