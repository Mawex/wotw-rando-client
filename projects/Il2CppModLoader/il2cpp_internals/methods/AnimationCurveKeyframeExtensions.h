#include <interception_macros.h>

namespace app::methods::AnimationCurveKeyframeExtensions {
IL2CPP_REGISTER_METHOD(0x004FC160, bool, SameAs, (Keyframe ok, Keyframe nk));
IL2CPP_REGISTER_METHOD(0x004FC320, bool, IsIdentical, (Keyframe__Array * oldKeys, AnimationCurve * curve));
IL2CPP_REGISTER_METHOD(0x004FC520, bool, SameAs, (Keyframe__Array * oldKeys, Keyframe__Array * newKeys));
}
