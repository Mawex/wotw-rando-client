#include <interception_macros.h>

namespace app::methods::TransformAnimator {
IL2CPP_REGISTER_METHOD(0x00B06110, Transform *, get_EffectiveTranform, (app::TransformAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B061E0, void, CacheOriginals, (app::TransformAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B06280, float, get_Duration, (app::TransformAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B06380, void, SampleValue, (app::TransformAnimator * this_ptr, float value, bool force_sample));
IL2CPP_REGISTER_METHOD(0x00B06550, void, RestoreToOriginalState, (app::TransformAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00868870, Vector3, get_OriginalPosition, (app::TransformAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B065E0, bool, get_IsLooping, (app::TransformAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B06860, void, SetOriginalPosToCurveStart, (app::TransformAnimator * this_ptr));
IL2CPP_REGISTER_METHOD(0x00B06A90, void, ShiftCurve, (app::TransformAnimator * this_ptr, app::AnimationCurve * curve, float offset));
IL2CPP_REGISTER_METHOD(0x00B06CE0, Vector3, GetOffsetAtValue, (app::TransformAnimator * this_ptr, float value));
IL2CPP_REGISTER_METHOD(0x00B06E50, void, __ctor, (app::TransformAnimator * this_ptr));
}
