#include <interception_macros.h>

namespace app::methods::Kino::Motion_FrameBlendingFilter {
IL2CPP_REGISTER_METHOD(0x00E75A40, void, __ctor, (Motion_FrameBlendingFilter * __this));
IL2CPP_REGISTER_METHOD(0x00E75DC0, void, Release, (Motion_FrameBlendingFilter * __this));
IL2CPP_REGISTER_METHOD(0x00E75EE0, void, PushFrame, (Motion_FrameBlendingFilter * __this, RenderTexture * source));
IL2CPP_REGISTER_METHOD(0x00E76000, void, BlendFrames, (Motion_FrameBlendingFilter * __this, float strength, RenderTexture * source, RenderTexture * destination));
IL2CPP_REGISTER_METHOD(0x00E76950, bool, CheckSupportCompression, ());
IL2CPP_REGISTER_METHOD(0x00E76A00, RenderTextureFormat__Enum, GetPreferredRenderTextureFormat, ());
IL2CPP_REGISTER_METHOD(0x00E76B00, Motion_FrameBlendingFilter_Frame, GetFrameRelative, (Motion_FrameBlendingFilter * __this, int32_t offset));
}
