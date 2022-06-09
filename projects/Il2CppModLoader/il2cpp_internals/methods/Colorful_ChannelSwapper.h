#include <interception_macros.h>

namespace app::methods::Colorful::ChannelSwapper {
IL2CPP_REGISTER_METHOD(0x030407D0, void, OnRenderImage, (app::ChannelSwapper * this_ptr, app::RenderTexture * source, app::RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x03040BF0, String *, GetShaderName, (app::ChannelSwapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x03040C70, void, __ctor, (app::ChannelSwapper * this_ptr));
IL2CPP_REGISTER_METHOD(0x03040C90, void, __cctor, ());
}
