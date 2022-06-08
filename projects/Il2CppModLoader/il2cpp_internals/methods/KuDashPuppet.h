#include <interception_macros.h>

namespace app::methods::KuDashPuppet {
IL2CPP_REGISTER_METHOD(0x012345B0, MoonAnimator *, get_KuAnimator, (KuDashPuppet * __this));
IL2CPP_REGISTER_METHOD(0x01234640, void, Awake, (KuDashPuppet * __this));
IL2CPP_REGISTER_METHOD(0x012347D0, float, GetGravity, (KuDashPuppet * __this, MoonTimeline * timeline, float defaultValue));
IL2CPP_REGISTER_METHOD(0x00E40150, int32_t, get_Id, (KuDashPuppet * __this));
IL2CPP_REGISTER_METHOD(0x012348F0, void, __ctor, (KuDashPuppet * __this));
}
