#pragma once
#include <interception_macros.h>

namespace app::methods::Kino::Motion_FrameBlendingFilter {
    IL2CPP_REGISTER_METHOD(0x00E75A40, void, ctor, (app::Motion_FrameBlendingFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E75DC0, void, Release, (app::Motion_FrameBlendingFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E75EE0, void, PushFrame, (app::Motion_FrameBlendingFilter * this_ptr, app::RenderTexture * source))
    IL2CPP_REGISTER_METHOD(0x00E76000, void, BlendFrames, (app::Motion_FrameBlendingFilter * this_ptr, float strength, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x00E76950, bool, CheckSupportCompression, ())
    IL2CPP_REGISTER_METHOD(0x00E76A00, app::RenderTextureFormat__Enum, GetPreferredRenderTextureFormat, ())
    IL2CPP_REGISTER_METHOD(0x00E76B00, app::Motion_FrameBlendingFilter_Frame, GetFrameRelative, (app::Motion_FrameBlendingFilter * this_ptr, int32_t offset))
}
