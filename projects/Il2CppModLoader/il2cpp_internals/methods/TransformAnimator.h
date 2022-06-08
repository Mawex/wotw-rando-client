using namespace app;

namespace app::methods::TransformAnimator {
IL2CPP_REGISTER_METHOD(0x00B06110, Transform *, get_EffectiveTranform, (TransformAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B061E0, void, CacheOriginals, (TransformAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B06280, float, get_Duration, (TransformAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B06380, void, SampleValue, (TransformAnimator * __this, float value, bool forceSample));
IL2CPP_REGISTER_METHOD(0x00B06550, void, RestoreToOriginalState, (TransformAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00868870, Vector3, get_OriginalPosition, (TransformAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B065E0, bool, get_IsLooping, (TransformAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B06860, void, SetOriginalPosToCurveStart, (TransformAnimator * __this));
IL2CPP_REGISTER_METHOD(0x00B06A90, void, ShiftCurve, (TransformAnimator * __this, AnimationCurve * curve, float offset));
IL2CPP_REGISTER_METHOD(0x00B06CE0, Vector3, GetOffsetAtValue, (TransformAnimator * __this, float value));
IL2CPP_REGISTER_METHOD(0x00B06E50, void, __ctor, (TransformAnimator * __this));
}
