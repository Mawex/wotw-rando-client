#include <interception_macros.h>

namespace app::methods::Kino::Motion_FrameBlendingFilter_Frame {
IL2CPP_REGISTER_METHOD(0x0011FAA0, float, CalculateWeight, (Motion_FrameBlendingFilter_Frame__Boxed * __this, float strength, float currentTime));
IL2CPP_REGISTER_METHOD(0x0011FAB0, void, Release, (Motion_FrameBlendingFilter_Frame__Boxed * __this));
IL2CPP_REGISTER_METHOD(0x0011FAC0, void, MakeRecord, (Motion_FrameBlendingFilter_Frame__Boxed * __this, RenderTexture * source, Material * material));
IL2CPP_REGISTER_METHOD(0x0011FAD0, void, MakeRecordRaw, (Motion_FrameBlendingFilter_Frame__Boxed * __this, RenderTexture * source, RenderTextureFormat__Enum format));
}
