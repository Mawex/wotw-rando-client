#include <interception_macros.h>

namespace app::methods::Moon::Animation::MatchJointsJob {
IL2CPP_REGISTER_METHOD(0x001B4E10, void, Setup, (MatchJointsJob__Boxed * __this, MoonAnimator * animator, Transform * sourceJoint, Transform * targetJoint));
IL2CPP_REGISTER_METHOD(0x001B4E20, void, ProcessAnimation, (MatchJointsJob__Boxed * __this, AnimationStream stream));
IL2CPP_REGISTER_METHOD(0x00002890, void, ProcessRootMotion, (MatchJointsJob__Boxed * __this, AnimationStream stream));
}
